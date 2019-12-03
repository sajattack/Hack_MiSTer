// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vverilator_top.h for the primary calling header

#ifndef _Vverilator_top_FullAdder_H_
#define _Vverilator_top_FullAdder_H_

#include "verilated.h"

class Vverilator_top__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_top_FullAdder) {
  public:
    
    // PORTS
    // Begin mtask footprint all: 
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c,0,0);
    VL_OUT8(sum,0,0);
    VL_OUT8(carry,0,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint all: 
    VL_SIG8(__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp,0,0);
    VL_SIG8(__PVT__hadder1__DOT__and1__DOT__temp,0,0);
    VL_SIG8(__PVT__hadder2__DOT__and1__DOT__temp,0,0);
    VL_SIG8(__PVT__xor1__DOT__or1__DOT__and1__DOT__temp,0,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vverilator_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vverilator_top_FullAdder);  ///< Copying not allowed
  public:
    Vverilator_top_FullAdder(const char* name = "TOP");
    ~Vverilator_top_FullAdder();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vverilator_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__24(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__6(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__25(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__5(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__26(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__4(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__27(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__3(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__2(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__28(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__1(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__29(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1__15(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__14(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__16(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__13(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__17(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__12(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__18(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__11(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__19(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__10(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__20(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__21(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__9(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__22(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__8(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__23(Vverilator_top__Syms* __restrict vlSymsp);
    void _settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__7(Vverilator_top__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
