module ROM32K(
    input clk,
//    input [15:0] in,
//    input load,
    input [14:0] pc,
    output [15:0] instruction
);

//    reg [15:0] rom [32767:0]; 
//
//    always @(posedge clk) begin
//        if (load) begin
//            rom[pc] <= in;
//        end else begin
//            instruction <= rom[pc];
//        end
//    end

OcmROM rom(pc, clk, instruction);


endmodule
