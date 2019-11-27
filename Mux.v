module _Mux(
    input a, b, sel,
    output out
);

    wire bAndSel;
    wire notSel;
    wire aAndNotSel;

    _And and1(b, sel, bAndSel);
    _Not _not(sel, notSel);
    _And and2(a, notSel, aAndNotSel);
    _Or _or(bAndSel, aAndNotSel, out);


endmodule