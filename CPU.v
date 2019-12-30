module CPU (
    input clk,
    input [15:0] inM, romOut,
    input reset, 
    output reg [15:0] outM,
    output reg writeM,
    output reg [14:0] addressM,
    output reg [14:0] pc
);

    wire cInst, aDest, zr, ng, jeq, jlt, jgt, jle, jump, 
        jumpToA, zeroOrNeg, positive;
    wire [15:0] nextY;
    reg [15:0] aluX, aluY;
    reg [15:0] aReg, dReg;
    wire [15:0] aluOut;
	 reg [15:0] instruction;
		
    wire aInst = instruction[15]==0;
	 
    h_Not not1(aInst, cInst);

    h_And and2(cInst, instruction[5], aDest);
    wire dDest = instruction[4];
    wire mDest = instruction[3];

    Mux16 mux2(aReg, inM, instruction[12], nextY);

    ALU alu(aluX, aluY, instruction[11], instruction[10], instruction[9], instruction[8], instruction[7], instruction[6], zr, ng, aluOut);

    h_And and5(zr, instruction[1], jeq);
    h_And and6(ng, instruction[2], jlt);
    h_Or or2(zr, ng, zeroOrNeg); 
    h_Not not2(zeroOrNeg, positive);
    h_And and7(positive, instruction[0], jgt);
    h_Or or3(jeq, jlt, jle);
    h_Or or4(jle, jgt, jumpToA);
    h_And and8(cInst, jumpToA, jump);

    localparam [4:0] EXECUTE = 5'b00001;
	 localparam [4:0] SETXY = 5'b00010;
	 localparam [4:0] SET_DEST = 5'b00100;
	 localparam [4:0] SET_PC = 5'b01000;
	 localparam [4:0] FETCH = 5'b10000;
	 
	 reg [4:0] state;
	 reg [2:0] wait_counter;
	 
	 initial begin
		pc = 0;
		writeM = 0;
		addressM = 0;
		outM = 0;
		aluX = 0;
		aluY = 0;
		aReg = 0;
		dReg = 0;
      state = FETCH;
	end
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
				writeM <= 0;
				addressM <= 0;
				outM <= 0;
				aluX <= 0;
				aluY <= 0;
				aReg <= 0;
				dReg <= 0;
            state <= FETCH;
        end else begin
			  case(state)
					FETCH: begin
						instruction <= romOut;
						state <= EXECUTE;
					end
					EXECUTE: begin
						 if (aInst) begin
							  aReg <= instruction;
							  state <= SET_PC;
						 end else begin
							  state <= SETXY;
							  addressM <= aReg[14:0];
						 end
					end
					SETXY: begin
						 aluX <= dReg;
						 aluY <= nextY;
						 state <= SET_DEST;
					end
					SET_DEST: begin
						 if (mDest)
							 outM <= aluOut; 
							 writeM <= 1;
						 if (aDest)
							  aReg <= aluOut;
						 if (dDest)
							  dReg <= aluOut;
						 state <= SET_PC;
					end
					SET_PC: begin
						 writeM <= 0;
						 if (jump)
							  pc <= aReg[14:0];
						 else
							 pc <= pc + 15'd1; 
						 state <= FETCH;
					end
					default: begin
						pc <= 0;
						writeM <= 0;
						addressM <= 0;
						outM <= 0;
						aluX <= 0;
						aluY <= 0;
						aReg <= 0;
						dReg <= 0;
						state <= FETCH;
					end
			  endcase
        end
    end

endmodule
