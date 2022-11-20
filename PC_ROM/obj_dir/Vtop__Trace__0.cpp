// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__mem__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__mem__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__mem__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__mem__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__mem__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__mem__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__mem__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__mem__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__mem__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__mem__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__mem__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__mem__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__mem__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__mem__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__mem__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__mem__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__mem__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__mem__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__mem__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__mem__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__mem__DOT__rom_array[20]),8);
    }
    bufp->chgBit(oldp+21,(vlSelf->PCsrc));
    bufp->chgBit(oldp+22,(vlSelf->clk));
    bufp->chgBit(oldp+23,(vlSelf->rst));
    bufp->chgIData(oldp+24,(vlSelf->ImmOp),32);
    bufp->chgIData(oldp+25,(vlSelf->RD),32);
    bufp->chgIData(oldp+26,(vlSelf->top__DOT__A),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
