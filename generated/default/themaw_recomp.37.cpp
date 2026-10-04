#include "themaw_funcs.37.h"

DEFINE_REX_FUNC(sub_820D24D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_820D24E0:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x820d24e0
	if (!ctx.cr0.eq) goto loc_820D24E0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d2534
	if (!ctx.cr6.eq) goto loc_820D2534;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d2520
	if (ctx.cr6.eq) goto loc_820D2520;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D2520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D2520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820D2534:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D9EF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,9108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// addis r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 983040;
	// addi r10,r10,-23864
	ctx.r10.s64 = ctx.r10.s64 + -23864;
	// lwz r11,2304(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 2304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2304(r10)
	REX_STORE_U32(ctx.r10.u32 + 2304, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DA208) {
	REX_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DA2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82266998
	ctx.lr = 0x820DA308;
	sub_82266998(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82266998
	ctx.lr = 0x820DA320;
	sub_82266998(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82266998
	ctx.lr = 0x820DA338;
	sub_82266998(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82266998
	ctx.lr = 0x820DA350;
	sub_82266998(ctx, base);
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82266998
	ctx.lr = 0x820DA368;
	sub_82266998(ctx, base);
	// stw r3,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r7,r10,-23552
	ctx.r7.s64 = ctx.r10.s64 + -23552;
	// addi r4,r9,20584
	ctx.r4.s64 = ctx.r9.s64 + 20584;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,9108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da268
	ctx.lr = 0x820DA394;
	sub_820DA268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DF710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820df368
	ctx.lr = 0x820DF744;
	sub_820DF368(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E0C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// bl 0x820e0af8
	ctx.lr = 0x820E0C24;
	sub_820E0AF8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E1B08) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820E1B20:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820e1b40
	if (ctx.cr6.eq) goto loc_820E1B40;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e1b20
	if (!ctx.cr6.eq) goto loc_820E1B20;
	// blr 
	return;
loc_820E1B40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1b64
	if (ctx.cr6.eq) goto loc_820E1B64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_820E1B64:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E2ED0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x825d1138
	ctx.lr = 0x820E2EFC;
	sub_825D1138(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fsubs f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8492);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f1,f9,f12,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f31.f64)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6A10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// bne 0x820e6a78
	if (!ctx.cr0.eq) goto loc_820E6A78;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// addi r30,r11,30260
	ctx.r30.s64 = ctx.r11.s64 + 30260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x820E6A48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r10,30384
	ctx.r5.s64 = ctx.r10.s64 + 30384;
	// bl 0x821ed8b0
	ctx.lr = 0x820E6A5C;
	sub_821ED8B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x821f0430
	ctx.lr = 0x820E6A70;
	sub_821F0430(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x820E6A78;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_820E6A78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820ED478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x820ED480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820ed3d8
	ctx.lr = 0x820ED4A0;
	sub_820ED3D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed570
	if (ctx.cr6.eq) goto loc_820ED570;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq cr6,0x820ed570
	if (ctx.cr6.eq) goto loc_820ED570;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ed570
	if (ctx.cr6.eq) goto loc_820ED570;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ed570
	if (ctx.cr6.eq) goto loc_820ED570;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ed570
	if (ctx.cr6.eq) goto loc_820ED570;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// lwz r7,256(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
	// lwz r5,268(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 268);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r31,264(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r30,300(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 300);
	// rlwinm r8,r9,28,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3FFF;
	// andc r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// lwz r29,296(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 296);
	// and r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r28,r9,31,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r4,r4,31348
	ctx.r4.s64 = ctx.r4.s64 + 31348;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// andc r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// rlwinm r9,r9,17,15,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFF8;
	// and r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 & ctx.r11.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r4,r28,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r4.u32);
	// andc r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// or r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 | ctx.r5.u64;
	// and r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 & ctx.r11.u64;
	// stbx r6,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcuxwfp128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r4,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFF0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stvewx128 v62,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
loc_820ED570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F35F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x820ea198
	ctx.lr = 0x820F3610;
	sub_820EA198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f362c
	if (ctx.cr6.eq) goto loc_820F362C;
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F362C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,9868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4CC8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bge cr6,0x820f4cdc
	if (!ctx.cr6.lt) goto loc_820F4CDC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,292(r3)
	REX_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// blr 
	return;
loc_820F4CDC:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// ble cr6,0x820f4cf0
	if (!ctx.cr6.gt) goto loc_820F4CF0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,292(r3)
	REX_STORE_U8(ctx.r3.u32 + 292, ctx.r11.u8);
	// blr 
	return;
loc_820F4CF0:
	// stb r4,292(r3)
	REX_STORE_U8(ctx.r3.u32 + 292, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F6F08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,31940
	ctx.r3.s64 = ctx.r11.s64 + 31940;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F6FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x820F6FB8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r27,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82210330
	ctx.lr = 0x820F6FF0;
	sub_82210330(ctx, base);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r9,-3728
	ctx.r3.s64 = ctx.r9.s64 + -3728;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r8,20600(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20600);
	// li r4,77
	ctx.r4.s64 = 77;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F7014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82210408
	ctx.lr = 0x820F7028;
	sub_82210408(ctx, base);
	// lis r7,5461
	ctx.r7.s64 = 357892096;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// ori r6,r7,21845
	ctx.r6.u64 = ctx.r7.u64 | 21845;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x820f7054
	if (ctx.cr6.gt) goto loc_820F7054;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820f7058
	goto loc_820F7058;
loc_820F7054:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F7058:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x820F7060;
	sub_825D0430(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d6870
	ctx.lr = 0x820F707C;
	sub_825D6870(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// ble cr6,0x820f7330
	if (!ctx.cr6.gt) goto loc_820F7330;
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// lis r4,-2
	ctx.r4.s64 = -131072;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// ori r21,r5,768
	ctx.r21.u64 = ctx.r5.u64 | 768;
	// ori r14,r4,768
	ctx.r14.u64 = ctx.r4.u64 | 768;
	// addi r19,r11,5524
	ctx.r19.s64 = ctx.r11.s64 + 5524;
	// addi r18,r10,5540
	ctx.r18.s64 = ctx.r10.s64 + 5540;
	// addi r24,r9,5364
	ctx.r24.s64 = ctx.r9.s64 + 5364;
	// addi r20,r8,32092
	ctx.r20.s64 = ctx.r8.s64 + 32092;
	// addi r23,r7,32076
	ctx.r23.s64 = ctx.r7.s64 + 32076;
	// addi r17,r6,32068
	ctx.r17.s64 = ctx.r6.s64 + 32068;
loc_820F70E0:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 24);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwzx r26,r11,r16
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x825d16d0
	ctx.lr = 0x820F70F4;
	sub_825D16D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f7104
	if (!ctx.cr6.eq) goto loc_820F7104;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_820F7104:
	// lwz r3,9108(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 9108);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r30,9108(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 9108);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r8,388(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x820f714c
	if (ctx.cr6.lt) goto loc_820F714C;
	// lwz r11,380(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 380);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bge cr6,0x820f7150
	if (!ctx.cr6.lt) goto loc_820F7150;
loc_820F714C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820F7150:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f7184
	if (!ctx.cr6.eq) goto loc_820F7184;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r30,9108(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 9108);
	// stwx r3,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r3.u32);
loc_820F7184:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f71d4
	if (!ctx.cr6.eq) goto loc_820F71D4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8220bac8
	ctx.lr = 0x820F719C;
	sub_8220BAC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,4
	ctx.r4.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x820f71c0
	if (!ctx.cr6.eq) goto loc_820F71C0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_820F71C0:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F71C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r30,9108(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 9108);
	// stwx r3,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r3.u32);
loc_820F71D4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f7318
	if (!ctx.cr6.gt) goto loc_820F7318;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_820F71E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820F71FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq cr6,0x820f7220
	if (ctx.cr6.eq) goto loc_820F7220;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f71fc
	if (ctx.cr6.eq) goto loc_820F71FC;
loc_820F7220:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f7290
	if (!ctx.cr6.eq) goto loc_820F7290;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820fa748
	ctx.lr = 0x820F723C;
	sub_820FA748(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820f72e4
	if (!ctx.cr6.eq) goto loc_820F72E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r30,9108(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 9108);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// b 0x820f72e4
	goto loc_820F72E4;
loc_820F7290:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820F7298:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x820f72bc
	if (ctx.cr6.eq) goto loc_820F72BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f7298
	if (ctx.cr6.eq) goto loc_820F7298;
loc_820F72BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f72e4
	if (!ctx.cr6.eq) goto loc_820F72E4;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820fa748
	ctx.lr = 0x820F72D8;
	sub_820FA748(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r3,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
loc_820F72E4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f71e8
	if (ctx.cr6.lt) goto loc_820F71E8;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7314
	if (ctx.cr6.eq) goto loc_820F7314;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x820ea9d8
	ctx.lr = 0x820F7314;
	sub_820EA9D8(ctx, base);
loc_820F7314:
	// lwz r27,292(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_820F7318:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r15,r11
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f70e0
	if (ctx.cr6.lt) goto loc_820F70E0;
loc_820F7330:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7364
	if (ctx.cr6.eq) goto loc_820F7364;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f7354
	if (ctx.cr6.eq) goto loc_820F7354;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820f7364
	goto loc_820F7364;
loc_820F7354:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f7364
	if (ctx.cr6.eq) goto loc_820F7364;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820F7364:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820F7380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f73b0
	if (ctx.cr6.eq) goto loc_820F73B0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820f73ac
	if (ctx.cr6.eq) goto loc_820F73AC;
	// lwz r26,12(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x820f73b0
	goto loc_820F73B0;
loc_820F73AC:
	// lwz r26,20(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_820F73B0:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f73c0
	if (ctx.cr6.eq) goto loc_820F73C0;
	// lwz r27,4(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_820F73C0:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f73d0
	if (ctx.cr6.eq) goto loc_820F73D0;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_820F73D0:
	// lis r11,963
	ctx.r11.s64 = 63111168;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// ori r10,r11,50115
	ctx.r10.u64 = ctx.r11.u64 | 50115;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820f73f8
	if (ctx.cr6.gt) goto loc_820F73F8;
	// mulli r11,r30,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(68));
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x820f73fc
	if (!ctx.cr6.gt) goto loc_820F73FC;
loc_820F73F8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820F73FC:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x820F7404;
	sub_825D0430(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,9868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820f74ac
	if (ctx.cr6.eq) goto loc_820F74AC;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// blt 0x820f74a4
	if (ctx.cr0.lt) goto loc_820F74A4;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r8,r8,13004
	ctx.r8.s64 = ctx.r8.s64 + 13004;
	// addi r7,r7,32120
	ctx.r7.s64 = ctx.r7.s64 + 32120;
	// addi r6,r6,32104
	ctx.r6.s64 = ctx.r6.s64 + 32104;
loc_820F744C:
	// stw r25,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r25.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r25,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r25,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// addi r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 + 68;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
	// stw r25,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// stw r25,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r25.u32);
	// stw r25,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// stw r25,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r25.u32);
	// stw r5,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// stw r25,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// stw r25,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r25.u32);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// bge 0x820f744c
	if (!ctx.cr0.lt) goto loc_820F744C;
loc_820F74A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x820f74b0
	goto loc_820F74B0;
loc_820F74AC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820F74B0:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820f7558
	if (!ctx.cr6.gt) goto loc_820F7558;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
loc_820F74CC:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820f74f4
	if (!ctx.cr6.lt) goto loc_820F74F4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820f74f8
	goto loc_820F74F8;
loc_820F74F4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_820F74F8:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8220bab0
	ctx.lr = 0x820F7518;
	sub_8220BAB0(ctx, base);
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x820f7dd0
	ctx.lr = 0x820F7540;
	sub_820F7DD0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820f74cc
	if (ctx.cr6.lt) goto loc_820F74CC;
loc_820F7558:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f75ec
	if (!ctx.cr6.gt) goto loc_820F75EC;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
loc_820F7580:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f75d8
	if (ctx.cr6.eq) goto loc_820F75D8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820f75a4
	if (ctx.cr6.eq) goto loc_820F75A4;
	// lwz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x820f75ac
	if (!ctx.cr6.gt) goto loc_820F75AC;
loc_820F75A4:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_820F75AC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820f75c8
	if (ctx.cr6.eq) goto loc_820F75C8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820f75d4
	if (!ctx.cr6.gt) goto loc_820F75D4;
loc_820F75C8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_820F75D4:
	// li r8,1
	ctx.r8.s64 = 1;
loc_820F75D8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f7580
	if (ctx.cr6.lt) goto loc_820F7580;
loc_820F75EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r31,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// lwz r11,9108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// lwz r9,488(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82125F00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,23696
	ctx.r7.s64 = ctx.r8.s64 + 23696;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-17428
	ctx.r4.s64 = ctx.r9.s64 + -17428;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8216a978
	ctx.lr = 0x82125F54;
	sub_8216A978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82127578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x821714b0
	ctx.lr = 0x821275B8;
	sub_821714B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130FE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82130FE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r29,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r29,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82172518
	ctx.lr = 0x82131024;
	sub_82172518(ctx, base);
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-16940
	ctx.r8.s64 = ctx.r9.s64 + -16940;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82172600
	ctx.lr = 0x8213103C;
	sub_82172600(ctx, base);
	// lis r7,-32148
	ctx.r7.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r7,-16916
	ctx.r6.s64 = ctx.r7.s64 + -16916;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82172600
	ctx.lr = 0x82131054;
	sub_82172600(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-3576
	ctx.r4.s64 = ctx.r4.s64 + -3576;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82171eb0
	ctx.lr = 0x82131070;
	sub_82171EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d3f98
	ctx.lr = 0x8213107C;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821310ac
	if (ctx.cr6.eq) goto loc_821310AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821310a8
	if (ctx.cr6.eq) goto loc_821310A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821310A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821310A8:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_821310AC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r11,-3408
	ctx.r10.s64 = ctx.r11.s64 + -3408;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bne cr6,0x821310dc
	if (!ctx.cr6.eq) goto loc_821310DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82131104
	goto loc_82131104;
loc_821310DC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821310E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821310e0
	if (!ctx.cr6.eq) goto loc_821310E0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x82131104;
	sub_821ED6F0(ctx, base);
loc_82131104:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x821f6d78
	ctx.lr = 0x8213111C;
	sub_821F6D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821311ac
	if (!ctx.cr6.eq) goto loc_821311AC;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821311ac
	if (ctx.cr6.eq) goto loc_821311AC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x82131150;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821311ac
	if (ctx.cr6.eq) goto loc_821311AC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82131164;
	sub_821ED688(ctx, base);
	// cmplwi cr6,r3,4919
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4919, ctx.xer);
	// bne cr6,0x821311a0
	if (!ctx.cr6.eq) goto loc_821311A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x8213117C;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821311a0
	if (ctx.cr6.eq) goto loc_821311A0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82131190;
	sub_821ED688(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821311A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821311AC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82131300
	if (!ctx.cr6.eq) goto loc_82131300;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821311e0
	if (!ctx.cr6.eq) goto loc_821311E0;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82131208
	goto loc_82131208;
loc_821311E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821311E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821311e4
	if (!ctx.cr6.eq) goto loc_821311E4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x82131208;
	sub_821ED6F0(ctx, base);
loc_82131208:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee350
	ctx.lr = 0x82131214;
	sub_821EE350(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82131234
	if (ctx.cr6.eq) goto loc_82131234;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_82131234:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ld r9,-16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x821e4310
	ctx.lr = 0x82131260;
	sub_821E4310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206798
	ctx.lr = 0x82131268;
	sub_82206798(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x821f2d18
	ctx.lr = 0x82131278;
	sub_821F2D18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x821edcd8
	ctx.lr = 0x821312A8;
	sub_821EDCD8(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,4919
	ctx.r8.s64 = 4919;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r7,30464
	ctx.r4.s64 = ctx.r7.s64 + 30464;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x821ed7d8
	ctx.lr = 0x821312D8;
	sub_821ED7D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// addi r5,r10,-32
	ctx.r5.s64 = ctx.r10.s64 + -32;
	// bl 0x821f6ed8
	ctx.lr = 0x821312F4;
	sub_821F6ED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82131300:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82207528
	ctx.lr = 0x8213130C;
	sub_82207528(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213dc80
	ctx.lr = 0x82131314;
	sub_8213DC80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213E370) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82175230
	sub_82175230(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213E580) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82175ab0
	sub_82175AB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213EC88) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821769c0
	sub_821769C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213F1B8) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8217e5a8
	sub_8217E5A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213F568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8213F570;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8213F580;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213f5d0
	if (ctx.cr6.eq) goto loc_8213F5D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213f5d0
	if (!ctx.cr6.eq) goto loc_8213F5D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8213F5A0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8213F5AC;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213f5f4
	if (ctx.cr6.eq) goto loc_8213F5F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213f5f4
	if (!ctx.cr6.eq) goto loc_8213F5F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8213F5D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182150
	ctx.lr = 0x8213F5DC;
	sub_82182150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8213f5a0
	if (!ctx.cr6.lt) goto loc_8213F5A0;
loc_8213F5E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8213F5F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181b08
	ctx.lr = 0x8213F600;
	sub_82181B08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213f5e8
	if (ctx.cr6.lt) goto loc_8213F5E8;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82147070) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,11416
	ctx.r9.s64 = ctx.r11.s64 + 11416;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,11432
	ctx.r4.s64 = ctx.r8.s64 + 11432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171eb0
	ctx.lr = 0x821470BC;
	sub_82171EB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d3f98
	ctx.lr = 0x821470C8;
	sub_821D3F98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821470f8
	if (ctx.cr6.eq) goto loc_821470F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821470f4
	if (ctx.cr6.eq) goto loc_821470F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821470F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821470F4:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_821470F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201e48
	ctx.lr = 0x8214710C;
	sub_82201E48(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147138
	if (ctx.cr6.eq) goto loc_82147138;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147138
	if (ctx.cr6.eq) goto loc_82147138;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147138:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x8214A470;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// bl 0x82172518
	ctx.lr = 0x8214A4B4;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-17112
	ctx.r9.s64 = ctx.r10.s64 + -17112;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x8214A4CC;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r30,r11,19628
	ctx.r30.s64 = ctx.r11.s64 + 19628;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r11,20648(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20648);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8214a514
	if (!ctx.cr6.eq) goto loc_8214A514;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10560
	ctx.r9.s64 = ctx.r9.s64 + -10560;
	// addi r8,r8,-10392
	ctx.r8.s64 = ctx.r8.s64 + -10392;
	// stw r11,20648(r10)
	REX_STORE_U32(ctx.r10.u32 + 20648, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8214A514:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8214A520;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a53c
	if (!ctx.cr6.eq) goto loc_8214A53C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x8214a540
	goto loc_8214A540;
loc_8214A53C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8214A540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a554
	if (!ctx.cr6.eq) goto loc_8214A554;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8214A554:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x8214A560;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a590
	if (ctx.cr6.eq) goto loc_8214A590;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a58c
	if (ctx.cr6.eq) goto loc_8214A58C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214A58C:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8214A590:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,14616
	ctx.r30.s64 = ctx.r11.s64 + 14616;
	// lwz r11,15468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15468);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8214a5d0
	if (!ctx.cr6.eq) goto loc_8214A5D0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10232
	ctx.r9.s64 = ctx.r9.s64 + -10232;
	// addi r8,r8,-10208
	ctx.r8.s64 = ctx.r8.s64 + -10208;
	// stw r11,15468(r10)
	REX_STORE_U32(ctx.r10.u32 + 15468, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8214A5D0:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8214A5DC;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a5f8
	if (!ctx.cr6.eq) goto loc_8214A5F8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x8214a5fc
	goto loc_8214A5FC;
loc_8214A5F8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8214A5FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a610
	if (!ctx.cr6.eq) goto loc_8214A610;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8214A610:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x8214A61C;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a64c
	if (ctx.cr6.eq) goto loc_8214A64C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214a648
	if (ctx.cr6.eq) goto loc_8214A648;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214A648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214A648:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8214A64C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x8214A65C;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8214A664;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82156510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82156518;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r31,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// bl 0x82172518
	ctx.lr = 0x82156558;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-16336
	ctx.r9.s64 = ctx.r10.s64 + -16336;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x82156570;
	sub_82172600(ctx, base);
	// lis r8,-32148
	ctx.r8.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r8,-17264
	ctx.r30.s64 = ctx.r8.s64 + -17264;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82172600
	ctx.lr = 0x82156588;
	sub_82172600(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82172600
	ctx.lr = 0x82156598;
	sub_82172600(ctx, base);
	// lis r7,-32148
	ctx.r7.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r7,-17216
	ctx.r30.s64 = ctx.r7.s64 + -17216;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82172600
	ctx.lr = 0x821565B0;
	sub_82172600(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82172600
	ctx.lr = 0x821565C0;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r30,r11,17100
	ctx.r30.s64 = ctx.r11.s64 + 17100;
	// stw r6,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// lwz r11,17996(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17996);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82156608
	if (!ctx.cr6.eq) goto loc_82156608;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27328
	ctx.r9.s64 = ctx.r9.s64 + 27328;
	// addi r8,r8,27352
	ctx.r8.s64 = ctx.r8.s64 + 27352;
	// stw r11,17996(r10)
	REX_STORE_U32(ctx.r10.u32 + 17996, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82156608:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82156614;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156630
	if (!ctx.cr6.eq) goto loc_82156630;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82156634
	goto loc_82156634;
loc_82156630:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82156634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156648
	if (!ctx.cr6.eq) goto loc_82156648;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82156648:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82156654;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156684
	if (ctx.cr6.eq) goto loc_82156684;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156680
	if (ctx.cr6.eq) goto loc_82156680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82156680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82156680:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82156684:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,16076
	ctx.r30.s64 = ctx.r11.s64 + 16076;
	// lwz r11,16316(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16316);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821566c4
	if (!ctx.cr6.eq) goto loc_821566C4;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27512
	ctx.r9.s64 = ctx.r9.s64 + 27512;
	// addi r8,r8,27536
	ctx.r8.s64 = ctx.r8.s64 + 27536;
	// stw r11,16316(r10)
	REX_STORE_U32(ctx.r10.u32 + 16316, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_821566C4:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x821566D0;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821566ec
	if (!ctx.cr6.eq) goto loc_821566EC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x821566f0
	goto loc_821566F0;
loc_821566EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821566F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156704
	if (!ctx.cr6.eq) goto loc_82156704;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82156704:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x82156710;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156740
	if (ctx.cr6.eq) goto loc_82156740;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215673c
	if (ctx.cr6.eq) goto loc_8215673C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215673C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215673C:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82156740:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-22384
	ctx.r4.s64 = ctx.r11.s64 + -22384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x82156754;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8215675C;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82164088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82164090;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r31,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r31,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// bl 0x82172518
	ctx.lr = 0x821640D0;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-18588
	ctx.r9.s64 = ctx.r10.s64 + -18588;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x821640E8;
	sub_82172600(ctx, base);
	// lis r8,-32148
	ctx.r8.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,-17252
	ctx.r7.s64 = ctx.r8.s64 + -17252;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82172600
	ctx.lr = 0x82164100;
	sub_82172600(ctx, base);
	// lis r6,-32148
	ctx.r6.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,-17264
	ctx.r5.s64 = ctx.r6.s64 + -17264;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x82172600
	ctx.lr = 0x82164118;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r30,r11,20960
	ctx.r30.s64 = ctx.r11.s64 + 20960;
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// lwz r11,21312(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21312);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82164160
	if (!ctx.cr6.eq) goto loc_82164160;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,4424
	ctx.r9.s64 = ctx.r9.s64 + 4424;
	// addi r8,r8,4624
	ctx.r8.s64 = ctx.r8.s64 + 4624;
	// stw r11,21312(r10)
	REX_STORE_U32(ctx.r10.u32 + 21312, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82164160:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8216416C;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164188
	if (!ctx.cr6.eq) goto loc_82164188;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x8216418c
	goto loc_8216418C;
loc_82164188:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216418C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821641a0
	if (!ctx.cr6.eq) goto loc_821641A0;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_821641A0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x821641AC;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821641dc
	if (ctx.cr6.eq) goto loc_821641DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821641d8
	if (ctx.cr6.eq) goto loc_821641D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821641D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821641D8:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_821641DC:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,18796
	ctx.r30.s64 = ctx.r11.s64 + 18796;
	// lwz r11,20232(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216421c
	if (!ctx.cr6.eq) goto loc_8216421C;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,4784
	ctx.r9.s64 = ctx.r9.s64 + 4784;
	// addi r8,r8,4808
	ctx.r8.s64 = ctx.r8.s64 + 4808;
	// stw r11,20232(r10)
	REX_STORE_U32(ctx.r10.u32 + 20232, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8216421C:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82164228;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82164244
	if (!ctx.cr6.eq) goto loc_82164244;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82164248
	goto loc_82164248;
loc_82164244:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82164248:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216425c
	if (!ctx.cr6.eq) goto loc_8216425C;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8216425C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x82164268;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164298
	if (ctx.cr6.eq) goto loc_82164298;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82164294
	if (ctx.cr6.eq) goto loc_82164294;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82164294;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82164294:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82164298:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-18972
	ctx.r4.s64 = ctx.r11.s64 + -18972;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x821642AC;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x821642B4;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82170810) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82170818;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r30,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stb r28,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r28.u8);
	// bl 0x82172518
	ctx.lr = 0x8217085C;
	sub_82172518(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r31,r11,20816
	ctx.r31.s64 = ctx.r11.s64 + 20816;
	// lwz r11,21240(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21240);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821708a0
	if (!ctx.cr6.eq) goto loc_821708A0;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22856
	ctx.r9.s64 = ctx.r9.s64 + -22856;
	// addi r8,r8,-20528
	ctx.r8.s64 = ctx.r8.s64 + -20528;
	// stw r11,21240(r10)
	REX_STORE_U32(ctx.r10.u32 + 21240, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_821708A0:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x821708AC;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821708c8
	if (!ctx.cr6.eq) goto loc_821708C8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x821708cc
	goto loc_821708CC;
loc_821708C8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821708CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821708e0
	if (!ctx.cr6.eq) goto loc_821708E0;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_821708E0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x821708EC;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217091c
	if (ctx.cr6.eq) goto loc_8217091C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82170918
	if (ctx.cr6.eq) goto loc_82170918;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82170918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82170918:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8217091C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,13888
	ctx.r31.s64 = ctx.r11.s64 + 13888;
	// lwz r11,15104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15104);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217095c
	if (!ctx.cr6.eq) goto loc_8217095C;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20368
	ctx.r9.s64 = ctx.r9.s64 + -20368;
	// addi r8,r8,-20200
	ctx.r8.s64 = ctx.r8.s64 + -20200;
	// stw r11,15104(r10)
	REX_STORE_U32(ctx.r10.u32 + 15104, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8217095C:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82170968;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82170984
	if (!ctx.cr6.eq) goto loc_82170984;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82170988
	goto loc_82170988;
loc_82170984:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82170988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217099c
	if (!ctx.cr6.eq) goto loc_8217099C;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_8217099C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x821709A8;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821709d8
	if (ctx.cr6.eq) goto loc_821709D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821709d4
	if (ctx.cr6.eq) goto loc_821709D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821709D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821709D4:
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_821709D8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-15260
	ctx.r4.s64 = ctx.r11.s64 + -15260;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82201f08
	ctx.lr = 0x821709EC;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x821709F4;
	sub_821D4310(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217ACE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8217ACF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r29,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 4;
	// bge cr6,0x8217ad38
	if (!ctx.cr6.lt) goto loc_8217AD38;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8217ad38
	if (ctx.cr6.eq) goto loc_8217AD38;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217ad78
	if (ctx.cr6.eq) goto loc_8217AD78;
loc_8217AD38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x8217AD44;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,31040
	ctx.r4.s64 = ctx.r10.s64 + 31040;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x8217AD60;
	sub_8220AB90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8217ad78
	if (!ctx.cr6.eq) goto loc_8217AD78;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1352
	ctx.r10.s64 = ctx.r11.s64 + -1352;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_8217AD78:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8217AD80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217fe90
	ctx.lr = 0x8217AD90;
	sub_8217FE90(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r29,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r29.u64;
	// beq cr6,0x8217adbc
	if (ctx.cr6.eq) goto loc_8217ADBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217ADBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217ADBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217EF38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x8217EF40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8217EF50;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217eff8
	if (ctx.cr6.eq) goto loc_8217EFF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217eff8
	if (!ctx.cr6.eq) goto loc_8217EFF8;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8217EF70:
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12003(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 12003);
	// bl 0x82181be0
	ctx.lr = 0x8217EF84;
	sub_82181BE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8217f010
	if (ctx.cr6.lt) goto loc_8217F010;
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r4,12003(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 12003);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181be0
	ctx.lr = 0x8217EFA0;
	sub_82181BE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8217f010
	if (ctx.cr6.lt) goto loc_8217F010;
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r4,12003(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 12003);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181be0
	ctx.lr = 0x8217EFBC;
	sub_82181BE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8217f010
	if (ctx.cr6.lt) goto loc_8217F010;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r4,12003(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 12003);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181be0
	ctx.lr = 0x8217EFD8;
	sub_82181BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8217f010
	if (ctx.cr6.lt) goto loc_8217F010;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_8217EFF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182228
	ctx.lr = 0x8217F004;
	sub_82182228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x8217ef70
	if (!ctx.cr6.lt) goto loc_8217EF70;
loc_8217F010:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821841E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82184268
	if (ctx.cr6.eq) goto loc_82184268;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82184230
	if (!ctx.cr6.eq) goto loc_82184230;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82184274
	if (ctx.cr6.eq) goto loc_82184274;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x82184274
	goto loc_82184274;
loc_82184230:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82184274
	if (ctx.cr6.eq) goto loc_82184274;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-11272
	ctx.r4.s64 = ctx.r11.s64 + -11272;
	// bl 0x825cf2a0
	ctx.lr = 0x82184248;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218425c
	if (ctx.cr6.eq) goto loc_8218425C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82184274
	goto loc_82184274;
loc_8218425C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82184274
	goto loc_82184274;
loc_82184268:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,-11272
	ctx.r10.s64 = ctx.r11.s64 + -11272;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82184274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821874C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82187540
	if (ctx.cr6.eq) goto loc_82187540;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82187508
	if (!ctx.cr6.eq) goto loc_82187508;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218754c
	if (ctx.cr6.eq) goto loc_8218754C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218754c
	goto loc_8218754C;
loc_82187508:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8218754c
	if (ctx.cr6.eq) goto loc_8218754C;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x825cf2a0
	ctx.lr = 0x82187520;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82187534
	if (ctx.cr6.eq) goto loc_82187534;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8218754c
	goto loc_8218754C;
loc_82187534:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218754c
	goto loc_8218754C;
loc_82187540:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8218754C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218AC58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8218AC7C;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218ac98
	if (ctx.cr6.eq) goto loc_8218AC98;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218acac
	if (ctx.cr6.eq) goto loc_8218ACAC;
loc_8218AC98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfc60
	ctx.lr = 0x8218ACA0;
	sub_821CFC60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x8218acb4
	if (!ctx.cr6.lt) goto loc_8218ACB4;
loc_8218ACAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8218acd8
	goto loc_8218ACD8;
loc_8218ACB4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8218ACC0;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218acac
	if (ctx.cr6.eq) goto loc_8218ACAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8218acac
	if (!ctx.cr6.eq) goto loc_8218ACAC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_8218ACD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E308) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8218e380
	if (ctx.cr6.eq) goto loc_8218E380;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8218e348
	if (!ctx.cr6.eq) goto loc_8218E348;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e38c
	if (ctx.cr6.eq) goto loc_8218E38C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218e38c
	goto loc_8218E38C;
loc_8218E348:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8218e38c
	if (ctx.cr6.eq) goto loc_8218E38C;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,13256
	ctx.r4.s64 = ctx.r11.s64 + 13256;
	// bl 0x825cf2a0
	ctx.lr = 0x8218E360;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e374
	if (ctx.cr6.eq) goto loc_8218E374;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8218e38c
	goto loc_8218E38C;
loc_8218E374:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218e38c
	goto loc_8218E38C;
loc_8218E380:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,13256
	ctx.r10.s64 = ctx.r11.s64 + 13256;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8218E38C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82192108;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r5,11986(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 11986);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r31,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 4;
	// bl 0x821c9fc8
	ctx.lr = 0x82192140;
	sub_821C9FC8(ctx, base);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82192148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,3
	ctx.r5.s64 = 3;
	// stfd f1,0(r6)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f1.u64);
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r3,r4,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r4.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// subf r31,r31,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r31.u64;
	// beq cr6,0x8219218c
	if (ctx.cr6.eq) goto loc_8219218C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8219218C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219218C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82195E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82195ea0
	if (ctx.cr6.eq) goto loc_82195EA0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82195e68
	if (!ctx.cr6.eq) goto loc_82195E68;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82195eac
	if (ctx.cr6.eq) goto loc_82195EAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82195eac
	goto loc_82195EAC;
loc_82195E68:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82195eac
	if (ctx.cr6.eq) goto loc_82195EAC;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,30880
	ctx.r4.s64 = ctx.r11.s64 + 30880;
	// bl 0x825cf2a0
	ctx.lr = 0x82195E80;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82195e94
	if (ctx.cr6.eq) goto loc_82195E94;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82195eac
	goto loc_82195EAC;
loc_82195E94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82195eac
	goto loc_82195EAC;
loc_82195EA0:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,30880
	ctx.r10.s64 = ctx.r11.s64 + 30880;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82195EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199B08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82199b80
	if (ctx.cr6.eq) goto loc_82199B80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82199b48
	if (!ctx.cr6.eq) goto loc_82199B48;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82199b8c
	if (ctx.cr6.eq) goto loc_82199B8C;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x82199b8c
	goto loc_82199B8C;
loc_82199B48:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82199b8c
	if (ctx.cr6.eq) goto loc_82199B8C;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-25640
	ctx.r4.s64 = ctx.r11.s64 + -25640;
	// bl 0x825cf2a0
	ctx.lr = 0x82199B60;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82199b74
	if (ctx.cr6.eq) goto loc_82199B74;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82199b8c
	goto loc_82199B8C;
loc_82199B74:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82199b8c
	goto loc_82199B8C;
loc_82199B80:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-25640
	ctx.r10.s64 = ctx.r11.s64 + -25640;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82199B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219D8F0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821be240
	sub_821BE240(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219DF48) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821be790
	sub_821BE790(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219E748) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821bef08
	sub_821BEF08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219EEE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8219EF0C;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219ef28
	if (ctx.cr6.eq) goto loc_8219EF28;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ef3c
	if (ctx.cr6.eq) goto loc_8219EF3C;
loc_8219EF28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d1d50
	ctx.lr = 0x8219EF30;
	sub_821D1D50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8219ef44
	if (!ctx.cr6.lt) goto loc_8219EF44;
loc_8219EF3C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8219ef64
	goto loc_8219EF64;
loc_8219EF44:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12002(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 12002);
	// bl 0x82181ce8
	ctx.lr = 0x8219EF58;
	sub_82181CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8219ef3c
	if (ctx.cr6.lt) goto loc_8219EF3C;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8219EF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2848) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x821a28c0
	if (ctx.cr6.eq) goto loc_821A28C0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821a2888
	if (!ctx.cr6.eq) goto loc_821A2888;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a28cc
	if (ctx.cr6.eq) goto loc_821A28CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a28cc
	goto loc_821A28CC;
loc_821A2888:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821a28cc
	if (ctx.cr6.eq) goto loc_821A28CC;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-6912
	ctx.r4.s64 = ctx.r11.s64 + -6912;
	// bl 0x825cf2a0
	ctx.lr = 0x821A28A0;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a28b4
	if (ctx.cr6.eq) goto loc_821A28B4;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821a28cc
	goto loc_821A28CC;
loc_821A28B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a28cc
	goto loc_821A28CC;
loc_821A28C0:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-6912
	ctx.r10.s64 = ctx.r11.s64 + -6912;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A28CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A63E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x821a6460
	if (ctx.cr6.eq) goto loc_821A6460;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821a6428
	if (!ctx.cr6.eq) goto loc_821A6428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a646c
	if (ctx.cr6.eq) goto loc_821A646C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a646c
	goto loc_821A646C;
loc_821A6428:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821a646c
	if (ctx.cr6.eq) goto loc_821A646C;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,656
	ctx.r4.s64 = ctx.r11.s64 + 656;
	// bl 0x825cf2a0
	ctx.lr = 0x821A6440;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a6454
	if (ctx.cr6.eq) goto loc_821A6454;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821a646c
	goto loc_821A646C;
loc_821A6454:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a646c
	goto loc_821A646C;
loc_821A6460:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,656
	ctx.r10.s64 = ctx.r11.s64 + 656;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A646C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AA140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x821aa1b8
	if (ctx.cr6.eq) goto loc_821AA1B8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821aa180
	if (!ctx.cr6.eq) goto loc_821AA180;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821aa1c4
	if (ctx.cr6.eq) goto loc_821AA1C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821aa1c4
	goto loc_821AA1C4;
loc_821AA180:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821aa1c4
	if (ctx.cr6.eq) goto loc_821AA1C4;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,9656
	ctx.r4.s64 = ctx.r11.s64 + 9656;
	// bl 0x825cf2a0
	ctx.lr = 0x821AA198;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821aa1ac
	if (ctx.cr6.eq) goto loc_821AA1AC;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821aa1c4
	goto loc_821AA1C4;
loc_821AA1AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821aa1c4
	goto loc_821AA1C4;
loc_821AA1B8:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,9656
	ctx.r10.s64 = ctx.r11.s64 + 9656;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821AA1C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AF170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x821AF178;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r28,12004(r10)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 12004);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r27,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 4;
	// bge cr6,0x821af1cc
	if (!ctx.cr6.lt) goto loc_821AF1CC;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821af1cc
	if (ctx.cr6.eq) goto loc_821AF1CC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821af210
	if (ctx.cr6.eq) goto loc_821AF210;
loc_821AF1CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821AF1D8;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-18928
	ctx.r4.s64 = ctx.r10.s64 + -18928;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821AF1F4;
	sub_8220AB90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821af20c
	if (!ctx.cr6.eq) goto loc_821AF20C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_821AF20C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821AF210:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8217d818
	ctx.lr = 0x821AF224;
	sub_8217D818(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821AF234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r27,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r27.u64;
	// beq cr6,0x821af260
	if (ctx.cr6.eq) goto loc_821AF260;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AF260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AF260:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af278
	if (ctx.cr6.eq) goto loc_821AF278;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AF278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AF278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B7220) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x821B7228;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r8,-32142
	ctx.r8.s64 = -2106458112;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r9,8496
	ctx.r29.s64 = ctx.r9.s64 + 8496;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lbz r26,12007(r8)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 12007);
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// srawi r25,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r6.s32 >> 4;
	// bge cr6,0x821b728c
	if (!ctx.cr6.lt) goto loc_821B728C;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b728c
	if (ctx.cr6.eq) goto loc_821B728C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b728c
	if (!ctx.cr6.eq) goto loc_821B728C;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x821b72d0
	goto loc_821B72D0;
loc_821B728C:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821B7298;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-18348
	ctx.r4.s64 = ctx.r10.s64 + -18348;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821B72B4;
	sub_8220AB90(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b72cc
	if (!ctx.cr6.eq) goto loc_821B72CC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1392
	ctx.r10.s64 = ctx.r11.s64 + -1392;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_821B72CC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821B72D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821b72e8
	if (ctx.cr6.lt) goto loc_821B72E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821B72E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b7310
	if (ctx.cr6.eq) goto loc_821B7310;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f6a80
	ctx.lr = 0x821B72FC;
	sub_821F6A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b7310
	if (!ctx.cr6.eq) goto loc_821B7310;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x821b7314
	goto loc_821B7314;
loc_821B7310:
	// lfd f31,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_821B7314:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821b7338
	if (!ctx.cr6.lt) goto loc_821B7338;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b7338
	if (ctx.cr6.eq) goto loc_821B7338;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b737c
	if (ctx.cr6.eq) goto loc_821B737C;
loc_821B7338:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821B7344;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-18316
	ctx.r4.s64 = ctx.r10.s64 + -18316;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821B7360;
	sub_8220AB90(ctx, base);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b7378
	if (!ctx.cr6.eq) goto loc_821B7378;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_821B7378:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821B737C:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d4130
	ctx.lr = 0x821B739C;
	sub_821D4130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x821B73B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r25,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r25.u64;
	// beq cr6,0x821b73e0
	if (ctx.cr6.eq) goto loc_821B73E0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B73E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B73E0:
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b73f8
	if (ctx.cr6.eq) goto loc_821B73F8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B73F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B73F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C1A80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821C1A88;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r29,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r9.s32 >> 4;
	// bge cr6,0x821c1ad0
	if (!ctx.cr6.lt) goto loc_821C1AD0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821c1ad0
	if (ctx.cr6.eq) goto loc_821C1AD0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c1b10
	if (ctx.cr6.eq) goto loc_821C1B10;
loc_821C1AD0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821C1ADC;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-32092
	ctx.r4.s64 = ctx.r10.s64 + -32092;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821C1AF8;
	sub_8220AB90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c1b10
	if (!ctx.cr6.eq) goto loc_821C1B10;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1352
	ctx.r10.s64 = ctx.r11.s64 + -1352;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_821C1B10:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821C1B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f1.u64);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r29,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r29.u64;
	// beq cr6,0x821c1b5c
	if (ctx.cr6.eq) goto loc_821C1B5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821C1B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C1B5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C7E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821C7E30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r10,8496
	ctx.r30.s64 = ctx.r10.s64 + 8496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// srawi r28,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 4;
	// bge cr6,0x821c7e74
	if (!ctx.cr6.lt) goto loc_821C7E74;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821C7E74:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821c7e9c
	if (ctx.cr6.eq) goto loc_821C7E9C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f6a80
	ctx.lr = 0x821C7E88;
	sub_821F6A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821c7e9c
	if (!ctx.cr6.eq) goto loc_821C7E9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x821c7ea0
	goto loc_821C7EA0;
loc_821C7E9C:
	// lfd f31,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_821C7EA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821c7ecc
	if (!ctx.cr6.lt) goto loc_821C7ECC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821c7ecc
	if (ctx.cr6.eq) goto loc_821C7ECC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c7ecc
	if (!ctx.cr6.eq) goto loc_821C7ECC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c7f0c
	goto loc_821C7F0C;
loc_821C7ECC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821C7ED8;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-17392
	ctx.r4.s64 = ctx.r10.s64 + -17392;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821C7EF4;
	sub_8220AB90(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c7f0c
	if (!ctx.cr6.eq) goto loc_821C7F0C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1328
	ctx.r10.s64 = ctx.r11.s64 + -1328;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_821C7F0C:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821C7F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cf950
	ctx.lr = 0x821C7F30;
	sub_821CF950(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r28,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r28.u64;
	// beq cr6,0x821c7f5c
	if (ctx.cr6.eq) goto loc_821C7F5C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C7F5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CF1C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x821CF1C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821cf1fc
	if (!ctx.cr6.eq) goto loc_821CF1FC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_821CF1FC:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lis r10,-32147
	ctx.r10.s64 = -2106785792;
	// addi r31,r11,-32160
	ctx.r31.s64 = ctx.r11.s64 + -32160;
	// addi r6,r10,14392
	ctx.r6.s64 = ctx.r10.s64 + 14392;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825cfd98
	ctx.lr = 0x821CF220;
	sub_825CFD98(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf23c
	if (ctx.cr6.eq) goto loc_821CF23C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82200ff8
	ctx.lr = 0x821CF234;
	sub_82200FF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821cf240
	goto loc_821CF240;
loc_821CF23C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821CF240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821cf2dc
	if (!ctx.cr6.eq) goto loc_821CF2DC;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r10,11636(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 11636);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cf280
	if (ctx.cr6.eq) goto loc_821CF280;
	// stw r30,11636(r11)
	REX_STORE_U32(ctx.r11.u32 + 11636, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82206798
	ctx.lr = 0x821CF26C;
	sub_82206798(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822068f0
	ctx.lr = 0x821CF274;
	sub_822068F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,11640(r29)
	REX_STORE_U32(ctx.r29.u32 + 11640, ctx.r31.u32);
	// b 0x821cf284
	goto loc_821CF284;
loc_821CF280:
	// lwz r31,11640(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 11640);
loc_821CF284:
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821ee350
	ctx.lr = 0x821CF290;
	sub_821EE350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cf2c4
	if (ctx.cr6.eq) goto loc_821CF2C4;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r28,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r28,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_821CF2C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x821d43e8
	ctx.lr = 0x821CF2D0;
	sub_821D43E8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821edcd8
	ctx.lr = 0x821CF2DC;
	sub_821EDCD8(ctx, base);
loc_821CF2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D5180) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821d51a8
	if (!ctx.cr6.eq) goto loc_821D51A8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d51a0
	if (!ctx.cr6.eq) goto loc_821D51A0;
loc_821D5198:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D51A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d5198
	if (ctx.cr6.eq) goto loc_821D5198;
loc_821D51A8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d51bc
	if (!ctx.cr6.eq) goto loc_821D51BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821D51BC:
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5C00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// sraw r3,r3,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D7928) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f1,16(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9df4
	if (ctx.cr6.eq) goto loc_821D9DF4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d9dec
	if (ctx.cr6.eq) goto loc_821D9DEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821D9DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821d9df0
	goto loc_821D9DF0;
loc_821D9DEC:
	// bl 0x825d0418
	ctx.lr = 0x821D9DF0;
	sub_825D0418(ctx, base);
loc_821D9DF0:
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_821D9DF4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821D9E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d8c10
	ctx.lr = 0x821D9E14;
	sub_820D8C10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DFF58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821DFF60;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r10,8492
	ctx.r29.s64 = ctx.r10.s64 + 8492;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f29,1376(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 1376);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// ble cr6,0x821e0088
	if (!ctx.cr6.gt) goto loc_821E0088;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r11,-10948
	ctx.r5.s64 = ctx.r11.s64 + -10948;
	// addi r4,r10,3652
	ctx.r4.s64 = ctx.r10.s64 + 3652;
	// addi r6,r9,-31348
	ctx.r6.s64 = ctx.r9.s64 + -31348;
loc_821DFFB8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821DFFC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// beq cr6,0x821dffec
	if (ctx.cr6.eq) goto loc_821DFFEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821dffc8
	if (ctx.cr6.eq) goto loc_821DFFC8;
loc_821DFFEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e0000
	if (!ctx.cr6.eq) goto loc_821E0000;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821e007c
	goto loc_821E007C;
loc_821E0000:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821E0008:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	// beq cr6,0x821e002c
	if (ctx.cr6.eq) goto loc_821E002C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e0008
	if (ctx.cr6.eq) goto loc_821E0008;
loc_821E002C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e0040
	if (!ctx.cr6.eq) goto loc_821E0040;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// b 0x821e007c
	goto loc_821E007C;
loc_821E0040:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821E0048:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x821e006c
	if (ctx.cr6.eq) goto loc_821E006C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e0048
	if (ctx.cr6.eq) goto loc_821E0048;
loc_821E006C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e007c
	if (!ctx.cr6.eq) goto loc_821E007C;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821E007C:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne 0x821dffb8
	if (!ctx.cr0.eq) goto loc_821DFFB8;
loc_821E0088:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x821e0190
	if (ctx.cr6.lt) goto loc_821E0190;
	// beq cr6,0x821e013c
	if (ctx.cr6.eq) goto loc_821E013C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x821e022c
	if (!ctx.cr6.lt) goto loc_821E022C;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r11,9256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 9256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9256(r10)
	REX_STORE_U32(ctx.r10.u32 + 9256, ctx.r11.u32);
	// bl 0x825d0430
	ctx.lr = 0x821E00C0;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0228
	if (ctx.cr6.eq) goto loc_821E0228;
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// addi r9,r10,8416
	ctx.r9.s64 = ctx.r10.s64 + 8416;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f29,24(r3)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f0,9700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9700);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// fmadds f12,f30,f30,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f30.f64, ctx.f30.f64, ctx.f13.f64)));
	// stfs f31,68(r3)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f30,72(r3)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r28,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r28.u32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// stfs f10,64(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_821E013C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r11,9256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 9256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9256(r10)
	REX_STORE_U32(ctx.r10.u32 + 9256, ctx.r11.u32);
	// bl 0x825d0430
	ctx.lr = 0x821E0158;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0228
	if (ctx.cr6.eq) goto loc_821E0228;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r10,8416
	ctx.r9.s64 = ctx.r10.s64 + 8416;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f29,24(r3)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r28,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r28.u32);
	// b 0x821e01e0
	goto loc_821E01E0;
loc_821E0190:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lwz r11,9256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 9256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9256(r10)
	REX_STORE_U32(ctx.r10.u32 + 9256, ctx.r11.u32);
	// bl 0x825d0430
	ctx.lr = 0x821E01AC;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e0228
	if (ctx.cr6.eq) goto loc_821E0228;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r9,r10,8416
	ctx.r9.s64 = ctx.r10.s64 + 8416;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f29,24(r3)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r28,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
loc_821E01E0:
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,9700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9700);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f30,f30,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f30.f64, ctx.f30.f64, ctx.f13.f64)));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// stfs f10,64(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r8,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stfs f30,72(r3)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f31,68(r3)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_821E0228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E022C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F23F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x821f2290
	ctx.lr = 0x821F2410;
	sub_821F2290(ctx, base);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821f244c
	if (!ctx.cr6.lt) goto loc_821F244C;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_821F2430:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f24ac
	if (!ctx.cr6.eq) goto loc_821F24AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f2430
	if (ctx.cr6.lt) goto loc_821F2430;
loc_821F244C:
	// lbz r10,7(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821f2490
	if (!ctx.cr6.lt) goto loc_821F2490;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_821F2474:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821f24f0
	if (!ctx.cr6.eq) goto loc_821F24F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821f2474
	if (ctx.cr6.lt) goto loc_821F2474;
loc_821F2490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F2494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821F24AC:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r7,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// b 0x821f2494
	goto loc_821F2494;
loc_821F24F0:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r9,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r7,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// b 0x821f2494
	goto loc_821F2494;
}

DEFINE_REX_FUNC(sub_821FBFB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r31,20(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821fbff8
	if (ctx.cr6.eq) goto loc_821FBFF8;
loc_821FBFD8:
	// lbz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821fc008
	if (!ctx.cr6.eq) goto loc_821FC008;
	// lbz r10,9(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 9);
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821fbfd8
	if (!ctx.cr6.eq) goto loc_821FBFD8;
loc_821FBFF8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r11,-5760
	ctx.r4.s64 = ctx.r11.s64 + -5760;
	// bl 0x821f32d8
	ctx.lr = 0x821FC008;
	sub_821F32D8(ctx, base);
loc_821FC008:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fc02c
	if (ctx.cr6.eq) goto loc_821FC02C;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,35
	ctx.r4.s64 = 35;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r4,r11,6,0,25
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r4.u64 & 0xFFFFFFFF0000003F);
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x821ffe88
	ctx.lr = 0x821FC02C;
	sub_821FFE88(ctx, base);
loc_821FC02C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fe2e8
	ctx.lr = 0x821FC034;
	sub_821FE2E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fe628
	ctx.lr = 0x821FC044;
	sub_821FE628(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200018) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-5380
	ctx.r10.s64 = ctx.r11.s64 + -5380;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d45d8
	sub_821D45D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82200890) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822008b0
	if (!ctx.cr6.eq) goto loc_822008B0;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_822008B0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822008d8
	if (!ctx.cr6.eq) goto loc_822008D8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_822008D8:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822008f8
	if (!ctx.cr6.eq) goto loc_822008F8;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_822008F8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202E68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82203da0
	ctx.lr = 0x82202EA8;
	sub_82203DA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825d0418
	ctx.lr = 0x82202EB0;
	sub_825D0418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82205210;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x825d0430
	ctx.lr = 0x82205234;
	sub_825D0430(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82205270
	if (ctx.cr6.eq) goto loc_82205270;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x822034a0
	ctx.lr = 0x82205264;
	sub_822034A0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r26,64(r31)
	REX_STORE_U8(ctx.r31.u32 + 64, ctx.r26.u8);
	// stb r10,65(r31)
	REX_STORE_U8(ctx.r31.u32 + 65, ctx.r10.u8);
loc_82205270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82207818) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82207820;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207854
	if (ctx.cr6.eq) goto loc_82207854;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,72
	ctx.r9.s64 = 72;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8220785c
	if (!ctx.cr0.eq) goto loc_8220785C;
loc_82207854:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8220788c
	goto loc_8220788C;
loc_8220785C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82207868
	if (!ctx.cr6.gt) goto loc_82207868;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82207868:
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220787c
	if (ctx.cr6.eq) goto loc_8220787C;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82207880
	if (ctx.cr6.eq) goto loc_82207880;
loc_8220787C:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82207880:
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r30,r8,r9
	ctx.r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
loc_8220788C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822079b8
	ctx.lr = 0x82207898;
	sub_822079B8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822078ac
	if (!ctx.cr6.gt) goto loc_822078AC;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_822078AC:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822078e4
	if (ctx.cr6.gt) goto loc_822078E4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822078e8
	if (!ctx.cr6.lt) goto loc_822078E8;
loc_822078E4:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_822078E8:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220F930) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8220F938;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r28,r9,r8
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r7,20(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8220f9c8
	if (!ctx.cr6.gt) goto loc_8220F9C8;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8220f9c8
	if (!ctx.cr6.gt) goto loc_8220F9C8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220F97C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8220f9b4
	if (ctx.cr6.lt) goto loc_8220F9B4;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bl 0x82227af0
	ctx.lr = 0x8220F9B4;
	sub_82227AF0(ctx, base);
loc_8220F9B4:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220f97c
	if (ctx.cr6.lt) goto loc_8220F97C;
loc_8220F9C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82213C88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82213C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220bde0
	ctx.lr = 0x82213CAC;
	sub_8220BDE0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8220be58
	ctx.lr = 0x82213CCC;
	sub_8220BE58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82215770) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e0
	ctx.lr = 0x82215778;
	__savegprlr_22(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,-224
	ctx.r4.s64 = ctx.r1.s64 + -224;
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r28,20(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r26,24(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r29,r1,-224
	ctx.r29.s64 = ctx.r1.s64 + -224;
	// lwz r24,4(r11)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// lwz r22,8(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r25,r1,-224
	ctx.r25.s64 = ctx.r1.s64 + -224;
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addi r23,r1,-160
	ctx.r23.s64 = ctx.r1.s64 + -160;
	// stw r28,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// stw r26,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r26.u32);
	// lfsx f13,r8,r4
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r24,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stw r22,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lfsx f12,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r8,r29
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r8,r27
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f6,f3,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f2.f64)));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r3,r25
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r3,r23
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f13,f10,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f9.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble 0x822158c4
	if (!ctx.cr0.gt) goto loc_822158C4;
loc_8221586C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r1,-240
	ctx.r8.s64 = ctx.r1.s64 + -240;
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r5,r1,-240
	ctx.r5.s64 = ctx.r1.s64 + -240;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r3,r1,-240
	ctx.r3.s64 = ctx.r1.s64 + -240;
	// lwz r31,0(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r30,r1,-240
	ctx.r30.s64 = ctx.r1.s64 + -240;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// stb r6,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r6.u8);
	// stb r4,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// lbzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lbzx r6,r8,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lwz r5,8(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lbzx r4,r5,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// stb r4,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bne 0x8221586c
	if (!ctx.cr0.eq) goto loc_8221586C;
loc_822158C4:
	// b 0x825d6130
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82220160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822201b8
	if (ctx.cr6.eq) goto loc_822201B8;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822201a0
	if (ctx.cr6.eq) goto loc_822201A0;
loc_82220190:
	// bl 0x822203c0
	ctx.lr = 0x82220194;
	sub_822203C0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82220190
	if (!ctx.cr6.eq) goto loc_82220190;
loc_822201A0:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r8,64(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// stw r8,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r8.u32);
loc_822201B8:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// bl 0x822239e8
	ctx.lr = 0x822201C8;
	sub_822239E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82221D48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r3,r10,340
	ctx.r3.s64 = ctx.r10.s64 + 340;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,20600(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20600);
	// li r4,71
	ctx.r4.s64 = 71;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82221D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82221da8
	if (ctx.cr6.eq) goto loc_82221DA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82221988
	ctx.lr = 0x82221DA4;
	sub_82221988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82221DA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82223230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82223460
	ctx.lr = 0x8222324C;
	sub_82223460(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222327c
	if (ctx.cr6.eq) goto loc_8222327C;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r4,107
	ctx.r4.s64 = 107;
	// addi r3,r10,1436
	ctx.r3.s64 = ctx.r10.s64 + 1436;
	// lwz r9,20604(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20604);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82223274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_8222327C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82225800) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8222589c
	if (!ctx.cr6.gt) goto loc_8222589C;
loc_82225814:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// beq cr6,0x82225848
	if (ctx.cr6.eq) goto loc_82225848;
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82225840
	if (!ctx.cr6.gt) goto loc_82225840;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82225840:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82225888
	goto loc_82225888;
loc_82225848:
	// lbzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82225888
	if (!ctx.cr6.gt) goto loc_82225888;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82225894
	if (!ctx.cr6.lt) goto loc_82225894;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82225894
	if (!ctx.cr6.gt) goto loc_82225894;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82225888:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82225814
	if (ctx.cr6.gt) goto loc_82225814;
	// b 0x8222589c
	goto loc_8222589C;
loc_82225894:
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_8222589C:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x822258c8
	if (!ctx.cr6.lt) goto loc_822258C8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
loc_822258A8:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822258c4
	if (ctx.cr6.gt) goto loc_822258C4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822258a8
	if (ctx.cr6.lt) goto loc_822258A8;
loc_822258C4:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
loc_822258C8:
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222A540) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x8222A548;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r24,r11,6756
	ctx.r24.s64 = ctx.r11.s64 + 6756;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r7,12(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8222a590
	if (!ctx.cr6.eq) goto loc_8222A590;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r29.u32);
	// stw r29,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r29,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// stw r26,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
loc_8222A590:
	// lwz r23,0(r29)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r24,12
	ctx.r30.s64 = ctx.r24.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8222A5A8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subf. r3,r11,r23
	ctx.r3.u64 = ctx.r23.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222a5f4
	if (!ctx.cr0.eq) goto loc_8222A5F4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// subf. r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222a5f4
	if (!ctx.cr0.eq) goto loc_8222A5F4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// subf. r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222a5f4
	if (!ctx.cr0.eq) goto loc_8222A5F4;
	// lwz r4,12(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82229548
	ctx.lr = 0x8222A5E0;
	sub_82229548(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222a5f8
	if (!ctx.cr6.eq) goto loc_8222A5F8;
	// lwz r4,16(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82229548
	ctx.lr = 0x8222A5F4;
	sub_82229548(ctx, base);
loc_8222A5F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_8222A5F8:
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bge cr6,0x8222a630
	if (!ctx.cr6.lt) goto loc_8222A630;
	// lwz r10,44(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// addi r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 + 44;
	// stb r26,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r26.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222a65c
	if (ctx.cr6.eq) goto loc_8222A65C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x8222a5a8
	goto loc_8222A5A8;
loc_8222A630:
	// lwz r10,48(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// addi r11,r7,48
	ctx.r11.s64 = ctx.r7.s64 + 48;
	// stb r25,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r25.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222a670
	if (ctx.cr6.eq) goto loc_8222A670;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// b 0x8222a5a8
	goto loc_8222A5A8;
loc_8222A65C:
	// stw r29,44(r7)
	REX_STORE_U32(ctx.r7.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8222a68c
	if (!ctx.cr6.eq) goto loc_8222A68C;
	// stw r29,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// b 0x8222a68c
	goto loc_8222A68C;
loc_8222A670:
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// or r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r9,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r9.u32);
	// bne cr6,0x8222a68c
	if (!ctx.cr6.eq) goto loc_8222A68C;
	// stw r29,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
loc_8222A68C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r25,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r25.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r29,r31,r9
	ctx.r29.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8222A6A8:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222a6cc
	if (!ctx.cr6.eq) goto loc_8222A6CC;
	// bl 0x8222a2e0
	ctx.lr = 0x8222A6C8;
	sub_8222A2E0(ctx, base);
	// b 0x8222a6d0
	goto loc_8222A6D0;
loc_8222A6CC:
	// bl 0x8222a410
	ctx.lr = 0x8222A6D0;
	sub_8222A410(ctx, base);
loc_8222A6D0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8222a6e0
	if (ctx.cr6.eq) goto loc_8222A6E0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8222a6a8
	if (!ctx.cr6.eq) goto loc_8222A6A8;
loc_8222A6E0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82237558) {
	REX_FUNC_PROLOGUE();
	// lhz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82237574
	if (ctx.cr6.lt) goto loc_82237574;
	// lhz r11,30(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 30);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r11,30(r3)
	REX_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// b 0x82237640
	goto loc_82237640;
loc_82237574:
	// lhz r11,38(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8223759c
	if (ctx.cr6.eq) goto loc_8223759C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sthx r9,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u16);
loc_8223759C:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82237640
	if (ctx.cr6.gt) goto loc_82237640;
	// lis r12,-32221
	ctx.r12.s64 = -2111635456;
	// addi r12,r12,30144
	ctx.r12.s64 = ctx.r12.s64 + 30144;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822375E0;
	case 1:
		goto loc_822375EC;
	case 2:
		goto loc_822375F8;
	case 3:
		goto loc_82237604;
	case 4:
		goto loc_82237610;
	case 5:
		goto loc_8223761C;
	case 6:
		goto loc_82237628;
	case 7:
		goto loc_82237634;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_822375E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822375EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_822375F8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82237604:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_82237610:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8223761C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82237628:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
loc_82237634:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_82237640:
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223EFD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82243F60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82243F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82243fb8
	if (!ctx.cr6.lt) goto loc_82243FB8;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,28(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,20(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_82243FB8:
	// lwz r29,16(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82244018
	if (!ctx.cr6.gt) goto loc_82244018;
	// lwz r28,12(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82243FD8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,20(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r31,256(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82243ff4
	if (!ctx.cr6.lt) goto loc_82243FF4;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,256(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
loc_82243FF4:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82244010
	if (ctx.cr6.eq) goto loc_82244010;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82243fd8
	if (ctx.cr6.lt) goto loc_82243FD8;
	// b 0x82244018
	goto loc_82244018;
loc_82244010:
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r3,r28
	ctx.r27.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_82244018:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82244064
	if (!ctx.cr6.lt) goto loc_82244064;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r10,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r10.u64;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_82244030:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8224404c
	if (!ctx.cr6.lt) goto loc_8224404C;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r3,256(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
loc_8224404C:
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82244058
	if (!ctx.cr6.eq) goto loc_82244058;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82244058:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82244030
	if (!ctx.cr0.eq) goto loc_82244030;
loc_82244064:
	// add. r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822440a0
	if (ctx.cr0.eq) goto loc_822440A0;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r31,28(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,20(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822440A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822440A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224DA20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8224DA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224DA40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8224DA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,24(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8224da9c
	if (ctx.cr6.eq) goto loc_8224DA9C;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8224DA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8224DA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224DA9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822511D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82251268
	ctx.lr = 0x822511F0;
	sub_82251268(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251208
	if (ctx.cr6.eq) goto loc_82251208;
	// bl 0x825d0418
	ctx.lr = 0x82251204;
	sub_825D0418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82251208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82252488) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d8
	ctx.lr = 0x82252490;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r23,17
	ctx.r10.s64 = ctx.r23.s64 + 17;
	// rlwinm r11,r5,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r9,60(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// lwzx r10,r8,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lhzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// lhz r6,2(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + -4);
	// rotlwi r11,r6,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// add r22,r11,r9
	ctx.r22.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bge cr6,0x822525c8
	if (!ctx.cr6.lt) goto loc_822525C8;
	// addi r11,r23,11
	ctx.r11.s64 = ctx.r23.s64 + 11;
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r21,r11,65535
	ctx.r21.u64 = ctx.r11.u64 | 65535;
loc_822524EC:
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// rotlwi r10,r10,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82252580
	if (!ctx.cr6.eq) goto loc_82252580;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82252568
	if (ctx.cr6.eq) goto loc_82252568;
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwz r3,80(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822579e0
	ctx.lr = 0x82252540;
	sub_822579E0(ctx, base);
	// lwz r8,84(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82252568
	if (ctx.cr6.eq) goto loc_82252568;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82252568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82252568:
	// addi r11,r23,8
	ctx.r11.s64 = ctx.r23.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r26
	REX_STORE_U16(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u16);
	// b 0x8225258c
	goto loc_8225258C;
loc_82252580:
	// lhzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r25,r26
	REX_STORE_U16(ctx.r25.u32 + ctx.r26.u32, ctx.r11.u16);
loc_8225258C:
	// lhzx r11,r25,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r25.u32 + ctx.r22.u32);
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + ctx.r21.u64;
	// sthx r10,r25,r22
	REX_STORE_U16(ctx.r25.u32 + ctx.r22.u32, ctx.r10.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// sth r7,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// lhz r6,2(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 2);
	// sth r6,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lhz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822524ec
	if (ctx.cr6.lt) goto loc_822524EC;
loc_822525C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6128
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822573A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e0
	ctx.lr = 0x822573B0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r22,36(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,12(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r22,r27
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822576b8
	if (!ctx.cr6.lt) goto loc_822576B8;
	// rotlwi r28,r22,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822574c0
	if (ctx.cr6.lt) goto loc_822574C0;
	// ble cr6,0x82257494
	if (!ctx.cr6.gt) goto loc_82257494;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82257494
	if (!ctx.cr6.lt) goto loc_82257494;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82257420
	if (ctx.cr6.eq) goto loc_82257420;
	// lwz r11,9256(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 9256);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9256(r26)
	REX_STORE_U32(ctx.r26.u32 + 9256, ctx.r11.u32);
	// bl 0x825d0430
	ctx.lr = 0x82257418;
	sub_825D0430(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82257424
	goto loc_82257424;
loc_82257420:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82257424:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8225745c
	if (!ctx.cr6.gt) goto loc_8225745C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82257438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225744c
	if (ctx.cr6.eq) goto loc_8225744C;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8225744C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82257438
	if (!ctx.cr0.eq) goto loc_82257438;
loc_8225745C:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82257488
	if (ctx.cr6.eq) goto loc_82257488;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257484
	if (ctx.cr6.eq) goto loc_82257484;
	// lwz r11,9260(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 9260);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9260(r25)
	REX_STORE_U32(ctx.r25.u32 + 9260, ctx.r11.u32);
	// bl 0x825d0418
	ctx.lr = 0x82257484;
	sub_825D0418(ctx, base);
loc_82257484:
	// stw r23,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r23.u32);
loc_82257488:
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r27,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stb r24,16(r30)
	REX_STORE_U8(ctx.r30.u32 + 16, ctx.r24.u8);
loc_82257494:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822574c0
	if (!ctx.cr6.lt) goto loc_822574C0;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r28.u64;
loc_822574A4:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822574b4
	if (ctx.cr0.eq) goto loc_822574B4;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_822574B4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822574a4
	if (!ctx.cr0.eq) goto loc_822574A4;
loc_822574C0:
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// lwz r28,56(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x822575ac
	if (ctx.cr6.lt) goto loc_822575AC;
	// ble cr6,0x82257580
	if (!ctx.cr6.gt) goto loc_82257580;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82257580
	if (!ctx.cr6.lt) goto loc_82257580;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8225750c
	if (ctx.cr6.eq) goto loc_8225750C;
	// lwz r11,9256(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 9256);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9256(r26)
	REX_STORE_U32(ctx.r26.u32 + 9256, ctx.r11.u32);
	// bl 0x825d0430
	ctx.lr = 0x82257504;
	sub_825D0430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82257510
	goto loc_82257510;
loc_8225750C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82257510:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82257548
	if (!ctx.cr6.gt) goto loc_82257548;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82257524:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257538
	if (ctx.cr6.eq) goto loc_82257538;
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82257538:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82257524
	if (!ctx.cr0.eq) goto loc_82257524;
loc_82257548:
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82257574
	if (ctx.cr6.eq) goto loc_82257574;
	// lbz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257570
	if (ctx.cr6.eq) goto loc_82257570;
	// lwz r11,9260(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 9260);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,9260(r25)
	REX_STORE_U32(ctx.r25.u32 + 9260, ctx.r11.u32);
	// bl 0x825d0418
	ctx.lr = 0x82257570;
	sub_825D0418(ctx, base);
loc_82257570:
	// stw r23,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r23.u32);
loc_82257574:
	// stw r30,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r27,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// stb r24,16(r29)
	REX_STORE_U8(ctx.r29.u32 + 16, ctx.r24.u8);
loc_82257580:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x822575ac
	if (!ctx.cr6.lt) goto loc_822575AC;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r28,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r28.u64;
loc_82257590:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822575a0
	if (ctx.cr0.eq) goto loc_822575A0;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_822575A0:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82257590
	if (!ctx.cr0.eq) goto loc_82257590;
loc_822575AC:
	// stw r27,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822575fc
	if (!ctx.cr6.gt) goto loc_822575FC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822575C4:
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822575c4
	if (!ctx.cr0.eq) goto loc_822575C4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x822575fc
	if (!ctx.cr6.gt) goto loc_822575FC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822575E8:
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822575e8
	if (!ctx.cr0.eq) goto loc_822575E8;
loc_822575FC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x822576b8
	if (!ctx.cr6.gt) goto loc_822576B8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
loc_82257610:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8225763c
	if (!ctx.cr6.gt) goto loc_8225763C;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_8225763C:
	// rlwinm r6,r7,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r10,15,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// not r7,r7
	ctx.r7.u64 = ~ctx.r7.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r6,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 10;
	// xor r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// srawi r7,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 6;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// rlwinm r6,r10,11,0,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// not r7,r6
	ctx.r7.u64 = ~ctx.r6.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r7,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 16;
	// xor r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stwx r7,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stwx r11,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82257610
	if (ctx.cr6.lt) goto loc_82257610;
loc_822576B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6130
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226A658) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,259
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 259, ctx.xer);
	// bne cr6,0x8226a6c4
	if (!ctx.cr6.eq) goto loc_8226A6C4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8226a6a4
	if (ctx.cr6.eq) goto loc_8226A6A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226a698
	if (ctx.cr6.eq) goto loc_8226A698;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8226A698:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82266948
	ctx.lr = 0x8226A6A0;
	sub_82266948(ctx, base);
	// b 0x8226a6a8
	goto loc_8226A6A8;
loc_8226A6A4:
	// li r3,258
	ctx.r3.s64 = 258;
loc_8226A6A8:
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x8226a6bc
	if (!ctx.cr6.eq) goto loc_8226A6BC;
	// li r3,996
	ctx.r3.s64 = 996;
	// bl 0x8226b3b8
	ctx.lr = 0x8226A6B8;
	sub_8226B3B8(ctx, base);
	// b 0x8226a6e4
	goto loc_8226A6E4;
loc_8226A6BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8226a6e4
	if (!ctx.cr6.eq) goto loc_8226A6E4;
loc_8226A6C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8226a6e0
	if (ctx.cr6.lt) goto loc_8226A6E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8226a6e8
	goto loc_8226A6E8;
loc_8226A6E0:
	// bl 0x8226b440
	ctx.lr = 0x8226A6E4;
	sub_8226B440(ctx, base);
loc_8226A6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226A6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226BD00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,2120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2120);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226bd48
	if (ctx.cr6.eq) goto loc_8226BD48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1920);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226bd54
	if (!ctx.cr0.eq) goto loc_8226BD54;
loc_8226BD48:
	// lis r31,-16384
	ctx.r31.s64 = -1073741824;
	// ori r31,r31,549
	ctx.r31.u64 = ctx.r31.u64 | 549;
	// b 0x8226bdfc
	goto loc_8226BDFC;
loc_8226BD54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// bl 0x8261c424
	ctx.lr = 0x8226BD64;
	__imp__XexGetModuleHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,155
	ctx.r4.s64 = 155;
	// bl 0x8261c414
	ctx.lr = 0x8226BD7C;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,156
	ctx.r4.s64 = 156;
	// bl 0x8261c414
	ctx.lr = 0x8226BD94;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,157
	ctx.r4.s64 = 157;
	// bl 0x8261c414
	ctx.lr = 0x8226BDAC;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,158
	ctx.r4.s64 = 158;
	// bl 0x8261c414
	ctx.lr = 0x8226BDC4;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,64
	ctx.r5.s64 = ctx.r30.s64 + 64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,159
	ctx.r4.s64 = 159;
	// bl 0x8261c414
	ctx.lr = 0x8226BDDC;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8226bdfc
	if (ctx.cr0.lt) goto loc_8226BDFC;
	// addi r5,r30,68
	ctx.r5.s64 = ctx.r30.s64 + 68;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x8261c414
	ctx.lr = 0x8226BDF4;
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8226be0c
	if (!ctx.cr0.lt) goto loc_8226BE0C;
loc_8226BDFC:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x825d6870
	ctx.lr = 0x8226BE0C;
	sub_825D6870(ctx, base);
loc_8226BE0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270E88) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x82270E90;
	__savegprlr_19(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r28,r4,r5
	ctx.r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r25,r11,3644
	ctx.r25.s64 = ctx.r11.s64 + 3644;
	// addi r24,r11,9020
	ctx.r24.s64 = ctx.r11.s64 + 9020;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// lwz r21,11016(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r22,r11,2072
	ctx.r22.s64 = ctx.r11.s64 + 2072;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r11,2584
	ctx.r27.s64 = ctx.r11.s64 + 2584;
	// lbz r8,11956(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r26,r11,3256
	ctx.r26.s64 = ctx.r11.s64 + 3256;
	// lwz r10,11952(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lwz r5,11012(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 11012);
	// b 0x82271124
	goto loc_82271124;
loc_82270ECC:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r23
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r23.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x82270f0c
	if (!ctx.cr0.lt) goto loc_82270F0C;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_82270EE0:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r25
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + ctx.r25.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x82270ee0
	if (ctx.cr0.lt) goto loc_82270EE0;
loc_82270F0C:
	// cmplw cr6,r5,r21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82271140
	if (!ctx.cr6.lt) goto loc_82271140;
	// lbzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r27.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x82270f54
	if (ctx.cr0.gt) goto loc_82270F54;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r3,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82270F54:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x82270f78
	if (!ctx.cr0.lt) goto loc_82270F78;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stbx r7,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82271124
	goto loc_82271124;
loc_82270F78:
	// clrlwi r3,r6,29
	ctx.r3.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x82271008
	if (!ctx.cr6.eq) goto loc_82271008;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r22
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r22.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82270fc4
	if (!ctx.cr0.lt) goto loc_82270FC4;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82270F98:
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r3,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r24
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r24.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x82270f98
	if (ctx.cr0.lt) goto loc_82270F98;
loc_82270FC4:
	// lbzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x82271004
	if (ctx.cr0.gt) goto loc_82271004;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r31,0(r5)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r31,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82271004:
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
loc_82271008:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x822710cc
	if (!ctx.cr6.gt) goto loc_822710CC;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x822710b4
	if (!ctx.cr6.gt) goto loc_822710B4;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r6,r31,32
	ctx.xer.ca = ctx.r31.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// bgt 0x822710a0
	if (ctx.cr0.gt) goto loc_822710A0;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// addi r31,r9,16
	ctx.r31.s64 = ctx.r9.s64 + 16;
	// neg r19,r9
	ctx.r19.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsb r8,r31
	ctx.r8.s64 = ctx.r31.s8;
	// or r31,r9,r20
	ctx.r31.u64 = ctx.r9.u64 | ctx.r20.u64;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r31,r31,r19
	ctx.r31.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r19.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x822710a0
	if (ctx.cr0.gt) goto loc_822710A0;
	// lbz r8,1(r5)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// neg r31,r9
	ctx.r31.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r20,0(r5)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r20,r8,r20
	ctx.r20.u64 = ctx.r8.u64 | ctx.r20.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r20,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_822710A0:
	// addi r9,r7,3014
	ctx.r9.s64 = ctx.r7.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x822710b8
	goto loc_822710B8;
loc_822710B4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822710B8:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r7,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// b 0x822710e4
	goto loc_822710E4;
loc_822710CC:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r6,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// beq cr6,0x822710e8
	if (ctx.cr6.eq) goto loc_822710E8;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r7,r6,r29
	REX_STORE_U32(ctx.r6.u32 + ctx.r29.u32, ctx.r7.u32);
loc_822710E4:
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_822710E8:
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// subf r7,r9,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_822710F4:
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & ctx.r31.u64;
	// cmpwi cr6,r4,257
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 257, ctx.xer);
	// lbzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// stbx r9,r30,r4
	REX_STORE_U8(ctx.r30.u32 + ctx.r4.u32, ctx.r9.u8);
	// bge cr6,0x82271114
	if (!ctx.cr6.lt) goto loc_82271114;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// stbx r9,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u8);
loc_82271114:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x822710f4
	if (ctx.cr0.gt) goto loc_822710F4;
loc_82271124:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82270ecc
	if (ctx.cr6.lt) goto loc_82270ECC;
	// stb r8,11956(r11)
	REX_STORE_U8(ctx.r11.u32 + 11956, ctx.r8.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	REX_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r5,11012(r11)
	REX_STORE_U32(ctx.r11.u32 + 11012, ctx.r5.u32);
loc_8227113C:
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
loc_82271140:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8227113c
	goto loc_8227113C;
}

DEFINE_REX_FUNC(sub_8227E798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x8227E7A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r26,r9,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mulli r27,r10,12
	ctx.r27.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// bne cr6,0x8227e7f8
	if (!ctx.cr6.eq) goto loc_8227E7F8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227a630
	ctx.lr = 0x8227E7F4;
	sub_8227A630(ctx, base);
	// b 0x8227eb70
	goto loc_8227EB70;
loc_8227E7F8:
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r27,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r27
	ctx.r11.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8227e824
	if (!ctx.cr6.gt) goto loc_8227E824;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8227E824:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bgt cr6,0x8227e83c
	if (ctx.cr6.gt) goto loc_8227E83C;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_8227E83C:
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227e908
	if (ctx.cr6.eq) goto loc_8227E908;
loc_8227E854:
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r8,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227e888
	if (ctx.cr0.eq) goto loc_8227E888;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwimi r5,r11,0,0,19
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000) | (ctx.r5.u64 & 0xFFFFFFFF00000FFF);
	// b 0x8227e88c
	goto loc_8227E88C;
loc_8227E888:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8227E88C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8227e8cc
	if (!ctx.cr6.lt) goto loc_8227E8CC;
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r9,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227e8d8
	if (ctx.cr0.eq) goto loc_8227E8D8;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r7,r26
	ctx.r11.u64 = ctx.r7.u64 + ctx.r26.u64;
	// rlwimi r11,r7,0,0,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// b 0x8227e8dc
	goto loc_8227E8DC;
loc_8227E8CC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// b 0x8227e8dc
	goto loc_8227E8DC;
loc_8227E8D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8227E8DC:
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// stw r5,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8227e854
	if (ctx.cr6.lt) goto loc_8227E854;
loc_8227E908:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x825d6e10
	ctx.lr = 0x8227E91C;
	sub_825D6E10(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// stw r28,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r28.u32);
	// stw r30,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r11,-13288
	ctx.r6.s64 = ctx.r11.s64 + -13288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,344(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r27,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x8227ce88
	ctx.lr = 0x8227E998;
	sub_8227CE88(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227e9ac
	if (ctx.cr6.eq) goto loc_8227E9AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,19952(r11)
	REX_STORE_U32(ctx.r11.u32 + 19952, ctx.r25.u32);
loc_8227E9AC:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r10,16(r24)
	REX_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8227e9d8
	if (ctx.cr0.eq) goto loc_8227E9D8;
	// rlwinm. r11,r10,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// bne 0x8227e9d8
	if (!ctx.cr0.eq) goto loc_8227E9D8;
	// lis r11,4
	ctx.r11.s64 = 262144;
loc_8227E9D8:
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq 0x8227ea60
	if (ctx.cr0.eq) goto loc_8227EA60;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,268(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// rlwimi r11,r10,5,22,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227ead8
	if (ctx.cr0.eq) goto loc_8227EAD8;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r6,r10,1908
	ctx.r6.s64 = ctx.r10.s64 + 1908;
loc_8227EA00:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// beq cr6,0x8227ea48
	if (ctx.cr6.eq) goto loc_8227EA48;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8227EA48:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227ea00
	if (ctx.cr6.lt) goto loc_8227EA00;
	// b 0x8227ead8
	goto loc_8227EAD8;
loc_8227EA60:
	// lwz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// rlwimi r11,r10,5,22,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227ead8
	if (ctx.cr0.eq) goto loc_8227EAD8;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// addi r6,r10,1908
	ctx.r6.s64 = ctx.r10.s64 + 1908;
loc_8227EA7C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// rlwinm r10,r10,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// beq cr6,0x8227eac4
	if (ctx.cr6.eq) goto loc_8227EAC4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8227EAC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227ea7c
	if (ctx.cr6.lt) goto loc_8227EA7C;
loc_8227EAD8:
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,19892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 19892);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// beq 0x8227eb28
	if (ctx.cr0.eq) goto loc_8227EB28;
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227eb00
	if (ctx.cr0.eq) goto loc_8227EB00;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8227eb08
	goto loc_8227EB08;
loc_8227EB00:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
loc_8227EB08:
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwimi r10,r11,17,14,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// andis. r10,r10,30734
	ctx.r10.u64 = ctx.r10.u64 & 2014183424;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// andi. r11,r8,65294
	ctx.r11.u64 = ctx.r8.u64 & 65294;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8227eb68
	goto loc_8227EB68;
loc_8227EB28:
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227eb38
	if (ctx.cr0.eq) goto loc_8227EB38;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8227eb40
	goto loc_8227EB40;
loc_8227EB38:
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 88);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_8227EB40:
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwimi r9,r11,16,15,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x10000) | (ctx.r9.u64 & 0xFFFFFFFFFFFEFFFF);
	// andis. r10,r9,34801
	ctx.r10.u64 = ctx.r9.u64 & 2280718336;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8227eb5c
	if (ctx.cr6.eq) goto loc_8227EB5C;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8227eb64
	goto loc_8227EB64;
loc_8227EB5C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_8227EB64:
	// rlwinm r11,r11,18,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x40000;
loc_8227EB68:
	// stw r10,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// stw r11,12(r24)
	REX_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
loc_8227EB70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82299E88) {
	REX_FUNC_PROLOGUE();
	// addis r11,r3,-13873
	ctx.r11.s64 = ctx.r3.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82299ea8
	if (ctx.cr0.eq) goto loc_82299EA8;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r3,10280
	ctx.r3.s64 = 673710080;
	// ori r3,r3,134
	ctx.r3.u64 = ctx.r3.u64 | 134;
	// blr 
	return;
loc_82299EA8:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229C248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8229C250;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r14,r4
	ctx.r14.u64 = ctx.r4.u64;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229c278
	if (!ctx.cr6.eq) goto loc_8229C278;
loc_8229C26C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x8229c664
	goto loc_8229C664;
loc_8229C278:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82278be8
	ctx.lr = 0x8229C280;
	sub_82278BE8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8229c2b8
	if (ctx.cr6.eq) goto loc_8229C2B8;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8229c2a8
	if (ctx.cr6.eq) goto loc_8229C2A8;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8229c26c
	if (!ctx.cr6.eq) goto loc_8229C26C;
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r17,r30
	ctx.r17.u64 = ctx.r30.u64;
	// b 0x8229c2c0
	goto loc_8229C2C0;
loc_8229C2A8:
	// lwz r16,80(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8229c2c4
	goto loc_8229C2C4;
loc_8229C2B8:
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
loc_8229C2C0:
	// lwz r15,80(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8229C2C4:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8229c31c
	if (!ctx.cr6.eq) goto loc_8229C31C;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8229c41c
	if (ctx.cr6.eq) goto loc_8229C41C;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8229c3e4
	if (ctx.cr6.eq) goto loc_8229C3E4;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8229c454
	if (!ctx.cr6.eq) goto loc_8229C454;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82282bd0
	ctx.lr = 0x8229C2F4;
	sub_82282BD0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c314
	if (!ctx.cr0.eq) goto loc_8229C314;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
loc_8229C308:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229c460
	if (ctx.cr0.eq) goto loc_8229C460;
loc_8229C314:
	// lis r31,8
	ctx.r31.s64 = 524288;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_8229C31C:
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8229c328
	if (!ctx.cr6.eq) goto loc_8229C328;
	// oris r31,r31,7
	ctx.r31.u64 = ctx.r31.u64 | 458752;
loc_8229C328:
	// rlwinm. r11,r31,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r21,r31,96
	ctx.r21.u64 = ctx.r31.u64 | 6291456;
	// bne 0x8229c338
	if (!ctx.cr0.eq) goto loc_8229C338;
	// rlwinm r21,r31,0,11,8
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFF9FFFFF;
loc_8229C338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82282950
	ctx.lr = 0x8229C340;
	sub_82282950(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x8229c350
	if (!ctx.cr6.eq) goto loc_8229C350;
	// li r18,0
	ctx.r18.s64 = 0;
loc_8229C350:
	// cmplw cr6,r18,r20
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8229c26c
	if (!ctx.cr6.lt) goto loc_8229C26C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// li r22,6
	ctx.r22.s64 = 6;
	// beq cr6,0x8229c378
	if (ctx.cr6.eq) goto loc_8229C378;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8229C378:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8229c390
	if (ctx.cr6.eq) goto loc_8229C390;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// bne cr6,0x8229c394
	if (!ctx.cr6.eq) goto loc_8229C394;
loc_8229C390:
	// li r23,1
	ctx.r23.s64 = 1;
loc_8229C394:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8229c61c
	if (ctx.cr6.eq) goto loc_8229C61C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ori r24,r11,14
	ctx.r24.u64 = ctx.r11.u64 | 14;
loc_8229C3AC:
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8229c47c
	if (ctx.cr6.eq) goto loc_8229C47C;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8229c468
	if (ctx.cr6.eq) goto loc_8229C468;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8229c494
	if (!ctx.cr6.eq) goto loc_8229C494;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82282a38
	ctx.lr = 0x8229C3D4;
	sub_82282A38(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_8229C3D8:
	// beq 0x8229c66c
	if (ctx.cr0.eq) goto loc_8229C66C;
loc_8229C3DC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8229c49c
	goto loc_8229C49C;
loc_8229C3E4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82282b10
	ctx.lr = 0x8229C3F4;
	sub_82282B10(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c314
	if (!ctx.cr0.eq) goto loc_8229C314;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c314
	if (!ctx.cr0.eq) goto loc_8229C314;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8229c308
	goto loc_8229C308;
loc_8229C41C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82282bd0
	ctx.lr = 0x8229C42C;
	sub_82282BD0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c44c
	if (!ctx.cr0.eq) goto loc_8229C44C;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229c460
	if (ctx.cr0.eq) goto loc_8229C460;
loc_8229C44C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8229c458
	goto loc_8229C458;
loc_8229C454:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8229C458:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8229c314
	if (ctx.cr6.eq) goto loc_8229C314;
loc_8229C460:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x8229c31c
	goto loc_8229C31C;
loc_8229C468:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82282b18
	ctx.lr = 0x8229C474;
	sub_82282B18(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// b 0x8229c3d8
	goto loc_8229C3D8;
loc_8229C47C:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82282960
	ctx.lr = 0x8229C488;
	sub_82282960(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8229c3dc
	if (!ctx.cr0.eq) goto loc_8229C3DC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8229C494:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8229c620
	if (ctx.cr6.lt) goto loc_8229C620;
loc_8229C49C:
	// addi r30,r18,1
	ctx.r30.s64 = ctx.r18.s64 + 1;
	// b 0x8229c5e0
	goto loc_8229C5E0;
loc_8229C4A4:
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8229c578
	if (ctx.cr6.eq) goto loc_8229C578;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8229c53c
	if (ctx.cr6.eq) goto loc_8229C53C;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8229c590
	if (!ctx.cr6.eq) goto loc_8229C590;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82282a38
	ctx.lr = 0x8229C4CC;
	sub_82282A38(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8229c66c
	if (ctx.cr0.eq) goto loc_8229C66C;
loc_8229C4D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229ba58
	ctx.lr = 0x8229C4F8;
	sub_8229BA58(ctx, base);
loc_8229C4F8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8229C4FC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8229c620
	if (ctx.cr6.lt) goto loc_8229C620;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8229c5b4
	if (ctx.cr6.eq) goto loc_8229C5B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229c51c
	if (ctx.cr6.eq) goto loc_8229C51C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C51C;
	sub_82279430(ctx, base);
loc_8229C51C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229c52c
	if (ctx.cr6.eq) goto loc_8229C52C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C52C;
	sub_82279430(ctx, base);
loc_8229C52C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8229c5d8
	goto loc_8229C5D8;
loc_8229C53C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82282b18
	ctx.lr = 0x8229C548;
	sub_82282B18(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8229c66c
	if (ctx.cr0.eq) goto loc_8229C66C;
loc_8229C550:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229bb78
	ctx.lr = 0x8229C574;
	sub_8229BB78(ctx, base);
	// b 0x8229c4f8
	goto loc_8229C4F8;
loc_8229C578:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82282960
	ctx.lr = 0x8229C584;
	sub_82282960(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8229c4d4
	if (!ctx.cr0.eq) goto loc_8229C4D4;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8229C590:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8229c620
	if (ctx.cr6.lt) goto loc_8229C620;
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8229c4d4
	if (ctx.cr6.eq) goto loc_8229C4D4;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x8229c550
	if (ctx.cr6.eq) goto loc_8229C550;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// beq cr6,0x8229c4d4
	if (ctx.cr6.eq) goto loc_8229C4D4;
	// b 0x8229c4fc
	goto loc_8229C4FC;
loc_8229C5B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229c5c8
	if (ctx.cr6.eq) goto loc_8229C5C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C5C4;
	sub_82279430(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_8229C5C8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229c5dc
	if (ctx.cr6.eq) goto loc_8229C5DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C5D8;
	sub_82279430(ctx, base);
loc_8229C5D8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_8229C5DC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8229C5E0:
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x8229c4a4
	if (ctx.cr6.lt) goto loc_8229C4A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229c5fc
	if (ctx.cr6.eq) goto loc_8229C5FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C5F8;
	sub_82279430(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_8229C5FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229c610
	if (ctx.cr6.eq) goto loc_8229C610;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C60C;
	sub_82279430(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_8229C610:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8229c3ac
	if (ctx.cr6.lt) goto loc_8229C3AC;
loc_8229C61C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8229C620:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229c630
	if (ctx.cr6.eq) goto loc_8229C630;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C630;
	sub_82279430(ctx, base);
loc_8229C630:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8229c640
	if (ctx.cr6.eq) goto loc_8229C640;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C640;
	sub_82279430(ctx, base);
loc_8229C640:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8229c650
	if (ctx.cr6.eq) goto loc_8229C650;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C650;
	sub_82279430(ctx, base);
loc_8229C650:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229c660
	if (ctx.cr6.eq) goto loc_8229C660;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82279430
	ctx.lr = 0x8229C660;
	sub_82279430(ctx, base);
loc_8229C660:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8229C664:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
loc_8229C66C:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8229c620
	goto loc_8229C620;
}

DEFINE_REX_FUNC(sub_822C1B10) {
	REX_FUNC_PROLOGUE();
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1C88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8227bd98
	ctx.lr = 0x822C1C9C;
	sub_8227BD98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C1E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c1e80
	if (ctx.cr0.eq) goto loc_822C1E80;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_822C1E5C:
	// lwax r8,r9,r11
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822c1e5c
	if (!ctx.cr0.eq) goto loc_822C1E5C;
loc_822C1E80:
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x8227bb18
	ctx.lr = 0x822C1EB0;
	sub_8227BB18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x822C5730;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822c5944
	if (ctx.cr0.eq) goto loc_822C5944;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8226a7f8
	ctx.lr = 0x822C5758;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// bne 0x822c5770
	if (!ctx.cr0.eq) goto loc_822C5770;
loc_822C5764:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822c5948
	goto loc_822C5948;
loc_822C5770:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x825d6870
	ctx.lr = 0x822C5784;
	sub_825D6870(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r25,32(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C5798:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c5798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C5798;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,10(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x822c57dc
	if (!ctx.cr6.gt) goto loc_822C57DC;
loc_822C57D0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822c5948
	goto loc_822C5948;
loc_822C57DC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x822c5944
	if (ctx.cr6.eq) goto loc_822C5944;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_822C57F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822c57d0
	if (ctx.cr6.gt) goto loc_822C57D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822c13b0
	ctx.lr = 0x822C5838;
	sub_822C13B0(ctx, base);
	// lhz r9,10(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r9,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822c5888
	if (!ctx.cr6.gt) goto loc_822C5888;
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822c5884
	if (!ctx.cr0.lt) goto loc_822C5884;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822C5884:
	// sth r11,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_822C5888:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822c53c0
	ctx.lr = 0x822C589C;
	sub_822C53C0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stwx r3,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwzx r10,r28,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c5764
	if (ctx.cr6.eq) goto loc_822C5764;
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r10,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x822c58d8
	if (ctx.cr0.eq) goto loc_822C58D8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_822C58D8:
	// lwzx r8,r28,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,44(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x822c590c
	if (ctx.cr6.eq) goto loc_822C590C;
	// li r10,4
	ctx.r10.s64 = 4;
loc_822C590C:
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lhz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 8);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lhz r9,10(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// blt cr6,0x822c57f8
	if (ctx.cr6.lt) goto loc_822C57F8;
loc_822C5944:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C5948:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D0298) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d02c8
	if (!ctx.cr6.eq) goto loc_822D02C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d02cc
	if (ctx.cr6.eq) goto loc_822D02CC;
loc_822D02C8:
	// bl 0x82280f90
	ctx.lr = 0x822D02CC;
	sub_82280F90(ctx, base);
loc_822D02CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0328
	if (ctx.cr6.eq) goto loc_822D0328;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0328
	if (ctx.cr6.eq) goto loc_822D0328;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0328
	if (ctx.cr6.eq) goto loc_822D0328;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d0328
	if (!ctx.cr0.eq) goto loc_822D0328;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ddad0
	ctx.lr = 0x822D0304;
	sub_822DDAD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ddad0
	ctx.lr = 0x822D030C;
	sub_822DDAD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ddad0
	ctx.lr = 0x822D0314;
	sub_822DDAD0(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822d01a0
	ctx.lr = 0x822D0320;
	sub_822D01A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ddad0
	ctx.lr = 0x822D0328;
	sub_822DDAD0(ctx, base);
loc_822D0328:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0340
	if (ctx.cr6.eq) goto loc_822D0340;
	// bl 0x82279430
	ctx.lr = 0x822D033C;
	sub_82279430(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_822D0340:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0354
	if (ctx.cr6.eq) goto loc_822D0354;
	// bl 0x82279430
	ctx.lr = 0x822D0350;
	sub_82279430(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_822D0354:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d0368
	if (ctx.cr6.eq) goto loc_822D0368;
	// bl 0x822876f8
	ctx.lr = 0x822D0364;
	sub_822876F8(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_822D0368:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822d037c
	if (ctx.cr6.eq) goto loc_822D037C;
	// bl 0x82279430
	ctx.lr = 0x822D0378;
	sub_82279430(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_822D037C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D76B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x822D76B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d76e4
	if (ctx.cr6.eq) goto loc_822D76E4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x822d12e8
	ctx.lr = 0x822D76E0;
	sub_822D12E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_822D76E4:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,100(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x822d7738
	if (!ctx.cr6.gt) goto loc_822D7738;
loc_822D7710:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822d7710
	if (ctx.cr6.lt) goto loc_822D7710;
loc_822D7738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D8D68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r7,100(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,104(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d8de8
	if (!ctx.cr6.lt) goto loc_822D8DE8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lfs f13,5840(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9456(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9456);
	ctx.f0.f64 = double(temp.f32);
loc_822D8DB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x822d8db0
	if (ctx.cr6.lt) goto loc_822D8DB0;
loc_822D8DE8:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8e04
	if (ctx.cr6.eq) goto loc_822D8E04;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822d1258
	ctx.lr = 0x822D8E04;
	sub_822D1258(ctx, base);
loc_822D8E04:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d8e20
	if (ctx.cr6.eq) goto loc_822D8E20;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822d1630
	ctx.lr = 0x822D8E20;
	sub_822D1630(ctx, base);
loc_822D8E20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D9B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8229d0b0
	ctx.lr = 0x822D9B58;
	sub_8229D0B0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d9b70
	if (ctx.cr6.eq) goto loc_822D9B70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1258
	ctx.lr = 0x822D9B70;
	sub_822D1258(ctx, base);
loc_822D9B70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d9b88
	if (ctx.cr6.eq) goto loc_822D9B88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d1630
	ctx.lr = 0x822D9B88;
	sub_822D1630(ctx, base);
loc_822D9B88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC0F0) {
	REX_FUNC_PROLOGUE();
	// addi r10,r5,4095
	ctx.r10.s64 = ctx.r5.s64 + 4095;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bne cr6,0x822dc11c
	if (!ctx.cr6.eq) goto loc_822DC11C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
loc_822DC11C:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCAB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822dcb7c
	if (ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dcb7c
	if (!ctx.cr6.eq) goto loc_822DCB7C;
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822dcb60
	if (ctx.cr6.eq) goto loc_822DCB60;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DCB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822dcb6c
	goto loc_822DCB6C;
loc_822DCB60:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822DCB6C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x822dcb80
	goto loc_822DCB80;
loc_822DCB7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DCB80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E0040) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x822E0048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-27768
	ctx.r30.s64 = ctx.r11.s64 + -27768;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_822E0064:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822e0088
	if (!ctx.cr6.eq) goto loc_822E0088;
	// stwcx. r31,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822e0064
	if (!ctx.cr0.eq) goto loc_822E0064;
	// b 0x822e0090
	goto loc_822E0090;
loc_822E0088:
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822E0090:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822e00d4
	goto loc_822E00D4;
loc_822E0098:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82266ab0
	ctx.lr = 0x822E00A0;
	sub_82266AB0(ctx, base);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_822E00A4:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822e00c8
	if (!ctx.cr6.eq) goto loc_822E00C8;
	// stwcx. r31,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822e00a4
	if (!ctx.cr0.eq) goto loc_822E00A4;
	// b 0x822e00d0
	goto loc_822E00D0;
loc_822E00C8:
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822E00D0:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_822E00D4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822e0098
	if (ctx.cr6.eq) goto loc_822E0098;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r29,-32152
	ctx.r29.s64 = -2107113472;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e00f8
	if (!ctx.cr6.eq) goto loc_822E00F8;
	// bl 0x8261c704
	ctx.lr = 0x822E00F0;
	__imp__KeTlsAlloc(ctx, base);
	// stw r3,8808(r29)
	REX_STORE_U32(ctx.r29.u32 + 8808, ctx.r3.u32);
	// b 0x822e00fc
	goto loc_822E00FC;
loc_822E00F8:
	// lwz r3,8808(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8808);
loc_822E00FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822e011c
	if (!ctx.cr6.eq) goto loc_822E011C;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x822e0170
	goto loc_822E0170;
loc_822E011C:
	// bl 0x8261c6e4
	ctx.lr = 0x822E0120;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822e0164
	if (!ctx.cr0.eq) goto loc_822E0164;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8226a7f8
	ctx.lr = 0x822E0134;
	sub_8226A7F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822e0148
	if (!ctx.cr0.eq) goto loc_822E0148;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x822e0170
	goto loc_822E0170;
loc_822E0148:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6870
	ctx.lr = 0x822E0158;
	sub_825D6870(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8808(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8808);
	// bl 0x8261c6f4
	ctx.lr = 0x822E0164;
	__imp__KeTlsSetValue(ctx, base);
loc_822E0164:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_822E0170:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_822E0174:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r28,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822e0174
	if (!ctx.cr0.eq) goto loc_822E0174;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EFC60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,24612
	ctx.r4.s64 = ctx.r10.s64 + 24612;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822EFC84;
	sub_822ECF00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EFDF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,24740
	ctx.r4.s64 = ctx.r10.s64 + 24740;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822EFE1C;
	sub_822ECF00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F05B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x822F05B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F05CC;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24420
	ctx.r4.s64 = ctx.r11.s64 + 24420;
	// bl 0x822ecf00
	ctx.lr = 0x822F05E4;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,24492
	ctx.r4.s64 = ctx.r10.s64 + 24492;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F0618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,24160
	ctx.r27.s64 = ctx.r11.s64 + 24160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F0634;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822f070c
	if (!ctx.cr6.gt) goto loc_822F070C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r10,24412
	ctx.r29.s64 = ctx.r10.s64 + 24412;
	// addi r28,r11,24236
	ctx.r28.s64 = ctx.r11.s64 + 24236;
loc_822F065C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F0664;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8229ff20
	ctx.lr = 0x822F0684;
	sub_8229FF20(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8229ff20
	ctx.lr = 0x822F069C;
	sub_8229FF20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F06A4;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F06BC;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F06E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F06F4;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f0710
	if (ctx.cr0.lt) goto loc_822F0710;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f065c
	if (ctx.cr6.lt) goto loc_822F065C;
loc_822F070C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F0710:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F9E80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x822F9E88;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,31856
	ctx.r29.s64 = ctx.r11.s64 + 31856;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// li r28,1
	ctx.r28.s64 = 1;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r29,-96
	ctx.r5.s64 = ctx.r29.s64 + -96;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// clrlwi r31,r10,12
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x822f6b88
	ctx.lr = 0x822F9EEC;
	sub_822F6B88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x822f9f20
	if (!ctx.cr6.eq) goto loc_822F9F20;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x822f6b88
	ctx.lr = 0x822F9F20;
	sub_822F6B88(ctx, base);
loc_822F9F20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822fa014
	if (!ctx.cr6.eq) goto loc_822FA014;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f9fb4
	if (ctx.cr6.eq) goto loc_822F9FB4;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,9568(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9568);
loc_822F9F44:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822f9fd0
	if (!ctx.cr6.eq) goto loc_822F9FD0;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822f9fd0
	if (ctx.cr0.eq) goto loc_822F9FD0;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822f9fd0
	if (!ctx.cr6.eq) goto loc_822F9FD0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x822f9fd0
	if (!ctx.cr6.eq) goto loc_822F9FD0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822f9f44
	if (ctx.cr6.lt) goto loc_822F9F44;
loc_822F9FB4:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// beq cr6,0x822f9fd8
	if (ctx.cr6.eq) goto loc_822F9FD8;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x822f9fe0
	goto loc_822F9FE0;
loc_822F9FD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822fa014
	goto loc_822FA014;
loc_822F9FD8:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_822F9FE0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822fa010
	if (ctx.cr6.eq) goto loc_822FA010;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822F9FF0:
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822f9ff0
	if (!ctx.cr0.eq) goto loc_822F9FF0;
loc_822FA010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FA014:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823035E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82303678
	if (ctx.cr6.eq) goto loc_82303678;
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82303678
	if (!ctx.cr0.eq) goto loc_82303678;
	// lwz r6,88(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82303678
	if (ctx.cr6.gt) goto loc_82303678;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82303620:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82303668
	if (!ctx.cr6.eq) goto loc_82303668;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82303668
	if (ctx.cr6.eq) goto loc_82303668;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8230364C:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82303680
	if (ctx.cr6.eq) goto loc_82303680;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8230364c
	if (ctx.cr6.lt) goto loc_8230364C;
loc_82303668:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82303620
	if (!ctx.cr6.gt) goto loc_82303620;
loc_82303678:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82303680:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82308C90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82308C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,104(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82308ce8
	if (!ctx.cr6.eq) goto loc_82308CE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
loc_82308CDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82308CE0:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_82308CE8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r30,24(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82308e18
	if (ctx.cr6.eq) goto loc_82308E18;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82308D0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82308d0c
	if (!ctx.cr6.eq) goto loc_82308D0C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82308e18
	if (!ctx.cr6.gt) goto loc_82308E18;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-11124
	ctx.r11.s64 = ctx.r11.s64 + -11124;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
loc_82308D40:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308d60
	if (!ctx.cr0.eq) goto loc_82308D60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82308d40
	if (!ctx.cr6.eq) goto loc_82308D40;
loc_82308D60:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82308e18
	if (!ctx.cr0.eq) goto loc_82308E18;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82308d94
	if (!ctx.cr6.gt) goto loc_82308D94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,-26188
	ctx.r6.s64 = ctx.r11.s64 + -26188;
	// li r5,4543
	ctx.r5.s64 = 4543;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321ad0
	ctx.lr = 0x82308D8C;
	sub_82321AD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82308D94:
	// addi r28,r31,440
	ctx.r28.s64 = ctx.r31.s64 + 440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a5410
	ctx.lr = 0x82308DA4;
	sub_822A5410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82308dd8
	if (!ctx.cr0.eq) goto loc_82308DD8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,468(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a5d48
	ctx.lr = 0x82308DC0;
	sub_822A5D48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82308ce0
	if (ctx.cr0.lt) goto loc_82308CE0;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r10.u32);
	// b 0x82308ddc
	goto loc_82308DDC;
loc_82308DD8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_82308DDC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308DFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,108(r29)
	REX_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
loc_82308E00:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82308cdc
	if (ctx.cr6.eq) goto loc_82308CDC;
loc_82308E0C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82308ce0
	goto loc_82308CE0;
loc_82308E18:
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82308e6c
	if (ctx.cr6.eq) goto loc_82308E6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308e6c
	if (ctx.cr0.eq) goto loc_82308E6C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82308e6c
	if (!ctx.cr6.eq) goto loc_82308E6C;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310ba0
	ctx.lr = 0x82308E4C;
	sub_82310BA0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r11,-26200
	ctx.r6.s64 = ctx.r11.s64 + -26200;
loc_82308E58:
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321ad0
	ctx.lr = 0x82308E68;
	sub_82321AD0(ctx, base);
	// b 0x82308e0c
	goto loc_82308E0C;
loc_82308E6C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// beq 0x82308f0c
	if (ctx.cr0.eq) goto loc_82308F0C;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82308ee0
	if (ctx.cr0.eq) goto loc_82308EE0;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82308ee0
	if (!ctx.cr0.eq) goto loc_82308EE0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,244(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304cf0
	ctx.lr = 0x82308EA4;
	sub_82304CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82308ce0
	if (ctx.cr0.lt) goto loc_82308CE0;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82308e00
	if (!ctx.cr6.eq) goto loc_82308E00;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82308e00
	if (!ctx.cr6.eq) goto loc_82308E00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823101e8
	ctx.lr = 0x82308ED0;
	sub_823101E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r11,-26236
	ctx.r6.s64 = ctx.r11.s64 + -26236;
	// b 0x82308e58
	goto loc_82308E58;
loc_82308EE0:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308cdc
	if (ctx.cr0.eq) goto loc_82308CDC;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,2
	ctx.r6.s64 = 2;
loc_82308EF0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304cf0
	ctx.lr = 0x82308F00;
	sub_82304CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82308e00
	if (!ctx.cr0.lt) goto loc_82308E00;
	// b 0x82308ce0
	goto loc_82308CE0;
loc_82308F0C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82308f90
	if (ctx.cr0.eq) goto loc_82308F90;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82308f90
	if (!ctx.cr0.eq) goto loc_82308F90;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304cf0
	ctx.lr = 0x82308F34;
	sub_82304CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82308ce0
	if (ctx.cr0.lt) goto loc_82308CE0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82308e00
	if (!ctx.cr6.eq) goto loc_82308E00;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82308F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 11, ctx.xer);
	// bne cr6,0x82308e00
	if (!ctx.cr6.eq) goto loc_82308E00;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// ori r10,r10,276
	ctx.r10.u64 = ctx.r10.u64 | 276;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// lfd f13,9536(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 9536);
	// stfd f0,32(r29)
	REX_STORE_U64(ctx.r29.u32 + 32, ctx.f0.u64);
	// stfd f13,40(r29)
	REX_STORE_U64(ctx.r29.u32 + 40, ctx.f13.u64);
	// b 0x82308e00
	goto loc_82308E00;
loc_82308F90:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308cdc
	if (ctx.cr0.eq) goto loc_82308CDC;
	// lwz r5,252(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82308ef0
	goto loc_82308EF0;
}

DEFINE_REX_FUNC(sub_82318648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82318650;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82318694
	if (!ctx.cr6.gt) goto loc_82318694;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82318670:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82318670
	if (ctx.cr6.lt) goto loc_82318670;
loc_82318694:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82318894
	if (!ctx.cr6.gt) goto loc_82318894;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823186A8:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r31,r28,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82318880
	if (ctx.cr0.eq) goto loc_82318880;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x823187a0
	goto loc_823187A0;
loc_823186C8:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82318798
	if (ctx.cr6.eq) goto loc_82318798;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8231875c
	if (!ctx.cr6.gt) goto loc_8231875C;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
loc_823186F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r5,48(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82318754
	if (ctx.cr6.eq) goto loc_82318754;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r4,48(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,12(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82318754
	if (!ctx.cr6.eq) goto loc_82318754;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823186f8
	if (ctx.cr6.lt) goto loc_823186F8;
loc_82318754:
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82318798
	if (ctx.cr6.lt) goto loc_82318798;
loc_8231875C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318794
	if (ctx.cr6.eq) goto loc_82318794;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82318770
	goto loc_82318770;
loc_8231876C:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82318770:
	// lwzx r10,r11,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// stwx r10,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8231876c
	if (!ctx.cr0.eq) goto loc_8231876C;
loc_82318794:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82318798:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823187A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230f308
	ctx.lr = 0x823187AC;
	sub_8230F308(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823186c8
	if (!ctx.cr0.eq) goto loc_823186C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82318880
	if (!ctx.cr6.eq) goto loc_82318880;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82318880
	if (!ctx.cr6.gt) goto loc_82318880;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823187DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r6,24(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231886c
	if (!ctx.cr6.eq) goto loc_8231886C;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
loc_8231886C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823187dc
	if (ctx.cr6.lt) goto loc_823187DC;
loc_82318880:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823186a8
	if (ctx.cr6.lt) goto loc_823186A8;
loc_82318894:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232F480) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x8232F488;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232f5bc
	if (ctx.cr6.eq) goto loc_8232F5BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232f5bc
	if (!ctx.cr6.eq) goto loc_8232F5BC;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8232f4c0
	if (ctx.cr6.eq) goto loc_8232F4C0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232f5bc
	if (!ctx.cr6.eq) goto loc_8232F5BC;
loc_8232F4C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8232f5bc
	if (ctx.cr6.eq) goto loc_8232F5BC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8232f5bc
	if (!ctx.cr6.eq) goto loc_8232F5BC;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8232f5bc
	if (!ctx.cr6.eq) goto loc_8232F5BC;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822dc2d0
	ctx.lr = 0x8232F4EC;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232f504
	if (ctx.cr0.eq) goto loc_8232F504;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822dc8f0
	ctx.lr = 0x8232F4FC;
	sub_822DC8F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8232f508
	goto loc_8232F508;
loc_8232F504:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8232F508:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8232f5bc
	if (ctx.cr6.eq) goto loc_8232F5BC;
	// lwz r28,24(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r30,24(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r5,r11,-2888
	ctx.r5.s64 = ctx.r11.s64 + -2888;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229ff20
	ctx.lr = 0x8232F530;
	sub_8229FF20(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8232F538:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232f538
	if (!ctx.cr6.eq) goto loc_8232F538;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8232F558:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8232f558
	if (!ctx.cr6.eq) goto loc_8232F558;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822dc188
	ctx.lr = 0x8232F58C;
	sub_822DC188(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8232f5bc
	if (ctx.cr0.eq) goto loc_8232F5BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,-1756
	ctx.r5.s64 = ctx.r11.s64 + -1756;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229ff20
	ctx.lr = 0x8232F5B0;
	sub_8229FF20(ctx, base);
	// stw r31,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8232f5c0
	goto loc_8232F5C0;
loc_8232F5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232F5C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82335C50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82335C58;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82335eb0
	if (ctx.cr6.eq) goto loc_82335EB0;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82335e98
	if (!ctx.cr6.eq) goto loc_82335E98;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8232d668
	ctx.lr = 0x82335C94;
	sub_8232D668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82335e98
	if (ctx.cr0.eq) goto loc_82335E98;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822dc2d0
	ctx.lr = 0x82335CA4;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335cd0
	if (ctx.cr0.eq) goto loc_82335CD0;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822ddcd0
	ctx.lr = 0x82335CC8;
	sub_822DDCD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82335cd4
	goto loc_82335CD4;
loc_82335CD0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82335CD4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82335eb0
	if (ctx.cr6.eq) goto loc_82335EB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823306e8
	ctx.lr = 0x82335CF0;
	sub_823306E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82335d10
	if (!ctx.cr0.eq) goto loc_82335D10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3020
	ctx.r5.s64 = 3020;
	// addi r6,r11,304
	ctx.r6.s64 = ctx.r11.s64 + 304;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232cc18
	ctx.lr = 0x82335D10;
	sub_8232CC18(ctx, base);
loc_82335D10:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232bd48
	ctx.lr = 0x82335D20;
	sub_8232BD48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82335d80
	if (ctx.cr0.eq) goto loc_82335D80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332128
	ctx.lr = 0x82335D38;
	sub_82332128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82335d80
	if (ctx.cr0.lt) goto loc_82335D80;
	// addi r6,r29,48
	ctx.r6.s64 = ctx.r29.s64 + 48;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232bbe0
	ctx.lr = 0x82335D54;
	sub_8232BBE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82335d80
	if (ctx.cr0.lt) goto loc_82335D80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfd f0,9568(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82335d78
	if (!ctx.cr6.eq) goto loc_82335D78;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82335D78:
	// bl 0x822dc410
	ctx.lr = 0x82335D7C;
	sub_822DC410(ctx, base);
	// b 0x82335eb4
	goto loc_82335EB4;
loc_82335D80:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822dc2d0
	ctx.lr = 0x82335D88;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335d9c
	if (ctx.cr0.eq) goto loc_82335D9C;
	// bl 0x822dea50
	ctx.lr = 0x82335D94;
	sub_822DEA50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82335da0
	goto loc_82335DA0;
loc_82335D9C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82335DA0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82335eb0
	if (ctx.cr6.eq) goto loc_82335EB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334610
	ctx.lr = 0x82335DDC;
	sub_82334610(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335eb0
	if (ctx.cr0.eq) goto loc_82335EB0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82335e10
	if (ctx.cr6.eq) goto loc_82335E10;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335eb0
	if (ctx.cr0.eq) goto loc_82335EB0;
loc_82335E10:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82335e38
	if (ctx.cr6.eq) goto loc_82335E38;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335eb0
	if (ctx.cr0.eq) goto loc_82335EB0;
loc_82335E38:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82335e60
	if (ctx.cr6.eq) goto loc_82335E60;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335eb0
	if (ctx.cr0.eq) goto loc_82335EB0;
loc_82335E60:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x82335E68;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82335e88
	if (ctx.cr0.eq) goto loc_82335E88;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-4420
	ctx.r6.s64 = ctx.r11.s64 + -4420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822dc498
	ctx.lr = 0x82335E84;
	sub_822DC498(ctx, base);
	// b 0x82335e8c
	goto loc_82335E8C;
loc_82335E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82335E8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335eb0
	if (ctx.cr6.eq) goto loc_82335EB0;
	// b 0x82335eb4
	goto loc_82335EB4;
loc_82335E98:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r5,3019
	ctx.r5.s64 = 3019;
	// addi r6,r11,240
	ctx.r6.s64 = ctx.r11.s64 + 240;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232cc18
	ctx.lr = 0x82335EB0;
	sub_8232CC18(ctx, base);
loc_82335EB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82335EB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82348188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x82348190;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_823481A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823481c4
	if (ctx.cr6.eq) goto loc_823481C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// blt cr6,0x823481a8
	if (ctx.cr6.lt) goto loc_823481A8;
loc_823481C4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8234862c
	if (ctx.cr6.gt) goto loc_8234862C;
	// lwz r10,1156(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1156);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x8234862c
	if (ctx.cr6.gt) goto loc_8234862C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823482a8
	if (ctx.cr6.eq) goto loc_823482A8;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r8,r31,1108
	ctx.r8.s64 = ctx.r31.s64 + 1108;
loc_82348200:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// beq 0x82348240
	if (ctx.cr0.eq) goto loc_82348240;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8234862c
	if (ctx.cr6.eq) goto loc_8234862C;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82348294
	goto loc_82348294;
loc_82348240:
	// lis r27,4352
	ctx.r27.s64 = 285212672;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8234862c
	if (ctx.cr6.eq) goto loc_8234862C;
	// lis r27,29200
	ctx.r27.s64 = 1913651200;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82348288
	if (ctx.cr6.eq) goto loc_82348288;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,10,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFFC;
	// lwz r27,20(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lbz r9,111(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x8234862c
	if (!ctx.cr6.eq) goto loc_8234862C;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234862c
	if (!ctx.cr6.eq) goto loc_8234862C;
loc_82348288:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82348294:
	// lwz r11,1156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1156);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82348200
	if (ctx.cr6.lt) goto loc_82348200;
loc_823482A8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x82347f38
	ctx.lr = 0x823482D8;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347f38
	ctx.lr = 0x823482FC;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347f38
	ctx.lr = 0x82348320;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347f38
	ctx.lr = 0x82348344;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347f38
	ctx.lr = 0x82348368;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347f38
	ctx.lr = 0x8234838C;
	sub_82347F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8234862c
	if (ctx.cr0.eq) goto loc_8234862C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82348618
	if (!ctx.cr6.eq) goto loc_82348618;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r24.u64);
	// std r24,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r24.u64);
	// std r24,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r24.u64);
loc_823483C4:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823483e4
	if (!ctx.cr6.eq) goto loc_823483E4;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823485c8
	if (ctx.cr6.eq) goto loc_823485C8;
loc_823483E4:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348400
	if (ctx.cr6.eq) goto loc_82348400;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
loc_82348400:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234841c
	if (ctx.cr6.eq) goto loc_8234841C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r27,r11,0,0,11
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
loc_8234841C:
	// bl 0x823429e8
	ctx.lr = 0x82348420;
	sub_823429E8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82348438
	if (!ctx.cr0.eq) goto loc_82348438;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823429e8
	ctx.lr = 0x82348430;
	sub_823429E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823485c8
	if (ctx.cr0.eq) goto loc_823485C8;
loc_82348438:
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823484f0
	if (ctx.cr6.eq) goto loc_823484F0;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfd f1,32(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r28.u32 + 32);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82310618
	ctx.lr = 0x82348474;
	sub_82310618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8234862c
	if (ctx.cr6.eq) goto loc_8234862C;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823484cc
	if (ctx.cr0.eq) goto loc_823484CC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_8234849C:
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,560(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8234849c
	if (ctx.cr6.lt) goto loc_8234849C;
loc_823484CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r23,r10,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r28,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r28.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8230ff98
	ctx.lr = 0x823484EC;
	sub_8230FF98(ctx, base);
	// stw r25,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r25.u32);
loc_823484F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823429e8
	ctx.lr = 0x823484F8;
	sub_823429E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823485c0
	if (ctx.cr0.eq) goto loc_823485C0;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82348548
	if (!ctx.cr6.eq) goto loc_82348548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,32(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r28.u32 + 32);
	// lwz r6,16(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82310618
	ctx.lr = 0x8234853C;
	sub_82310618(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8234862c
	if (ctx.cr6.eq) goto loc_8234862C;
loc_82348548:
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82348594
	if (ctx.cr0.eq) goto loc_82348594;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82348564:
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82348564
	if (ctx.cr6.lt) goto loc_82348564;
loc_82348594:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwx r28,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// bne cr6,0x823485c0
	if (!ctx.cr6.eq) goto loc_823485C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r28,r10,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230ff98
	ctx.lr = 0x823485BC;
	sub_8230FF98(ctx, base);
	// stw r25,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
loc_823485C0:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8234862c
	if (ctx.cr6.eq) goto loc_8234862C;
loc_823485C8:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 24, ctx.xer);
	// blt cr6,0x823483c4
	if (ctx.cr6.lt) goto loc_823483C4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_823485DC:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823485f4
	if (ctx.cr6.eq) goto loc_823485F4;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_823485F4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234860c
	if (ctx.cr6.eq) goto loc_8234860C;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8234860C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x823485dc
	if (ctx.cr6.lt) goto loc_823485DC;
loc_82348618:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// b 0x82348630
	goto loc_82348630;
loc_8234862C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82348630:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235F408) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8235F410;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d73f4
	ctx.lr = 0x8235F418;
	__savefpr_19(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,1084(r1)
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r8,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r8.u32);
	// li r24,4
	ctx.r24.s64 = 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f19,5476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5476);
	ctx.f19.f64 = double(temp.f32);
	// beq cr6,0x8235f4a0
	if (ctx.cr6.eq) goto loc_8235F4A0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8235F44C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// bge cr6,0x8235f45c
	if (!ctx.cr6.lt) goto loc_8235F45C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8235F45C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x8235f44c
	if (!ctx.cr0.eq) goto loc_8235F44C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x8235f48c
	if (!ctx.cr6.eq) goto loc_8235F48C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// b 0x8235fdf4
	goto loc_8235FDF4;
loc_8235F48C:
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x8235f4a4
	goto loc_8235F4A4;
loc_8235F4A0:
	// stw r24,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
loc_8235F4A4:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8235f4bc
	if (ctx.cr6.eq) goto loc_8235F4BC;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d6870
	ctx.lr = 0x8235F4BC;
	sub_825D6870(ctx, base);
loc_8235F4BC:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r16,1084(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r29,r1,284
	ctx.r29.s64 = ctx.r1.s64 + 284;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// addi r28,r1,312
	ctx.r28.s64 = ctx.r1.s64 + 312;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r1,316
	ctx.r9.s64 = ctx.r1.s64 + 316;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// addi r8,r1,320
	ctx.r8.s64 = ctx.r1.s64 + 320;
	// addi r18,r1,344
	ctx.r18.s64 = ctx.r1.s64 + 344;
	// subf r23,r31,r29
	ctx.r23.u64 = ctx.r29.u64 - ctx.r31.u64;
	// subf r29,r31,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r31.u64;
	// subf r21,r31,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r31.u64;
	// subf r20,r31,r8
	ctx.r20.u64 = ctx.r8.u64 - ctx.r31.u64;
	// subf r28,r31,r18
	ctx.r28.u64 = ctx.r18.u64 - ctx.r31.u64;
	// stw r21,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r21.u32);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// stw r20,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r20.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,348
	ctx.r7.s64 = ctx.r1.s64 + 348;
	// lfs f27,14700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14700);
	ctx.f27.f64 = double(temp.f32);
	// addi r27,r1,328
	ctx.r27.s64 = ctx.r1.s64 + 328;
	// lfs f20,9872(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9872);
	ctx.f20.f64 = double(temp.f32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// lfs f22,-324(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + -324);
	ctx.f22.f64 = double(temp.f32);
	// addi r17,r1,528
	ctx.r17.s64 = ctx.r1.s64 + 528;
	// subf r30,r31,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r31.u64;
	// subf r22,r31,r10
	ctx.r22.u64 = ctx.r10.u64 - ctx.r31.u64;
	// subf r19,r31,r7
	ctx.r19.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r3,r31,r27
	ctx.r3.u64 = ctx.r27.u64 - ctx.r31.u64;
	// stw r22,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// subf r10,r31,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r31.u64;
	// stw r19,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r19.u32);
	// addi r27,r9,14700
	ctx.r27.s64 = ctx.r9.s64 + 14700;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// subf r7,r31,r17
	ctx.r7.u64 = ctx.r17.u64 - ctx.r31.u64;
	// lwz r15,224(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r17,-32252
	ctx.r17.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,8(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f31,-296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -296);
	ctx.f31.f64 = double(temp.f32);
	// lis r14,-32255
	ctx.r14.s64 = -2113863680;
	// lfs f28,4(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lis r18,-32255
	ctx.r18.s64 = -2113863680;
	// lfs f21,-320(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -320);
	ctx.f21.f64 = double(temp.f32);
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// lfs f23,-26800(r17)
	temp.u32 = REX_LOAD_U32(ctx.r17.u32 + -26800);
	ctx.f23.f64 = double(temp.f32);
	// addi r26,r1,332
	ctx.r26.s64 = ctx.r1.s64 + 332;
	// lfs f6,5840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5840);
	ctx.f6.f64 = double(temp.f32);
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
	// lfs f30,-292(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -292);
	ctx.f30.f64 = double(temp.f32);
	// lfs f7,-300(r14)
	temp.u32 = REX_LOAD_U32(ctx.r14.u32 + -300);
	ctx.f7.f64 = double(temp.f32);
	// ld r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// lfs f8,-304(r18)
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + -304);
	ctx.f8.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r31,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r31.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// subf r25,r31,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235F5C4:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x8235f5fc
	if (ctx.cr6.eq) goto loc_8235F5FC;
	// lwz r8,208(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
loc_8235F5FC:
	// fmadds f11,f13,f8,f19
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f19.f64)));
	// addi r9,r1,528
	ctx.r9.s64 = ctx.r1.s64 + 528;
	// fmadds f10,f12,f7,f19
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f19.f64)));
	// addi r8,r1,532
	ctx.r8.s64 = ctx.r1.s64 + 532;
	// fmadds f9,f0,f8,f19
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f19.f64)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stfsx f6,r4,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f11.u64);
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwa r6,180(r1)
	ctx.r6.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 180));
	// stfd f11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.f11.u64);
	// fctiwz f10,f9
	ctx.f10.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f10,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.f10.u64);
	// std r6,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// lwa r18,180(r1)
	ctx.r18.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 180));
	// lfd f10,192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// lwa r17,244(r1)
	ctx.r17.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 244));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r18,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r18.u64);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// lfd f11,216(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// std r18,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r18.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfsx f9,r7,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// beq cr6,0x8235f754
	if (ctx.cr6.eq) goto loc_8235F754;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x8235f6d0
	if (ctx.cr6.eq) goto loc_8235F6D0;
	// lfsx f5,r30,r11
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r23,r11
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f23,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f23.f64, ctx.f5.f64)));
	// lfsx f3,r22,r11
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f23,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f23.f64, ctx.f4.f64)));
	// fmadds f3,f0,f23,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f23.f64, ctx.f3.f64)));
	// stfsx f5,r30,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r23,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r22,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, temp.u32);
loc_8235F6D0:
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bge cr6,0x8235f754
	if (!ctx.cr6.lt) goto loc_8235F754;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8235f704
	if (ctx.cr6.eq) goto loc_8235F704;
	// lfsx f5,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r21,r11
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f22,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f22.f64, ctx.f5.f64)));
	// lfsx f3,r20,r11
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f22.f64, ctx.f4.f64)));
	// fmadds f3,f0,f22,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f22.f64, ctx.f3.f64)));
	// stfsx f5,r29,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r21,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r20,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
loc_8235F704:
	// lfsx f5,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// lfsx f4,r26,r11
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f21.f64, ctx.f5.f64)));
	// lfsx f3,r25,r11
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f21,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f21.f64, ctx.f4.f64)));
	// fmadds f3,f0,f21,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f21.f64, ctx.f3.f64)));
	// stfsx f5,r3,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r26,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r25,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8235f754
	if (ctx.cr6.eq) goto loc_8235F754;
	// lfsx f5,r28,r11
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f13,f20,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f20.f64, ctx.f5.f64)));
	// lfsx f4,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r15,r11
	temp.u32 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f20,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f20.f64, ctx.f4.f64)));
	// fmadds f0,f0,f20,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f20.f64, ctx.f5.f64)));
	// stfsx f13,r28,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r19,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r15,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r11.u32, temp.u32);
loc_8235F754:
	// fmuls f0,f9,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// fmuls f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmuls f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// blt cr6,0x8235f5c4
	if (ctx.cr6.lt) goto loc_8235F5C4;
	// lwz r18,164(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8235ef78
	ctx.lr = 0x8235F798;
	sub_8235EF78(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lfs f11,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,14716
	ctx.r10.s64 = ctx.r11.s64 + 14716;
	// lfs f10,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,14716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 14716);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x82493038
	ctx.lr = 0x8235F7FC;
	sub_82493038(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82493038
	ctx.lr = 0x8235F808;
	sub_82493038(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 4, ctx.xer);
	// bne cr6,0x8235f83c
	if (!ctx.cr6.eq) goto loc_8235F83C;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235f83c
	if (!ctx.cr6.eq) goto loc_8235F83C;
	// lwz r10,1060(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x8235fdf4
	goto loc_8235FDF4;
loc_8235F83C:
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// lwz r17,1060(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// rlwinm r6,r8,27,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3F;
	// rlwinm r7,r11,27,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r9,r8,21,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1F;
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// lfd f11,216(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r10,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r6,r18,-3
	ctx.r6.s64 = ctx.r18.s64 + -3;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// subfc r10,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f6,f11,f30
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f11,f9,f27
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmuls f9,f5,f29
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f12,f10,f29
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f13,f8,f28
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmuls f0,f27,f7
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// fmuls f10,f6,f28
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// bne cr6,0x8235f940
	if (!ctx.cr6.eq) goto loc_8235F940;
	// lfs f8,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// sth r8,0(r17)
	REX_STORE_U16(ctx.r17.u32 + 0, ctx.r8.u16);
	// lfs f7,252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// sth r11,2(r17)
	REX_STORE_U16(ctx.r17.u32 + 2, ctx.r11.u16);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x8235f968
	goto loc_8235F968;
loc_8235F940:
	// lfs f8,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// sth r11,0(r17)
	REX_STORE_U16(ctx.r17.u32 + 0, ctx.r11.u16);
	// lfs f7,188(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// sth r8,2(r17)
	REX_STORE_U16(ctx.r17.u32 + 2, ctx.r8.u16);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8235F968:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f7,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f8,108(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3, ctx.xer);
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bne cr6,0x8235fa04
	if (!ctx.cr6.eq) goto loc_8235FA04;
	// addi r11,r1,111
	ctx.r11.s64 = ctx.r1.s64 + 111;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,127
	ctx.r8.s64 = ctx.r1.s64 + 127;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-26816
	ctx.r11.s64 = ctx.r11.s64 + -26816;
	// vperm128 v63,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvsr v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// vsubfp128 v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,12
	ctx.r3.s64 = 12;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-26832
	ctx.r28.s64 = ctx.r11.s64 + -26832;
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r24
	ea = (ctx.r6.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8235fb50
	goto loc_8235FB50;
loc_8235FA04:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r22,160(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r1,111
	ctx.r10.s64 = ctx.r1.s64 + 111;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// std r7,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// addi r6,r1,127
	ctx.r6.s64 = ctx.r1.s64 + 127;
	// std r27,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r27.u64);
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r11,-26848
	ctx.r8.s64 = ctx.r11.s64 + -26848;
	// vperm128 v63,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// std r26,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r26.u64);
	// lvsr v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r30,r1,111
	ctx.r30.s64 = ctx.r1.s64 + 111;
	// std r31,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r31.u64);
	// vsubfp128 v12,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r21,168(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lwz r15,224(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// addi r14,r1,127
	ctx.r14.s64 = ctx.r1.s64 + 127;
	// lwz r19,260(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r11,12
	ctx.r11.s64 = 12;
	// lwz r20,256(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r18,164(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r17,1060(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r16,1084(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r9,r9,-26864
	ctx.r9.s64 = ctx.r9.s64 + -26864;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// lvsl v6,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lvsl v5,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// lvsr v4,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// addi r28,r11,-32260
	ctx.r28.s64 = ctx.r11.s64 + -32260;
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r24
	ea = (ctx.r5.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stvewx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r14
	ea = (ctx.r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lvx128 v62,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v61,v60,v61,v5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vsubfp128 v12,v61,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvewx128 v63,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r7,r24
	ea = (ctx.r7.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,216(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// stvewx128 v63,r27,r8
	ea = (ctx.r27.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// ld r27,240(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// ld r26,176(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
loc_8235FB50:
	// addi r11,r18,-1
	ctx.r11.s64 = ctx.r18.s64 + -1;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f26,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f25,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// frsp f24,f0
	ctx.f24.f64 = double(float(ctx.f0.f64));
	// lfs f28,5272(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5272);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// beq cr6,0x8235fbb0
	if (ctx.cr6.eq) goto loc_8235FBB0;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// b 0x8235fbb4
	goto loc_8235FBB4;
loc_8235FBB0:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_8235FBB4:
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x8235fbdc
	if (ctx.cr6.eq) goto loc_8235FBDC;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x825d6870
	ctx.lr = 0x8235FBDC;
	sub_825D6870(ctx, base);
loc_8235FBDC:
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// lfs f10,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// lfs f9,4(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// lfs f8,0(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// addi r24,r1,356
	ctx.r24.s64 = ctx.r1.s64 + 356;
	// subf r3,r31,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r31.u64;
	// subf r7,r31,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r30,r31,r10
	ctx.r30.u64 = ctx.r10.u64 - ctx.r31.u64;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// subf r4,r31,r24
	ctx.r4.u64 = ctx.r24.u64 - ctx.r31.u64;
loc_8235FC24:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 3, ctx.xer);
	// bne cr6,0x8235fc44
	if (!ctx.cr6.eq) goto loc_8235FC44;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// bge cr6,0x8235fc44
	if (!ctx.cr6.lt) goto loc_8235FC44;
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r29,r10,49152
	ctx.r29.u64 = ctx.r10.u64 | 3221225472;
	// b 0x8235fdd0
	goto loc_8235FDD0;
loc_8235FC44:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x8235fc80
	if (ctx.cr6.eq) goto loc_8235FC80;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f7,r30,r11
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_8235FC80:
	// fsubs f0,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsubs f7,f11,f25
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f25.f64));
	// fsubs f6,f13,f27
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmadds f0,f7,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f29.f64, ctx.f0.f64)));
	// fmadds f0,f6,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f31.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x8235fca8
	if (ctx.cr6.gt) goto loc_8235FCA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8235fcd0
	goto loc_8235FCD0;
loc_8235FCA8:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x8235fcb8
	if (ctx.cr6.lt) goto loc_8235FCB8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8235fcd0
	goto loc_8235FCD0;
loc_8235FCB8:
	// fadds f0,f0,f19
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
loc_8235FCD0:
	// rlwinm r31,r10,30,0,1
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// or r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 | ctx.r29.u64;
	// beq cr6,0x8235fdd0
	if (ctx.cr6.eq) goto loc_8235FDD0;
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f7,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// addi r24,r1,100
	ctx.r24.s64 = ctx.r1.s64 + 100;
	// addi r14,r1,104
	ctx.r14.s64 = ctx.r1.s64 + 104;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// lfsx f0,r31,r27
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f6,r31,r24
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r31,r14
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r14.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// beq cr6,0x8235fd4c
	if (ctx.cr6.eq) goto loc_8235FD4C;
	// lfsx f11,r23,r11
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r22,r11
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f23,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f23.f64, ctx.f11.f64)));
	// lfsx f6,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f23,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f23.f64, ctx.f7.f64)));
	// fmadds f6,f12,f23,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f23.f64, ctx.f6.f64)));
	// stfsx f11,r23,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r22,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
loc_8235FD4C:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x8235fdd0
	if (!ctx.cr6.lt) goto loc_8235FDD0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235fd80
	if (ctx.cr6.eq) goto loc_8235FD80;
	// lfsx f11,r21,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r20,r11
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f22,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f22.f64, ctx.f11.f64)));
	// lfsx f6,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f22,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f22.f64, ctx.f7.f64)));
	// fmadds f6,f12,f22,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f22.f64, ctx.f6.f64)));
	// stfsx f11,r21,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r21.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r20,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_8235FD80:
	// lfsx f11,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f7,r25,r11
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f21.f64, ctx.f11.f64)));
	// lfsx f6,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f21,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f21.f64, ctx.f7.f64)));
	// fmadds f6,f12,f21,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f21.f64, ctx.f6.f64)));
	// stfsx f11,r26,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r25,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r7,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8235fdd0
	if (ctx.cr6.eq) goto loc_8235FDD0;
	// lfsx f11,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f20,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f20.f64, ctx.f11.f64)));
	// lfsx f7,r15,r11
	temp.u32 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r4,r11
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f20,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f20.f64, ctx.f7.f64)));
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f20.f64, ctx.f11.f64)));
	// stfsx f0,r19,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r19.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r15,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r15.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r4,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
loc_8235FDD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8235fc24
	if (ctx.cr6.lt) goto loc_8235FC24;
	// rlwinm r11,r29,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r17)
	REX_STORE_U32(ctx.r17.u32 + 4, ctx.r11.u32);
loc_8235FDF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d7440
	ctx.lr = 0x8235FE04;
	__restfpr_19(ctx, base);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A64D8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x823A64E0;
	__savegprlr_29(ctx, base);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823a6568
	if (!ctx.cr6.gt) goto loc_823A6568;
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_823A64F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823a653c
	if (!ctx.cr6.gt) goto loc_823A653C;
loc_823A6500:
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_823A650C:
	// lwz r29,0(r8)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lhzx r29,r29,r4
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r4.u32);
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// addi r29,r29,-32768
	ctx.r29.s64 = ctx.r29.s64 + -32768;
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x823a650c
	if (!ctx.cr0.eq) goto loc_823A650C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823a6500
	if (ctx.cr6.lt) goto loc_823A6500;
loc_823A653C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
loc_823A6544:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x823a6544
	if (!ctx.cr0.eq) goto loc_823A6544;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// bne 0x823a64f0
	if (!ctx.cr0.eq) goto loc_823A64F0;
loc_823A6568:
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823A9988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x823A9990;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a99e8
	if (ctx.cr0.eq) goto loc_823A99E8;
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x823a99d0
	if (ctx.cr0.lt) goto loc_823A99D0;
loc_823A99BC:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8213dc28
	ctx.lr = 0x823A99C8;
	sub_8213DC28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x823a99bc
	if (!ctx.cr0.lt) goto loc_823A99BC;
loc_823A99D0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a99e0
	if (ctx.cr0.eq) goto loc_823A99E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213dc28
	ctx.lr = 0x823A99E0;
	sub_8213DC28(ctx, base);
loc_823A99E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x823a9a04
	goto loc_823A9A04;
loc_823A99E8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8213dc28
	ctx.lr = 0x823A99F0;
	sub_8213DC28(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823a9a00
	if (ctx.cr0.eq) goto loc_823A9A00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213dc28
	ctx.lr = 0x823A9A00;
	sub_8213DC28(ctx, base);
loc_823A9A00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823A9A04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823ACC70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x823ACC78;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823acca0
	if (!ctx.cr6.eq) goto loc_823ACCA0;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x823accac
	goto loc_823ACCAC;
loc_823ACCA0:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_823ACCAC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x823accc0
	if (!ctx.cr6.lt) goto loc_823ACCC0;
	// bl 0x825e6398
	ctx.lr = 0x823ACCC0;
	sub_825E6398(ctx, base);
loc_823ACCC0:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r20,r11,0,3,3
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x823acce8
	if (!ctx.cr0.eq) goto loc_823ACCE8;
	// bl 0x825e6398
	ctx.lr = 0x823ACCE8;
	sub_825E6398(ctx, base);
loc_823ACCE8:
	// lwz r27,0(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// beq cr6,0x823acd3c
	if (ctx.cr6.eq) goto loc_823ACD3C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823acd14
	if (!ctx.cr0.eq) goto loc_823ACD14;
	// bl 0x825e6398
	ctx.lr = 0x823ACD14;
	sub_825E6398(ctx, base);
loc_823ACD14:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823acd20
	if (ctx.cr6.gt) goto loc_823ACD20;
	// bl 0x825e6398
	ctx.lr = 0x823ACD20;
	sub_825E6398(ctx, base);
loc_823ACD20:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x823acd40
	goto loc_823ACD40;
loc_823ACD3C:
	// lwz r19,80(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823ACD40:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823acdb8
	if (ctx.cr0.eq) goto loc_823ACDB8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823ACD54:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x823acd98
	if (!ctx.cr6.eq) goto loc_823ACD98;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823acd8c
	if (!ctx.cr0.eq) goto loc_823ACD8C;
	// bl 0x825e6398
	ctx.lr = 0x823ACD8C;
	sub_825E6398(ctx, base);
loc_823ACD8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	REX_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_823ACD98:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823acd54
	if (!ctx.cr0.eq) goto loc_823ACD54;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x823acdb8
	if (!ctx.cr6.gt) goto loc_823ACDB8;
	// bl 0x825e6398
	ctx.lr = 0x823ACDB8;
	sub_825E6398(ctx, base);
loc_823ACDB8:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x823acde0
	if (!ctx.cr6.eq) goto loc_823ACDE0;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x823acde8
	goto loc_823ACDE8;
loc_823ACDE0:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_823ACDE8:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823ace1c
	if (ctx.cr6.eq) goto loc_823ACE1C;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x823ace1c
	if (!ctx.cr6.eq) goto loc_823ACE1C;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_823ACE1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823ab310
	ctx.lr = 0x823ACE2C;
	sub_823AB310(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ab438
	ctx.lr = 0x823ACE4C;
	sub_823AB438(ctx, base);
	// cmplwi cr6,r23,95
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 95, ctx.xer);
	// bne cr6,0x823ace70
	if (!ctx.cr6.eq) goto loc_823ACE70;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ace64
	if (ctx.cr0.eq) goto loc_823ACE64;
	// bl 0x825e6398
	ctx.lr = 0x823ACE64;
	sub_825E6398(ctx, base);
loc_823ACE64:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823ace9c
	goto loc_823ACE9C;
loc_823ACE70:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x823ace7c
	if (ctx.cr6.eq) goto loc_823ACE7C;
	// bl 0x825e6398
	ctx.lr = 0x823ACE7C;
	sub_825E6398(ctx, base);
loc_823ACE7C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ab438
	ctx.lr = 0x823ACE94;
	sub_823AB438(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823ACE9C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823ab438
	ctx.lr = 0x823ACEAC;
	sub_823AB438(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823aced0
	if (ctx.cr6.eq) goto loc_823ACED0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823ab698
	ctx.lr = 0x823ACECC;
	sub_823AB698(ctx, base);
	// b 0x823acef0
	goto loc_823ACEF0;
loc_823ACED0:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x823acef0
	if (ctx.cr6.eq) goto loc_823ACEF0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823ab880
	ctx.lr = 0x823ACEF0;
	sub_823AB880(ctx, base);
loc_823ACEF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B9898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x823B98A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r26,16(r28)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823b98d8
	if (!ctx.cr0.eq) goto loc_823B98D8;
	// bl 0x825e6398
	ctx.lr = 0x823B98D8;
	sub_825E6398(ctx, base);
loc_823B98D8:
	// lwz r11,1580(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b98e8
	if (!ctx.cr6.eq) goto loc_823B98E8;
	// bl 0x825e6398
	ctx.lr = 0x823B98E8;
	sub_825E6398(ctx, base);
loc_823B98E8:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r30,1580(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 1580);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bgt cr6,0x823ba234
	if (ctx.cr6.gt) goto loc_823BA234;
	// beq cr6,0x823ba1b4
	if (ctx.cr6.eq) goto loc_823BA1B4;
	// addi r10,r10,-25
	ctx.r10.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x823ba234
	if (ctx.cr6.gt) goto loc_823BA234;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,13584
	ctx.r12.s64 = ctx.r12.s64 + 13584;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32196
	ctx.r12.s64 = -2109997056;
	// addi r12,r12,-26312
	ctx.r12.s64 = ctx.r12.s64 + -26312;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823B9C88;
	case 1:
		goto loc_823B9D6C;
	case 2:
		goto loc_823B9BA4;
	case 3:
		goto loc_823B9CB0;
	case 4:
		goto loc_823B9CEC;
	case 5:
		goto loc_823B9C44;
	case 6:
		goto loc_823BA234;
	case 7:
		goto loc_823BA234;
	case 8:
		goto loc_823BA234;
	case 9:
		goto loc_823BA234;
	case 10:
		goto loc_823BA234;
	case 11:
		goto loc_823BA234;
	case 12:
		goto loc_823BA234;
	case 13:
		goto loc_823B9CF8;
	case 14:
		goto loc_823B9CEC;
	case 15:
		goto loc_823B9938;
	case 16:
		goto loc_823B9F4C;
	case 17:
		goto loc_823B9AD0;
	case 18:
		goto loc_823B9B78;
	case 19:
		goto loc_823B9F44;
	case 20:
		goto loc_823BA080;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823B9938:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bne cr6,0x823b9a00
	if (!ctx.cr6.eq) goto loc_823B9A00;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b9974
	if (!ctx.cr6.eq) goto loc_823B9974;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// b 0x823b9978
	goto loc_823B9978;
loc_823B9974:
	// li r11,52
	ctx.r11.s64 = 52;
loc_823B9978:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823b9380
	ctx.lr = 0x823B99AC;
	sub_823B9380(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r8,17476
	ctx.r8.s64 = 17476;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r23,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9A00:
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x823b9a0c
	if (ctx.cr6.eq) goto loc_823B9A0C;
	// bl 0x825e6398
	ctx.lr = 0x823B9A0C;
	sub_825E6398(ctx, base);
loc_823B9A0C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9a24
	if (ctx.cr6.eq) goto loc_823B9A24;
	// bl 0x825e6398
	ctx.lr = 0x823B9A24;
	sub_825E6398(ctx, base);
loc_823B9A24:
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823b9380
	ctx.lr = 0x823B9A60;
	sub_823B9380(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823b9b44
	if (!ctx.cr6.eq) goto loc_823B9B44;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,39
	ctx.r8.s64 = 39;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_823B9AC8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9AD0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9b68
	if (ctx.cr6.eq) goto loc_823B9B68;
	// li r10,41
	ctx.r10.s64 = 41;
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823b9380
	ctx.lr = 0x823B9B40;
	sub_823B9380(ctx, base);
loc_823B9B40:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823B9B44:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_823B9B48:
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_823B9B68:
	// li r10,39
	ctx.r10.s64 = 39;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x823b9ac8
	goto loc_823B9AC8;
loc_823B9B78:
	// li r11,41
	ctx.r11.s64 = 41;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b9b48
	if (ctx.cr6.eq) goto loc_823B9B48;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9BA4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x823b9bc4
	if (ctx.cr6.eq) goto loc_823B9BC4;
	// bl 0x825e6398
	ctx.lr = 0x823B9BC4;
	sub_825E6398(ctx, base);
loc_823B9BC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823b9bd4
	if (ctx.cr0.eq) goto loc_823B9BD4;
	// bl 0x825e6398
	ctx.lr = 0x823B9BD4;
	sub_825E6398(ctx, base);
loc_823B9BD4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x823b9bf0
	if (ctx.cr6.eq) goto loc_823B9BF0;
	// bl 0x825e6398
	ctx.lr = 0x823B9BF0;
	sub_825E6398(ctx, base);
loc_823B9BF0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823b9c04
	if (ctx.cr6.lt) goto loc_823B9C04;
	// bl 0x825e6398
	ctx.lr = 0x823B9C04;
	sub_825E6398(ctx, base);
loc_823B9C04:
	// li r11,62
	ctx.r11.s64 = 62;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x823b9380
	ctx.lr = 0x823B9C40;
	sub_823B9380(ctx, base);
	// b 0x823b9b40
	goto loc_823B9B40;
loc_823B9C44:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x823b9c64
	if (ctx.cr6.eq) goto loc_823B9C64;
	// bl 0x825e6398
	ctx.lr = 0x823B9C64;
	sub_825E6398(ctx, base);
loc_823B9C64:
	// li r11,50
	ctx.r11.s64 = 50;
loc_823B9C68:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_823B9C80:
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9C88:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x823b9ca8
	if (ctx.cr6.eq) goto loc_823B9CA8;
	// bl 0x825e6398
	ctx.lr = 0x823B9CA8;
	sub_825E6398(ctx, base);
loc_823B9CA8:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823b9c68
	goto loc_823B9C68;
loc_823B9CB0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823b9cd8
	if (!ctx.cr0.eq) goto loc_823B9CD8;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x823b9ce0
	goto loc_823B9CE0;
loc_823B9CD8:
	// li r11,83
	ctx.r11.s64 = 83;
loc_823B9CDC:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823B9CE0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9CEC:
	// li r11,42
	ctx.r11.s64 = 42;
loc_823B9CF0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x823b9cdc
	goto loc_823B9CDC;
loc_823B9CF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x823b9d18
	if (ctx.cr6.eq) goto loc_823B9D18;
	// bl 0x825e6398
	ctx.lr = 0x823B9D18;
	sub_825E6398(ctx, base);
loc_823B9D18:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823b9d2c
	if (ctx.cr6.lt) goto loc_823B9D2C;
	// bl 0x825e6398
	ctx.lr = 0x823B9D2C;
	sub_825E6398(ctx, base);
loc_823B9D2C:
	// li r11,62
	ctx.r11.s64 = 62;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823b9380
	ctx.lr = 0x823B9D68;
	sub_823B9380(ctx, base);
	// b 0x823b9b40
	goto loc_823B9B40;
loc_823B9D6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// bne cr6,0x823b9e30
	if (!ctx.cr6.eq) goto loc_823B9E30;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x823b9da4
	if (ctx.cr6.eq) goto loc_823B9DA4;
	// bl 0x825e6398
	ctx.lr = 0x823B9DA4;
	sub_825E6398(ctx, base);
loc_823B9DA4:
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823b9380
	ctx.lr = 0x823B9DE0;
	sub_823B9380(ctx, base);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r8,17476
	ctx.r8.s64 = 17476;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,5
	ctx.r11.s64 = ctx.r9.s64 + 5;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r8,41
	ctx.r8.s64 = 41;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9E30:
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x823b9e3c
	if (ctx.cr6.eq) goto loc_823B9E3C;
	// bl 0x825e6398
	ctx.lr = 0x823B9E3C;
	sub_825E6398(ctx, base);
loc_823B9E3C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x823b9e58
	if (ctx.cr6.eq) goto loc_823B9E58;
	// bl 0x825e6398
	ctx.lr = 0x823B9E58;
	sub_825E6398(ctx, base);
loc_823B9E58:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823b9e6c
	if (ctx.cr6.lt) goto loc_823B9E6C;
	// bl 0x825e6398
	ctx.lr = 0x823B9E6C;
	sub_825E6398(ctx, base);
loc_823B9E6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x823b9efc
	if (!ctx.cr6.eq) goto loc_823B9EFC;
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x823b9380
	ctx.lr = 0x823B9EBC;
	sub_823B9380(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r7,41
	ctx.r7.s64 = 41;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9EFC:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x823b9380
	ctx.lr = 0x823B9F28;
	sub_823B9380(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// clrlwi r9,r11,21
	ctx.r9.u64 = ctx.r11.u32 & 0x7FF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x823b9b48
	goto loc_823B9B48;
loc_823B9F44:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823b9cf0
	goto loc_823B9CF0;
loc_823B9F4C:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823b9fa8
	if (ctx.cr6.eq) goto loc_823B9FA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823b9fa0
	if (ctx.cr6.eq) goto loc_823B9FA0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823b9f98
	if (ctx.cr6.eq) goto loc_823B9F98;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x823b9f90
	if (ctx.cr6.eq) goto loc_823B9F90;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x823b9f88
	if (ctx.cr6.eq) goto loc_823B9F88;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x823b9fb0
	goto loc_823B9FB0;
loc_823B9F88:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x823b9fb0
	goto loc_823B9FB0;
loc_823B9F90:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x823b9fb4
	goto loc_823B9FB4;
loc_823B9F98:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x823b9fac
	goto loc_823B9FAC;
loc_823B9FA0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x823b9fac
	goto loc_823B9FAC;
loc_823B9FA8:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_823B9FAC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_823B9FB0:
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
loc_823B9FB4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_823B9FC4:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x823ba018
	if (ctx.cr6.lt) goto loc_823BA018;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x823ba018
	if (!ctx.cr6.eq) goto loc_823BA018;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x823ba018
	if (!ctx.cr6.eq) goto loc_823BA018;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x823ba020
	goto loc_823BA020;
loc_823BA018:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_823BA020:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x823b9fc4
	if (ctx.cr6.lt) goto loc_823B9FC4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x823b9380
	ctx.lr = 0x823BA054;
	sub_823B9380(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x823b9380
	ctx.lr = 0x823BA07C;
	sub_823B9380(ctx, base);
	// b 0x823b9b40
	goto loc_823B9B40;
loc_823BA080:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x7;
	// li r27,3
	ctx.r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823ba0dc
	if (ctx.cr6.eq) goto loc_823BA0DC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823ba0d4
	if (ctx.cr6.eq) goto loc_823BA0D4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823ba0cc
	if (ctx.cr6.eq) goto loc_823BA0CC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x823ba0c4
	if (ctx.cr6.eq) goto loc_823BA0C4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x823ba0bc
	if (ctx.cr6.eq) goto loc_823BA0BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x823ba0e4
	goto loc_823BA0E4;
loc_823BA0BC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x823ba0e4
	goto loc_823BA0E4;
loc_823BA0C4:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x823ba0e8
	goto loc_823BA0E8;
loc_823BA0CC:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x823ba0e0
	goto loc_823BA0E0;
loc_823BA0D4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x823ba0e0
	goto loc_823BA0E0;
loc_823BA0DC:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_823BA0E0:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
loc_823BA0E4:
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
loc_823BA0E8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_823BA0F8:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 512, ctx.xer);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x823ba14c
	if (ctx.cr6.lt) goto loc_823BA14C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r9,8192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8192, ctx.xer);
	// bne cr6,0x823ba14c
	if (!ctx.cr6.eq) goto loc_823BA14C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x823ba14c
	if (!ctx.cr6.eq) goto loc_823BA14C;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x823ba154
	goto loc_823BA154;
loc_823BA14C:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r23,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_823BA154:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x823ba0f8
	if (ctx.cr6.lt) goto loc_823BA0F8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x823b9380
	ctx.lr = 0x823BA188;
	sub_823B9380(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x823b9380
	ctx.lr = 0x823BA1B0;
	sub_823B9380(ctx, base);
	// b 0x823b9b40
	goto loc_823B9B40;
loc_823BA1B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r27,2
	ctx.r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x823ba1d4
	if (ctx.cr6.eq) goto loc_823BA1D4;
	// bl 0x825e6398
	ctx.lr = 0x823BA1D4;
	sub_825E6398(ctx, base);
loc_823BA1D4:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823b9380
	ctx.lr = 0x823BA210;
	sub_823B9380(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,17476
	ctx.r8.s64 = 17476;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// b 0x823b9c80
	goto loc_823B9C80;
loc_823BA234:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x823b9b48
	goto loc_823B9B48;
}

DEFINE_REX_FUNC(sub_8240DE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8240DE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8240de94
	if (ctx.cr6.eq) goto loc_8240DE94;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_8240DE40:
	// and. r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8240de84
	if (ctx.cr0.eq) goto loc_8240DE84;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8240de60
	if (!ctx.cr6.eq) goto loc_8240DE60;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r28,r7,27
	ctx.r28.u64 = ctx.r7.u32 & 0x1F;
loc_8240DE60:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// andc r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r29,r7,r11
	ctx.r29.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8240DE84:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8240de40
	if (!ctx.cr0.eq) goto loc_8240DE40;
loc_8240DE94:
	// bl 0x823cfcb0
	ctx.lr = 0x8240DE98;
	sub_823CFCB0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8240dec4
	if (ctx.cr6.eq) goto loc_8240DEC4;
loc_8240DEB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwimi r11,r29,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne 0x8240deb0
	if (!ctx.cr0.eq) goto loc_8240DEB0;
loc_8240DEC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r29,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r28,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82414288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82414290;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8241436c
	if (ctx.cr6.eq) goto loc_8241436C;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82414358
	if (ctx.cr6.eq) goto loc_82414358;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x82414358
	if (ctx.cr6.eq) goto loc_82414358;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82414364
	if (ctx.cr6.eq) goto loc_82414364;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// bl 0x823d0030
	ctx.lr = 0x824142D4;
	sub_823D0030(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82414358
	if (ctx.cr6.eq) goto loc_82414358;
	// lwz r10,652(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82414358
	if (ctx.cr6.eq) goto loc_82414358;
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82414358
	if (!ctx.cr0.eq) goto loc_82414358;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82414334
	if (!ctx.cr0.eq) goto loc_82414334;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82414334
	if (ctx.cr0.eq) goto loc_82414334;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82414340
	if (!ctx.cr6.gt) goto loc_82414340;
loc_82414334:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823f6380
	ctx.lr = 0x8241433C;
	sub_823F6380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82414340:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82414358:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_82414364:
	// bl 0x823edaa8
	ctx.lr = 0x82414368;
	sub_823EDAA8(ctx, base);
	// b 0x82414358
	goto loc_82414358;
loc_8241436C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240dc20
	ctx.lr = 0x82414378;
	sub_8240DC20(ctx, base);
loc_82414378:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,27,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C000;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82414518
	if (!ctx.cr6.gt) goto loc_82414518;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240e378
	ctx.lr = 0x82414398;
	sub_8240E378(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8241439C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8240dc20
	ctx.lr = 0x824143A8;
	sub_8240DC20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8241448c
	if (ctx.cr0.eq) goto loc_8241448C;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x823db280
	ctx.lr = 0x824143E0;
	sub_823DB280(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82414414
	if (!ctx.cr0.eq) goto loc_82414414;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82414414
	if (ctx.cr0.eq) goto loc_82414414;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82414420
	if (!ctx.cr6.gt) goto loc_82414420;
loc_82414414:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823f6380
	ctx.lr = 0x82414420;
	sub_823F6380(ctx, base);
loc_82414420:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
	// lwz r11,708(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241448c
	if (ctx.cr6.eq) goto loc_8241448C;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r10,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8241448c
	if (ctx.cr0.eq) goto loc_8241448C;
	// lwz r9,708(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// stwx r31,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_8241448C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8248e4d8
	ctx.lr = 0x824144A0;
	sub_8248E4D8(ctx, base);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82414510
	if (ctx.cr6.eq) goto loc_82414510;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824144ec
	if (!ctx.cr0.eq) goto loc_824144EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824144ec
	if (ctx.cr0.eq) goto loc_824144EC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824144f8
	if (!ctx.cr6.gt) goto loc_824144F8;
loc_824144EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823f6380
	ctx.lr = 0x824144F4;
	sub_823F6380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824144F8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_82414510:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x82414378
	goto loc_82414378;
loc_82414518:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
	// rlwinm r3,r11,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8241452C:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82414358
	if (!ctx.cr6.lt) goto loc_82414358;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r7,r7,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq cr6,0x824145b8
	if (ctx.cr6.eq) goto loc_824145B8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82414570:
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824145a0
	if (!ctx.cr6.eq) goto loc_824145A0;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824145a0
	if (!ctx.cr6.eq) goto loc_824145A0;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x824145b0
	if (ctx.cr6.eq) goto loc_824145B0;
loc_824145A0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82414570
	if (ctx.cr6.lt) goto loc_82414570;
loc_824145B0:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824145c8
	if (ctx.cr6.lt) goto loc_824145C8;
loc_824145B8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8241452c
	goto loc_8241452C;
loc_824145C8:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824145f8
	if (ctx.cr6.eq) goto loc_824145F8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_824145F8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8241c918
	ctx.lr = 0x82414608;
	sub_8241C918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
loc_82414610:
	// lwz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8241439c
	if (ctx.cr6.eq) goto loc_8241439C;
	// lwz r29,16(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82414728
	if (ctx.cr6.eq) goto loc_82414728;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824146f0
	if (ctx.cr0.eq) goto loc_824146F0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824146f0
	if (ctx.cr6.eq) goto loc_824146F0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824146f0
	if (!ctx.cr0.eq) goto loc_824146F0;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824146cc
	if (!ctx.cr0.eq) goto loc_824146CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824146cc
	if (ctx.cr0.eq) goto loc_824146CC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x824146d8
	if (!ctx.cr6.gt) goto loc_824146D8;
loc_824146CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823f6380
	ctx.lr = 0x824146D4;
	sub_823F6380(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_824146D8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_824146F0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82414708
	goto loc_82414708;
loc_82414700:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82414708:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82414700
	if (!ctx.cr6.eq) goto loc_82414700;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_82414728:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82414610
	if (!ctx.cr6.eq) goto loc_82414610;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// b 0x82414610
	goto loc_82414610;
}

DEFINE_REX_FUNC(sub_82441A00) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82441a1c
	if (ctx.cr6.eq) goto loc_82441A1C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82441a1c
	if (!ctx.cr6.eq) goto loc_82441A1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82441A1C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x823a0e88
	sub_823A0E88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82441FF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82442000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82442020
	if (!ctx.cr6.eq) goto loc_82442020;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x823a0e88
	ctx.lr = 0x82442020;
	sub_823A0E88(ctx, base);
loc_82442020:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82442070
	if (!ctx.cr6.eq) goto loc_82442070;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82442040
	if (!ctx.cr6.eq) goto loc_82442040;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x823a0e88
	ctx.lr = 0x82442040;
	sub_823A0E88(ctx, base);
loc_82442040:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82441d38
	ctx.lr = 0x82442048;
	sub_82441D38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8244205c
	if (!ctx.cr0.eq) goto loc_8244205C;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x823a0e88
	ctx.lr = 0x8244205C;
	sub_823A0E88(ctx, base);
loc_8244205C:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82441f70
	ctx.lr = 0x82442064;
	sub_82441F70(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_82442070:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x823a0e88
	ctx.lr = 0x82442078;
	sub_823A0E88(ctx, base);
}

DEFINE_REX_FUNC(sub_82443308) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82443310;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x823c49b8
	ctx.lr = 0x8244332C;
	sub_823C49B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ddc90
	ctx.lr = 0x82443338;
	sub_822DDC90(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r31,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// stw r30,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r30.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r29.u32);
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r10,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824441D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824441D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82487a60
	ctx.lr = 0x82444200;
	sub_82487A60(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82444224
	if (ctx.cr6.eq) goto loc_82444224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x82444220;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82444224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x8244422C;
	sub_823CFE80(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x82444250
	if (ctx.cr6.eq) goto loc_82444250;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x8244424C;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82444250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82444258;
	sub_823CFE80(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824461F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824461F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82487a60
	ctx.lr = 0x82446220;
	sub_82487A60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfcb0
	ctx.lr = 0x82446230;
	sub_823CFCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823cfe80
	ctx.lr = 0x8244623C;
	sub_823CFE80(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfcb0
	ctx.lr = 0x8244624C;
	sub_823CFCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82446258;
	sub_823CFE80(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82448ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82448EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82487a60
	ctx.lr = 0x82448F04;
	sub_82487A60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82447fe0
	ctx.lr = 0x82448F14;
	sub_82447FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82448F20;
	sub_823CFE80(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r29,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8244BF38) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8244bf50
	if (ctx.cr0.eq) goto loc_8244BF50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244BF50:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244bf6c
	if (ctx.cr0.eq) goto loc_8244BF6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8244bf78
	goto loc_8244BF78;
loc_8244BF6C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8244BF78:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244bf90
	if (ctx.cr6.eq) goto loc_8244BF90;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_8244BF90:
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244E4B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x8244E4C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244e4f8
	if (ctx.cr6.eq) goto loc_8244E4F8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r10,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8244e4fc
	goto loc_8244E4FC;
loc_8244E4F8:
	// li r25,0
	ctx.r25.s64 = 0;
loc_8244E4FC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8244e510
	if (ctx.cr0.eq) goto loc_8244E510;
	// cmplwi cr6,r29,727
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 727, ctx.xer);
	// blt cr6,0x8244e530
	if (ctx.cr6.lt) goto loc_8244E530;
loc_8244E510:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244e558
	if (ctx.cr0.eq) goto loc_8244E558;
	// lwz r11,600(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 600);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244e558
	if (ctx.cr6.lt) goto loc_8244E558;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8244e558
	if (!ctx.cr6.lt) goto loc_8244E558;
loc_8244E530:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244e3a0
	ctx.lr = 0x8244E550;
	sub_8244E3A0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8244e5f0
	goto loc_8244E5F0;
loc_8244E558:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r11,r29,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(40));
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8244e57c
	if (!ctx.cr6.eq) goto loc_8244E57C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823e50e8
	ctx.lr = 0x8244E57C;
	sub_823E50E8(ctx, base);
loc_8244E57C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244e5ec
	if (ctx.cr0.eq) goto loc_8244E5EC;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8244E594:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8244e5d4
	if (!ctx.cr6.eq) goto loc_8244E5D4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244e3a0
	ctx.lr = 0x8244E5C8;
	sub_8244E3A0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x8244e5ec
	if (!ctx.cr6.lt) goto loc_8244E5EC;
loc_8244E5D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8244e594
	if (ctx.cr6.lt) goto loc_8244E594;
loc_8244E5EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8244E5F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82465488) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x82465490;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824654c4
	if (ctx.cr6.eq) goto loc_824654C4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82461610
	ctx.lr = 0x824654C0;
	sub_82461610(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_824654C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824654e0
	if (ctx.cr6.eq) goto loc_824654E0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82462308
	ctx.lr = 0x824654DC;
	sub_82462308(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_824654E0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// clrlwi. r4,r30,31
	ctx.r4.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x18;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r8,r29,30
	ctx.r8.u64 = ctx.r29.u32 & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// lfs f31,5272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 5272);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r26,r9,r5
	ctx.r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82465548
	if (!ctx.cr0.eq) goto loc_82465548;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82465550
	goto loc_82465550;
loc_82465548:
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82465550:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82465568
	if (ctx.cr6.eq) goto loc_82465568;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d18b0
	ctx.lr = 0x82465568;
	sub_822D18B0(ctx, base);
loc_82465568:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82465778
	if (!ctx.cr6.gt) goto loc_82465778;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r9,r30,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f8,-312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -312);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f9,9872(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9872);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,-320(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -320);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,-324(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -324);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,9728(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 9728);
	ctx.f12.f64 = double(temp.f32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// lfs f7,9724(r24)
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + 9724);
	ctx.f7.f64 = double(temp.f32);
loc_824655CC:
	// add r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// rlwinm r9,r4,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfsx f6,r9,r26
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fadds f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fctiwz f5,f5
	ctx.f5.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x824656f4
	if (ctx.cr6.eq) goto loc_824656F4;
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r29,r5
	ctx.r29.s64 = ctx.r5.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f6,f0,f11,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f6,f0,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmul f0,f0,f8
	ctx.f0.f64 = ctx.f0.f64 * ctx.f8.f64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f13,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmul f5,f13,f8
	ctx.f5.f64 = ctx.f13.f64 * ctx.f8.f64;
	// fmadds f6,f13,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f6.f64)));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f0.f64)));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// frsp f30,f5
	ctx.f30.f64 = double(float(ctx.f5.f64));
loc_824656F4:
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x82465704
	if (ctx.cr6.lt) goto loc_82465704;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82465704:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8246571c
	if (!ctx.cr6.gt) goto loc_8246571C;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82465720
	if (ctx.cr6.lt) goto loc_82465720;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82465720
	goto loc_82465720;
loc_8246571C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82465720:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x82465730
	if (ctx.cr6.lt) goto loc_82465730;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82465730:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82465748
	if (!ctx.cr6.gt) goto loc_82465748;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8246574c
	if (ctx.cr6.lt) goto loc_8246574C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x8246574c
	goto loc_8246574C;
loc_82465748:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8246574C:
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824655cc
	if (ctx.cr6.lt) goto loc_824655CC;
loc_82465778:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8246E448) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8246E450;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-10336
	ctx.r31.s64 = ctx.r11.s64 + -10336;
	// addi r30,r10,22904
	ctx.r30.s64 = ctx.r10.s64 + 22904;
	// bne cr6,0x8246e48c
	if (!ctx.cr6.eq) goto loc_8246E48C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,20964
	ctx.r5.s64 = ctx.r11.s64 + 20964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,447
	ctx.r7.s64 = 447;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246E48C;
	sub_823AFBD8(ctx, base);
loc_8246E48C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8246e4b0
	if (ctx.cr6.eq) goto loc_8246E4B0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,23008
	ctx.r5.s64 = ctx.r11.s64 + 23008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,448
	ctx.r7.s64 = 448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246E4B0;
	sub_823AFBD8(ctx, base);
loc_8246E4B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8246F050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x8246F058;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r25,r11,-10336
	ctx.r25.s64 = ctx.r11.s64 + -10336;
	// addi r24,r10,23128
	ctx.r24.s64 = ctx.r10.s64 + 23128;
	// bne cr6,0x8246f0a4
	if (!ctx.cr6.eq) goto loc_8246F0A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,10080
	ctx.r5.s64 = ctx.r11.s64 + 10080;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F0A4;
	sub_823AFBD8(ctx, base);
loc_8246F0A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8246f0c8
	if (!ctx.cr6.eq) goto loc_8246F0C8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,10068
	ctx.r5.s64 = ctx.r11.s64 + 10068;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F0C8;
	sub_823AFBD8(ctx, base);
loc_8246F0C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8246f0ec
	if (!ctx.cr6.eq) goto loc_8246F0EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,23496
	ctx.r5.s64 = ctx.r11.s64 + 23496;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F0EC;
	sub_823AFBD8(ctx, base);
loc_8246F0EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8246f110
	if (!ctx.cr6.eq) goto loc_8246F110;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,23476
	ctx.r5.s64 = ctx.r11.s64 + 23476;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,315
	ctx.r7.s64 = 315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F110;
	sub_823AFBD8(ctx, base);
loc_8246F110:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8246F120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8246f148
	if (!ctx.cr0.eq) goto loc_8246F148;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,23464
	ctx.r5.s64 = ctx.r11.s64 + 23464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,322
	ctx.r7.s64 = 322;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F144;
	sub_823AFBD8(ctx, base);
	// b 0x8246f1dc
	goto loc_8246F1DC;
loc_8246F148:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b4448
	ctx.lr = 0x8246F170;
	sub_823B4448(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b44b8
	ctx.lr = 0x8246F188;
	sub_823B44B8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8246f1a0
	if (ctx.cr0.eq) goto loc_8246F1A0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246f1dc
	if (!ctx.cr6.eq) goto loc_8246F1DC;
loc_8246F1A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8246f1b4
	if (ctx.cr6.eq) goto loc_8246F1B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246f1d0
	if (!ctx.cr6.eq) goto loc_8246F1D0;
loc_8246F1B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,23408
	ctx.r5.s64 = ctx.r11.s64 + 23408;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246F1D0;
	sub_823AFBD8(ctx, base);
loc_8246F1D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246ea38
	ctx.lr = 0x8246F1D8;
	sub_8246EA38(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8246F1DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82477768) {
	REX_FUNC_PROLOGUE();
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// sth r10,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824777a4
	if (ctx.cr0.eq) goto loc_824777A4;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824777A4:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824777bc
	if (ctx.cr0.eq) goto loc_824777BC;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824777BC:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824777e0
	if (ctx.cr0.eq) goto loc_824777E0;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824777E0:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824777f8
	if (ctx.cr0.eq) goto loc_824777F8;
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824777F8:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r10,r9,0,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r10,r9,0,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r9,r10,0,29,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r9.u64 & 0x8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwimi r10,r9,0,25,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r10.u64 & 0x80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r9,r10,0,21,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r9.u64 & 0x800);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,32(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// rlwimi r9,r10,0,17,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r9.u64 & 0x8000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247FF30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,1380(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1380);
	// lwz r4,1536(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1536);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8247ff58
	if (ctx.cr0.eq) goto loc_8247FF58;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8247ff5c
	goto loc_8247FF5C;
loc_8247FF58:
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_8247FF5C:
	// bl 0x823b5f98
	ctx.lr = 0x8247FF60;
	sub_823B5F98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8247ff8c
	if (ctx.cr6.eq) goto loc_8247FF8C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,30248
	ctx.r6.s64 = ctx.r11.s64 + 30248;
	// addi r5,r10,27372
	ctx.r5.s64 = ctx.r10.s64 + 27372;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8247FF8C;
	sub_823AFBD8(ctx, base);
loc_8247FF8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82480C78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82480C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r29,1448(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1448);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8247f618
	ctx.lr = 0x82480C9C;
	sub_8247F618(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x82480cc4
	if (ctx.cr0.eq) goto loc_82480CC4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r10,r10,30520
	ctx.r10.s64 = ctx.r10.s64 + 30520;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82480cc8
	goto loc_82480CC8;
loc_82480CC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82480CC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82483518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60cc
	ctx.lr = 0x82483520;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r23,r11,-10336
	ctx.r23.s64 = ctx.r11.s64 + -10336;
	// addi r22,r10,32176
	ctx.r22.s64 = ctx.r10.s64 + 32176;
	// bne cr6,0x82483578
	if (!ctx.cr6.eq) goto loc_82483578;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,10080
	ctx.r5.s64 = ctx.r11.s64 + 10080;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,78
	ctx.r7.s64 = 78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82483578;
	sub_823AFBD8(ctx, base);
loc_82483578:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8248359c
	if (!ctx.cr6.eq) goto loc_8248359C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,10068
	ctx.r5.s64 = ctx.r11.s64 + 10068;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,79
	ctx.r7.s64 = 79;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8248359C;
	sub_823AFBD8(ctx, base);
loc_8248359C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x824835c0
	if (!ctx.cr6.eq) goto loc_824835C0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,10596
	ctx.r5.s64 = ctx.r11.s64 + 10596;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824835C0;
	sub_823AFBD8(ctx, base);
loc_824835C0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x824835e4
	if (!ctx.cr6.eq) goto loc_824835E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,10580
	ctx.r5.s64 = ctx.r11.s64 + 10580;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,81
	ctx.r7.s64 = 81;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824835E4;
	sub_823AFBD8(ctx, base);
loc_824835E4:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x824835F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82483620
	if (!ctx.cr0.eq) goto loc_82483620;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,24968
	ctx.r5.s64 = ctx.r11.s64 + 24968;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82483618;
	sub_823AFBD8(ctx, base);
loc_82483618:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82483738
	goto loc_82483738;
loc_82483620:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r24,292(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r21,r11,32504
	ctx.r21.s64 = ctx.r11.s64 + 32504;
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r24,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r19,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r19.u32);
	// stw r19,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r19.u32);
loc_82483660:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82483670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82483690
	if (!ctx.cr0.eq) goto loc_82483690;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// bl 0x823afbd8
	ctx.lr = 0x82483690;
	sub_823AFBD8(ctx, base);
loc_82483690:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82483740
	if (ctx.cr6.eq) goto loc_82483740;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x82483660
	if (ctx.cr6.lt) goto loc_82483660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82481720
	ctx.lr = 0x824836B4;
	sub_82481720(ctx, base);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x824836f4
	if (ctx.cr6.eq) goto loc_824836F4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5058
	ctx.lr = 0x824836E0;
	sub_823B5058(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82483740
	if (ctx.cr0.eq) goto loc_82483740;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b5460
	ctx.lr = 0x824836F4;
	sub_823B5460(ctx, base);
loc_824836F4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5058
	ctx.lr = 0x82483718;
	sub_823B5058(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82483740
	if (ctx.cr0.eq) goto loc_82483740;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823b5460
	ctx.lr = 0x8248372C;
	sub_823B5460(ctx, base);
	// stw r19,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r19.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r19.u32);
loc_82483738:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d611c
	__restgprlr_17(ctx, base);
	return;
loc_82483740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82482a90
	ctx.lr = 0x82483748;
	sub_82482A90(ctx, base);
	// b 0x82483618
	goto loc_82483618;
}

DEFINE_REX_FUNC(sub_8248A478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8248A480;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// std r31,0(r16)
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.r31.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r31,8(r16)
	REX_STORE_U64(ctx.r16.u32 + 8, ctx.r31.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r31,16(r16)
	REX_STORE_U64(ctx.r16.u32 + 16, ctx.r31.u64);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// std r31,24(r16)
	REX_STORE_U64(ctx.r16.u32 + 24, ctx.r31.u64);
	// stw r31,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r21,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r21.u32);
	// bl 0x825d6870
	ctx.lr = 0x8248A4CC;
	sub_825D6870(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r14,r21,44
	ctx.r14.s64 = ctx.r21.s64 + 44;
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// rlwinm r15,r10,13,29,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8248A4F8:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8248a64c
	if (!ctx.cr6.lt) goto loc_8248A64C;
	// lwz r17,0(r18)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm. r19,r11,7,29,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x8248c278
	if (ctx.cr0.eq) goto loc_8248C278;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmplwi r19,0
	ctx.cr0.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq 0x8248a63c
	if (ctx.cr0.eq) goto loc_8248A63C;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_8248A528:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x824865a8
	ctx.lr = 0x8248A54C;
	sub_824865A8(ctx, base);
	// lwz r21,96(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r11,r21,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248c278
	if (!ctx.cr0.eq) goto loc_8248C278;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8248a628
	if (!ctx.cr6.eq) goto loc_8248A628;
	// rlwinm r9,r3,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r22,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r7,r28,r23
	ctx.r7.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r23.u8 & 0x3F));
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r8,r22,27
	ctx.r8.u64 = ctx.r22.u32 & 0x1F;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,148(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 148);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248a5b4
	if (!ctx.cr0.eq) goto loc_8248A5B4;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x8248a5c8
	goto loc_8248A5C8;
loc_8248A5B4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
loc_8248A5C8:
	// rlwinm r11,r25,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r25,1
	ctx.r10.s64 = ctx.r25.s64 + 1;
	// add r9,r11,r20
	ctx.r9.u64 = ctx.r11.u64 + ctx.r20.u64;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// slw r9,r26,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r7,r25,27
	ctx.r7.u64 = ctx.r25.u32 & 0x1F;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// slw r6,r30,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// slw r7,r24,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r7.u8 & 0x3F));
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82414888
	ctx.lr = 0x8248A60C;
	sub_82414888(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x824846c8
	ctx.lr = 0x8248A618;
	sub_824846C8(ctx, base);
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.f1.u64);
loc_8248A628:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r21,468(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8248a528
	if (ctx.cr6.lt) goto loc_8248A528;
loc_8248A63C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// b 0x8248a4f8
	goto loc_8248A4F8;
loc_8248A64C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823c8aa0
	ctx.lr = 0x8248A654;
	sub_823C8AA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248adf8
	if (ctx.cr0.eq) goto loc_8248ADF8;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r24,r11,28
	ctx.r24.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r23,r11,28,28,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r22,r11,7,29,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f30,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// lfd f31,9568(r10)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
loc_8248A688:
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// and r11,r28,r24
	ctx.r11.u64 = ctx.r28.u64 & ctx.r24.u64;
	// and r9,r28,r23
	ctx.r9.u64 = ctx.r28.u64 & ctx.r23.u64;
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 27, ctx.xer);
	// bgt cr6,0x8248ad94
	if (ctx.cr6.gt) goto loc_8248AD94;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-32616
	ctx.r12.s64 = ctx.r12.s64 + -32616;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-22836
	ctx.r12.s64 = ctx.r12.s64 + -22836;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8248A6CC;
	case 1:
		goto loc_8248A780;
	case 2:
		goto loc_8248A850;
	case 3:
		goto loc_8248A814;
	case 4:
		goto loc_8248A880;
	case 5:
		goto loc_8248A8C4;
	case 6:
		goto loc_8248A994;
	case 7:
		goto loc_8248AA20;
	case 8:
		goto loc_8248AA50;
	case 9:
		goto loc_8248AACC;
	case 10:
		goto loc_8248AAF4;
	case 11:
		goto loc_8248AB10;
	case 12:
		goto loc_8248AC28;
	case 13:
		goto loc_8248ADA8;
	case 14:
		goto loc_8248ADC8;
	case 15:
		goto loc_8248AD94;
	case 16:
		goto loc_8248AD94;
	case 17:
		goto loc_8248AD94;
	case 18:
		goto loc_8248AD94;
	case 19:
		goto loc_8248AD94;
	case 20:
		goto loc_8248AD94;
	case 21:
		goto loc_8248AD94;
	case 22:
		goto loc_8248AD94;
	case 23:
		goto loc_8248AD94;
	case 24:
		goto loc_8248A880;
	case 25:
		goto loc_8248A8C4;
	case 26:
		goto loc_8248A994;
	case 27:
		goto loc_8248AA20;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8248A6CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// lfdx f13,r25,r10
	ctx.f13.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r10.u32);
	// fadd f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 + ctx.f13.f64;
loc_8248A6F4:
	// bl 0x824147c8
	ctx.lr = 0x8248A6F8;
	sub_824147C8(ctx, base);
loc_8248A6F8:
	// stfdx f1,r25,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f1.u64);
loc_8248A6FC:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r31,30,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r31,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// slw r10,r26,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r31,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// rlwinm r6,r31,1,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r9,r30,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// slw r8,r30,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// srw r4,r11,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r3,r10,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
loc_8248A764:
	// bl 0x82415008
	ctx.lr = 0x8248A768;
	sub_82415008(ctx, base);
	// rlwinm r11,r31,30,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// rlwinm r10,r31,1,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x8248ad90
	goto loc_8248AD90;
loc_8248A780:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248a7c4
	if (ctx.cr6.eq) goto loc_8248A7C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248a7cc
	if (ctx.cr6.eq) goto loc_8248A7CC;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfdx f13,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// lfdx f0,r25,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248a7bc
	if (ctx.cr6.eq) goto loc_8248A7BC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248a7bc
	if (ctx.cr6.eq) goto loc_8248A7BC;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// b 0x8248a6f4
	goto loc_8248A6F4;
loc_8248A7BC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x8248a6f8
	goto loc_8248A6F8;
loc_8248A7C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
loc_8248A7CC:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825d0e98
	ctx.lr = 0x8248A7E8;
	sub_825D0E98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8248ad94
	if (!ctx.cr0.gt) goto loc_8248AD94;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8248ad94
	if (ctx.cr6.gt) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfdx f0,r11,r16
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
	// b 0x8248ad94
	goto loc_8248AD94;
loc_8248A814:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8248a848
	if (!ctx.cr6.lt) goto loc_8248A848;
loc_8248A840:
	// stfdx f0,r11,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
	// b 0x8248a6fc
	goto loc_8248A6FC;
loc_8248A848:
	// stfdx f13,r11,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f13.u64);
	// b 0x8248a6fc
	goto loc_8248A6FC;
loc_8248A850:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8248a848
	if (ctx.cr6.lt) goto loc_8248A848;
	// b 0x8248a840
	goto loc_8248A840;
loc_8248A880:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8248a8b4
	if (!ctx.cr6.eq) goto loc_8248A8B4;
loc_8248A8AC:
	// stfdx f30,r11,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f30.u64);
	// b 0x8248a8b8
	goto loc_8248A8B8;
loc_8248A8B4:
	// stfdx f31,r11,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f31.u64);
loc_8248A8B8:
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// b 0x8248ad18
	goto loc_8248AD18;
loc_8248A8C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248a8f4
	if (ctx.cr6.eq) goto loc_8248A8F4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8248a8b4
	if (!ctx.cr6.gt) goto loc_8248A8B4;
	// b 0x8248a8ac
	goto loc_8248A8AC;
loc_8248A8F4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8248ad94
	if (!ctx.cr6.eq) goto loc_8248AD94;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824865a8
	ctx.lr = 0x8248A934;
	sub_824865A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8248ad94
	if (!ctx.cr6.eq) goto loc_8248AD94;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stfdx f31,r25,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f31.u64);
loc_8248A94C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r31,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r31,1,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r30,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r25,r11,r8
	ctx.r25.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// bl 0x82414f78
	ctx.lr = 0x8248A98C;
	sub_82414F78(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x8248ad78
	goto loc_8248AD78;
loc_8248A994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248a9c4
	if (ctx.cr6.eq) goto loc_8248A9C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8248a8b4
	if (ctx.cr6.lt) goto loc_8248A8B4;
	// b 0x8248a8ac
	goto loc_8248A8AC;
loc_8248A9C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8248ad94
	if (!ctx.cr6.eq) goto loc_8248AD94;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824865a8
	ctx.lr = 0x8248AA04;
	sub_824865A8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8248ad94
	if (!ctx.cr6.eq) goto loc_8248AD94;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stfdx f30,r25,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f30.u64);
	// b 0x8248a94c
	goto loc_8248A94C;
loc_8248AA20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lfdx f13,r11,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8248a8b4
	if (ctx.cr6.eq) goto loc_8248A8B4;
	// b 0x8248a8ac
	goto loc_8248A8AC;
loc_8248AA50:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f29,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82414818
	ctx.lr = 0x8248AA6C;
	sub_82414818(ctx, base);
	// bl 0x825d0e00
	ctx.lr = 0x8248AA70;
	sub_825D0E00(ctx, base);
	// fadd f1,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f29.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AA78;
	sub_824147C8(ctx, base);
loc_8248AA78:
	// stfdx f1,r25,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f1.u64);
loc_8248AA7C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r31,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r8,r31,1,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r11,r26,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r9,r30,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r31,30,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwinm r9,r31,1,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// b 0x8248ad90
	goto loc_8248AD90;
loc_8248AACC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfdx f1,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x825d3f40
	ctx.lr = 0x8248AAE8;
	sub_825D3F40(ctx, base);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfdx f0,r25,r16
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f0.u64);
	// b 0x8248aa7c
	goto loc_8248AA7C;
loc_8248AAF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x82414818
	ctx.lr = 0x8248AB0C;
	sub_82414818(ctx, base);
	// b 0x8248aa78
	goto loc_8248AA78;
loc_8248AB10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248ad94
	if (ctx.cr0.eq) goto loc_8248AD94;
	// rlwinm r25,r31,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lfdx f13,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// lfdx f0,r25,r10
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r10.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248ab70
	if (ctx.cr6.eq) goto loc_8248AB70;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248ab70
	if (ctx.cr6.eq) goto loc_8248AB70;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AB6C;
	sub_824147C8(ctx, base);
	// b 0x8248ab74
	goto loc_8248AB74;
loc_8248AB70:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248AB74:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfdx f0,r25,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r25.u32 + ctx.r11.u32);
	// fadd f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 + ctx.f1.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AB84;
	sub_824147C8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stfdx f1,r25,r16
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r25.u32 + ctx.r16.u32, ctx.f1.u64);
	// rlwinm r10,r31,30,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// rlwinm r6,r31,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// slw r11,r26,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// slw r10,r26,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r6,r31,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r3,r31,1,27,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r25,r31,1,27,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r11,r26,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r7,r6,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// slw r6,r30,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r3.u8 & 0x3F));
	// slw r8,r30,r25
	ctx.r8.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r25.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// rlwinm r20,r31,1,27,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// slw r8,r30,r20
	ctx.r8.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r20.u8 & 0x3F));
	// srw r4,r9,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r3.u8 & 0x3F));
	// srw r3,r10,r25
	ctx.r3.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r25.u8 & 0x3F));
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 & ctx.r8.u64;
	// bl 0x82415008
	ctx.lr = 0x8248AC20;
	sub_82415008(ctx, base);
	// srw r4,r25,r20
	ctx.r4.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r20.u8 & 0x3F));
	// b 0x8248a764
	goto loc_8248A764;
loc_8248AC28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248acc0
	if (ctx.cr6.eq) goto loc_8248ACC0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248ade4
	if (ctx.cr6.eq) goto loc_8248ADE4;
loc_8248AC44:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r10,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248acc0
	if (ctx.cr0.eq) goto loc_8248ACC0;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
loc_8248AC6C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lfdx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// stfdx f0,r11,r16
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
	// rlwinm r7,r31,30,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r31,1,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r8.u8 & 0x3F));
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwinm r11,r31,30,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// rlwinm r7,r31,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// lwzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_8248ACC0:
	// and. r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248ad94
	if (!ctx.cr0.eq) goto loc_8248AD94;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248ad94
	if (ctx.cr6.eq) goto loc_8248AD94;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248ad94
	if (ctx.cr0.eq) goto loc_8248AD94;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// lfdx f13,r10,r9
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8248ad94
	if (!ctx.cr6.eq) goto loc_8248AD94;
	// stfdx f0,r10,r16
	REX_STORE_U64(ctx.r10.u32 + ctx.r16.u32, ctx.f0.u64);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
loc_8248AD18:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r31,30,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r31,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// slw r10,r26,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r8,r6,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r31,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// rlwinm r6,r31,1,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r9,r30,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r7.u8 & 0x3F));
	// slw r8,r30,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 | ctx.r27.u64;
	// srw r4,r11,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r3,r10,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
loc_8248AD78:
	// bl 0x82415008
	ctx.lr = 0x8248AD7C;
	sub_82415008(ctx, base);
	// rlwinm r11,r31,30,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x1FFFFFFC;
	// rlwinm r10,r31,1,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_8248AD90:
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_8248AD94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8248a688
	if (ctx.cr6.lt) goto loc_8248A688;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248ADA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248acc0
	if (ctx.cr6.eq) goto loc_8248ACC0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8248ade4
	if (!ctx.cr6.lt) goto loc_8248ADE4;
	// b 0x8248ac44
	goto loc_8248AC44;
loc_8248ADC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248acc0
	if (ctx.cr6.eq) goto loc_8248ACC0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfdx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8248ac44
	if (!ctx.cr6.gt) goto loc_8248AC44;
loc_8248ADE4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8248acc0
	if (ctx.cr6.eq) goto loc_8248ACC0;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// b 0x8248ac6c
	goto loc_8248AC6C;
loc_8248ADF8:
	// lwz r25,8(r21)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r25,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8248ae14
	if (ctx.cr6.lt) goto loc_8248AE14;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ble cr6,0x8248ae18
	if (!ctx.cr6.gt) goto loc_8248AE18;
loc_8248AE14:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8248AE18:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b208
	if (ctx.cr0.eq) goto loc_8248B208;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8248b100
	if (ctx.cr6.eq) goto loc_8248B100;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x8248b044
	if (ctx.cr6.eq) goto loc_8248B044;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x8248af84
	if (ctx.cr6.eq) goto loc_8248AF84;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8248c278
	if (ctx.cr6.eq) goto loc_8248C278;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x8248af14
	if (ctx.cr6.eq) goto loc_8248AF14;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248ae7c
	if (ctx.cr0.eq) goto loc_8248AE7C;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfd f0,200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// stfd f0,24(r16)
	REX_STORE_U64(ctx.r16.u32 + 24, ctx.f0.u64);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// li r27,8
	ctx.r27.s64 = 8;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8248AE7C:
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248aea4
	if (ctx.cr0.eq) goto loc_8248AEA4;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// stfd f0,16(r16)
	REX_STORE_U64(ctx.r16.u32 + 16, ctx.f0.u64);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8248AEA4:
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248af0c
	if (ctx.cr0.eq) goto loc_8248AF0C;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248af0c
	if (ctx.cr0.eq) goto loc_8248AF0C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f12,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f0,9568(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8248aee0
	if (ctx.cr6.eq) goto loc_8248AEE0;
	// lfd f13,184(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8248aee0
	if (ctx.cr6.eq) goto loc_8248AEE0;
	// fmul f1,f12,f13
	ctx.f1.f64 = ctx.f12.f64 * ctx.f13.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AEDC;
	sub_824147C8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_8248AEE0:
	// stfd f0,8(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 8, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// rlwinm r4,r11,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// rlwinm r3,r10,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// bl 0x82415008
	ctx.lr = 0x8248AEFC;
	sub_82415008(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248AF0C:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x8248b64c
	goto loc_8248B64C;
loc_8248AF14:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f13,168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f12,152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8248af40
	if (ctx.cr6.lt) goto loc_8248AF40;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8248af44
	goto loc_8248AF44;
loc_8248AF40:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8248AF44:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8248af54
	if (ctx.cr6.lt) goto loc_8248AF54;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8248af58
	goto loc_8248AF58;
loc_8248AF54:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_8248AF58:
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8248af68
	if (ctx.cr6.lt) goto loc_8248AF68;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8248AF68:
	// stfd f13,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f13.u64);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x824897c8
	ctx.lr = 0x8248AF78;
	sub_824897C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// b 0x8248c198
	goto loc_8248C198;
loc_8248AF84:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f31,9568(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248afd8
	if (ctx.cr6.eq) goto loc_8248AFD8;
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248afd8
	if (ctx.cr6.eq) goto loc_8248AFD8;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AFD4;
	sub_824147C8(ctx, base);
	// b 0x8248afdc
	goto loc_8248AFDC;
loc_8248AFD8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248AFDC:
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248AFE8;
	sub_824147C8(ctx, base);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b010
	if (ctx.cr6.eq) goto loc_8248B010;
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b010
	if (ctx.cr6.eq) goto loc_8248B010;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B00C;
	sub_824147C8(ctx, base);
	// b 0x8248b014
	goto loc_8248B014;
loc_8248B010:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B014:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B01C;
	sub_824147C8(ctx, base);
	// stfd f1,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f1.u64);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// bl 0x82421320
	ctx.lr = 0x8248B038;
	sub_82421320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82415008
	ctx.lr = 0x8248B040;
	sub_82415008(ctx, base);
	// b 0x8248b1fc
	goto loc_8248B1FC;
loc_8248B044:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f31,9568(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b090
	if (ctx.cr6.eq) goto loc_8248B090;
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b090
	if (ctx.cr6.eq) goto loc_8248B090;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B088;
	sub_824147C8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x8248b094
	goto loc_8248B094;
loc_8248B090:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_8248B094:
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b0b8
	if (ctx.cr6.eq) goto loc_8248B0B8;
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b0b8
	if (ctx.cr6.eq) goto loc_8248B0B8;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B0B4;
	sub_824147C8(ctx, base);
	// b 0x8248b0bc
	goto loc_8248B0BC;
loc_8248B0B8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B0BC:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B0C4;
	sub_824147C8(ctx, base);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b0ec
	if (ctx.cr6.eq) goto loc_8248B0EC;
	// lfd f13,176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b0ec
	if (ctx.cr6.eq) goto loc_8248B0EC;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B0E8;
	sub_824147C8(ctx, base);
	// b 0x8248b0f0
	goto loc_8248B0F0;
loc_8248B0EC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B0F0:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B0F8;
	sub_824147C8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8248b1ec
	goto loc_8248B1EC;
loc_8248B100:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// lfd f31,9568(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b14c
	if (ctx.cr6.eq) goto loc_8248B14C;
	// lfd f0,200(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b14c
	if (ctx.cr6.eq) goto loc_8248B14C;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B144;
	sub_824147C8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x8248b150
	goto loc_8248B150;
loc_8248B14C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_8248B150:
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b174
	if (ctx.cr6.eq) goto loc_8248B174;
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b174
	if (ctx.cr6.eq) goto loc_8248B174;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B170;
	sub_824147C8(ctx, base);
	// b 0x8248b178
	goto loc_8248B178;
loc_8248B174:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B178:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B180;
	sub_824147C8(ctx, base);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b1a8
	if (ctx.cr6.eq) goto loc_8248B1A8;
	// lfd f13,184(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b1a8
	if (ctx.cr6.eq) goto loc_8248B1A8;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B1A4;
	sub_824147C8(ctx, base);
	// b 0x8248b1ac
	goto loc_8248B1AC;
loc_8248B1A8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B1AC:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B1B4;
	sub_824147C8(ctx, base);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8248b1dc
	if (ctx.cr6.eq) goto loc_8248B1DC;
	// lfd f13,176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8248b1dc
	if (ctx.cr6.eq) goto loc_8248B1DC;
	// fmul f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 * ctx.f13.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B1D8;
	sub_824147C8(ctx, base);
	// b 0x8248b1e0
	goto loc_8248B1E0;
loc_8248B1DC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8248B1E0:
	// fadd f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x824147c8
	ctx.lr = 0x8248B1E8;
	sub_824147C8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
loc_8248B1EC:
	// stfd f1,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f1.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x82421320
	ctx.lr = 0x8248B1FC;
	sub_82421320(ctx, base);
loc_8248B1FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// b 0x8248c198
	goto loc_8248C198;
loc_8248B208:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8248b21c
	if (ctx.cr6.lt) goto loc_8248B21C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ble cr6,0x8248b220
	if (!ctx.cr6.gt) goto loc_8248B220;
loc_8248B21C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8248B220:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b65c
	if (ctx.cr0.eq) goto loc_8248B65C;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248b5fc
	if (ctx.cr0.eq) goto loc_8248B5FC;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bgt cr6,0x8248c278
	if (ctx.cr6.gt) goto loc_8248C278;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-32712
	ctx.r12.s64 = ctx.r12.s64 + -32712;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-19824
	ctx.r12.s64 = ctx.r12.s64 + -19824;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8248B5C0;
	case 1:
		goto loc_8248C278;
	case 2:
		goto loc_8248B4D0;
	case 3:
		goto loc_8248B520;
	case 4:
		goto loc_8248B534;
	case 5:
		goto loc_8248B510;
	case 6:
		goto loc_8248C278;
	case 7:
		goto loc_8248C278;
	case 8:
		goto loc_8248C278;
	case 9:
		goto loc_8248B290;
	case 10:
		goto loc_8248B2BC;
	case 11:
		goto loc_8248B30C;
	case 12:
		goto loc_8248B33C;
	case 13:
		goto loc_8248B37C;
	case 14:
		goto loc_8248B3CC;
	case 15:
		goto loc_8248B400;
	case 16:
		goto loc_8248B420;
	case 17:
		goto loc_8248B464;
	case 18:
		goto loc_8248B564;
	case 19:
		goto loc_8248C278;
	case 20:
		goto loc_8248C278;
	case 21:
		goto loc_8248C278;
	case 22:
		goto loc_8248B4B4;
	case 23:
		goto loc_8248B4D0;
	case 24:
		goto loc_8248B4E4;
	case 25:
		goto loc_8248B4F8;
	case 26:
		goto loc_8248C278;
	case 27:
		goto loc_8248C278;
	case 28:
		goto loc_8248C278;
	case 29:
		goto loc_8248C278;
	case 30:
		goto loc_8248B4D0;
	case 31:
		goto loc_8248B520;
	case 32:
		goto loc_8248B534;
	case 33:
		goto loc_8248B510;
	case 34:
		goto loc_8248B548;
	case 35:
		goto loc_8248B484;
	case 36:
		goto loc_8248C278;
	case 37:
		goto loc_8248C278;
	case 38:
		goto loc_8248C278;
	case 39:
		goto loc_8248C278;
	case 40:
		goto loc_8248C278;
	case 41:
		goto loc_8248C278;
	case 42:
		goto loc_8248C278;
	case 43:
		goto loc_8248B4A4;
	case 44:
		goto loc_8248B4AC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8248B290:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8248b4c4
	if (ctx.cr6.eq) goto loc_8248B4C4;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8248b2b0
	if (!ctx.cr6.lt) goto loc_8248B2B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B2B0:
	// bl 0x82483c38
	ctx.lr = 0x8248B2B4;
	sub_82483C38(ctx, base);
loc_8248B2B4:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B2BC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8248b55c
	if (ctx.cr6.eq) goto loc_8248B55C;
	// lfd f0,9568(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8248b2e4
	if (ctx.cr6.gt) goto loc_8248B2E4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B2E4:
	// bl 0x82483cc0
	ctx.lr = 0x8248B2E8;
	sub_82483CC0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d0e98
	ctx.lr = 0x8248B2F0;
	sub_825D0E98(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8248b5f4
	if (!ctx.cr6.eq) goto loc_8248B5F4;
loc_8248B2F8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f31,15824(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 15824);
loc_8248B300:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B30C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8248b55c
	if (ctx.cr6.eq) goto loc_8248B55C;
	// lfd f0,9568(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8248b334
	if (ctx.cr6.gt) goto loc_8248B334;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B334:
	// bl 0x82483cc0
	ctx.lr = 0x8248B338;
	sub_82483CC0(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B33C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8248b354
	if (!ctx.cr6.eq) goto loc_8248B354;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B354:
	// bl 0x82483f88
	ctx.lr = 0x8248B358;
	sub_82483F88(ctx, base);
loc_8248B358:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d0e98
	ctx.lr = 0x8248B360;
	sub_825D0E98(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8248b2f8
	if (ctx.cr6.eq) goto loc_8248B2F8;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x8248b5f4
	if (!ctx.cr6.eq) goto loc_8248B5F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f31,15816(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 15816);
	// b 0x8248b300
	goto loc_8248B300;
loc_8248B37C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f30,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x8248b394
	if (!ctx.cr6.eq) goto loc_8248B394;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B394:
	// bl 0x82483f88
	ctx.lr = 0x8248B398;
	sub_82483F88(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d0e98
	ctx.lr = 0x8248B3A0;
	sub_825D0E98(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x8248b3b8
	if (ctx.cr6.eq) goto loc_8248B3B8;
loc_8248B3A8:
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x8248b5f4
	if (!ctx.cr6.eq) goto loc_8248B5F4;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B3B8:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8248b5f0
	goto loc_8248B5F0;
loc_8248B3CC:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f0,9568(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// bne 0x8248b3e8
	if (!ctx.cr0.eq) goto loc_8248B3E8;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8248b5f4
	if (ctx.cr6.eq) goto loc_8248B5F4;
loc_8248B3E8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8248b3f8
	if (!ctx.cr6.eq) goto loc_8248B3F8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B3F8:
	// bl 0x82483f88
	ctx.lr = 0x8248B3FC;
	sub_82483F88(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B400:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8248b418
	if (ctx.cr6.gt) goto loc_8248B418;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B418:
	// bl 0x82483eb8
	ctx.lr = 0x8248B41C;
	sub_82483EB8(ctx, base);
	// b 0x8248b358
	goto loc_8248B358;
loc_8248B420:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f30,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x8248b438
	if (ctx.cr6.gt) goto loc_8248B438;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B438:
	// bl 0x82483eb8
	ctx.lr = 0x8248B43C;
	sub_82483EB8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825d0e98
	ctx.lr = 0x8248B444;
	sub_825D0E98(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8248b3a8
	if (!ctx.cr6.eq) goto loc_8248B3A8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B464:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8248b47c
	if (ctx.cr6.gt) goto loc_8248B47C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B47C:
	// bl 0x82483eb8
	ctx.lr = 0x8248B480;
	sub_82483EB8(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B484:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8248b49c
	if (ctx.cr6.gt) goto loc_8248B49C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B49C:
	// bl 0x82483e28
	ctx.lr = 0x8248B4A0;
	sub_82483E28(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B4A4:
	// bl 0x82483d58
	ctx.lr = 0x8248B4A8;
	sub_82483D58(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B4AC:
	// bl 0x82483dc0
	ctx.lr = 0x8248B4B0;
	sub_82483DC0(ctx, base);
	// b 0x8248b2b4
	goto loc_8248B2B4;
loc_8248B4B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
loc_8248B4C0:
	// beq cr6,0x8248b5f4
	if (ctx.cr6.eq) goto loc_8248B5F4;
loc_8248B4C4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B4D0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8248b5f4
	if (!ctx.cr6.eq) goto loc_8248B5F4;
	// b 0x8248b4c4
	goto loc_8248B4C4;
loc_8248B4E4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8248b5f4
	if (ctx.cr6.gt) goto loc_8248B5F4;
	// b 0x8248b4c4
	goto loc_8248B4C4;
loc_8248B4F8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f0,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// lfd f13,9536(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 9536);
loc_8248B508:
	// fsel f31,f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B510:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// b 0x8248b4c0
	goto loc_8248B4C0;
loc_8248B520:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8248b5f4
	if (!ctx.cr6.gt) goto loc_8248B5F4;
	// b 0x8248b4c4
	goto loc_8248B4C4;
loc_8248B534:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f0,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// lfd f13,9568(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// b 0x8248b508
	goto loc_8248B508;
loc_8248B548:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x8248b5f4
	if (ctx.cr6.eq) goto loc_8248B5F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
loc_8248B55C:
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B564:
	// rlwinm. r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b5f4
	if (ctx.cr0.eq) goto loc_8248B5F4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f30,9464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 9464);
	// fadd f1,f1,f30
	ctx.f1.f64 = ctx.f1.f64 + ctx.f30.f64;
	// bl 0x82414818
	ctx.lr = 0x8248B57C;
	sub_82414818(ctx, base);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fadd f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 + ctx.f30.f64;
	// bl 0x82414818
	ctx.lr = 0x8248B58C;
	sub_82414818(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8248b598
	if (!ctx.cr6.gt) goto loc_8248B598;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8248B598:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f13,-32464(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -32464);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x8248b5b8
	if (ctx.cr6.lt) goto loc_8248B5B8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfd f0,21608(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 21608);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8248b5f4
	if (!ctx.cr6.gt) goto loc_8248B5F4;
loc_8248B5B8:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x8248b5f4
	goto loc_8248B5F4;
loc_8248B5C0:
	// rlwinm. r11,r9,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248b5f4
	if (ctx.cr0.eq) goto loc_8248B5F4;
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8248b5dc
	if (ctx.cr6.lt) goto loc_8248B5DC;
	// stfd f0,0(r16)
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f0.u64);
	// b 0x8248b5e0
	goto loc_8248B5E0;
loc_8248B5DC:
	// stfd f1,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f1.u64);
loc_8248B5E0:
	// rlwinm r4,r10,30,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// bl 0x82415008
	ctx.lr = 0x8248B5E8;
	sub_82415008(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
loc_8248B5F0:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8248B5F4:
	// stfd f31,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f31.u64);
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B5FC:
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r11,r21,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,148(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x823eda60
	ctx.lr = 0x8248B63C;
	sub_823EDA60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8248B64C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f0,9536(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// stfd f0,0(r16)
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f0.u64);
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B65C:
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x8248c110
	if (ctx.cr6.gt) goto loc_8248C110;
	// beq cr6,0x8248c0a0
	if (ctx.cr6.eq) goto loc_8248C0A0;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x8248bfec
	if (ctx.cr6.eq) goto loc_8248BFEC;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8248bf80
	if (ctx.cr6.eq) goto loc_8248BF80;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// beq cr6,0x8248bf24
	if (ctx.cr6.eq) goto loc_8248BF24;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm r24,r21,0,0,19
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r4,148(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824152a8
	ctx.lr = 0x8248B69C;
	sub_824152A8(ctx, base);
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bgt cr6,0x8248c320
	if (ctx.cr6.gt) goto loc_8248C320;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-32744
	ctx.r12.s64 = ctx.r12.s64 + -32744;
	// rlwinm r0,r3,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32183
	ctx.r12.s64 = -2109145088;
	// addi r12,r12,-18740
	ctx.r12.s64 = ctx.r12.s64 + -18740;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8248B6CC;
	case 1:
		goto loc_8248B76C;
	case 2:
		goto loc_8248B80C;
	case 3:
		goto loc_8248B8A8;
	case 4:
		goto loc_8248B944;
	case 5:
		goto loc_8248B9E0;
	case 6:
		goto loc_8248BA7C;
	case 7:
		goto loc_8248BC8C;
	case 8:
		goto loc_8248BB6C;
	case 9:
		goto loc_8248BC8C;
	case 10:
		goto loc_8248BC8C;
	case 11:
		goto loc_8248BC8C;
	case 12:
		goto loc_8248BDCC;
	case 13:
		goto loc_8248BDCC;
	case 14:
		goto loc_8248BDCC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8248B6CC:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B6E8:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b74c
	if (ctx.cr0.eq) goto loc_8248B74C;
	// lfdx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r11.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r31,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r6.u8 & 0x3F));
	// lwa r4,92(r1)
	ctx.r4.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248B74C:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b6e8
	if (ctx.cr6.lt) goto loc_8248B6E8;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B76C:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B788:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b7ec
	if (ctx.cr0.eq) goto loc_8248B7EC;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r31,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248B7EC:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b788
	if (ctx.cr6.lt) goto loc_8248B788;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B80C:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B828:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b888
	if (ctx.cr0.eq) goto loc_8248B888;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r26,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248B888:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b828
	if (ctx.cr6.lt) goto loc_8248B828;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B8A8:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B8C4:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b924
	if (ctx.cr0.eq) goto loc_8248B924;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r28,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r6.u8 & 0x3F));
	// lwa r4,92(r1)
	ctx.r4.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248B924:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b8c4
	if (ctx.cr6.lt) goto loc_8248B8C4;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B944:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B960:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248b9c0
	if (ctx.cr0.eq) goto loc_8248B9C0;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r28,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r6.u8 & 0x3F));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwa r5,92(r1)
	ctx.r5.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 92));
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248B9C0:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b960
	if (ctx.cr6.lt) goto loc_8248B960;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248B9E0:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r16.u64;
loc_8248B9FC:
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248ba5c
	if (ctx.cr0.eq) goto loc_8248BA5C;
	// lfdx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// slw r5,r28,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// or r27,r5,r27
	ctx.r27.u64 = ctx.r5.u64 | ctx.r27.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// slw r6,r26,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f0.u64);
	// lwzx r5,r9,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8248BA5C:
	// lwz r9,8(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r9,18,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248b9fc
	if (ctx.cr6.lt) goto loc_8248B9FC;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BA7C:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// subf r5,r16,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r16.u64;
loc_8248BA98:
	// rlwinm r11,r7,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bb4c
	if (ctx.cr0.eq) goto loc_8248BB4C;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lfdx f0,r6,r5
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// slw r8,r26,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// slw r3,r30,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x8248bb10
	if (!ctx.cr6.eq) goto loc_8248BB10;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// not r4,r4
	ctx.r4.u64 = ~ctx.r4.u64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x8248bb2c
	goto loc_8248BB2C;
loc_8248BB10:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// not r4,r4
	ctx.r4.u64 = ~ctx.r4.u64;
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
loc_8248BB2C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r8,r28,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwx r10,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u32);
loc_8248BB4C:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248ba98
	if (ctx.cr6.lt) goto loc_8248BA98;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BB6C:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// subf r4,r11,r16
	ctx.r4.u64 = ctx.r16.u64 - ctx.r11.u64;
loc_8248BB88:
	// rlwinm r11,r5,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r5,27
	ctx.r7.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bc6c
	if (ctx.cr0.eq) goto loc_8248BC6C;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bc6c
	if (ctx.cr0.eq) goto loc_8248BC6C;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// lfd f0,0(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r7,r26,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r3,r10,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// slw r31,r30,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & ctx.r31.u64;
	// srw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x8248bc30
	if (!ctx.cr6.eq) goto loc_8248BC30;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srw r6,r3,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r6.u8 & 0x3F));
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x8248bc4c
	goto loc_8248BC4C;
loc_8248BC30:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sraw r6,r3,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r6.s64 = ctx.r3.s32 >> temp.u32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
loc_8248BC4C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfdx f0,r4,r9
	REX_STORE_U64(ctx.r4.u32 + ctx.r9.u32, ctx.f0.u64);
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r28,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r6,r10,r29
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// or r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 | ctx.r27.u64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
loc_8248BC6C:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248bb88
	if (ctx.cr6.lt) goto loc_8248BB88;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BC8C:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// subf r6,r10,r16
	ctx.r6.u64 = ctx.r16.u64 - ctx.r10.u64;
loc_8248BCA8:
	// rlwinm r10,r7,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248bd9c
	if (ctx.cr0.eq) goto loc_8248BD9C;
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r10,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248bd9c
	if (ctx.cr0.eq) goto loc_8248BD9C;
	// lfd f0,-32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lfd f0,0(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// beq cr6,0x8248bd3c
	if (ctx.cr6.eq) goto loc_8248BD3C;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// beq cr6,0x8248bd34
	if (ctx.cr6.eq) goto loc_8248BD34;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x8248bd2c
	if (ctx.cr6.eq) goto loc_8248BD2C;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8248bdbc
	if (!ctx.cr6.eq) goto loc_8248BDBC;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// b 0x8248bd40
	goto loc_8248BD40;
loc_8248BD2C:
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x8248bd40
	goto loc_8248BD40;
loc_8248BD34:
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// b 0x8248bd40
	goto loc_8248BD40;
loc_8248BD3C:
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
loc_8248BD40:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfdx f0,r6,r9
	REX_STORE_U64(ctx.r6.u32 + ctx.r9.u32, ctx.f0.u64);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r8,r30,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r4.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r8,r28,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r7.u8 & 0x3F));
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// lwzx r31,r5,r29
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
	// stwx r10,r5,r29
	REX_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r10.u32);
loc_8248BD9C:
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8248bca8
	if (ctx.cr6.lt) goto loc_8248BCA8;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BDBC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x823a0e88
	ctx.lr = 0x8248BDCC;
	sub_823A0E88(ctx, base);
loc_8248BDCC:
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// subf r6,r16,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r16.u64;
loc_8248BDE8:
	// rlwinm r11,r5,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r5,27
	ctx.r8.u64 = ctx.r5.u32 & 0x1F;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248bee4
	if (ctx.cr0.eq) goto loc_8248BEE4;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r7,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r9,r7,27
	ctx.r9.u64 = ctx.r7.u32 & 0x1F;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// slw r25,r30,r9
	ctx.r25.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// and r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 & ctx.r25.u64;
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8248be74
	if (ctx.cr6.lt) goto loc_8248BE74;
	// beq cr6,0x8248be5c
	if (ctx.cr6.eq) goto loc_8248BE5C;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bge cr6,0x8248bf04
	if (!ctx.cr6.lt) goto loc_8248BF04;
	// lfdx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8248be6c
	goto loc_8248BE6C;
loc_8248BE5C:
	// lfdx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8248BE6C:
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x8248be84
	goto loc_8248BE84;
loc_8248BE74:
	// lfdx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8248BE84:
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// beq cr6,0x8248becc
	if (ctx.cr6.eq) goto loc_8248BECC;
	// cmpwi cr6,r3,13
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 13, ctx.xer);
	// beq cr6,0x8248beb8
	if (ctx.cr6.eq) goto loc_8248BEB8;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x8248bf14
	if (!ctx.cr6.eq) goto loc_8248BF14;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
loc_8248BEAC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// b 0x8248bed8
	goto loc_8248BED8;
loc_8248BEB8:
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// slw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// std r8,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// b 0x8248beac
	goto loc_8248BEAC;
loc_8248BECC:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// stfd f0,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
loc_8248BED8:
	// lwzx r8,r11,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
loc_8248BEE4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248bde8
	if (ctx.cr6.lt) goto loc_8248BDE8;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BF04:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x823a0e88
	ctx.lr = 0x8248BF14;
	sub_823A0E88(ctx, base);
loc_8248BF14:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x823a0e88
	ctx.lr = 0x8248BF24;
	sub_823A0E88(ctx, base);
loc_8248BF24:
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lfd f0,9568(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 9568);
loc_8248BF38:
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r9,27
	ctx.r6.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// srw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8248bf68
	if (ctx.cr0.eq) goto loc_8248BF68;
	// li r8,3
	ctx.r8.s64 = 3;
	// stfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// stfd f0,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.f0.u64);
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
loc_8248BF68:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8248bf38
	if (ctx.cr6.lt) goto loc_8248BF38;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248BF80:
	// rlwinm r11,r21,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,148(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823cfc08
	ctx.lr = 0x8248BF98;
	sub_823CFC08(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r10,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// bne 0x8248bfbc
	if (!ctx.cr0.eq) goto loc_8248BFBC;
	// rlwinm r10,r25,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8248BFBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248bfe0
	if (ctx.cr6.eq) goto loc_8248BFE0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,9536(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9536);
	// stfdx f0,r11,r16
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
loc_8248BFE0:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x8248c054
	goto loc_8248C054;
loc_8248BFEC:
	// rlwinm r11,r21,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,148(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823bc6c8
	ctx.lr = 0x8248C004;
	sub_823BC6C8(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// bne 0x8248c028
	if (!ctx.cr0.eq) goto loc_8248C028;
	// rlwinm r10,r25,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8248C028:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248c04c
	if (ctx.cr6.eq) goto loc_8248C04C;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,9536(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9536);
	// stfdx f0,r11,r16
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
loc_8248C04C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
loc_8248C054:
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8248c078
	if (!ctx.cr0.eq) goto loc_8248C078;
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8248C078:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248c320
	if (ctx.cr6.eq) goto loc_8248C320;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f0,9568(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 9568);
	// stfdx f0,r11,r16
	REX_STORE_U64(ctx.r11.u32 + ctx.r16.u32, ctx.f0.u64);
	// b 0x8248c320
	goto loc_8248C320;
loc_8248C0A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f2,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// lfd f0,9568(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x8248c0e4
	if (!ctx.cr6.eq) goto loc_8248C0E4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// lfd f0,9536(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9536);
	// stfd f0,0(r16)
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f0.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8248c198
	goto loc_8248C198;
loc_8248C0E4:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// lfd f1,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8248c320
	if (ctx.cr6.lt) goto loc_8248C320;
	// bl 0x825d0718
	ctx.lr = 0x8248C0FC;
	sub_825D0718(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfd f1,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f1.u64);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// b 0x8248c190
	goto loc_8248C190;
loc_8248C110:
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x8248c298
	if (ctx.cr6.eq) goto loc_8248C298;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x8248c1a0
	if (ctx.cr6.eq) goto loc_8248C1A0;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x8248c320
	if (!ctx.cr6.eq) goto loc_8248C320;
	// rlwinm. r11,r25,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248c15c
	if (ctx.cr0.eq) goto loc_8248C15C;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_8248C134:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82414888
	ctx.lr = 0x8248C140;
	sub_82414888(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.f1.u64);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8248c134
	if (ctx.cr6.lt) goto loc_8248C134;
loc_8248C15C:
	// rlwinm r10,r21,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// lwz r11,148(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8248c320
	if (ctx.cr0.eq) goto loc_8248C320;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
loc_8248C190:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8248C198:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8248c320
	goto loc_8248C320;
loc_8248C1A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r27,0(r21)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
loc_8248C1B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8248c270
	if (ctx.cr6.eq) goto loc_8248C270;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824865a8
	ctx.lr = 0x8248C1E0;
	sub_824865A8(ctx, base);
	// lwz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8248c278
	if (!ctx.cr6.eq) goto loc_8248C278;
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x824848f0
	ctx.lr = 0x8248C208;
	sub_824848F0(ctx, base);
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8248c22c
	if (!ctx.cr0.eq) goto loc_8248C22C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x8248c240
	goto loc_8248C240;
loc_8248C22C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_8248C240:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8248c258
	if (!ctx.cr6.eq) goto loc_8248C258;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x8248c268
	goto loc_8248C268;
loc_8248C258:
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bne cr6,0x8248c278
	if (!ctx.cr6.eq) goto loc_8248C278;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8248c278
	if (!ctx.cr6.eq) goto loc_8248C278;
loc_8248C268:
	// lwz r27,4(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8248c1b4
	goto loc_8248C1B4;
loc_8248C270:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8248c280
	if (!ctx.cr6.eq) goto loc_8248C280;
loc_8248C278:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8248c324
	goto loc_8248C324;
loc_8248C280:
	// stfd f31,0(r16)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r16.u32 + 0, ctx.f31.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// or r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// b 0x8248c320
	goto loc_8248C320;
loc_8248C298:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8248c320
	if (ctx.cr6.eq) goto loc_8248C320;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
loc_8248C2B4:
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r10,27
	ctx.r4.u64 = ctx.r10.u32 & 0x1F;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// srw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8248c304
	if (ctx.cr0.eq) goto loc_8248C304;
	// lfd f0,0(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfd f0,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r3,r28,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// or r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 | ctx.r27.u64;
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// lwzx r3,r9,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// slw r5,r5,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stwx r5,r9,r29
	REX_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r5.u32);
loc_8248C304:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r15
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8248c2b4
	if (ctx.cr6.lt) goto loc_8248C2B4;
loc_8248C320:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8248C324:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82562B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82562c98
	if (ctx.cr6.eq) goto loc_82562C98;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf. r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r7,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bge 0x82562c98
	if (!ctx.cr0.lt) goto loc_82562C98;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82562c00
	if (ctx.cr6.lt) goto loc_82562C00;
loc_82562B88:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82562bd8
	if (ctx.cr6.gt) goto loc_82562BD8;
loc_82562B94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r6,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r6.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82562b94
	if (!ctx.cr6.gt) goto loc_82562B94;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82562c98
	if (!ctx.cr6.lt) goto loc_82562C98;
loc_82562BD8:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82562c6c
	if (!ctx.cr6.eq) goto loc_82562C6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825626b0
	ctx.lr = 0x82562BEC;
	sub_825626B0(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82562b88
	if (!ctx.cr6.lt) goto loc_82562B88;
loc_82562C00:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldicr r10,r7,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sld r10,r6,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r5.u64);
	// b 0x82562c94
	goto loc_82562C94;
loc_82562C6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x82562c94
	if (!ctx.cr6.lt) goto loc_82562C94;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82562c8c
	if (!ctx.cr6.eq) goto loc_82562C8C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82562C8C:
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82562C94:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82562C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8256E5B0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8256E5BC:
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8256e5bc
	if (!ctx.cr0.eq) goto loc_8256E5BC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8256EBF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8256EC00;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r19,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r19.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r15,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r15.u32);
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r8,52(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhz r7,76(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r28,r8,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r18,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r18.u32);
	// rotlwi r21,r11,3
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwz r29,1356(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// rotlwi r4,r11,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r30,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// rotlwi r20,r11,4
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// rotlwi r14,r7,3
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r10,r21,r5
	ctx.r10.u64 = ctx.r21.u64 + ctx.r5.u64;
	// neg r3,r4
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// dcbt r3,r10
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r8,r10
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// dcbt r6,r10
	// neg r4,r11
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// dcbt r4,r10
	// dcbt r0,r10
	// dcbt r11,r10
	// dcbt r7,r10
	// dcbt r9,r10
	// add r10,r20,r5
	ctx.r10.u64 = ctx.r20.u64 + ctx.r5.u64;
	// dcbt r3,r10
	// dcbt r8,r10
	// dcbt r6,r10
	// dcbt r4,r10
	// dcbt r0,r10
	// dcbt r11,r10
	// dcbt r7,r10
	// dcbt r9,r10
	// dcbt r0,r5
	// dcbt r11,r5
	// dcbt r7,r5
	// dcbt r9,r5
	// lwz r3,20904(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + 20904);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8256ed08
	if (ctx.cr6.eq) goto loc_8256ED08;
	// lwz r11,20908(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256ed08
	if (ctx.cr6.eq) goto loc_8256ED08;
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8256ed08
	if (!ctx.cr6.eq) goto loc_8256ED08;
	// lwz r10,22196(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 22196);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8256ed0c
	goto loc_8256ED0C;
loc_8256ED08:
	// lwz r11,22196(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22196);
loc_8256ED0C:
	// stw r11,22192(r18)
	REX_STORE_U32(ctx.r18.u32 + 22192, ctx.r11.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplw cr6,r15,r19
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8256f02c
	if (!ctx.cr6.lt) goto loc_8256F02C;
	// addi r23,r28,-1
	ctx.r23.s64 = ctx.r28.s64 + -1;
	// rlwinm r25,r15,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8256ED24:
	// lwz r11,22164(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256ed5c
	if (ctx.cr6.eq) goto loc_8256ED5C;
	// cmplw cr6,r15,r23
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8256ed54
	if (!ctx.cr6.lt) goto loc_8256ED54;
	// lwz r11,22192(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22192);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8256ed54
	if (!ctx.cr6.eq) goto loc_8256ED54;
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x8256ed68
	goto loc_8256ED68;
loc_8256ED54:
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x8256ed68
	goto loc_8256ED68;
loc_8256ED5C:
	// subfc r11,r23,r15
	ctx.xer.ca = ctx.r15.u32 >= ctx.r23.u32;
	ctx.r11.u64 = ctx.r15.u64 - ctx.r23.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_8256ED68:
	// add r3,r24,r21
	ctx.r3.u64 = ctx.r24.u64 + ctx.r21.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// bl 0x82580848
	ctx.lr = 0x8256ED80;
	sub_82580848(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8256ed9c
	if (!ctx.cr6.eq) goto loc_8256ED9C;
	// add r3,r24,r20
	ctx.r3.u64 = ctx.r24.u64 + ctx.r20.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// bl 0x82580848
	ctx.lr = 0x8256ED9C;
	sub_82580848(ctx, base);
loc_8256ED9C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8256ef2c
	if (!ctx.cr6.gt) goto loc_8256EF2C;
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// addi r19,r21,-16
	ctx.r19.s64 = ctx.r21.s64 + -16;
	// addi r16,r20,-16
	ctx.r16.s64 = ctx.r20.s64 + -16;
loc_8256EDB8:
	// addic. r22,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r22.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x8256ee48
	if (!ctx.cr0.eq) goto loc_8256EE48;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r11,r30,r21
	ctx.r11.u64 = ctx.r30.u64 + ctx.r21.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r30,r20
	ctx.r11.u64 = ctx.r30.u64 + ctx.r20.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8256EE48:
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r3,r19,r28
	ctx.r3.u64 = ctx.r19.u64 + ctx.r28.u64;
	// bl 0x82580848
	ctx.lr = 0x8256EE60;
	sub_82580848(ctx, base);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x8256ee7c
	if (!ctx.cr6.eq) goto loc_8256EE7C;
	// li r6,16
	ctx.r6.s64 = 16;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r16,r28
	ctx.r3.u64 = ctx.r16.u64 + ctx.r28.u64;
	// lhz r4,74(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// bl 0x82580848
	ctx.lr = 0x8256EE7C;
	sub_82580848(ctx, base);
loc_8256EE7C:
	// lbz r28,1244(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r27,r30,-13
	ctx.r27.s64 = ctx.r30.s64 + -13;
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 180);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256EEA4;
	sub_82580C78(ctx, base);
	// lbz r9,181(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 181);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8256eec8
	if (ctx.cr6.lt) goto loc_8256EEC8;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256EEC8;
	sub_82580C78(ctx, base);
loc_8256EEC8:
	// lbz r28,1244(r31)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r27,r30,-5
	ctx.r27.s64 = ctx.r30.s64 + -5;
	// lhz r26,74(r31)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 180);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256EEF0;
	sub_82580C78(ctx, base);
	// lbz r9,181(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 181);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8256ef14
	if (ctx.cr6.lt) goto loc_8256EF14;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256EF14;
	sub_82580C78(ctx, base);
loc_8256EF14:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r17,r17,16
	ctx.r17.s64 = ctx.r17.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8256edb8
	if (ctx.cr6.lt) goto loc_8256EDB8;
loc_8256EF2C:
	// lhz r11,82(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 82);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne cr6,0x8256efb8
	if (!ctx.cr6.eq) goto loc_8256EFB8;
	// lhz r10,74(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// add r11,r24,r21
	ctx.r11.u64 = ctx.r24.u64 + ctx.r21.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// add r11,r24,r20
	ctx.r11.u64 = ctx.r24.u64 + ctx.r20.u64;
	// dcbt r7,r11
	// dcbt r6,r11
	// dcbt r4,r11
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r24
	// dcbt r10,r24
	// dcbt r5,r24
	// dcbt r9,r24
loc_8256EFB8:
	// lbz r30,1244(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// addi r28,r17,3
	ctx.r28.s64 = ctx.r17.s64 + 3;
	// lhz r27,74(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 74);
	// lbz r10,180(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 180);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsb r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256EFE0;
	sub_82580C78(ctx, base);
	// lbz r9,181(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 181);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8256f004
	if (ctx.cr6.lt) goto loc_8256F004;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82580c78
	ctx.lr = 0x8256F004;
	sub_82580C78(ctx, base);
loc_8256F004:
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// lwz r18,260(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8256ed24
	if (ctx.cr6.lt) goto loc_8256ED24;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r19,r11,0
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r30,284(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r15,300(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_8256F02C:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r14,r30
	ctx.r11.u64 = ctx.r14.u64 + ctx.r30.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// cmplw cr6,r15,r19
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8256f250
	if (!ctx.cr6.lt) goto loc_8256F250;
	// addi r20,r28,-1
	ctx.r20.s64 = ctx.r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8256F09C:
	// lwz r11,22164(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256f0d4
	if (ctx.cr6.eq) goto loc_8256F0D4;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8256f0cc
	if (!ctx.cr6.lt) goto loc_8256F0CC;
	// lwz r11,22192(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8256f0cc
	if (!ctx.cr6.eq) goto loc_8256F0CC;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8256f0e4
	goto loc_8256F0E4;
loc_8256F0CC:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8256f0f8
	goto loc_8256F0F8;
loc_8256F0D4:
	// subfc r11,r20,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r24.u64 - ctx.r20.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r27,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r27.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x8256f0f8
	if (!ctx.cr0.eq) goto loc_8256F0F8;
loc_8256F0E4:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r22,r14
	ctx.r3.u64 = ctx.r22.u64 + ctx.r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x82580848
	ctx.lr = 0x8256F0F8;
	sub_82580848(ctx, base);
loc_8256F0F8:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r22,8
	ctx.r26.s64 = ctx.r22.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8256f1d4
	if (!ctx.cr6.gt) goto loc_8256F1D4;
	// addi r30,r26,8
	ctx.r30.s64 = ctx.r26.s64 + 8;
	// addi r28,r14,-8
	ctx.r28.s64 = ctx.r14.s64 + -8;
loc_8256F114:
	// addic. r29,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r29.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8256f178
	if (!ctx.cr0.eq) goto loc_8256F178;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r26,r14
	ctx.r11.u64 = ctx.r26.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
loc_8256F178:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8256f194
	if (!ctx.cr6.eq) goto loc_8256F194;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r28,r30
	ctx.r3.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x82580848
	ctx.lr = 0x8256F194;
	sub_82580848(ctx, base);
loc_8256F194:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// addi r3,r30,-13
	ctx.r3.s64 = ctx.r30.s64 + -13;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// bl 0x82580c78
	ctx.lr = 0x8256F1A8;
	sub_82580C78(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8256f114
	if (ctx.cr6.lt) goto loc_8256F114;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,260(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r30,284(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r15,300(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r19,308(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8256F1D4:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bne cr6,0x8256f23c
	if (!ctx.cr6.eq) goto loc_8256F23C;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r22,r14
	ctx.r11.u64 = ctx.r22.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8256F23C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8256f09c
	if (ctx.cr6.lt) goto loc_8256F09C;
	// b 0x8256f254
	goto loc_8256F254;
loc_8256F250:
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8256F254:
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// lwz r25,292(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r11,r14,r25
	ctx.r11.u64 = ctx.r14.u64 + ctx.r25.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r30
	// dcbt r10,r30
	// dcbt r5,r30
	// dcbt r9,r30
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// cmplw cr6,r15,r19
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x8256f46c
	if (!ctx.cr6.lt) goto loc_8256F46C;
	// addi r20,r28,-1
	ctx.r20.s64 = ctx.r28.s64 + -1;
	// rlwinm r21,r15,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8256F2C4:
	// lwz r11,22164(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8256f2fc
	if (ctx.cr6.eq) goto loc_8256F2FC;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, ctx.xer);
	// bge cr6,0x8256f2f4
	if (!ctx.cr6.lt) goto loc_8256F2F4;
	// lwz r11,22192(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 22192);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8256f2f4
	if (!ctx.cr6.eq) goto loc_8256F2F4;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8256f30c
	goto loc_8256F30C;
loc_8256F2F4:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8256f320
	goto loc_8256F320;
loc_8256F2FC:
	// subfc r11,r20,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r20.u32;
	ctx.r11.u64 = ctx.r23.u64 - ctx.r20.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r24,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r24.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x8256f320
	if (!ctx.cr0.eq) goto loc_8256F320;
loc_8256F30C:
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// add r3,r25,r14
	ctx.r3.u64 = ctx.r25.u64 + ctx.r14.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x82580848
	ctx.lr = 0x8256F320;
	sub_82580848(ctx, base);
loc_8256F320:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8256f3f4
	if (!ctx.cr6.gt) goto loc_8256F3F4;
	// add r29,r30,r14
	ctx.r29.u64 = ctx.r30.u64 + ctx.r14.u64;
	// subfic r27,r14,-5
	ctx.xer.ca = ctx.r14.u32 <= 4294967291;
	ctx.r27.u64 = static_cast<uint64_t>(-5) - ctx.r14.u64;
loc_8256F33C:
	// addic. r28,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r28.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8256f3a4
	if (!ctx.cr0.eq) goto loc_8256F3A4;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r30,r14
	ctx.r11.u64 = ctx.r30.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
loc_8256F3A4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8256f3c0
	if (!ctx.cr6.eq) goto loc_8256F3C0;
	// li r6,8
	ctx.r6.s64 = 8;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// bl 0x82580848
	ctx.lr = 0x8256F3C0;
	sub_82580848(ctx, base);
loc_8256F3C0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lhz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lbz r5,1244(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 1244);
	// bl 0x82580c78
	ctx.lr = 0x8256F3D4;
	sub_82580C78(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8256f33c
	if (ctx.cr6.lt) goto loc_8256F33C;
	// lwz r18,260(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r19,308(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
loc_8256F3F4:
	// lhz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 84);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bne cr6,0x8256f45c
	if (!ctx.cr6.eq) goto loc_8256F45C;
	// lhz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 76);
	// add r11,r25,r14
	ctx.r11.u64 = ctx.r25.u64 + ctx.r14.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r7,r11
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// dcbt r6,r11
	// rotlwi r5,r10,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// neg r4,r5
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// dcbt r4,r11
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// dcbt r3,r11
	// dcbt r0,r11
	// dcbt r10,r11
	// dcbt r5,r11
	// dcbt r9,r11
	// dcbt r0,r22
	// dcbt r10,r22
	// dcbt r5,r22
	// dcbt r9,r22
loc_8256F45C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8256f2c4
	if (ctx.cr6.lt) goto loc_8256F2C4;
loc_8256F46C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258BE20) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x8258be68
	if (!ctx.cr6.eq) goto loc_8258BE68;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8258be84
	if (ctx.cr6.eq) goto loc_8258BE84;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// lwz r7,22192(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 22192);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8258be84
	if (!ctx.cr6.eq) goto loc_8258BE84;
loc_8258BE68:
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,1772(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1772);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8258be84
	if (!ctx.cr6.eq) goto loc_8258BE84;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8258BE84:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1772(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1772);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258CFA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e0
	ctx.lr = 0x8258CFA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// li r24,1
	ctx.r24.s64 = 1;
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne cr6,0x8258d014
	if (!ctx.cr6.eq) goto loc_8258D014;
	// lwz r11,20908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d014
	if (!ctx.cr6.eq) goto loc_8258D014;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8258D014:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8258d03c
	if (!ctx.cr6.eq) goto loc_8258D03C;
	// lwz r11,20908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d03c
	if (!ctx.cr6.eq) goto loc_8258D03C;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d06c
	if (!ctx.cr6.eq) goto loc_8258D06C;
loc_8258D03C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8258d0a0
	if (ctx.cr6.eq) goto loc_8258D0A0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8258d06c
	if (ctx.cr6.eq) goto loc_8258D06C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8258d06c
	if (ctx.cr6.eq) goto loc_8258D06C;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r3,1772(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,16384
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16384, ctx.xer);
	// bne cr6,0x8258d0a0
	if (!ctx.cr6.eq) goto loc_8258D0A0;
loc_8258D06C:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8258d090
	if (ctx.cr6.eq) goto loc_8258D090;
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// lwz r3,22192(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 22192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8258d0a0
	if (!ctx.cr6.eq) goto loc_8258D0A0;
loc_8258D090:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r29,1928(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1928);
	// subf r30,r11,r5
	ctx.r30.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8258D0A0:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x8258d0c0
	if (!ctx.cr6.eq) goto loc_8258D0C0;
	// lwz r11,20908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d0c0
	if (!ctx.cr6.eq) goto loc_8258D0C0;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d0f0
	if (!ctx.cr6.eq) goto loc_8258D0F0;
loc_8258D0C0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8258d1f4
	if (ctx.cr6.eq) goto loc_8258D1F4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8258d0f0
	if (ctx.cr6.eq) goto loc_8258D0F0;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8258d0f0
	if (ctx.cr6.eq) goto loc_8258D0F0;
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x8258d1f4
	if (!ctx.cr6.eq) goto loc_8258D1F4;
loc_8258D0F0:
	// addic. r10,r5,-32
	ctx.xer.ca = ctx.r5.u32 > 31;
	ctx.r10.s64 = ctx.r5.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r29,1924(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x8258d24c
	if (ctx.cr0.eq) goto loc_8258D24C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258d1f4
	if (ctx.cr6.eq) goto loc_8258D1F4;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bne cr6,0x8258d130
	if (!ctx.cr6.eq) goto loc_8258D130;
	// lwz r11,20908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258d130
	if (!ctx.cr6.eq) goto loc_8258D130;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8258d15c
	if (!ctx.cr6.eq) goto loc_8258D15C;
loc_8258D130:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8258d15c
	if (ctx.cr6.eq) goto loc_8258D15C;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8258d15c
	if (ctx.cr6.eq) goto loc_8258D15C;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r9,1772(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1772);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8258d174
	if (!ctx.cr6.eq) goto loc_8258D174;
loc_8258D15C:
	// lwz r11,1920(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1920);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8258D174:
	// lwz r11,1920(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1920);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,1916(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1916);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhzx r9,r3,r30
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8258cd90
	ctx.lr = 0x8258D1B8;
	sub_8258CD90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r6,r8,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// subf r8,r3,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r3.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8258d1f4
	if (!ctx.cr6.lt) goto loc_8258D1F4;
	// lwz r29,1928(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 1928);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8258D1F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8258d24c
	if (ctx.cr6.eq) goto loc_8258D24C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8258d210
	if (!ctx.cr6.eq) goto loc_8258D210;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_8258D210:
	// lwz r11,1924(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1924);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8258d23c
	if (!ctx.cr6.eq) goto loc_8258D23C;
	// bl 0x8258cbc8
	ctx.lr = 0x8258D238;
	sub_8258CBC8(ctx, base);
	// b 0x8258d240
	goto loc_8258D240;
loc_8258D23C:
	// bl 0x8258c998
	ctx.lr = 0x8258D240;
	sub_8258C998(ctx, base);
loc_8258D240:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8258d24c
	if (!ctx.cr6.eq) goto loc_8258D24C;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8258D24C:
	// lwz r11,1928(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1928);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
	// stw r29,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6130
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259E8B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// addi r9,r10,-10888
	ctx.r9.s64 = ctx.r10.s64 + -10888;
	// rlwinm r8,r11,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,1792(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1792);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259e924
	if (ctx.cr6.eq) goto loc_8259E924;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259e91c
	if (!ctx.cr6.gt) goto loc_8259E91C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8259e920
	goto loc_8259E920;
loc_8259E91C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8259E920:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8259E924:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259e948
	if (!ctx.cr6.gt) goto loc_8259E948;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8259E948:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A4870) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825a4884
	if (!ctx.cr6.eq) goto loc_825A4884;
loc_825A487C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825A4884:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x825a487c
	if (ctx.cr6.eq) goto loc_825A487C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825a487c
	if (!ctx.cr6.lt) goto loc_825A487C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825a48c4
	if (!ctx.cr6.eq) goto loc_825A48C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x825a4920
	if (!ctx.cr6.eq) goto loc_825A4920;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x825a4920
	goto loc_825A4920;
loc_825A48C4:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x825a48e0
	if (!ctx.cr6.eq) goto loc_825A48E0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825a48e0
	if (!ctx.cr6.eq) goto loc_825A48E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x825a4920
	goto loc_825A4920;
loc_825A48E0:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x825a48f0
	if (!ctx.cr6.eq) goto loc_825A48F0;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_825A48F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x825a4908
	if (!ctx.cr0.gt) goto loc_825A4908;
loc_825A48FC:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825a48fc
	if (!ctx.cr0.eq) goto loc_825A48FC;
loc_825A4908:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne cr6,0x825a4920
	if (!ctx.cr6.eq) goto loc_825A4920;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_825A4920:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x825a4944
	if (!ctx.cr6.eq) goto loc_825A4944;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825A4944:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A7D80) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e0
	ctx.lr = 0x825A7D88;
	__savegprlr_22(ctx, base);
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r25,r4,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// li r9,4
	ctx.r9.s64 = 4;
loc_825A7DA0:
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,6(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,-2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lhz r27,8(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r26,4(r11)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mulli r5,r5,799
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(799));
	// mulli r30,r31,2408
	ctx.r30.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(2408));
	// mulli r7,r7,3406
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(3406));
	// mulli r4,r4,565
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(565));
	// mulli r6,r6,4017
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4017));
	// mulli r8,r8,2276
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(2276));
	// subf r31,r5,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r5.u64;
	// subf r29,r7,r4
	ctx.r29.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r30,r6,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r6.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r4,r30,r29
	ctx.r4.u64 = ctx.r29.u64 - ctx.r30.u64;
	// extsh r5,r27
	ctx.r5.s64 = ctx.r27.s16;
	// subf r7,r31,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r31.u64;
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// rlwinm r3,r3,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// add r27,r4,r7
	ctx.r27.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r23,r4,r7
	ctx.r23.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r28,r5,r6
	ctx.r28.u64 = ctx.r5.u64 + ctx.r6.u64;
	// extsh r4,r26
	ctx.r4.s64 = ctx.r26.s16;
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// mulli r3,r28,1108
	ctx.r3.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1108));
	// mulli r6,r6,1568
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1568));
	// rlwinm r4,r4,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// mulli r22,r5,3784
	ctx.r22.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3784));
	// add r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mulli r27,r27,181
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(181));
	// subf r28,r4,r7
	ctx.r28.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r26,r23,181
	ctx.r26.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(181));
	// subf r7,r22,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r22.u64;
	// addi r3,r27,128
	ctx.r3.s64 = ctx.r27.s64 + 128;
	// subf r27,r5,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r28,r7
	ctx.r5.u64 = ctx.r28.u64 + ctx.r7.u64;
	// subf r31,r7,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r7.u64;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// srawi r3,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 8;
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r29,r4,r5
	ctx.r29.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r28,r31,r3
	ctx.r28.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r26,r27,r7
	ctx.r26.u64 = ctx.r27.u64 + ctx.r7.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// subf r7,r7,r27
	ctx.r7.u64 = ctx.r27.u64 - ctx.r7.u64;
	// sth r30,-4(r10)
	REX_STORE_U16(ctx.r10.u32 + -4, ctx.r30.u16);
	// subf r3,r3,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r3.u64;
	// sth r29,-2(r10)
	REX_STORE_U16(ctx.r10.u32 + -2, ctx.r29.u16);
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// srawi r31,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r26.s32 >> 8;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// sth r28,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r28.u16);
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// sth r31,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r31.u16);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// sth r7,4(r10)
	REX_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r3,6(r10)
	REX_STORE_U16(ctx.r10.u32 + 6, ctx.r3.u16);
	// subf r3,r8,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r8.u64;
	// srawi r4,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 8;
	// srawi r7,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 8;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r4,8(r10)
	REX_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// sth r7,10(r10)
	REX_STORE_U16(ctx.r10.u32 + 10, ctx.r7.u16);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// bne 0x825a7da0
	if (!ctx.cr0.eq) goto loc_825A7DA0;
	// add r11,r25,r24
	ctx.r11.u64 = ctx.r25.u64 + ctx.r24.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// add r10,r25,r11
	ctx.r10.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subf r4,r11,r24
	ctx.r4.u64 = ctx.r24.u64 - ctx.r11.u64;
	// add r8,r25,r10
	ctx.r8.u64 = ctx.r25.u64 + ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// subf r31,r11,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_825A7F10:
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// lhzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhzx r5,r31,r11
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r6,r5,784
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(784));
	// mulli r30,r29,1892
	ctx.r30.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(1892));
	// subf r7,r7,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mulli r27,r5,1892
	ctx.r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1892));
	// mulli r29,r29,784
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(784));
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mulli r5,r28,1448
	ctx.r5.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(1448));
	// mulli r7,r7,1448
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1448));
	// subf r6,r27,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r27.u64;
	// add r30,r5,r8
	ctx.r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r29,r7,r6
	ctx.r29.u64 = ctx.r7.u64 + ctx.r6.u64;
	// subf r6,r6,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// add r7,r30,r10
	ctx.r7.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// sthx r7,r4,r11
	REX_STORE_U16(ctx.r4.u32 + ctx.r11.u32, ctx.r7.u16);
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sthx r6,r3,r11
	REX_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u16);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sthx r5,r31,r11
	REX_STORE_U16(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x825a7f10
	if (!ctx.cr0.eq) goto loc_825A7F10;
	// b 0x825d6130
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B1208) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// stw r4,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r6.u32);
	// lwz r5,204(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// divw r10,r4,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r4,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r5,r6,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// divw r11,r5,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// andc r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r7,204(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,36(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 36);
	// mullw r3,r6,r4
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// andc r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r10,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,32(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mullw r11,r5,r3
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// lwz r10,272(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// andc r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,32(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// li r6,8
	ctx.r6.s64 = 8;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,48(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,272(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r8,r9,31
	ctx.r8.s64 = ctx.r9.s64 + 31;
	// rlwinm r7,r8,0,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// li r6,8
	ctx.r6.s64 = 8;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r5.u32);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,36(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// stw r10,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// lwz r8,272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// lwz r3,240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// andc r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r7,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// lwz r3,436(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,52(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lwz r7,248(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r7,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// lwz r6,264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x825b1504
	if (!ctx.cr6.eq) goto loc_825B1504;
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r3,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// lwz r11,360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x825b14d4
	if (ctx.cr6.eq) goto loc_825B14D4;
	// lwz r10,360(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// beq cr6,0x825b14e0
	if (ctx.cr6.eq) goto loc_825B14E0;
	// lwz r9,360(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// cmpwi cr6,r9,192
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 192, ctx.xer);
	// beq cr6,0x825b14ec
	if (ctx.cr6.eq) goto loc_825B14EC;
	// b 0x825b14f8
	goto loc_825B14F8;
loc_825B14D4:
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// b 0x825b1500
	goto loc_825B1500;
loc_825B14E0:
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r7,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// b 0x825b1500
	goto loc_825B1500;
loc_825B14EC:
	// li r6,192
	ctx.r6.s64 = 192;
	// stw r6,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// b 0x825b1500
	goto loc_825B1500;
loc_825B14F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
loc_825B1500:
	// b 0x825b150c
	goto loc_825B150C;
loc_825B1504:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
loc_825B150C:
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b1538
	if (ctx.cr6.eq) goto loc_825B1538;
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,80(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,92(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// stw r7,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// b 0x825b1564
	goto loc_825B1564;
loc_825B1538:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,56(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 56);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// stw r7,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
loc_825B1564:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,32(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// bl 0x82558b78
	ctx.lr = 0x825B1574;
	sub_82558B78(ctx, base);
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82558b78
	ctx.lr = 0x825B158C;
	sub_82558B78(ctx, base);
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lwz r11,264(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x825b15a4
	if (!ctx.cr6.lt) goto loc_825B15A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
loc_825B15A4:
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x825b15b4
	if (ctx.cr6.gt) goto loc_825B15B4;
	// b 0x825b3668
	goto loc_825B3668;
loc_825B15B4:
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r7,436(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x825b15cc
	if (!ctx.cr6.gt) goto loc_825B15CC;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
loc_825B15CC:
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x825b15e4
	if (!ctx.cr6.gt) goto loc_825B15E4;
	// lwz r3,212(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stw r3,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
loc_825B15E4:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b160c
	if (ctx.cr6.eq) goto loc_825B160C;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r8,r9,-256
	ctx.r8.s64 = ctx.r9.s64 + -256;
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// b 0x825b1614
	goto loc_825B1614;
loc_825B160C:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r5.u32);
loc_825B1614:
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// b 0x825b1654
	goto loc_825B1654;
loc_825B1648:
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// stw r4,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
loc_825B1654:
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b16a8
	if (!ctx.cr6.lt) goto loc_825B16A8;
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r8,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r8.u8);
	// lwz r5,224(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// srawi r4,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 7;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stwx r4,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// b 0x825b1648
	goto loc_825B1648;
loc_825B16A8:
	// b 0x825b16b8
	goto loc_825B16B8;
loc_825B16AC:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
loc_825B16B8:
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b16f8
	if (!ctx.cr6.lt) goto loc_825B16F8;
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// srawi r9,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 7;
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stwx r9,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r5,224(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r4,264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// b 0x825b16ac
	goto loc_825B16AC;
loc_825B16F8:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x825b18dc
	if (!ctx.cr6.lt) goto loc_825B18DC;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stw r10,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r4,r7,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r3,r4,-1
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// andc r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// b 0x825b1750
	goto loc_825B1750;
loc_825B1744:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
loc_825B1750:
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x825b17d8
	if (!ctx.cr6.lt) goto loc_825B17D8;
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r11,r3,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// stw r11,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// lwz r7,268(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r6,r7,128
	ctx.xer.ca = ctx.r7.u32 <= 128;
	ctx.r6.u64 = static_cast<uint64_t>(128) - ctx.r7.u64;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lbzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lwz r5,268(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// srawi r11,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 7;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r10,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// b 0x825b1744
	goto loc_825B1744;
loc_825B17D8:
	// b 0x825b17e8
	goto loc_825B17E8;
loc_825B17DC:
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
loc_825B17E8:
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r3,32(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x825b1824
	if (!ctx.cr6.lt) goto loc_825B1824;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// b 0x825b17dc
	goto loc_825B17DC;
loc_825B1824:
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// b 0x825b1850
	goto loc_825B1850;
loc_825B1844:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
loc_825B1850:
	// lwz r5,428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x825b18c4
	if (!ctx.cr6.lt) goto loc_825B18C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// b 0x825b1880
	goto loc_825B1880;
loc_825B1874:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stw r8,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
loc_825B1880:
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,32(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b18b0
	if (!ctx.cr6.lt) goto loc_825B18B0;
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x825b1874
	goto loc_825B1874;
loc_825B18B0:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// b 0x825b1844
	goto loc_825B1844;
loc_825B18C4:
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
loc_825B18DC:
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// lwz r8,368(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// beq cr6,0x825b190c
	if (ctx.cr6.eq) goto loc_825B190C;
	// lwz r7,368(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// beq cr6,0x825b1a1c
	if (ctx.cr6.eq) goto loc_825B1A1C;
	// lwz r6,368(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r6,192
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 192, ctx.xer);
	// beq cr6,0x825b1b2c
	if (ctx.cr6.eq) goto loc_825B1B2C;
	// b 0x825b1c3c
	goto loc_825B1C3C;
loc_825B190C:
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x825b1998
	if (!ctx.cr6.eq) goto loc_825B1998;
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca948
	ctx.lr = 0x825B1964;
	sub_825CA948(ctx, base);
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// b 0x825b1a18
	goto loc_825B1A18;
loc_825B1998:
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cb498
	ctx.lr = 0x825B19E0;
	sub_825CB498(ctx, base);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r5,r6,-2
	ctx.r5.s64 = ctx.r6.s64 + -2;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
loc_825B1A18:
	// b 0x825b1cf4
	goto loc_825B1CF4;
loc_825B1A1C:
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825b1aa8
	if (!ctx.cr6.eq) goto loc_825B1AA8;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca0e8
	ctx.lr = 0x825B1A74;
	sub_825CA0E8(ctx, base);
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// b 0x825b1b28
	goto loc_825B1B28;
loc_825B1AA8:
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca480
	ctx.lr = 0x825B1AF0;
	sub_825CA480(ctx, base);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
loc_825B1B28:
	// b 0x825b1cf4
	goto loc_825B1CF4;
loc_825B1B2C:
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825b1bb8
	if (!ctx.cr6.eq) goto loc_825B1BB8;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cca60
	ctx.lr = 0x825B1B84;
	sub_825CCA60(ctx, base);
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// b 0x825b1c38
	goto loc_825B1C38;
loc_825B1BB8:
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cd260
	ctx.lr = 0x825B1C00;
	sub_825CD260(ctx, base);
	// lwz r6,300(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r6,r7,r8
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
loc_825B1C38:
	// b 0x825b1cf4
	goto loc_825B1CF4;
loc_825B1C3C:
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,436(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,300(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cdad8
	ctx.lr = 0x825B1CA4;
	sub_825CDAD8(ctx, base);
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lwz r11,428(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
loc_825B1CF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lwz r8,248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r8,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// lwz r7,300(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x825b21e0
	if (!ctx.cr6.lt) goto loc_825B21E0;
	// lwz r5,300(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// b 0x825b1d3c
	goto loc_825B1D3C;
loc_825B1D30:
	// lwz r4,188(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
loc_825B1D3C:
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825b21e0
	if (!ctx.cr6.lt) goto loc_825B21E0;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// lwz r5,272(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// subfic r11,r3,256
	ctx.xer.ca = ctx.r3.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r3.u64;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r9,172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,172(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x825b20c8
	if (!ctx.cr6.lt) goto loc_825B20C8;
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r6,180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825b1ed0
	if (!ctx.cr6.eq) goto loc_825B1ED0;
	// lwz r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stw r5,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r5.u32);
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stw r4,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r4.u32);
	// lwz r3,312(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// stw r3,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// b 0x825b1df8
	goto loc_825B1DF8;
loc_825B1DEC:
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
loc_825B1DF8:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r7,216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x825b1e80
	if (!ctx.cr6.lt) goto loc_825B1E80;
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// lwz r8,268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r7,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r5,316(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,220(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x825b1dec
	goto loc_825B1DEC;
loc_825B1E80:
	// b 0x825b1e90
	goto loc_825B1E90;
loc_825B1E84:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B1E90:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,32(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x825b1ecc
	if (!ctx.cr6.lt) goto loc_825B1ECC;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,284(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r5,r7,r6
	REX_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r5.u8);
	// b 0x825b1e84
	goto loc_825B1E84;
loc_825B1ECC:
	// b 0x825b2044
	goto loc_825B2044;
loc_825B1ED0:
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,184(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x825b1ee4
	if (!ctx.cr6.eq) goto loc_825B1EE4;
	// b 0x825b2044
	goto loc_825B2044;
loc_825B1EE4:
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r10,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// b 0x825b1f0c
	goto loc_825B1F0C;
loc_825B1F00:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B1F0C:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b1fd8
	if (!ctx.cr6.lt) goto loc_825B1FD8;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,320(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,320(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r6,196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r9,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u8);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r5,320(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,320(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,220(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x825b1f00
	goto loc_825B1F00;
loc_825B1FD8:
	// b 0x825b1fe8
	goto loc_825B1FE8;
loc_825B1FDC:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B1FE8:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,32(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x825b2044
	if (!ctx.cr6.lt) goto loc_825B2044;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r7,324(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r6,232(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// lwz r3,220(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r8,r3,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// b 0x825b1fdc
	goto loc_825B1FDC;
loc_825B2044:
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r7,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// stw r6,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// b 0x825b206c
	goto loc_825B206C;
loc_825B2060:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
loc_825B206C:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825b20c4
	if (!ctx.cr6.lt) goto loc_825B20C4;
	// lwz r8,232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mullw r4,r5,r6
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// lwz r3,284(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r4,r8
	ctx.r7.u64 = ctx.r4.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r5,r4,r3
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// b 0x825b2060
	goto loc_825B2060;
loc_825B20C4:
	// b 0x825b21bc
	goto loc_825B21BC;
loc_825B20C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// b 0x825b20e0
	goto loc_825B20E0;
loc_825B20D4:
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
loc_825B20E0:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r7,216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x825b2168
	if (!ctx.cr6.lt) goto loc_825B2168;
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r3,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r9.u32);
	// lwz r8,268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r7,r8,128
	ctx.xer.ca = ctx.r8.u32 <= 128;
	ctx.r7.u64 = static_cast<uint64_t>(128) - ctx.r8.u64;
	// stw r7,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r7.u32);
	// lwz r6,196(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lbzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,328(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r11,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// b 0x825b20d4
	goto loc_825B20D4;
loc_825B2168:
	// b 0x825b2178
	goto loc_825B2178;
loc_825B216C:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B2178:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,32(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x825b21bc
	if (!ctx.cr6.lt) goto loc_825B21BC;
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r9.u32);
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r7,332(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r6,244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// b 0x825b216c
	goto loc_825B216C;
loc_825B21BC:
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// b 0x825b1d30
	goto loc_825B1D30;
loc_825B21E0:
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x825b220c
	if (ctx.cr6.eq) goto loc_825B220C;
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,84(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// b 0x825b225c
	goto loc_825B225C;
loc_825B220C:
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,36(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r5,32(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,56(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
loc_825B225C:
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r6,204(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,64(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,260(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r5,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r3,296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// lwz r9,248(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r9,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x825b2318
	if (ctx.cr6.eq) goto loc_825B2318;
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// addi r11,r3,-256
	ctx.r11.s64 = ctx.r3.s64 + -256;
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// b 0x825b2320
	goto loc_825B2320;
loc_825B2318:
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
loc_825B2320:
	// lwz r7,372(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r7,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
	// b 0x825b2374
	goto loc_825B2374;
loc_825B2368:
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
loc_825B2374:
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825b23c8
	if (!ctx.cr6.lt) goto loc_825B23C8;
	// lwz r8,224(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// clrlwi r7,r8,25
	ctx.r7.u64 = ctx.r8.u32 & 0x7F;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r6,r5,r4
	REX_STORE_U8(ctx.r5.u32 + ctx.r4.u32, ctx.r6.u8);
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// srawi r11,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 7;
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stwx r11,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r5,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// b 0x825b2368
	goto loc_825B2368;
loc_825B23C8:
	// b 0x825b23d8
	goto loc_825B23D8;
loc_825B23CC:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
loc_825B23D8:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825b2414
	if (!ctx.cr6.lt) goto loc_825B2414;
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// srawi r8,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 7;
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stwx r8,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r8.u32);
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r3,264(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// b 0x825b23cc
	goto loc_825B23CC;
loc_825B2414:
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x825b2618
	if (!ctx.cr6.lt) goto loc_825B2618;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stw r9,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// andc r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// b 0x825b246c
	goto loc_825B246C;
loc_825B2460:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B246C:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b24f4
	if (!ctx.cr6.lt) goto loc_825B24F4;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r9,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u8);
	// b 0x825b2460
	goto loc_825B2460;
loc_825B24F4:
	// b 0x825b2504
	goto loc_825B2504;
loc_825B24F8:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
loc_825B2504:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r3,296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x825b253c
	if (!ctx.cr6.lt) goto loc_825B253C;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// b 0x825b24f8
	goto loc_825B24F8;
loc_825B253C:
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// b 0x825b257c
	goto loc_825B257C;
loc_825B2570:
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
loc_825B257C:
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b2600
	if (!ctx.cr6.lt) goto loc_825B2600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// b 0x825b25c0
	goto loc_825B25C0;
loc_825B25B4:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B25C0:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b25ec
	if (!ctx.cr6.lt) goto loc_825B25EC;
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x825b25b4
	goto loc_825B25B4;
loc_825B25EC:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// b 0x825b2570
	goto loc_825B2570;
loc_825B2600:
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
loc_825B2618:
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// lwz r8,376(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// beq cr6,0x825b2648
	if (ctx.cr6.eq) goto loc_825B2648;
	// lwz r7,376(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// beq cr6,0x825b2788
	if (ctx.cr6.eq) goto loc_825B2788;
	// lwz r6,376(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// cmpwi cr6,r6,192
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 192, ctx.xer);
	// beq cr6,0x825b28c8
	if (ctx.cr6.eq) goto loc_825B28C8;
	// b 0x825b2a08
	goto loc_825B2A08;
loc_825B2648:
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x825b26ec
	if (!ctx.cr6.eq) goto loc_825B26EC;
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca948
	ctx.lr = 0x825B26B8;
	sub_825CA948(ctx, base);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,256(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// b 0x825b2784
	goto loc_825B2784;
loc_825B26EC:
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,436(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cb498
	ctx.lr = 0x825B274C;
	sub_825CB498(ctx, base);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r5,-2
	ctx.r4.s64 = ctx.r5.s64 + -2;
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
loc_825B2784:
	// b 0x825b2ad8
	goto loc_825B2AD8;
loc_825B2788:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825b282c
	if (!ctx.cr6.eq) goto loc_825B282C;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,436(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca0e8
	ctx.lr = 0x825B27F8;
	sub_825CA0E8(ctx, base);
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// b 0x825b28c4
	goto loc_825B28C4;
loc_825B282C:
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca480
	ctx.lr = 0x825B288C;
	sub_825CA480(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
loc_825B28C4:
	// b 0x825b2ad8
	goto loc_825B2AD8;
loc_825B28C8:
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x825b296c
	if (!ctx.cr6.eq) goto loc_825B296C;
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cca60
	ctx.lr = 0x825B2938;
	sub_825CCA60(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// b 0x825b2a04
	goto loc_825B2A04;
loc_825B296C:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cd260
	ctx.lr = 0x825B29CC;
	sub_825CD260(ctx, base);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
loc_825B2A04:
	// b 0x825b2ad8
	goto loc_825B2AD8;
loc_825B2A08:
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,264(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cdad8
	ctx.lr = 0x825B2A88;
	sub_825CDAD8(ctx, base);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_825B2AD8:
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825b2c58
	if (!ctx.cr6.lt) goto loc_825B2C58;
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// b 0x825b2b18
	goto loc_825B2B18;
loc_825B2B0C:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
loc_825B2B18:
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x825b2c58
	if (!ctx.cr6.lt) goto loc_825B2C58;
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// b 0x825b2b64
	goto loc_825B2B64;
loc_825B2B58:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
loc_825B2B64:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825b2bec
	if (!ctx.cr6.lt) goto loc_825B2BEC;
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r6.u32);
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stw r3,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r10,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r10.u64 = static_cast<uint64_t>(128) - ctx.r11.u64;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,344(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r5,r4,r3
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// b 0x825b2b58
	goto loc_825B2B58;
loc_825B2BEC:
	// b 0x825b2bfc
	goto loc_825B2BFC;
loc_825B2BF0:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
loc_825B2BFC:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x825b2c34
	if (!ctx.cr6.lt) goto loc_825B2C34;
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwzx r3,r5,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x825b2bf0
	goto loc_825B2BF0;
loc_825B2C34:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// b 0x825b2b0c
	goto loc_825B2B0C;
loc_825B2C58:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825b2c84
	if (ctx.cr6.eq) goto loc_825B2C84;
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,88(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// stw r8,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,100(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// stw r6,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// b 0x825b2cf0
	goto loc_825B2CF0;
loc_825B2C84:
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,56(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,276(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// lwz r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// stw r8,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
loc_825B2CF0:
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,32(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,64(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r3,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,204(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,272(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r5,240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,260(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lwz r7,252(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stw r7,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// lwz r6,252(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// lwz r3,192(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825b2de4
	if (ctx.cr6.eq) goto loc_825B2DE4;
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// addi r4,r5,-256
	ctx.r4.s64 = ctx.r5.s64 + -256;
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// b 0x825b2dec
	goto loc_825B2DEC;
loc_825B2DE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
loc_825B2DEC:
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x825b3018
	if (!ctx.cr6.lt) goto loc_825B3018;
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stw r9,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r9.u32);
	// lwz r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// andc r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stw r4,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// b 0x825b2e6c
	goto loc_825B2E6C;
loc_825B2E60:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B2E6C:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b2ef4
	if (!ctx.cr6.lt) goto loc_825B2EF4;
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r7.u32);
	// lwz r6,268(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// stw r5,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,352(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lbzx r11,r4,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r8,352(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r6,152(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r3,r4,r5
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r9,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u8);
	// b 0x825b2e60
	goto loc_825B2E60;
loc_825B2EF4:
	// b 0x825b2f04
	goto loc_825B2F04;
loc_825B2EF8:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
loc_825B2F04:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r3,296(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x825b2f3c
	if (!ctx.cr6.lt) goto loc_825B2F3C;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r6,244(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,292(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stbx r4,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u8);
	// b 0x825b2ef8
	goto loc_825B2EF8;
loc_825B2F3C:
	// lwz r3,244(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// b 0x825b2f7c
	goto loc_825B2F7C;
loc_825B2F70:
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
loc_825B2F7C:
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r8,428(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r7,44(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// divw r4,r6,r5
	ctx.r4.u64 = uint32_t((ctx.r5.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r6.s32 / ctx.r5.s32 : 0);
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r10,188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b3000
	if (!ctx.cr6.lt) goto loc_825B3000;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// b 0x825b2fc0
	goto loc_825B2FC0;
loc_825B2FB4:
	// lwz r8,292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
loc_825B2FC0:
	// lwz r6,292(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x825b2fec
	if (!ctx.cr6.lt) goto loc_825B2FEC;
	// lwz r4,348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x825b2fb4
	goto loc_825B2FB4;
loc_825B2FEC:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// b 0x825b2f70
	goto loc_825B2F70;
loc_825B3000:
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
loc_825B3018:
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// lwz r8,384(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r8,64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 64, ctx.xer);
	// beq cr6,0x825b3048
	if (ctx.cr6.eq) goto loc_825B3048;
	// lwz r7,384(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// beq cr6,0x825b3188
	if (ctx.cr6.eq) goto loc_825B3188;
	// lwz r6,384(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r6,192
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 192, ctx.xer);
	// beq cr6,0x825b32c8
	if (ctx.cr6.eq) goto loc_825B32C8;
	// b 0x825b3408
	goto loc_825B3408;
loc_825B3048:
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x825b30ec
	if (!ctx.cr6.eq) goto loc_825B30EC;
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,436(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,44(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca948
	ctx.lr = 0x825B30B8;
	sub_825CA948(ctx, base);
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r3,256(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// b 0x825b3184
	goto loc_825B3184;
loc_825B30EC:
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r7,436(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r3,428(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cb498
	ctx.lr = 0x825B314C;
	sub_825CB498(ctx, base);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r5,-2
	ctx.r4.s64 = ctx.r5.s64 + -2;
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// lwz r6,288(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
loc_825B3184:
	// b 0x825b34d8
	goto loc_825B34D8;
loc_825B3188:
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825b322c
	if (!ctx.cr6.eq) goto loc_825B322C;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,436(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r5,420(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,428(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r3,44(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// mullw r11,r4,r3
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// li r10,2
	ctx.r10.s64 = 2;
	// divw r9,r11,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// lwz r8,160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca0e8
	ctx.lr = 0x825B31F8;
	sub_825CA0E8(ctx, base);
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r10,288(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r9,256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// b 0x825b32c4
	goto loc_825B32C4;
loc_825B322C:
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwz r4,436(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r9,428(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r6,2
	ctx.r6.s64 = 2;
	// divw r5,r7,r6
	ctx.r5.u64 = uint32_t((ctx.r6.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r7.s32 / ctx.r6.s32 : 0);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825ca480
	ctx.lr = 0x825B328C;
	sub_825CA480(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
loc_825B32C4:
	// b 0x825b34d8
	goto loc_825B34D8;
loc_825B32C8:
	// lwz r8,420(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x825b336c
	if (!ctx.cr6.eq) goto loc_825B336C;
	// lwz r6,236(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// lwz r5,436(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r4,2
	ctx.r4.s64 = 2;
	// divw r3,r5,r4
	ctx.r3.u64 = uint32_t((ctx.r4.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r5.s32 / ctx.r4.s32 : 0);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r10,428(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// li r7,2
	ctx.r7.s64 = 2;
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cca60
	ctx.lr = 0x825B3338;
	sub_825CCA60(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mullw r5,r7,r6
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// b 0x825b3404
	goto loc_825B3404;
loc_825B336C:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r9,2
	ctx.r9.s64 = 2;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,428(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// li r3,2
	ctx.r3.s64 = 2;
	// divw r11,r4,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cd260
	ctx.lr = 0x825B33CC;
	sub_825CD260(ctx, base);
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
loc_825B3404:
	// b 0x825b34d8
	goto loc_825B34D8;
loc_825B3408:
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r3,264(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// li r8,2
	ctx.r8.s64 = 2;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r6,420(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,428(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,44(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 44);
	// mullw r3,r5,r4
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// li r11,2
	ctx.r11.s64 = 2;
	// divw r10,r3,r11
	ctx.r10.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r10,256(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r8,288(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,152(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825cdad8
	ctx.lr = 0x825B3488;
	sub_825CDAD8(ctx, base);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r11,288(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,244(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// lwz r7,428(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// subf r3,r5,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_825B34D8:
	// lwz r7,420(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,44(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r3,420(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x825b3658
	if (!ctx.cr6.lt) goto loc_825B3658;
	// lwz r8,256(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// stw r8,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// b 0x825b3518
	goto loc_825B3518;
loc_825B350C:
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
loc_825B3518:
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x825b3658
	if (!ctx.cr6.lt) goto loc_825B3658;
	// lwz r3,236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// lwz r10,260(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// b 0x825b3564
	goto loc_825B3564;
loc_825B3558:
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// stw r3,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
loc_825B3564:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825b35ec
	if (!ctx.cr6.lt) goto loc_825B35EC;
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r6,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,292(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r3,r5,r4
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// stw r3,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// subfic r10,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r10.u64 = static_cast<uint64_t>(128) - ctx.r11.u64;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lbzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r4,356(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lwz r9,268(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// srawi r6,r7,7
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 7;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,292(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stbx r5,r4,r3
	REX_STORE_U8(ctx.r4.u32 + ctx.r3.u32, ctx.r5.u8);
	// b 0x825b3558
	goto loc_825B3558;
loc_825B35EC:
	// b 0x825b35fc
	goto loc_825B35FC;
loc_825B35F0:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
loc_825B35FC:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x825b3634
	if (!ctx.cr6.lt) goto loc_825B3634;
	// lwz r7,292(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwzx r3,r5,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lbzx r9,r4,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x825b35f0
	goto loc_825B35F0;
loc_825B3634:
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// lwz r5,236(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// add r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// b 0x825b350c
	goto loc_825B350C;
loc_825B3658:
	// lwz r3,148(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82558b88
	ctx.lr = 0x825B3660;
	sub_82558B88(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82558b88
	ctx.lr = 0x825B3668;
	sub_82558B88(ctx, base);
loc_825B3668:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82657288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82657290;
	__savegprlr_28(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,15952
	ctx.r30.s64 = ctx.r31.s64 + 15952;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82654e78
	ctx.lr = 0x826572A4;
	sub_82654E78(ctx, base);
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r28,r31,22640
	ctx.r28.s64 = ctx.r31.s64 + 22640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-26776(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -26776);
	// bl 0x8265a6c0
	ctx.lr = 0x826572B8;
	sub_8265A6C0(ctx, base);
	// lhz r10,16004(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 16004);
	// addi r29,r31,17360
	ctx.r29.s64 = ctx.r31.s64 + 17360;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82654fe8
	ctx.lr = 0x826572DC;
	sub_82654FE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8265738c
	if (!ctx.cr6.eq) goto loc_8265738C;
	// lhz r11,16004(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 16004);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82654600
	ctx.lr = 0x82657304;
	sub_82654600(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8265738c
	if (!ctx.cr6.eq) goto loc_8265738C;
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82657374
	if (ctx.cr6.eq) goto loc_82657374;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,17320(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17320);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r7,3752(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3752);
	// mullw r11,r9,r3
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// lwz r6,3748(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r30,3744(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 3744);
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// mullw r3,r29,r3
	ctx.r3.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r3.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r3,r30
	ctx.r10.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256ebf8
	ctx.lr = 0x82657374;
	sub_8256EBF8(ctx, base);
loc_82657374:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8265aa08
	ctx.lr = 0x82657380;
	sub_8265AA08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,15596(r31)
	REX_STORE_U32(ctx.r31.u32 + 15596, ctx.r11.u32);
loc_8265738C:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265BE58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x8265BE60;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// rlwinm r10,r5,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lhz r11,50(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 50);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// lwz r9,348(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 348);
	// or r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 | ctx.r4.u64;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// lwz r30,292(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 292);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r31,r7,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r6,284(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 284);
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r31.u64;
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r3,r11,1,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// subf r10,r3,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r3.u64;
	// srawi r27,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 16;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// subf r7,r11,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r11.u64;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addis r3,r8,115
	ctx.r3.s64 = ctx.r8.s64 + 7536640;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r3,115
	ctx.r3.s64 = ctx.r3.s64 + 115;
	// srawi r23,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 1;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// or r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// srawi r22,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r8.s32 >> 1;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8265bf30
	if (ctx.cr6.eq) goto loc_8265BF30;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8265bcb8
	ctx.lr = 0x8265BF28;
	sub_8265BCB8(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8265BF30:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 1;
	// rlwimi r11,r22,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r11,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r6,r7,59
	ctx.r6.s64 = ctx.r7.s64 + 3866624;
	// addi r6,r6,59
	ctx.r6.s64 = ctx.r6.s64 + 59;
	// or r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265bf84
	if (ctx.cr6.eq) goto loc_8265BF84;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8265bd88
	ctx.lr = 0x8265BF7C;
	sub_8265BD88(ctx, base);
	// lwz r23,104(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,108(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8265BF84:
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// lhz r31,74(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 74);
	// srawi r11,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 2;
	// srawi r8,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r28.s32 >> 2;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// lwz r11,-19520(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -19520);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// li r26,0
	ctx.r26.s64 = 0;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r30,r10,r25
	ctx.r30.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r3,r4,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265c030
	if (!ctx.cr0.eq) goto loc_8265C030;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// dcbt r10,r30
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r30
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r30
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r30
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r30
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r31,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r31.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r30
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8265C030:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// dcbt r8,r30
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// dcbt r7,r30
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// mulli r10,r31,11
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(11));
	// addi r4,r10,64
	ctx.r4.s64 = ctx.r10.s64 + 64;
	// dcbt r4,r30
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// dcbt r10,r30
	// mulli r10,r31,13
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(13));
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// dcbt r8,r30
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r31,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// dcbt r5,r30
	// rlwinm r4,r31,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r31.u64;
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// dcbt r3,r30
	// clrlwi r27,r27,30
	ctx.r27.u64 = ctx.r27.u32 & 0x3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r10,r28,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,-19520(r9)
	REX_STORE_U32(ctx.r9.u32 + -19520, ctx.r11.u32);
	// clrlwi r28,r28,30
	ctx.r28.u64 = ctx.r28.u32 & 0x3;
	// addi r11,r10,241
	ctx.r11.s64 = ctx.r10.s64 + 241;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzx r11,r5,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265c130
	if (ctx.cr6.eq) goto loc_8265C130;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825bf9c0
	ctx.lr = 0x8265C130;
	sub_825BF9C0(ctx, base);
loc_8265C130:
	// lis r27,-32146
	ctx.r27.s64 = -2106720256;
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// srawi r11,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r22.s32 >> 2;
	// srawi r9,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 2;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lwz r11,-19516(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -19516);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + ctx.r21.u64;
	// addze r5,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r5.s64 = temp.s64;
	// add r31,r10,r20
	ctx.r31.u64 = ctx.r10.u64 + ctx.r20.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265c1dc
	if (!ctx.cr0.eq) goto loc_8265C1DC;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r3
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r3
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r3
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r3
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r3
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r3
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8265C1DC:
	// clrlwi r30,r22,30
	ctx.r30.u64 = ctx.r22.u32 & 0x3;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r10,r23,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,-19516(r27)
	REX_STORE_U32(ctx.r27.u32 + -19516, ctx.r11.u32);
	// clrlwi r28,r23,30
	ctx.r28.u64 = ctx.r23.u32 & 0x3;
	// addi r11,r10,257
	ctx.r11.s64 = ctx.r10.s64 + 257;
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwzx r11,r4,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-19516(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -19516);
	// lhz r6,76(r29)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r29.u32 + 76);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r5,r7,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8265c2b4
	if (!ctx.cr0.eq) goto loc_8265C2B4;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// addi r10,r6,128
	ctx.r10.s64 = ctx.r6.s64 + 128;
	// dcbt r10,r31
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r31
	// addi r5,r6,32
	ctx.r5.s64 = ctx.r6.s64 + 32;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r4,r31
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r31
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r31
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r6,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r31
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8265C2B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,-19516(r27)
	REX_STORE_U32(ctx.r27.u32 + -19516, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r10,257
	ctx.r11.s64 = ctx.r10.s64 + 257;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lbz r9,35(r29)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + 35);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265C2F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
}

