module Mux16 (
    input [15:0] a,
    input [15:0] b,
    input sel,
    output [15:0] out
);

  h_Mux mux0 (
      a[0],
      b[0],
      sel,
      out[0]
  );
  h_Mux mux1 (
      a[1],
      b[1],
      sel,
      out[1]
  );
  h_Mux mux2 (
      a[2],
      b[2],
      sel,
      out[2]
  );
  h_Mux mux3 (
      a[3],
      b[3],
      sel,
      out[3]
  );
  h_Mux mux4 (
      a[4],
      b[4],
      sel,
      out[4]
  );
  h_Mux mux5 (
      a[5],
      b[5],
      sel,
      out[5]
  );
  h_Mux mux6 (
      a[6],
      b[6],
      sel,
      out[6]
  );
  h_Mux mux7 (
      a[7],
      b[7],
      sel,
      out[7]
  );
  h_Mux mux8 (
      a[8],
      b[8],
      sel,
      out[8]
  );
  h_Mux mux9 (
      a[9],
      b[9],
      sel,
      out[9]
  );
  h_Mux mux10 (
      a[10],
      b[10],
      sel,
      out[10]
  );
  h_Mux mux11 (
      a[11],
      b[11],
      sel,
      out[11]
  );
  h_Mux mux12 (
      a[12],
      b[12],
      sel,
      out[12]
  );
  h_Mux mux13 (
      a[13],
      b[13],
      sel,
      out[13]
  );
  h_Mux mux14 (
      a[14],
      b[14],
      sel,
      out[14]
  );
  h_Mux mux15 (
      a[15],
      b[15],
      sel,
      out[15]
  );

endmodule
