module ROM32K (
    input [14:0] pc,
    output reg [15:0] instruction
);

  reg [15:0] rom[32767:0];

  initial begin
    $readmemb("roms/Pattern.hack", rom);
  end

  always @(pc) instruction = rom[pc];


endmodule
