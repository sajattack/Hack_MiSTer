module Or8Way (
    input [7:0] in,
    output out
);

wire wire1, wire2, wire3, wire4, wire5, wire6;

    _Or or1(in[0], in[1], wire1);
    _Or or2(wire1, in[2], wire2);
    _Or or3(wire2, in[3], wire3);
    _Or or4(wire3, in[4], wire4);
    _Or or5(wire4, in[5], wire5);
    _Or or6(wire5, in[6], wire6);
    _Or or7(wire6, in[7], out);

endmodule
