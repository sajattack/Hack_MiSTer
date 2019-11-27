module CPU (
    input clk,
    input [15:0] inM, instruction,
    input reset, 
    output [15:0] outM,
    output writeM,
    output reg [14:0] addressM,
    output [14:0] pc
);

    wire cInst, aDest, loadA, loadD, zr, ng, jeq, jlt, jgt, jle, jump, noJump, 
        jumpToA, zeroOrNeg;
    wire [15:0] aluOut, dRegOut, aluY;
    wire [14:0] aRegIn, aRegOut;

    wire aInst = instruction[15];
	 
    _Not not1(aInst, cInst);

    _And and2(cInst, instruction[5], aDest);
    _Or or1(aInst, aDest, loadA);
    wire dDest = instruction[4];
    _And and3(dDest, cInst, loadD);
    wire mDest = instruction[3];
    _And and4(mDest, cInst, writeM);

    Mux16 mux1(instruction, aluOut, aDest, aRegIn);
    Register aRegister(clk, aRegIn, loadA, aRegOut);

    Register dRegister(clk, aluOut, loadD, dRegOut);
    wire [15:0] aluX = dRegOut;

    Mux16 mux2(aRegOut, inM, instruction[12], aluY);
    
    ALU alu(aluX, aluY, instruction[11], instruction[10], instruction[9], instruction[8], instruction[7], instruction[6], zr, ng, aluOut);

    _And and5(zr, instruction[1], jeq);
    _And and6(zr, instruction[2], jlt);
    _Or or2(zr, ng, zeroOrNeg); 
    _Nand nand1(zeroOrNeg, instruction[0], jgt);
    _Or or3(jeq, jlt, jle);
    _Or or4(jle, jgt, jumpToA);
    _And and7(cInst, jumpToA, jump);
    _Not not2(jump, noJump);
    PC _pc(clk, aRegOut, jump, noJump, reset, pc);

    assign outM = aluOut;
    always @(posedge clk) begin
        addressM <= aRegOut; 
    end

endmodule
