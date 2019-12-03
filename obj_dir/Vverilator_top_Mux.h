// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_top.h for the primary calling header

#ifndef _Vverilator_top_Mux_H_
#define _Vverilator_top_Mux_H_

#include "verilated.h"

class Vverilator_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_top_Mux) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(sel,0,0);
    VL_OUT8(out,0,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vverilator_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vverilator_top_Mux);  ///< Copying not allowed
  public:
    Vverilator_top_Mux(const char* name = "TOP");
    ~Vverilator_top_Mux();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vverilator_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
