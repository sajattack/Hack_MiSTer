// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_top.h for the primary calling header

#include "Vverilator_top.h"
#include "Vverilator_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_top) {
    Vverilator_top__Syms* __restrict vlSymsp = __VlSymsp = new Vverilator_top__Syms(this, name());
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15, Vverilator_top_FullAdder);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux15, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux0, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux1, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux2, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux3, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux4, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux5, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux6, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux7, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux8, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux9, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux10, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux11, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux12, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux13, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux14, Vverilator_top_h_Mux);
    VL_CELL(__PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux15, Vverilator_top_h_Mux);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_top::__Vconfigure(Vverilator_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_top::~Vverilator_top() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vverilator_top::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vverilator_top::eval\n"); );
    Vverilator_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilator_top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vverilator_top::_eval_initial_loop(Vverilator_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("verilator_top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vverilator_top::_initial__TOP__1(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_initial__TOP__1\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIGW(__Vtemp1,159,0,5);
    // Body
    __Vtemp1[0U] = 0x6861636bU;
    __Vtemp1[1U] = 0x65726e2eU;
    __Vtemp1[2U] = 0x50617474U;
    __Vtemp1[3U] = 0x6f6d732fU;
    __Vtemp1[4U] = 0x72U;
    VL_READMEM_W(false,16,32768, 0,5, __Vtemp1, vlTOPp->verilator_top__DOT__rom0__DOT__rom
                 ,0,~0);
    vlTOPp->pc = 0U;
    vlTOPp->verilator_top__DOT__writeM = 0U;
    vlTOPp->verilator_top__DOT__addressM = 0U;
    vlTOPp->verilator_top__DOT__outM = 0U;
    vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
    vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
    vlTOPp->verilator_top__DOT__cpu__DOT__aReg = 0U;
    vlTOPp->verilator_top__DOT__cpu__DOT__dReg = 0U;
    vlTOPp->verilator_top__DOT__cpu__DOT__state = 1U;
}

VL_INLINE_OPT void Vverilator_top::_sequent__TOP__2(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_sequent__TOP__2\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIG16(__Vdly__verilator_top__DOT__mem__DOT__screen__DOT__vshift,15,0);
    VL_SIG16(__Vdly__verilator_top__DOT__mem__DOT__screen__DOT__hpos,9,0);
    // Body
    __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__hpos 
        = vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos;
    __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__vshift 
        = vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift;
    vlTOPp->hsync = ((0x290U <= (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)) 
                     & (0x2efU >= (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)));
    __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__hpos 
        = ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed)
            ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos))));
    if (vlTOPp->display_on) {
        if ((0U == (0xfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)))) {
            __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__vshift 
                = vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vram
                [vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vindex];
            vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vindex 
                = (0x1fffU & ((IData)(1U) + (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vindex)));
        } else {
            __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__vshift 
                = (0xffffU & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift) 
                              << 1U));
        }
        if ((0x80U < (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos))) {
            vlTOPp->r = (1U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift) 
                               >> 0xfU));
            vlTOPp->g = (1U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift) 
                               >> 0xfU));
            vlTOPp->b = (1U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift) 
                               >> 0xfU));
        }
    } else {
        if (vlTOPp->vsync) {
            vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vindex = 0U;
        }
        vlTOPp->r = 0U;
        vlTOPp->g = 0U;
        vlTOPp->b = 0U;
    }
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vshift 
        = __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__vshift;
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos 
        = __Vdly__verilator_top__DOT__mem__DOT__screen__DOT__hpos;
    vlTOPp->vsync = ((0x201U <= (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)) 
                     & (0x202U >= (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)));
    if (vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed) {
        vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos 
            = ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__vmaxxed)
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos))));
    }
    vlTOPp->display_on = ((0x280U > (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)) 
                          & (0x100U > (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)));
}

VL_INLINE_OPT void Vverilator_top::_sequent__TOP__3(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_sequent__TOP__3\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state 
        = vlTOPp->verilator_top__DOT__cpu__DOT__state;
    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg 
        = vlTOPp->verilator_top__DOT__cpu__DOT__dReg;
    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg 
        = vlTOPp->verilator_top__DOT__cpu__DOT__aReg;
    vlTOPp->__Vdly__pc = vlTOPp->pc;
}

