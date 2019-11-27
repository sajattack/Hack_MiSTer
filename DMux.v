module DMux (
    input in, sel,
    output reg a, b
);

    wire notSel;

    _Not _not(sel, notSel);
    _And and1(in, notSel, a);
    _And and2(in, sel, b);

endmodule
