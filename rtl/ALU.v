module ALU(
    input [15:0] x, y,
    input zx, nx, zy, ny, f, no,
    output zr, ng,
    output [15:0] out
);

    wire [15:0] x1;
    wire [15:0] y1;
    wire [15:0] x2;
    wire [15:0] y2;
    wire [15:0] xplusy;
    wire [15:0] xandy;
    wire [15:0] xy;
    wire [15:0] notx;
    wire [15:0] noty;
    wire [15:0] notxy;

    Mux16 mux1(x, 16'b0, zx, x1);
    Mux16 mux2(y, 16'b0, zy, y1);

    Not16 not1(x1, notx);
    Mux16 mux3(x1, notx, nx, x2);
    Not16 not2(y1, noty);
    Mux16 mux4(y1, noty, ny, y2);

    Add16 adder(x2, y2, xplusy);
    And16 and1(x2, y2, xandy);
    Mux16 mux5(xandy, xplusy, f, xy);

    Not16 not3(xy, notxy);
    Mux16 mux6(xy, notxy, no, out);
    assign ng = out[15];

    h_Not not4((|out), zr);

endmodule
