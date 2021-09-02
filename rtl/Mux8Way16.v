module Mux8Way16 (
    input  [15:0] a,
    b,
    c,
    d,
    e,
    f,
    g,
    h,
    input  [ 2:0] sel,
    output [15:0] out
);

  wire [15:0] lsb;
  wire [15:0] msb;

  Mux4Way16 mux1 (
      a,
      b,
      c,
      d,
      sel[1:0],
      lsb
  );
  Mux4Way16 mux2 (
      e,
      f,
      g,
      h,
      sel[1:0],
      msb
  );
  Mux16 mux3 (
      lsb,
      msb,
      sel[2],
      out
  );

endmodule
