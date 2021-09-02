module HalfAdder (
    input  a,
    b,
    output sum,
    carry
);

  h_Xor xor1 (
      a,
      b,
      sum
  );
  h_And and1 (
      a,
      b,
      carry
  );


endmodule
