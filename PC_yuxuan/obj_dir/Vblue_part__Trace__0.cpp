// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblue_part__Syms.h"


void Vblue_part___024root__trace_chg_sub_0(Vblue_part___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vblue_part___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_chg_top_0\n"); );
    // Init
    Vblue_part___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblue_part___024root*>(voidSelf);
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vblue_part___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vblue_part___024root__trace_chg_sub_0(Vblue_part___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->PCsrc));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->rst));
    bufp->chgIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->chgIData(oldp+4,(vlSelf->PC),32);
}

void Vblue_part___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_cleanup\n"); );
    // Init
    Vblue_part___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblue_part___024root*>(voidSelf);
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
