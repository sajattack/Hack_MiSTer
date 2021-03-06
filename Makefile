all:
	verilator -cc verilator_top.v --exe sim/Hack_driver.cpp --trace
	make -C obj_dir -f Vverilator_top.mk
sdl: 
	verilator --cc verilator_top.v -I./rtl -I/usr/lib/ --exe sim/SDL2_sim.cpp -LDFLAGS "-lSDL2main -lSDL2" --public
	make -C obj_dir -f Vverilator_top.mk OPT_FAST='-O3'
test: 
	verilator -cc cpu_tb.sv
	make -C obj_dir -f Vcpu_tb.sv
clean: 
	rm -rf obj_dir
