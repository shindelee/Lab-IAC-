// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblue_part.h for the primary calling header

#include "verilated.h"

#include "Vblue_part___024root.h"

VL_ATTR_COLD void Vblue_part___024root___eval_initial(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vblue_part___024root___eval_settle(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vblue_part___024root___final(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___final\n"); );
}

VL_ATTR_COLD void Vblue_part___024root___ctor_var_reset(Vblue_part___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->blue_part__DOT__next_pc = VL_RAND_RESET_I(1);
}
