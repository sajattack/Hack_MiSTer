module PC(
    input clk,
    input [14:0] in,
    input load, inc, reset,
    output reg [14:0] out
);

reg [14:0] feedback;
wire [14:0] pc;

Inc16 incr (feedback, pc);

always @(posedge clk) begin
    if (inc) begin
        out <= pc;
    end else if (load) begin
        out <= in;
    end else if (reset) begin
        out <= 0;
    end
	 feedback <= pc;
end 

endmodule


