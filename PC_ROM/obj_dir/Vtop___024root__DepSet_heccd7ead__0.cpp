// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__A = ((IData)(vlSelf->rst) ? 0U
                            : ((IData)(vlSelf->PCsrc)
                                ? (vlSelf->top__DOT__A 
                                   + vlSelf->ImmOp)
                                : ((IData)(4U) + vlSelf->top__DOT__A)));
    vlSelf->RD = ((((0x14U >= (0x1fU & vlSelf->top__DOT__A))
                     ? vlSelf->top__DOT__mem__DOT__rom_array
                    [(0x1fU & vlSelf->top__DOT__A)]
                     : 0U) << 0x18U) | ((((0x14U >= 
                                           (0x1fU & 
                                            ((IData)(1U) 
                                             + vlSelf->top__DOT__A)))
                                           ? vlSelf->top__DOT__mem__DOT__rom_array
                                          [(0x1fU & 
                                            ((IData)(1U) 
                                             + vlSelf->top__DOT__A))]
                                           : 0U) << 0x10U) 
                                        | ((((0x14U 
                                              >= (0x1fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->top__DOT__A)))
                                              ? vlSelf->top__DOT__mem__DOT__rom_array
                                             [(0x1fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__A))]
                                              : 0U) 
                                            << 8U) 
                                           | ((0x14U 
                                               >= (0x1fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->top__DOT__A)))
                                               ? vlSelf->top__DOT__mem__DOT__rom_array
                                              [(0x1fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->top__DOT__A))]
                                               : 0U))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
