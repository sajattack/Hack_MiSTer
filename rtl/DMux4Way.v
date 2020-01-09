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

    h_Not not1(sel[0], notSel0);
    h_Not not2(sel[1], notSel1);

    h_And and1(in, notSel0, wire1);
    h_And and2(wire1, notSel1, a);

    h_And and3(in, sel[0], wire2);
    h_And and4(wire2, notSel1, b);

    h_And and5(in, notSel0, wire3);
    h_And and6(wire3, sel[1], c);

    h_And and7(in, sel[0], wire4);
    h_And and8(wire4, sel[1], d);

endmodule
