all:
	verilator -cc verilator_top.v --exe sim/Hack_driver.cpp --trace
	make -C obj_dir -f Vverilator_top.mk
sdl: 
	verilator --cc verilator_top.v -I. -I/usr/lib/ --exe sim/SDL2_sim.cpp -LDFLAGS "-lSDL2main -lSDL2" --public
	make -C obj_dir -f Vverilator_top.mk
clean: 
	rm -rf obj_dir
