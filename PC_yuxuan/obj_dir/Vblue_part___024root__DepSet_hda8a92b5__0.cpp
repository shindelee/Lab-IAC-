// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblue_part.h for the primary calling header

#include "verilated.h"

#include "Vblue_part___024root.h"

VL_INLINE_OPT void Vblue_part___024root___sequent__TOP__0(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->PCsrc)
                                                ? (vlSelf->PC 
                                                   + vlSelf->ImmOp)
                                                : ((IData)(4U) 
                                                   + vlSelf->PC)));
}

void Vblue_part___024root___eval(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vblue_part___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vblue_part___024root___eval_debug_assertions(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
