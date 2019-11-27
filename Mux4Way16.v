module Mux4Way16(
    input [15:0] a, b, c, d,
    input [1:0] sel,
    output [15:0] out
);

    wire [15:0] lsb;
    wire [15:0] msb;

    Mux16 mux1(a, b, sel[0], lsb);
    Mux16 mux2(c, d, sel[0], msb);
    Mux16 mux3(lsb, msb, sel[1], out);

endmodule