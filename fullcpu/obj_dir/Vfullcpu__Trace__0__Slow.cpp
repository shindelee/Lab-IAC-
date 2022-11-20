// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfullcpu__Syms.h"


VL_ATTR_COLD void Vfullcpu___024root__trace_init_sub__TOP__0(Vfullcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("fullcpu ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->declBit(c+78,"PCsrc", false,-1);
    tracep->declBus(c+73,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+29,"Instr", false,-1, 31,0);
    tracep->declBit(c+74,"EQ", false,-1);
    tracep->declBit(c+30,"RegWrite", false,-1);
    tracep->declBus(c+79,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+78,"ALUsrc", false,-1);
    tracep->declBit(c+75,"ImmSrc", false,-1);
    tracep->pushNamePrefix("blue ");
    tracep->declBus(c+77,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"DATAOUT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+78,"PCsrc", false,-1);
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+73,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+29,"RD", false,-1, 31,0);
    tracep->declBus(c+31,"A", false,-1, 31,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+77,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"DATAOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"A", false,-1, 31,0);
    tracep->declBus(c+29,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+77,"address_width", false,-1, 31,0);
    tracep->declBit(c+78,"PCsrc", false,-1);
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBit(c+71,"rst", false,-1);
    tracep->declBus(c+73,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+31,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+81,"address_width", false,-1, 31,0);
    tracep->declBus(c+32,"instr", false,-1, 6,0);
    tracep->declBit(c+74,"EQ", false,-1);
    tracep->declBit(c+30,"RegWrite", false,-1);
    tracep->declBus(c+79,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+78,"ALUsrc", false,-1);
    tracep->declBit(c+75,"ImmSrc", false,-1);
    tracep->declBit(c+78,"PCsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signextend ");
    tracep->declBus(c+77,"address_width", false,-1, 31,0);
    tracep->declBus(c+29,"instr", false,-1, 31,0);
    tracep->declBit(c+75,"ImmSrc", false,-1);
    tracep->declBus(c+73,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("topregalu ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBus(c+33,"rs1", false,-1, 4,0);
    tracep->declBus(c+34,"rs2", false,-1, 4,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declBit(c+30,"RegWrite", false,-1);
    tracep->declBit(c+78,"ALUsrc", false,-1);
    tracep->declBus(c+79,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+73,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+74,"eq", false,-1);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    tracep->declBus(c+76,"ALUout", false,-1, 31,0);
    tracep->declBus(c+36,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+73,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+37,"regOp2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+73,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+79,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+74,"eq", false,-1);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX ");
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"d0", false,-1, 31,0);
    tracep->declBus(c+73,"d1", false,-1, 31,0);
    tracep->declBit(c+78,"s", false,-1);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+82,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+77,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+70,"clk", false,-1);
    tracep->declBus(c+33,"addr1", false,-1, 4,0);
    tracep->declBus(c+34,"addr2", false,-1, 4,0);
    tracep->declBus(c+35,"addr3", false,-1, 4,0);
    tracep->declBit(c+30,"we3", false,-1);
    tracep->declBus(c+76,"wd3", false,-1, 31,0);
    tracep->declBus(c+36,"rd1", false,-1, 31,0);
    tracep->declBus(c+37,"rd2", false,-1, 31,0);
    tracep->declBus(c+72,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+38+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vfullcpu___024root__trace_init_top(Vfullcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullcpu___024root__trace_init_top\n"); );
    // Body
    Vfullcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfullcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfullcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfullcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfullcpu___024root__trace_register(Vfullcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfullcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfullcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfullcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfullcpu___024root__trace_full_sub_0(Vfullcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfullcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullcpu___024root__trace_full_top_0\n"); );
    // Init
    Vfullcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfullcpu___024root*>(voidSelf);
    Vfullcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfullcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfullcpu___024root__trace_full_sub_0(Vfullcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->fullcpu__DOT__blue__DOT__mem__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->fullcpu__DOT__Instr),32);
    bufp->fullBit(oldp+30,(vlSelf->fullcpu__DOT__RegWrite));
    bufp->fullIData(oldp+31,(vlSelf->fullcpu__DOT__blue__DOT__A),32);
    bufp->fullCData(oldp+32,((0x7fU & vlSelf->fullcpu__DOT__Instr)),7);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->fullcpu__DOT__Instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->fullcpu__DOT__Instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->fullcpu__DOT__Instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+36,(vlSelf->fullcpu__DOT__topregalu__DOT__ALUop1),32);
    bufp->fullIData(oldp+37,(((0U == (0x1fU & (vlSelf->fullcpu__DOT__Instr 
                                               >> 0x14U)))
                               ? 0U : vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array
                              [(0x1fU & (vlSelf->fullcpu__DOT__Instr 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+38,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+39,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+40,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+41,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+42,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+43,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+44,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+45,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+46,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+47,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+48,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+49,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+50,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+51,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+52,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+53,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+54,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+55,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+56,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+57,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+58,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+59,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+60,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+61,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+62,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+63,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+64,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+65,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+66,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+67,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+68,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+69,(vlSelf->fullcpu__DOT__topregalu__DOT__RegFile__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+70,(vlSelf->clk));
    bufp->fullBit(oldp+71,(vlSelf->rst));
    bufp->fullIData(oldp+72,(vlSelf->a0),32);
    bufp->fullIData(oldp+73,(vlSelf->fullcpu__DOT__ImmOp),32);
    bufp->fullBit(oldp+74,((vlSelf->fullcpu__DOT__topregalu__DOT__ALUop1 
                            == vlSelf->fullcpu__DOT__ImmOp)));
    bufp->fullBit(oldp+75,(vlSelf->fullcpu__DOT__ImmSrc));
    bufp->fullIData(oldp+76,((vlSelf->fullcpu__DOT__topregalu__DOT__ALUop1 
                              + vlSelf->fullcpu__DOT__ImmOp)),32);
    bufp->fullIData(oldp+77,(0x20U),32);
    bufp->fullBit(oldp+78,(1U));
    bufp->fullCData(oldp+79,(0U),3);
    bufp->fullIData(oldp+80,(8U),32);
    bufp->fullIData(oldp+81,(7U),32);
    bufp->fullIData(oldp+82,(5U),32);
}
