// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha95b73db__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_ha95b73db__0[0U] = 0x2e6d656dU;
    __Vtemp_ha95b73db__0[1U] = 0x65737431U;
    __Vtemp_ha95b73db__0[2U] = 0x74U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_ha95b73db__0)
                 ,  &(vlSelf->top__DOT__mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->RD = ((vlSelf->top__DOT__mem__DOT__rom_array
                   [vlSelf->top__DOT__A] << 0x18U) 
                  | ((vlSelf->top__DOT__mem__DOT__rom_array
                      [(0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__A)))] 
                      << 0x10U) | ((vlSelf->top__DOT__mem__DOT__rom_array
                                    [(0xffU & ((IData)(2U) 
                                               + (IData)(vlSelf->top__DOT__A)))] 
                                    << 8U) | vlSelf->top__DOT__mem__DOT__rom_array
                                   [(0xffU & ((IData)(3U) 
                                              + (IData)(vlSelf->top__DOT__A)))])));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(8);
    vlSelf->RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__A = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}
