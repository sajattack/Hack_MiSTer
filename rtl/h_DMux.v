module h_DMux (
    input in,
    sel,
    output reg a,
    b
);

  wire notSel;

  h_Not not1 (
      sel,
      notSel
  );
  h_And and1 (
      in,
      notSel,
      a
  );
  h_And and2 (
      in,
      sel,
      b
  );

endmodule
