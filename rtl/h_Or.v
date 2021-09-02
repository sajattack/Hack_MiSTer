module h_Or (
    input a,
    input b,
    output wire out
);

  wire Nota;
  wire Notb;
  wire NotaAndNotb;

  h_Not not1 (
      a,
      Nota
  );
  h_Not not2 (
      b,
      Notb
  );
  h_And and1 (
      Nota,
      Notb,
      NotaAndNotb
  );
  h_Not not3 (
      NotaAndNotb,
      out
  );

endmodule

