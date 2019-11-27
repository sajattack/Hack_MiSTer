module Memory(
    input clk,
	 input reset,
    input [15:0] in,
    input load,
    input [14:0] address,
    output reg [15:0] out,
	 
	 input [15:0] kb,
	 output r, g, b, hsync, vsync, hblank, vblank
);

wire bank1, bank2, load_ram, load_screen;
wire [15:0] ram_out, screen_out;
reg [15:0] ram_in, screen_in;
wire [15:0] next_out;
wire garbage = 1'b0;


DMux4Way dmux(load, address[14:13], bank1, bank2, load_screen, garbage);
_Or _or(bank1, bank2, load_ram);
RAM16K _ram(clk, ram_in, load_ram, address[13:0], ram_out);
Screen screen(clk, reset, screen_in, load_screen, address[12:0], screen_out, r, g, b, hsync, vsync, hblank, vblank); 
Mux4Way16 mux1(ram_out, ram_out, screen_out, kb, address[14:13], next_out);

always @(posedge clk) begin
    if (load) begin
        if (load_screen)
            screen_in <= in;  
        else
            ram_in <= in; 
	end else
       out <= next_out;
end

endmodule