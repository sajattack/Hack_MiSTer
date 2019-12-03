all:
	verilator -cc verilator_top.v --exe sim/Hack_driver.cpp --trace
	make -C obj_dir -f Vverilator_top.mk
clean: 
	rm -rf obj_dir
