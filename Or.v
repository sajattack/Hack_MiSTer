module _Or(
    input a,
    input b,
    output wire out
);

    wire Nota;
    wire Notb;
    wire NotaAndNotb;

    _Not _not1(a, Nota);
    _Not _not2(b, Notb);
    _And _and(Nota, Notb, NotaAndNotb);
    _Not _not3(NotaAndNotb, out);

endmodule

