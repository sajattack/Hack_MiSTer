// I'd love to make this out of nand gates but my fpga would explode
module RAM16K (
    input clk,
    input [15:0] in,
    input load,
    input [13:0] address,
    output reg [15:0] out
);

  reg [15:0] ram[16383:0];

  always @(posedge clk) begin
    if (load) begin
      ram[address] <= in;
    end else begin
      out <= ram[address];
    end
  end

endmodule
