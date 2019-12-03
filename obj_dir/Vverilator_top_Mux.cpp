// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_top.h for the primary calling header

#include "Vverilator_top_Mux.h"
#include "Vverilator_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_top_Mux) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_top_Mux::__Vconfigure(Vverilator_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_top_Mux::~Vverilator_top_Mux() {
}

//--------------------
// Internal Methods

void Vverilator_top_Mux::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_Mux::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    sel = VL_RAND_RESET_I(1);
    out = VL_RAND_RESET_I(1);
}
