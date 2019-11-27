module _Xor(
    input a,
    input b,
    output wire out
);

    wire nota;
    wire notb;
    wire aAndNotb;
    wire notaAndb;

    _Not not1(a, nota);
    _Not not2(b, notb); 
    _And and1(a, notb, aAndNotb); 
    _And and2(nota, b, notaAndb);
    _Or _or(aAndNotb, notaAndb, out);

endmodule