VL_INLINE_OPT void Vverilator_top::_sequent__TOP__4(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_sequent__TOP__4\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    VL_SIG8(__Vdlyvset__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0,0,0);
    VL_SIG8(__Vdlyvset__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0,0,0);
    VL_SIG16(__Vdlyvdim0__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0,13,0);
    VL_SIG16(__Vdlyvval__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0,15,0);
    VL_SIG16(__Vdlyvdim0__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0,12,0);
    VL_SIG16(__Vdlyvval__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0,15,0);
    // Body
    __Vdlyvset__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0 = 0U;
    __Vdlyvset__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0 = 0U;
    if (vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp) {
        vlTOPp->verilator_top__DOT__mem__DOT__screen_out 
            = vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vram
            [(0x1fffU & (IData)(vlTOPp->verilator_top__DOT__addressM))];
    }
    if ((1U & (~ (IData)(vlTOPp->verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp)))) {
        vlTOPp->verilator_top__DOT__mem__DOT__ram_out 
            = vlTOPp->verilator_top__DOT__mem__DOT___ram__DOT__ram
            [(0x3fffU & (IData)(vlTOPp->verilator_top__DOT__addressM))];
    }
    if ((1U & (~ (IData)(vlTOPp->verilator_top__DOT__writeM)))) {
        vlTOPp->verilator_top__DOT__memOut = vlTOPp->verilator_top__DOT__mem__DOT__next_out;
    }
    if ((1U & (~ (IData)(vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp)))) {
        __Vdlyvval__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0 
            = vlTOPp->verilator_top__DOT__mem__DOT__screen_in;
        __Vdlyvset__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0 = 1U;
        __Vdlyvdim0__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0 
            = (0x1fffU & (IData)(vlTOPp->verilator_top__DOT__addressM));
    }
    if (vlTOPp->verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp) {
        __Vdlyvval__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0 
            = vlTOPp->verilator_top__DOT__mem__DOT__ram_in;
        __Vdlyvset__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0 
            = (0x3fffU & (IData)(vlTOPp->verilator_top__DOT__addressM));
    }
    if (__Vdlyvset__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0) {
        vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vram[__Vdlyvdim0__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0] 
            = __Vdlyvval__verilator_top__DOT__mem__DOT__screen__DOT__vram__v0;
    }
    if (__Vdlyvset__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0) {
        vlTOPp->verilator_top__DOT__mem__DOT___ram__DOT__ram[__Vdlyvdim0__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0] 
            = __Vdlyvval__verilator_top__DOT__mem__DOT___ram__DOT__ram__v0;
    }
    if (vlTOPp->verilator_top__DOT__writeM) {
        if ((1U & (~ (IData)(vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp)))) {
            vlTOPp->verilator_top__DOT__mem__DOT__screen_in 
                = vlTOPp->verilator_top__DOT__outM;
        }
    }
    if (vlTOPp->verilator_top__DOT__writeM) {
        if (vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp) {
            vlTOPp->verilator_top__DOT__mem__DOT__ram_in 
                = vlTOPp->verilator_top__DOT__outM;
        }
    }
}

