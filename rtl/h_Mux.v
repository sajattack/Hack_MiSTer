module h_Mux(
    input a, b, sel,
    output out
);

    wire bAndSel;
    wire notSel;
    wire aAndNotSel;

    h_And and1(b, sel, bAndSel);
    h_Not not1(sel, notSel);
    h_And and2(a, notSel, aAndNotSel);
    h_Or or1(bAndSel, aAndNotSel, out);


endmodule
