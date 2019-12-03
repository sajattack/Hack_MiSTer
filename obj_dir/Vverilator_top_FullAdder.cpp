// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vverilator_top.h for the primary calling header

#include "Vverilator_top_FullAdder.h"
#include "Vverilator_top__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vverilator_top_FullAdder) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vverilator_top_FullAdder::__Vconfigure(Vverilator_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vverilator_top_FullAdder::~Vverilator_top_FullAdder() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1__15(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1__15\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 1U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 1U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 1U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 1U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 1U))))));
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (~ (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__hadder__DOT__and1__DOT__temp)))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__14(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__14\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 2U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 2U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 2U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 2U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 2U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__16(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2__16\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder1.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__13(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__13\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 3U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 3U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 3U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 3U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 3U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__17(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3__17\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder2.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__12(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__12\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 4U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 4U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 4U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 4U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 4U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__18(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4__18\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder3.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__11(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__11\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 5U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 5U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 5U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 5U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 5U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__19(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5__19\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder4.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__10(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__10\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 6U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 6U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 6U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 6U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 6U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__20(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6__20\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder5.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__9(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__9\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 7U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 7U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 7U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 7U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 7U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__21(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7__21\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder6.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__8(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__8\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 8U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 8U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 8U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 8U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 8U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__22(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8__22\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder7.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__7(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__7\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 9U)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 9U) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                      >> 9U)))) & (~ 
                                                   ((~ 
                                                     ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                      >> 9U)) 
                                                    & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                                       >> 9U))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__23(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9__23\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder8.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__6(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__6\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xaU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xaU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xaU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xaU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xaU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__24(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10__24\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder9.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__5(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__5\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xbU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xbU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xbU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xbU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xbU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__25(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11__25\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder10.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__4(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__4\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xcU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xcU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xcU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xcU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xcU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__26(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12__26\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder11.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__3(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__3\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xdU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xdU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xdU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xdU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xdU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__27(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13__27\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder12.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__2(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__2\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xeU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xeU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xeU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xeU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xeU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__28(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14__28\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder13.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
    this->__PVT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ ((~ (IData)(this->__PVT__hadder1__DOT__and1__DOT__temp)) 
                        & (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp))) 
                    & (~ ((IData)(this->__PVT__hadder1__DOT__and1__DOT__temp) 
                          & (~ (IData)(this->__PVT__hadder2__DOT__and1__DOT__temp)))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__1(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__1\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder1__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                                                       & (IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2)) 
                                                      >> 0xfU)));
    this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp 
        = (1U & (~ ((~ (((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                         >> 0xfU) & (~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                        >> 0xfU)))) 
                    & (~ ((~ ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__x2) 
                              >> 0xfU)) & ((IData)(vlTOPp->verilator_top__DOT__cpu__DOT__alu__DOT__y2) 
                                           >> 0xfU))))));
}

VL_INLINE_OPT void Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__29(Vverilator_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_settle__TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder15__29\n"); );
    Vverilator_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__hadder2__DOT__and1__DOT__temp = (1U 
                                                  & (~ 
                                                     ((IData)(this->__PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp) 
                                                      & (IData)(vlSymsp->TOP__verilator_top__DOT__cpu__DOT__alu__DOT__adder__DOT__fadder14.__PVT__xor1__DOT__or1__DOT__and1__DOT__temp))));
}

void Vverilator_top_FullAdder::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vverilator_top_FullAdder::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(1);
    b = VL_RAND_RESET_I(1);
    c = VL_RAND_RESET_I(1);
    sum = VL_RAND_RESET_I(1);
    carry = VL_RAND_RESET_I(1);
    __PVT__hadder1__DOT__xor1__DOT__or1__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
    __PVT__hadder1__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
    __PVT__hadder2__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
    __PVT__xor1__DOT__or1__DOT__and1__DOT__temp = VL_RAND_RESET_I(1);
}