void Vverilator_top::_settle__TOP__5(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__5\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed 
        = ((0x31fU == (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__vmaxxed 
        = ((0x20cU == (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->display_on = ((0x280U > (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)) 
                          & (0x100U > (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)));
    vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp 
        = (1U & (~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                     & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU))) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                         >> 0xeU))));
    vlTOPp->verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                         & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))) 
                    & (~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU)))))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU))))))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 1U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 1U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 2U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 2U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 3U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 3U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 4U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 4U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 5U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 5U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 6U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 6U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 7U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 7U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 8U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 8U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xdU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 9U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 9U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xdU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 0xaU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xdU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 0xbU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xdU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xcU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xdU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xeU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xfU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                          >> 0xdU)))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 1U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 2U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 3U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x10U & ((~ ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                                                >> 4U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x20U & ((~ ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                                                >> 5U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                       & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) << 6U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                       & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) << 7U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 8U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 9U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 0xaU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 0xbU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xcU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xdU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xeU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xfU))));
    vlTOPp->instruction = vlTOPp->verilator_top__DOT__rom0__DOT__rom
        [vlTOPp->pc];
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xeU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU))))))));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 1U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 1U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 2U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 2U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 3U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 3U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 4U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 4U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 5U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 5U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 6U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 6U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 7U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 7U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 8U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 8U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 9U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 9U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 0xaU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xeU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 0xbU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xeU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xcU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xdU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xeU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xfU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffeU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((~ 
                                                           ((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                            & ((IData)(vlTOPp->instruction) 
                                                               >> 0xcU))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->instruction) 
                                                                  >> 0xcU))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffdU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (2U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 1U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 1U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffbU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (4U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 2U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 2U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfff7U 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (8U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 3U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 3U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x10U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 4U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 4U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffdfU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x20U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 5U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 5U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffbfU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x40U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 6U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 6U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xff7fU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x80U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 7U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 7U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfeffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x100U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 8U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 8U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfdffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x200U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 9U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 9U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfbffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x400U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xaU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xf7ffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x800U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xbU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xbU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xefffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              & (IData)(vlTOPp->instruction)) 
                                                             >> 0xcU)) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xcU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xdfffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x2000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xdU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xdU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xbfffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x4000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xeU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xeU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0x7fffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x8000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xfU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xfU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & (~ ((IData)(vlTOPp->instruction) 
                          >> 0xbU)))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 1U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 2U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 3U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 4U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 5U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 6U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 7U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 8U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 9U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 0xaU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 0xbU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xcU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xdU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xeU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xfU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & (~ ((IData)(vlTOPp->instruction) 
                          >> 9U)))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 1U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 2U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 3U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 4U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 5U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 6U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 7U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 8U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 9U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 0xaU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 0xbU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xcU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xdU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xeU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xfU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (1U & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (2U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 1U)) << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (4U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 2U)) << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (8U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 3U)) << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x10U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 4U)) << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x20U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 5U)) << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x40U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 6U)) << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x80U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 7U)) << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x100U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 8U)) << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x200U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 9U)) << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x400U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 0xaU)) << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x800U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 0xbU)) << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x1000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xcU)) << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x2000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xdU)) << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x4000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xeU)) << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x8000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xfU)) << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (1U & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (2U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 1U)) << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (4U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 2U)) << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (8U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 3U)) << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x10U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 4U)) << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x20U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 5U)) << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x40U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 6U)) << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x80U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 7U)) << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x100U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 8U)) << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x200U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 9U)) << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x400U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 0xaU)) << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x800U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 0xbU)) << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x1000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xcU)) << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x2000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xdU)) << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x4000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xeU)) << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x8000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xfU)) << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                           & ((IData)(vlTOPp->instruction) 
                              >> 0xaU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                               & (~ 
                                                  ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 1U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 1U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 2U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 2U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 3U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 3U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 4U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 5U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 6U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 6U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 7U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 7U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 8U) & ((IData)(vlTOPp->instruction) 
                                           >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 8U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 0xaU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 9U) & ((IData)(vlTOPp->instruction) 
                                           >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 0xaU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 & (IData)(vlTOPp->instruction)) 
                                >> 0xaU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(vlTOPp->instruction) 
                                                    >> 0xaU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                             >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 0xaU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                           & ((IData)(vlTOPp->instruction) 
                              >> 8U))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                             & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 1U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 1U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 2U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 2U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 3U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 3U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 4U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 5U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 6U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 6U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 7U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 7U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 & (IData)(vlTOPp->instruction)) 
                                >> 8U)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                               >> 8U) 
                                              & (~ 
                                                 ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 9U) & ((IData)(vlTOPp->instruction) 
                                           >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 8U)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 0xaU) & ((IData)(vlTOPp->instruction) 
                                             >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                             >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                           & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)))) 
                       & (~ ((~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
                             & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp 
        = (1U & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__6(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__6\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (2U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                            & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp))) 
                        & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                              & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (4U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                            & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                        & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                              & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                    << 2U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__7(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__7\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (8U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                            & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                        & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                              & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                    << 3U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__8(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__8\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x10U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                               & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                           & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                 & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                       << 4U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__9(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__9\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x20U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                               & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                           & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                 & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                       << 5U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__10(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__10\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x40U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                               & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                           & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                 & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                       << 6U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__11(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__11\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x80U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                               & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                           & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                 & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                       << 7U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__12(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__12\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x100U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                            & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                  & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                        << 8U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__13(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__13\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x200U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                            & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                  & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                        << 9U)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__14(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__14\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x400U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                            & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                  & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                        << 0xaU)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__15(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__15\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x800U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                            & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                  & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                        << 0xbU)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__16(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__16\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x1000U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                 & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                             & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                   & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                         << 0xcU)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__17(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__17\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x2000U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                 & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                             & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                   & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                         << 0xdU)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__18(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__18\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x4000U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                 & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                             & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                   & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                         << 0xeU)));
}

VL_INLINE_OPT void Vverilator_top::_settle__TOP__19(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_settle__TOP__19\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (0x8000U & ((~ ((~ ((IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                 & (~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp)))) 
                             & (~ ((~ (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15.__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp)) 
                                   & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                           & ((IData)(vlTOPp->instruction) 
                              >> 7U))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                             & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                             >> 1U) & ((IData)(vlTOPp->instruction) 
                                       >> 7U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                                     >> 1U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 7U)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                             >> 2U) & ((IData)(vlTOPp->instruction) 
                                       >> 7U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                                     >> 2U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 7U)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                             >> 3U) & ((IData)(vlTOPp->instruction) 
                                       >> 7U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                                     >> 3U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 7U)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                >> 4U) & ((IData)(vlTOPp->instruction) 
                                          >> 7U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                  >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 7U)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                >> 5U) & ((IData)(vlTOPp->instruction) 
                                          >> 7U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                  >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 7U)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                >> 6U) & ((IData)(vlTOPp->instruction) 
                                          >> 7U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                  >> 6U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 7U)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                & (IData)(vlTOPp->instruction)) 
                               >> 7U)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                              >> 7U) 
                                             & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                 >> 8U) & ((IData)(vlTOPp->instruction) 
                                           >> 7U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                   >> 8U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 7U)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                 >> 9U) & ((IData)(vlTOPp->instruction) 
                                           >> 7U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                   >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 7U)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                 >> 0xaU) & ((IData)(vlTOPp->instruction) 
                                             >> 7U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 7U)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                 >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                             >> 7U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 7U)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                  >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                              >> 7U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                  >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                              >> 7U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                  >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                              >> 7U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy) 
                                  >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                              >> 7U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 7U)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (1U & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (2U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                        >> 1U)) << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (4U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                        >> 2U)) << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (8U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                        >> 3U)) << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x10U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                           >> 4U)) << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x20U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                           >> 5U)) << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x40U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                           >> 6U)) << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x80U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                           >> 7U)) << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x100U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                            >> 8U)) << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x200U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                            >> 9U)) << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x400U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                            >> 0xaU)) << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x800U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                            >> 0xbU)) << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x1000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                             >> 0xcU)) << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x2000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                             >> 0xdU)) << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x4000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                             >> 0xeU)) << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy)) 
           | (0x8000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                             >> 0xfU)) << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                         & ((IData)(vlTOPp->instruction) 
                            >> 6U))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                           & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                           >> 1U) & ((IData)(vlTOPp->instruction) 
                                     >> 6U))) & (~ 
                                                 (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                                   >> 1U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->instruction) 
                                                      >> 6U)))))) 
                  << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                           >> 2U) & ((IData)(vlTOPp->instruction) 
                                     >> 6U))) & (~ 
                                                 (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                                   >> 2U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->instruction) 
                                                      >> 6U)))))) 
                  << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                           >> 3U) & ((IData)(vlTOPp->instruction) 
                                     >> 6U))) & (~ 
                                                 (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                                   >> 3U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->instruction) 
                                                      >> 6U)))))) 
                  << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                              >> 4U) & ((IData)(vlTOPp->instruction) 
                                        >> 6U))) & 
                         (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                              >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                           >> 6U)))))) 
                     << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                              >> 5U) & ((IData)(vlTOPp->instruction) 
                                        >> 6U))) & 
                         (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                              >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                           >> 6U)))))) 
                     << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                              & (IData)(vlTOPp->instruction)) 
                             >> 6U)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                            >> 6U) 
                                           & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U)))))) 
                     << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                              >> 7U) & ((IData)(vlTOPp->instruction) 
                                        >> 6U))) & 
                         (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                              >> 7U) & (~ ((IData)(vlTOPp->instruction) 
                                           >> 6U)))))) 
                     << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                               >> 8U) & ((IData)(vlTOPp->instruction) 
                                         >> 6U))) & 
                          (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                               >> 8U) & (~ ((IData)(vlTOPp->instruction) 
                                            >> 6U)))))) 
                      << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                               >> 9U) & ((IData)(vlTOPp->instruction) 
                                         >> 6U))) & 
                          (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                               >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                            >> 6U)))))) 
                      << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                               >> 0xaU) & ((IData)(vlTOPp->instruction) 
                                           >> 6U))) 
                          & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                 >> 0xaU) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 6U)))))) 
                      << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                               >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                           >> 6U))) 
                          & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                 >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 6U)))))) 
                      << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                                >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                            >> 6U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                  >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U)))))) 
                       << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                                >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                            >> 6U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                  >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U)))))) 
                       << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                                >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                            >> 6U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                  >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U)))))) 
                       << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__aluOut = 
        ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
         | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notxy) 
                                >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                            >> 6U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xy) 
                                  >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                 >> 6U)))))) 
                       << 0xfU)));
}

