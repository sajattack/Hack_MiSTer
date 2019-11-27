module DMux8Way(
    input in, 
    input [2:0] sel,
    output a, b, c, d, e, f, g, h
);
    wire notSel0;
    wire notSel1;
    wire notSel2;

    wire wire1;
    wire wire2;
    wire wire3;
    wire wire4;
    wire wire5;
    wire wire6;
    wire wire7;
    wire wire8;
    wire wire9;
    wire wire10;
    wire wire11;
    wire wire12;
    wire wire13;
    wire wire14;
    wire wire15;
    wire wire16;

    _Not not1(sel[0], notSel0);
    _Not not2(sel[1], notSel1);
    _Not not3(sel[2], notSel2);

    _And and1(in, notSel0, wire1);
    _And and2(wire1, notSel1, wire2);
    _And and3(wire2, notSel2, a);

    _And and4(in, sel[0], wire3);
    _And and5(wire3, notSel1, wire4);
    _And and6(wire4, notSel2, b);

    _And and7(in, notSel0, wire5);
    _And and8(wire5, sel[1], wire6);
    _And and9(wire6, notSel2, c);

    _And and10(in, sel[0], wire7);
    _And and11(wire7, sel[1], wire8);
    _And and12(wire8, notSel2, d);

    _And and13(in, notSel0, wire9);
    _And and14(wire9, notSel1, wire10);
    _And and15(wire10, sel[2], e);

    _And and16(in, sel[0], wire11);
    _And and17(wire11, notSel1, wire12);
    _And and18(wire12, sel[2], f);

    _And and19(in, notSel0, wire13);
    _And and20(wire13, sel[1], wire14);
    _And and21(wire14, sel[2], g);

    _And and22(in, sel[0], wire15);
    _And and23(wire15, sel[1], wire16);
    _And and24(wire16, sel[2], h);

endmodule
