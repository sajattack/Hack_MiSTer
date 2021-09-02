module h_Xor (
    input a,
    input b,
    output wire out
);

  wire nota;
  wire notb;
  wire aAndNotb;
  wire notaAndb;

  h_Not not1 (
      a,
      nota
  );
  h_Not not2 (
      b,
      notb
  );
  h_And and1 (
      a,
      notb,
      aAndNotb
  );
  h_And and2 (
      nota,
      b,
      notaAndb
  );
  h_Or or1 (
      aAndNotb,
      notaAndb,
      out
  );

endmodule
