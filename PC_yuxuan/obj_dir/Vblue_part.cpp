// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vblue_part.h"
#include "Vblue_part__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vblue_part::Vblue_part(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vblue_part__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , rst{vlSymsp->TOP.rst}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , PC{vlSymsp->TOP.PC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vblue_part::Vblue_part(const char* _vcname__)
    : Vblue_part(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vblue_part::~Vblue_part() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vblue_part___024root___eval_initial(Vblue_part___024root* vlSelf);
void Vblue_part___024root___eval_settle(Vblue_part___024root* vlSelf);
void Vblue_part___024root___eval(Vblue_part___024root* vlSelf);
#ifdef VL_DEBUG
void Vblue_part___024root___eval_debug_assertions(Vblue_part___024root* vlSelf);
#endif  // VL_DEBUG
void Vblue_part___024root___final(Vblue_part___024root* vlSelf);

static void _eval_initial_loop(Vblue_part__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vblue_part___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vblue_part___024root___eval_settle(&(vlSymsp->TOP));
        Vblue_part___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vblue_part::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vblue_part::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vblue_part___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vblue_part___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vblue_part::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vblue_part::final() {
    Vblue_part___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vblue_part::hierName() const { return vlSymsp->name(); }
const char* Vblue_part::modelName() const { return "Vblue_part"; }
unsigned Vblue_part::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vblue_part::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vblue_part___024root__trace_init_top(Vblue_part___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vblue_part___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vblue_part___024root*>(voidSelf);
    Vblue_part__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vblue_part___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vblue_part___024root__trace_register(Vblue_part___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vblue_part::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vblue_part___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