VL_INLINE_OPT void Vverilator_top::_combo__TOP__20(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_combo__TOP__20\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed 
        = ((0x31fU == (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hpos)) 
           | (IData)(vlTOPp->reset));
    vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__vmaxxed 
        = ((0x20cU == (IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen__DOT__vpos)) 
           | (IData)(vlTOPp->reset));
}

VL_INLINE_OPT void Vverilator_top::_sequent__TOP__21(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_sequent__TOP__21\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__pc = 0U;
        vlTOPp->verilator_top__DOT__writeM = 0U;
        vlTOPp->verilator_top__DOT__addressM = 0U;
        vlTOPp->verilator_top__DOT__outM = 0U;
        vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
        vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
    } else {
        if ((8U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
            if ((4U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                vlTOPp->__Vdly__pc = 0U;
                vlTOPp->verilator_top__DOT__writeM = 0U;
                vlTOPp->verilator_top__DOT__addressM = 0U;
                vlTOPp->verilator_top__DOT__outM = 0U;
                vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
            } else {
                if ((2U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                    vlTOPp->__Vdly__pc = 0U;
                    vlTOPp->verilator_top__DOT__writeM = 0U;
                    vlTOPp->verilator_top__DOT__addressM = 0U;
                    vlTOPp->verilator_top__DOT__outM = 0U;
                    vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                    vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                } else {
                    if ((1U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                        vlTOPp->__Vdly__pc = 0U;
                        vlTOPp->verilator_top__DOT__writeM = 0U;
                        vlTOPp->verilator_top__DOT__addressM = 0U;
                        vlTOPp->verilator_top__DOT__outM = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                    } else {
                        vlTOPp->__Vdly__pc = (0x7fffU 
                                              & ((1U 
                                                  & (((IData)(vlTOPp->instruction) 
                                                      >> 0xfU) 
                                                     & (~ 
                                                        (((~ 
                                                           ((~ (IData)(
                                                                       (0U 
                                                                        != (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)))) 
                                                            & ((IData)(vlTOPp->instruction) 
                                                               >> 1U))) 
                                                          & (~ 
                                                             (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut) 
                                                               >> 0xfU) 
                                                              & ((IData)(vlTOPp->instruction) 
                                                                 >> 2U)))) 
                                                         & (~ 
                                                            (((0U 
                                                               != (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut)) 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluOut) 
                                                                  >> 0xfU))) 
                                                             & (IData)(vlTOPp->instruction)))))))
                                                  ? (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlTOPp->pc))));
                        vlTOPp->verilator_top__DOT__writeM = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                if ((2U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                    vlTOPp->__Vdly__pc = 0U;
                    vlTOPp->verilator_top__DOT__writeM = 0U;
                    vlTOPp->verilator_top__DOT__addressM = 0U;
                    vlTOPp->verilator_top__DOT__outM = 0U;
                    vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                    vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                    vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                } else {
                    if ((1U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                        vlTOPp->__Vdly__pc = 0U;
                        vlTOPp->verilator_top__DOT__writeM = 0U;
                        vlTOPp->verilator_top__DOT__addressM = 0U;
                        vlTOPp->verilator_top__DOT__outM = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                    } else {
                        if ((8U & (IData)(vlTOPp->instruction))) {
                            vlTOPp->verilator_top__DOT__outM 
                                = vlTOPp->verilator_top__DOT__cpu__DOT__aluOut;
                        }
                        vlTOPp->verilator_top__DOT__writeM = 1U;
                        if ((1U & (((IData)(vlTOPp->instruction) 
                                    >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                                >> 5U)))) {
                            vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg 
                                = vlTOPp->verilator_top__DOT__cpu__DOT__aluOut;
                        }
                        if ((0x10U & (IData)(vlTOPp->instruction))) {
                            vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg 
                                = vlTOPp->verilator_top__DOT__cpu__DOT__aluOut;
                        }
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 8U;
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                    if ((1U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                        vlTOPp->__Vdly__pc = 0U;
                        vlTOPp->verilator_top__DOT__writeM = 0U;
                        vlTOPp->verilator_top__DOT__addressM = 0U;
                        vlTOPp->verilator_top__DOT__outM = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                    } else {
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluX 
                            = vlTOPp->verilator_top__DOT__cpu__DOT__dReg;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluY 
                            = vlTOPp->verilator_top__DOT__cpu__DOT__nextY;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 4U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__state))) {
                        if ((0x8000U & (IData)(vlTOPp->instruction))) {
                            vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 2U;
                            vlTOPp->verilator_top__DOT__addressM 
                                = (0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg));
                        } else {
                            vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg 
                                = vlTOPp->instruction;
                            vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 8U;
                        }
                    } else {
                        vlTOPp->__Vdly__pc = 0U;
                        vlTOPp->verilator_top__DOT__writeM = 0U;
                        vlTOPp->verilator_top__DOT__addressM = 0U;
                        vlTOPp->verilator_top__DOT__outM = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluX = 0U;
                        vlTOPp->verilator_top__DOT__cpu__DOT__aluY = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg = 0U;
                        vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->verilator_top__DOT__cpu__DOT__state = vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__state;
    vlTOPp->verilator_top__DOT__cpu__DOT__aReg = vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__aReg;
    vlTOPp->verilator_top__DOT__cpu__DOT__dReg = vlTOPp->__Vdly__verilator_top__DOT__cpu__DOT__dReg;
    vlTOPp->pc = vlTOPp->__Vdly__pc;
    vlTOPp->verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp 
        = (1U & (~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                     & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU))) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                         >> 0xeU))));
    vlTOPp->verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                         & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))) 
                    & (~ (((IData)(vlTOPp->verilator_top__DOT__writeM) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU)))))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU))))))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 1U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 1U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 2U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 2U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 3U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xdU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                             >> 3U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 4U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 4U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 5U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 5U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 6U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 6U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                >> 7U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xdU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 7U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xdU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 8U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 8U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xdU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 9U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 9U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xdU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 0xaU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xdU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                 >> 0xbU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xdU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xdU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xcU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xdU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xeU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                  >> 0xfU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xdU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__ram_out) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                          >> 0xdU)))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 1U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 2U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                    & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                           >> 0xdU)) << 3U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x10U & ((~ ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                                                >> 4U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x20U & ((~ ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                                                >> 5U) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xdU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                       & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) << 6U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                       & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xdU)) << 7U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 8U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 9U))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 0xaU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                        & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                               >> 0xdU)) << 0xbU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xcU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xdU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xeU))));
    vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__screen_out) 
                         & ((~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                >> 0xdU)) << 0xfU))));
    vlTOPp->instruction = vlTOPp->verilator_top__DOT__rom0__DOT__rom
        [vlTOPp->pc];
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                           & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                              >> 0xeU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                               & (~ 
                                                  ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU))))))));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 1U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 1U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 2U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 2U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                             >> 3U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                       >> 0xeU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                             >> 3U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 4U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 4U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 5U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 5U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 6U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 6U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                >> 7U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                          >> 0xeU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                  >> 7U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                               >> 0xeU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 8U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 8U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 9U) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                           >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 9U) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                >> 0xeU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 0xaU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xeU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                 >> 0xbU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                             >> 0xeU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                  >> 0xeU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xcU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xdU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xeU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__mem__DOT__next_out 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__mem__DOT__next_out)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__msb) 
                                  >> 0xfU) & ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                              >> 0xeU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__mem__DOT__mux1__DOT__lsb) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->verilator_top__DOT__addressM) 
                                                   >> 0xeU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffeU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (1U 
                                                      & (~ 
                                                         ((~ 
                                                           ((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                            & ((IData)(vlTOPp->instruction) 
                                                               >> 0xcU))) 
                                                          & (~ 
                                                             ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                              & (~ 
                                                                 ((IData)(vlTOPp->instruction) 
                                                                  >> 0xcU))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffdU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (2U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 1U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 1U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfffbU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (4U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 2U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 2U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfff7U 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (8U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 3U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 3U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffefU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x10U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 4U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 4U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffdfU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x20U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 5U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 5U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xffbfU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x40U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 6U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 6U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xff7fU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x80U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 7U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 7U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfeffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x100U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 8U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 8U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfdffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x200U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 9U) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 9U) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xfbffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x400U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xaU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xaU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xf7ffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x800U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xbU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xbU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xefffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x1000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              & (IData)(vlTOPp->instruction)) 
                                                             >> 0xcU)) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xcU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xdfffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x2000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xdU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xdU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0xbfffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x4000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xeU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xeU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__nextY = (
                                                   (0x7fffU 
                                                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__nextY)) 
                                                   | (0x8000U 
                                                      & ((~ 
                                                          ((~ 
                                                            (((IData)(vlTOPp->verilator_top__DOT__memOut) 
                                                              >> 0xfU) 
                                                             & ((IData)(vlTOPp->instruction) 
                                                                >> 0xcU))) 
                                                           & (~ 
                                                              (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aReg) 
                                                                >> 0xfU) 
                                                               & (~ 
                                                                  ((IData)(vlTOPp->instruction) 
                                                                   >> 0xcU)))))) 
                                                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & (~ ((IData)(vlTOPp->instruction) 
                          >> 0xbU)))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 1U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 2U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 0xbU)) << 3U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 4U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 5U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 6U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 0xbU)) << 7U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 8U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 9U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 0xaU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 0xbU)) << 0xbU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xcU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xdU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xeU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluX) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 0xbU)) << 0xfU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & (~ ((IData)(vlTOPp->instruction) 
                          >> 9U)))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 1U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 2U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                    & ((~ ((IData)(vlTOPp->instruction) 
                           >> 9U)) << 3U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 4U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 5U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 6U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                       & ((~ ((IData)(vlTOPp->instruction) 
                              >> 9U)) << 7U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 8U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 9U))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 0xaU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                        & ((~ ((IData)(vlTOPp->instruction) 
                               >> 9U)) << 0xbU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xcU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xdU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xeU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__aluY) 
                         & ((~ ((IData)(vlTOPp->instruction) 
                                >> 9U)) << 0xfU))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (1U & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (2U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 1U)) << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (4U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 2U)) << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (8U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                        >> 3U)) << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x10U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 4U)) << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x20U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 5U)) << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x40U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 6U)) << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x80U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                           >> 7U)) << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x100U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 8U)) << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x200U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 9U)) << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x400U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 0xaU)) << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x800U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                            >> 0xbU)) << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x1000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xcU)) << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x2000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xdU)) << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x4000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xeU)) << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx)) 
           | (0x8000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 0xfU)) << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (1U & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (2U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 1U)) << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (4U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 2U)) << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (8U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                        >> 3U)) << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x10U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 4U)) << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x20U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 5U)) << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x40U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 6U)) << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x80U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                           >> 7U)) << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x100U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 8U)) << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x200U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 9U)) << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x400U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 0xaU)) << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x800U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                            >> 0xbU)) << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x1000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xcU)) << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x2000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xdU)) << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x4000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xeU)) << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty)) 
           | (0x8000U & ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                             >> 0xfU)) << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                           & ((IData)(vlTOPp->instruction) 
                              >> 0xaU))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                               & (~ 
                                                  ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 1U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 1U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 2U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 2U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                             >> 3U) & ((IData)(vlTOPp->instruction) 
                                       >> 0xaU))) & 
                        (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                             >> 3U) & (~ ((IData)(vlTOPp->instruction) 
                                          >> 0xaU)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 4U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 5U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 6U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 6U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                >> 7U) & ((IData)(vlTOPp->instruction) 
                                          >> 0xaU))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                  >> 7U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 0xaU)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 8U) & ((IData)(vlTOPp->instruction) 
                                           >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 8U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 0xaU)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 9U) & ((IData)(vlTOPp->instruction) 
                                           >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 0xaU)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 & (IData)(vlTOPp->instruction)) 
                                >> 0xaU)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                                 >> 0xaU) 
                                                & (~ 
                                                   ((IData)(vlTOPp->instruction) 
                                                    >> 0xaU)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                 >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                             >> 0xaU))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 0xaU)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__notx) 
                                  >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                              >> 0xaU))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x1) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 0xaU)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                           & ((IData)(vlTOPp->instruction) 
                              >> 8U))) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                             & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U))))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (2U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 1U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 1U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 1U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (4U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 2U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 2U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 2U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (8U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                             >> 3U) & ((IData)(vlTOPp->instruction) 
                                       >> 8U))) & (~ 
                                                   (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                                     >> 3U) 
                                                    & (~ 
                                                       ((IData)(vlTOPp->instruction) 
                                                        >> 8U)))))) 
                    << 3U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x10U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 4U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 4U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 4U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x20U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 5U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 5U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 5U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x40U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 6U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 6U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 6U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x80U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                >> 7U) & ((IData)(vlTOPp->instruction) 
                                          >> 8U))) 
                           & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                  >> 7U) & (~ ((IData)(vlTOPp->instruction) 
                                               >> 8U)))))) 
                       << 7U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x100U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 & (IData)(vlTOPp->instruction)) 
                                >> 8U)) & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                               >> 8U) 
                                              & (~ 
                                                 ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 8U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x200U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 9U) & ((IData)(vlTOPp->instruction) 
                                           >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 9U) & (~ ((IData)(vlTOPp->instruction) 
                                                >> 8U)))))) 
                        << 9U)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x400U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 0xaU) & ((IData)(vlTOPp->instruction) 
                                             >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 0xaU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 0xaU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x800U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                 >> 0xbU) & ((IData)(vlTOPp->instruction) 
                                             >> 8U))) 
                            & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                   >> 0xbU) & (~ ((IData)(vlTOPp->instruction) 
                                                  >> 8U)))))) 
                        << 0xbU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x1000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xcU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xcU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xcU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x2000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xdU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xdU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xdU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x4000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xeU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xeU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xeU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
           | (0x8000U & ((~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__noty) 
                                  >> 0xfU) & ((IData)(vlTOPp->instruction) 
                                              >> 8U))) 
                             & (~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y1) 
                                    >> 0xfU) & (~ ((IData)(vlTOPp->instruction) 
                                                   >> 8U)))))) 
                         << 0xfU)));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xplusy)) 
           | (1U & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                           & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)))) 
                       & (~ ((~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2)) 
                             & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)))))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffeU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (1U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffdU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (2U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfffbU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (4U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfff7U & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (8U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffefU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x10U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffdfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x20U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xffbfU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x40U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xff7fU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x80U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfeffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x100U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfdffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x200U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xfbffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x400U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xf7ffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x800U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                        & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xefffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x1000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xdfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x2000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0xbfffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x4000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy 
        = ((0x7fffU & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__xandy)) 
           | (0x8000U & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
    vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp 
        = (1U & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                    & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2))));
}

void Vverilator_top::_eval(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_eval\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_video) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_video)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__20(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__1(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__2(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__3(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__4(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__5(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__6(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__7(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__8(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__9(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__10(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__11(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__12(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__13(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__14(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1__15(vlSymsp);
        vlTOPp->_settle__TOP__6(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__16(vlSymsp);
        vlTOPp->_settle__TOP__7(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__17(vlSymsp);
        vlTOPp->_settle__TOP__8(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__18(vlSymsp);
        vlTOPp->_settle__TOP__9(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__19(vlSymsp);
        vlTOPp->_settle__TOP__10(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__20(vlSymsp);
        vlTOPp->_settle__TOP__11(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__21(vlSymsp);
        vlTOPp->_settle__TOP__12(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__22(vlSymsp);
        vlTOPp->_settle__TOP__13(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__23(vlSymsp);
        vlTOPp->_settle__TOP__14(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__24(vlSymsp);
        vlTOPp->_settle__TOP__15(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__25(vlSymsp);
        vlTOPp->_settle__TOP__16(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__26(vlSymsp);
        vlTOPp->_settle__TOP__17(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__27(vlSymsp);
        vlTOPp->_settle__TOP__18(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__28(vlSymsp);
        vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__29(vlSymsp);
        vlTOPp->_settle__TOP__19(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_video = vlTOPp->clk_video;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vverilator_top::_eval_initial(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_eval_initial\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP__clk_video = vlTOPp->clk_video;
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vverilator_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::final\n"); );
    // Variables
    Vverilator_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vverilator_top::_eval_settle(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_eval_settle\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__1(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__2(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__3(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__4(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__5(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__6(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__7(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__8(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__9(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__10(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__11(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__12(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__13(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__14(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1__15(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__16(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__17(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__18(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__19(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__20(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__21(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__22(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__23(vlSymsp);
    vlTOPp->_settle__TOP__14(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__24(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__25(vlSymsp);
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__26(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__27(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__28(vlSymsp);
    vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15._settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__29(vlSymsp);
    vlTOPp->_settle__TOP__19(vlSymsp);
}

VL_INLINE_OPT QData Vverilator_top::_change_request(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_change_request\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vverilator_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((clk_video & 0xfeU))) {
        Verilated::overWidthError("clk_video");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void Vverilator_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vverilator_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    clk_video = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    r = VL_RAND_RESET_I(1);
    g = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    hsync = VL_RAND_RESET_I(1);
    vsync = VL_RAND_RESET_I(1);
    display_on = VL_RAND_RESET_I(1);
    pc = VL_RAND_RESET_I(15);
    instruction = VL_RAND_RESET_I(16);
    verilator_top__DOT__memOut = VL_RAND_RESET_I(16);
    verilator_top__DOT__outM = VL_RAND_RESET_I(16);
    verilator_top__DOT__addressM = VL_RAND_RESET_I(15);
    verilator_top__DOT__writeM = VL_RAND_RESET_I(1);
    verilator_top__DOT__cpu__DOT__nextY = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__aluX = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__aluY = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__aReg = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__dReg = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__aluOut = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__state = VL_RAND_RESET_I(4);
    verilator_top__DOT__cpu__DOT__alu__DOT__x1 = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__y1 = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__x2 = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__y2 = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__xplusy = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__xandy = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__xy = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__notx = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__noty = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__notxy = VL_RAND_RESET_I(16);
    verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
            verilator_top__DOT__rom0__DOT__rom[__Vi0] = VL_RAND_RESET_I(16);
    }}
    verilator_top__DOT__mem__DOT__ram_out = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__screen_out = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__ram_in = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__screen_in = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__next_out = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp = VL_RAND_RESET_I(1);
    verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            verilator_top__DOT__mem__DOT___ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    verilator_top__DOT__mem__DOT__screen__DOT__hpos = VL_RAND_RESET_I(10);
    verilator_top__DOT__mem__DOT__screen__DOT__vpos = VL_RAND_RESET_I(10);
    { int __Vi0=0; for (; __Vi0<8192; ++__Vi0) {
            verilator_top__DOT__mem__DOT__screen__DOT__vram[__Vi0] = VL_RAND_RESET_I(16);
    }}
    verilator_top__DOT__mem__DOT__screen__DOT__vindex = VL_RAND_RESET_I(13);
    verilator_top__DOT__mem__DOT__screen__DOT__vshift = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed = VL_RAND_RESET_I(1);
    verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__vmaxxed = VL_RAND_RESET_I(1);
    verilator_top__DOT__mem__DOT__mux1__DOT__lsb = VL_RAND_RESET_I(16);
    verilator_top__DOT__mem__DOT__mux1__DOT__msb = VL_RAND_RESET_I(16);
    __Vdly__pc = VL_RAND_RESET_I(15);
    __Vdly__verilator_top__DOT__cpu__DOT__aReg = VL_RAND_RESET_I(16);
    __Vdly__verilator_top__DOT__cpu__DOT__dReg = VL_RAND_RESET_I(16);
    __Vdly__verilator_top__DOT__cpu__DOT__state = VL_RAND_RESET_I(4);
    __Vm_traceActivity = 0;
}
