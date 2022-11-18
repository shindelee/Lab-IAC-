// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vblue_part__Syms.h"


VL_ATTR_COLD void Vblue_part___024root__trace_init_sub__TOP__0(Vblue_part___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("blue_part ");
    tracep->declBus(c+6,"address_width", false,-1, 31,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBit(c+7,"next_pc", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vblue_part___024root__trace_init_top(Vblue_part___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_init_top\n"); );
    // Body
    Vblue_part___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vblue_part___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblue_part___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vblue_part___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vblue_part___024root__trace_register(Vblue_part___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vblue_part___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vblue_part___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vblue_part___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vblue_part___024root__trace_full_sub_0(Vblue_part___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vblue_part___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_full_top_0\n"); );
    // Init
    Vblue_part___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblue_part___024root*>(voidSelf);
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vblue_part___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vblue_part___024root__trace_full_sub_0(Vblue_part___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vblue_part___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->PCsrc));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->rst));
    bufp->fullIData(oldp+4,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+5,(vlSelf->PC),32);
    bufp->fullIData(oldp+6,(0x20U),32);
    bufp->fullBit(oldp+7,(vlSelf->blue_part__DOT__next_pc));
}
