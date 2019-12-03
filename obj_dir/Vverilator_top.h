// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vverilator_top_H_
#define _Vverilator_top_H_

#include "verilated.h"

class Vverilator_top__Syms;
class Vverilator_top_h_Mux;
class Vverilator_top_FullAdder;
class VerilatedVcd;

//----------

VL_MODULE(Vverilator_top) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__mux2__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux1__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux2__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux3__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux4__DOT__mux15;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14;
    Vverilator_top_FullAdder* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux5__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__cpu__DOT__alu__DOT__mux6__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux1__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux2__DOT__mux15;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux0;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux1;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux2;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux3;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux4;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux5;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux6;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux7;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux8;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux9;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux10;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux11;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux12;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux13;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux14;
    Vverilator_top_h_Mux* __PVT__verilator_top__DOT__mem__DOT__mux1__DOT__mux3__DOT__mux15;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 
    VL_IN8(clk,0,0);
    VL_IN8(clk_video,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(r,0,0);
    VL_OUT8(g,0,0);
    VL_OUT8(b,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(display_on,0,0);
    VL_OUT16(pc,14,0);
    VL_OUT16(instruction,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    VL_SIG8(verilator_top__DOT__writeM,0,0);
    VL_SIG8(verilator_top__DOT__cpu__DOT__state,3,0);
    VL_SIG8(verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp,0,0);
    VL_SIG8(verilator_top__DOT__mem__DOT__dmux__DOT__and6__DOT__temp,0,0);
    VL_SIG8(verilator_top__DOT__mem__DOT__or1__DOT__and1__DOT__temp,0,0);
    VL_SIG8(verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__hmaxxed,0,0);
    VL_SIG8(verilator_top__DOT__mem__DOT__screen__DOT__hvsync__DOT__vmaxxed,0,0);
    VL_SIG16(verilator_top__DOT__memOut,15,0);
    VL_SIG16(verilator_top__DOT__outM,15,0);
    VL_SIG16(verilator_top__DOT__addressM,14,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__nextY,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__aluX,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__aluY,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__aReg,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__dReg,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__aluOut,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__x1,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__y1,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__x2,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__y2,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__xplusy,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__xandy,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__xy,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__notx,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__noty,15,0);
    VL_SIG16(verilator_top__DOT__cpu__DOT__alu__DOT__notxy,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__ram_out,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen_out,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__ram_in,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen_in,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__next_out,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen__DOT__hpos,9,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen__DOT__vpos,9,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen__DOT__vindex,12,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen__DOT__vshift,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__mux1__DOT__lsb,15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__mux1__DOT__msb,15,0);
    VL_SIG16(verilator_top__DOT__rom0__DOT__rom[32768],15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT___ram__DOT__ram[16384],15,0);
    VL_SIG16(verilator_top__DOT__mem__DOT__screen__DOT__vram[8192],15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint all: 
    VL_SIG8(__Vdly__verilator_top__DOT__cpu__DOT__state,3,0);
    VL_SIG8(__Vclklast__TOP__clk_video,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    VL_SIG16(__Vdly__pc,14,0);
    VL_SIG16(__Vdly__verilator_top__DOT__cpu__DOT__aReg,15,0);
    VL_SIG16(__Vdly__verilator_top__DOT__cpu__DOT__dReg,15,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vverilator_top__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vverilator_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vverilator_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vverilator_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vverilator_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vverilator_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vverilator_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__20(Vverilator_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vverilator_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vverilator_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vverilator_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vverilator_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vverilator_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(Vverilator_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vverilator_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__12(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__13(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__14(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__15(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__16(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__17(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__18(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__19(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vverilator_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__7(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__8(Vverilator_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(Vverilator_top__Syms* __restrict vlSymsp);
    static void traceChgThis(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vverilator_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
