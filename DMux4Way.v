module DMux4Way(
    input in, 
    input [1:0] sel,
    output a, b, c, d
);

    wire notSel0;
    wire notSel1;
    wire wire1;
    wire wire2;
    wire wire3;
    wire wire4;

    _Not not1(sel[0], notSel0);
    _Not not2(sel[1], notSel1);

    _And and1(in, notSel0, wire1);
    _And and2(wire1, notSel1, a);

    _And and3(in, sel[0], wire2);
    _And and4(wire2, notSel1, b);

    _And and5(in, notSel0, wire3);
    _And and6(wire3, sel[1], c);

    _And and7(in, sel[0], wire4);
    _And and8(wire4, sel[1], d);

endmodule
