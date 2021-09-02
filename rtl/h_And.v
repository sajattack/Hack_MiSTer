module h_And (
    input  a,
    input  b,
    output out
);

  wire temp;
  h_Nand nand1 (
      a,
      b,
      temp
  );
  h_Not not1 (
      temp,
      out
  );

endmodule
