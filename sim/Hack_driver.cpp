#include <iostream>
#include <stdlib.h>
#include "../obj_dir/Vverilator_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static VerilatedVcdC *trace = nullptr;
unsigned long tickcount = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vverilator_top *Hack = new Vverilator_top;
    Verilated::traceEverOn(true);
    trace = new VerilatedVcdC;
    Hack->trace(trace, 99);
    trace->open("./obj_dir/Vverilator_top.vcd");
    tickcount++;
    Hack->reset = false;
    Hack->clk = false;
    Hack->eval();
    trace->dump(10*tickcount);
    tickcount++;
    for (int i=0; i<10000000; i++) {
        if (i % 2 == 0) Hack->clk_video = ~(Hack->clk_video);
        Hack->clk = ~(Hack->clk);
        Hack->eval();
        trace->dump(10*tickcount);
        tickcount++;
    }
    trace->close();
    delete trace;
    Hack->final();
    delete Hack;
}
