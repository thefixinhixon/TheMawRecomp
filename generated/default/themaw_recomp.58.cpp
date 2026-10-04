#include "themaw_funcs.58.h"

DEFINE_REX_FUNC(sub_820D3090) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x825d7414
	ctx.lr = 0x820D30A4;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f30,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f29,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f28,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x825cf590
	ctx.lr = 0x820D30C0;
	sub_825CF590(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825cf670
	ctx.lr = 0x820D30CC;
	sub_825CF670(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f11,f29,f30
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// fmuls f9,f28,f29
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// addi r10,r11,9868
	ctx.r10.s64 = ctx.r11.s64 + 9868;
	// fmuls f10,f28,f30
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fmuls f8,f30,f30
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f0,9868(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f29,f29
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f6,f28,f28
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f4,f27,f29
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f29.f64));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f3,f27,f30
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmuls f5,f27,f28
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fmuls f2,f11,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmuls f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f13,-1376(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -1376);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fsubs f31,f13,f8
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f30,f13,f7
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f29,f11,f2
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fsubs f28,f10,f1
	ctx.f28.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f2,f9,f0
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmadds f10,f31,f12,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f9,f30,f12,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f30.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f8,f13,f12,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f8,40(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fadds f7,f29,f5
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f5.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f6,f28,f4
	ctx.f6.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x825d7460
	ctx.lr = 0x820D31A4;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DFDA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dfe08
	if (ctx.cr6.eq) goto loc_820DFE08;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x820dfe08
	if (ctx.cr6.eq) goto loc_820DFE08;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820DFE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820DFE08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E2240) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,9868
	ctx.r11.s64 = ctx.r11.s64 + 9868;
	// lfs f0,-1376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x820e227c
	if (ctx.cr6.gt) goto loc_820E227C;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// addi r7,r11,9392
	ctx.r7.s64 = ctx.r11.s64 + 9392;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f13,r7,r6
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f3,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f3.f64 : ctx.f0.f64;
loc_820E227C:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fsubs f10,f2,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,-1160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9592);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f9,f0,f13,f12
	ctx.f9.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f1,f8,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f1.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x820E7C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7d6c
	if (ctx.cr6.eq) goto loc_820E7D6C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e7d6c
	if (ctx.cr6.eq) goto loc_820E7D6C;
	// bl 0x820e7f58
	ctx.lr = 0x820E7C54;
	sub_820E7F58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7c68
	if (ctx.cr6.eq) goto loc_820E7C68;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_820E7C68:
	// lwz r30,24(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821d6430
	ctx.lr = 0x820E7C7C;
	sub_821D6430(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u64 = uint32_t(ctx.r31.u32 ? ctx.r3.u32 / ctx.r31.u32 : 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// subf r30,r9,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r9.u64;
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e7ce0
	if (ctx.cr6.eq) goto loc_820E7CE0;
loc_820E7CA0:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820e7d6c
	if (!ctx.cr6.lt) goto loc_820E7D6C;
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// divw r8,r9,r31
	ctx.r8.u64 = uint32_t((ctx.r31.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r31.s32 == -1)) ? ctx.r9.s32 / ctx.r31.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r7,r8,r31
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// subf r30,r7,r9
	ctx.r30.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r30,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 & ~ctx.r6.u64;
	// twllei r31,0
	if (ctx.r31.s32 == 0 || ctx.r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwzx r3,r5,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7ca0
	if (!ctx.cr6.eq) goto loc_820E7CA0;
loc_820E7CE0:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x820e7d6c
	if (!ctx.cr6.lt) goto loc_820E7D6C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820E7CEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e7cec
	if (!ctx.cr6.eq) goto loc_820E7CEC;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x825d0430
	ctx.lr = 0x820E7D14;
	sub_825D0430(ctx, base);
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r3,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r7,24(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
loc_820E7D34:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne cr6,0x820e7d34
	if (!ctx.cr6.eq) goto loc_820E7D34;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r26,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// lwz r6,28(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// stwx r8,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u32);
loc_820E7D6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F2918) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f29a4
	if (ctx.cr6.eq) goto loc_820F29A4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820f2984
	if (ctx.cr6.lt) goto loc_820F2984;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2984
	if (ctx.cr6.eq) goto loc_820F2984;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x820f2974
	if (!ctx.cr6.lt) goto loc_820F2974;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820F2974:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x825d6e10
	ctx.lr = 0x820F2980;
	sub_825D6E10(ctx, base);
	// b 0x820f298c
	goto loc_820F298C;
loc_820F2984:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f2740
	ctx.lr = 0x820F298C;
	sub_820F2740(ctx, base);
loc_820F298C:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820F29A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F7DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x820F7DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r7,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r9,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r5,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x820f7e08
	if (ctx.cr6.eq) goto loc_820F7E08;
	// li r11,6
	ctx.r11.s64 = 6;
loc_820F7E08:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// beq cr6,0x820f7e34
	if (ctx.cr6.eq) goto loc_820F7E34;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x825d0430
	ctx.lr = 0x820F7E24;
	sub_825D0430(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x825d6e10
	ctx.lr = 0x820F7E34;
	sub_825D6E10(ctx, base);
loc_820F7E34:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// bl 0x82279640
	ctx.lr = 0x820F7E4C;
	sub_82279640(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7e80
	if (ctx.cr6.eq) goto loc_820F7E80;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822796f0
	ctx.lr = 0x820F7E6C;
	sub_822796F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x825d6e10
	ctx.lr = 0x820F7E78;
	sub_825D6E10(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82279738
	ctx.lr = 0x820F7E80;
	sub_82279738(ctx, base);
loc_820F7E80:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lwz r11,9108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// lwz r8,488(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r10,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// lwz r7,64(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820f7f10
	if (!ctx.cr6.eq) goto loc_820F7F10;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f0c
	if (ctx.cr6.eq) goto loc_820F7F0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7ee4
	if (ctx.cr6.eq) goto loc_820F7EE4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820f7ee4
	if (ctx.cr6.eq) goto loc_820F7EE4;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x820f7f10
	goto loc_820F7F10;
loc_820F7EE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f0c
	if (ctx.cr6.eq) goto loc_820F7F0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7f0c
	if (ctx.cr6.eq) goto loc_820F7F0C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// li r11,9
	ctx.r11.s64 = 9;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820f7f10
	if (!ctx.cr6.eq) goto loc_820F7F10;
loc_820F7F0C:
	// li r11,4
	ctx.r11.s64 = 4;
loc_820F7F10:
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f38
	if (ctx.cr6.eq) goto loc_820F7F38;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7f38
	if (ctx.cr6.eq) goto loc_820F7F38;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// b 0x820f7f3c
	goto loc_820F7F3C;
loc_820F7F38:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820F7F3C:
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f7f68
	if (ctx.cr6.eq) goto loc_820F7F68;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f7f68
	if (ctx.cr6.eq) goto loc_820F7F68;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_820F7F68:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,9868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FFE40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r3,9108(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82100728) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82100758
	if (ctx.cr6.lt) goto loc_82100758;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82100758
	if (!ctx.cr6.lt) goto loc_82100758;
	// mulli r11,r4,78
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(78));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82100758:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82102320) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fdivs f2,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// addi r3,r11,400
	ctx.r3.s64 = ctx.r11.s64 + 400;
	// lfs f4,396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,388(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 388, temp.u32);
	// b 0x820d31b8
	sub_820D31B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821046B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c4
	ctx.lr = 0x821046B8;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,32(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82104cd0
	if (!ctx.cr6.gt) goto loc_82104CD0;
	// stw r4,136(r30)
	REX_STORE_U32(ctx.r30.u32 + 136, ctx.r4.u32);
	// addi r15,r30,96
	ctx.r15.s64 = ctx.r30.s64 + 96;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x820e7a00
	ctx.lr = 0x821046E4;
	sub_820E7A00(ctx, base);
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// lwz r28,136(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82104710
	if (ctx.cr6.gt) goto loc_82104710;
	// mulli r11,r28,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(28));
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82104714
	if (!ctx.cr6.gt) goto loc_82104714;
loc_82104710:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82104714:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x8210471C;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x82104770
	if (ctx.cr6.eq) goto loc_82104770;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addic. r10,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r10.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// blt 0x82104768
	if (ctx.cr0.lt) goto loc_82104768;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82104740:
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x82104740
	if (!ctx.cr0.lt) goto loc_82104740;
loc_82104768:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82104774
	goto loc_82104774;
loc_82104770:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82104774:
	// lis r9,1489
	ctx.r9.s64 = 97583104;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,128(r30)
	REX_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// ori r8,r9,29789
	ctx.r8.u64 = ctx.r9.u64 | 29789;
	// mulli r3,r11,44
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82104794
	if (!ctx.cr6.gt) goto loc_82104794;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82104794:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x8210479C;
	sub_825D0430(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// stw r3,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r3.u32);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82104cd0
	if (!ctx.cr6.gt) goto loc_82104CD0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lis r17,-32142
	ctx.r17.s64 = -2106458112;
	// addi r22,r11,-31724
	ctx.r22.s64 = ctx.r11.s64 + -31724;
	// addi r21,r10,-31744
	ctx.r21.s64 = ctx.r10.s64 + -31744;
	// addi r20,r9,-31768
	ctx.r20.s64 = ctx.r9.s64 + -31768;
	// addi r18,r8,-31784
	ctx.r18.s64 = ctx.r8.s64 + -31784;
	// addi r23,r7,-31796
	ctx.r23.s64 = ctx.r7.s64 + -31796;
	// addi r19,r6,-31824
	ctx.r19.s64 = ctx.r6.s64 + -31824;
	// addi r27,r5,-31840
	ctx.r27.s64 = ctx.r5.s64 + -31840;
	// addi r26,r4,-31856
	ctx.r26.s64 = ctx.r4.s64 + -31856;
	// addi r25,r3,-31872
	ctx.r25.s64 = ctx.r3.s64 + -31872;
loc_82104800:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82104b40
	if (ctx.cr6.eq) goto loc_82104B40;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82104b40
	if (ctx.cr6.eq) goto loc_82104B40;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d6510
	ctx.lr = 0x82104828;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104848;
	sub_825CF470(ctx, base);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,76(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820ea208
	ctx.lr = 0x82104860;
	sub_820EA208(ctx, base);
	// bl 0x821d6510
	ctx.lr = 0x82104864;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,36(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104888;
	sub_825CF470(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820ea208
	ctx.lr = 0x821048A0;
	sub_820EA208(ctx, base);
	// bl 0x821d6510
	ctx.lr = 0x821048A4;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x821048C8;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r28,12(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x820ea118
	ctx.lr = 0x821048EC;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821048f8
	if (ctx.cr6.eq) goto loc_821048F8;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821048F8:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x8210491C;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r28,16(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// bl 0x820ea118
	ctx.lr = 0x82104940;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82104950
	if (ctx.cr6.eq) goto loc_82104950;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82104954
	goto loc_82104954;
loc_82104950:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82104954:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r7,36(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104990;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820ea198
	ctx.lr = 0x821049B4;
	sub_820EA198(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821049c4
	if (ctx.cr6.eq) goto loc_821049C4;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821049c8
	goto loc_821049C8;
loc_821049C4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821049C8:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x821049EC;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r28,28(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x820ea118
	ctx.lr = 0x82104A10;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82104a20
	if (ctx.cr6.eq) goto loc_82104A20;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82104a24
	goto loc_82104A24;
loc_82104A20:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82104A24:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104A48;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r28,32(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x820ea118
	ctx.lr = 0x82104A6C;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82104a7c
	if (ctx.cr6.eq) goto loc_82104A7C;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82104a80
	goto loc_82104A80;
loc_82104A7C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82104A80:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104AA4;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r28,36(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// bl 0x820ea118
	ctx.lr = 0x82104AC8;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82104ad8
	if (ctx.cr6.eq) goto loc_82104AD8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82104adc
	goto loc_82104ADC;
loc_82104AD8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82104ADC:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x825cf470
	ctx.lr = 0x82104B00;
	sub_825CF470(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// lwz r28,40(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// bl 0x820ea118
	ctx.lr = 0x82104B24;
	sub_820EA118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82104b30
	if (ctx.cr6.eq) goto loc_82104B30;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82104B30:
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// b 0x82104c48
	goto loc_82104C48;
loc_82104B40:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821d6510
	ctx.lr = 0x82104B48;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821d6510
	ctx.lr = 0x82104B60;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x821d6510
	ctx.lr = 0x82104B7C;
	sub_821D6510(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// stw r7,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r7.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,32(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,36(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// stw r5,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r5.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82104C48:
	// lwz r3,9108(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + 9108);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,132(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82104C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82104cb8
	if (ctx.cr6.eq) goto loc_82104CB8;
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x820f5cc8
	ctx.lr = 0x82104C94;
	sub_820F5CC8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82104CB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82104CB8:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r24,r24,28
	ctx.r24.s64 = ctx.r24.s64 + 28;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82104800
	if (ctx.cr6.lt) goto loc_82104800;
loc_82104CD0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x825d6114
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821395D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821395D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// li r4,1
	ctx.r4.s64 = 1;
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
	ctx.lr = 0x82139614;
	sub_82172518(ctx, base);
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-16832
	ctx.r8.s64 = ctx.r9.s64 + -16832;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82172600
	ctx.lr = 0x8213962C;
	sub_82172600(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,880
	ctx.r4.s64 = ctx.r6.s64 + 880;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82171eb0
	ctx.lr = 0x82139648;
	sub_82171EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d3f98
	ctx.lr = 0x82139654;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139684
	if (ctx.cr6.eq) goto loc_82139684;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82139680
	if (ctx.cr6.eq) goto loc_82139680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82139680:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82139684:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r11,296
	ctx.r10.s64 = ctx.r11.s64 + 296;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bne cr6,0x821396b4
	if (!ctx.cr6.eq) goto loc_821396B4;
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
	// b 0x821396dc
	goto loc_821396DC;
loc_821396B4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821396B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821396b8
	if (!ctx.cr6.eq) goto loc_821396B8;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x821396DC;
	sub_821ED6F0(ctx, base);
loc_821396DC:
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
	ctx.lr = 0x821396F4;
	sub_821F6D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82139784
	if (!ctx.cr6.eq) goto loc_82139784;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82139784
	if (ctx.cr6.eq) goto loc_82139784;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x82139728;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82139784
	if (ctx.cr6.eq) goto loc_82139784;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x8213973C;
	sub_821ED688(ctx, base);
	// cmplwi cr6,r3,4919
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4919, ctx.xer);
	// bne cr6,0x82139778
	if (!ctx.cr6.eq) goto loc_82139778;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x82139754;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82139778
	if (ctx.cr6.eq) goto loc_82139778;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82139768;
	sub_821ED688(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82139778:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82139784:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x821398dc
	if (!ctx.cr6.eq) goto loc_821398DC;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821397b8
	if (!ctx.cr6.eq) goto loc_821397B8;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821397e0
	goto loc_821397E0;
loc_821397B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_821397BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821397bc
	if (!ctx.cr6.eq) goto loc_821397BC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x821397E0;
	sub_821ED6F0(ctx, base);
loc_821397E0:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee350
	ctx.lr = 0x821397EC;
	sub_821EE350(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213980c
	if (ctx.cr6.eq) goto loc_8213980C;
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
loc_8213980C:
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
	ctx.lr = 0x82139838;
	sub_821E4310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206798
	ctx.lr = 0x82139840;
	sub_82206798(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x821f2d18
	ctx.lr = 0x82139850;
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
	ctx.lr = 0x82139880;
	sub_821EDCD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,4919
	ctx.r8.s64 = 4919;
	// li r7,2
	ctx.r7.s64 = 2;
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r4,r6,30464
	ctx.r4.s64 = ctx.r6.s64 + 30464;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x821ed7d8
	ctx.lr = 0x821398B4;
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
	ctx.lr = 0x821398D0;
	sub_821F6ED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_821398DC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82207528
	ctx.lr = 0x821398E8;
	sub_82207528(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213dc80
	ctx.lr = 0x821398F0;
	sub_8213DC80(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82148750) {
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
	// addi r9,r11,11216
	ctx.r9.s64 = ctx.r11.s64 + 11216;
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
	// addi r4,r8,12984
	ctx.r4.s64 = ctx.r8.s64 + 12984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171eb0
	ctx.lr = 0x8214879C;
	sub_82171EB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d3f98
	ctx.lr = 0x821487A8;
	sub_821D3F98(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821487d8
	if (ctx.cr6.eq) goto loc_821487D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821487d4
	if (ctx.cr6.eq) goto loc_821487D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821487D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821487D4:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_821487D8:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82201e48
	ctx.lr = 0x821487EC;
	sub_82201E48(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82148818
	if (ctx.cr6.eq) goto loc_82148818;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82148818
	if (ctx.cr6.eq) goto loc_82148818;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148818:
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

DEFINE_REX_FUNC(sub_8214AE90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x8214AE98;
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
	ctx.lr = 0x8214AEDC;
	sub_82172518(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r31,r11,21452
	ctx.r31.s64 = ctx.r11.s64 + 21452;
	// lwz r11,21668(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21668);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8214af20
	if (!ctx.cr6.eq) goto loc_8214AF20;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-8032
	ctx.r9.s64 = ctx.r9.s64 + -8032;
	// addi r8,r8,-7968
	ctx.r8.s64 = ctx.r8.s64 + -7968;
	// stw r11,21668(r10)
	REX_STORE_U32(ctx.r10.u32 + 21668, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8214AF20:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8214AF2C;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214af48
	if (!ctx.cr6.eq) goto loc_8214AF48;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x8214af4c
	goto loc_8214AF4C;
loc_8214AF48:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8214AF4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214af60
	if (!ctx.cr6.eq) goto loc_8214AF60;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8214AF60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x8214AF6C;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214af9c
	if (ctx.cr6.eq) goto loc_8214AF9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214af98
	if (ctx.cr6.eq) goto loc_8214AF98;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214AF98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214AF98:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8214AF9C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,17572
	ctx.r31.s64 = ctx.r11.s64 + 17572;
	// lwz r11,18232(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18232);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8214afdc
	if (!ctx.cr6.eq) goto loc_8214AFDC;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-7808
	ctx.r9.s64 = ctx.r9.s64 + -7808;
	// addi r8,r8,-7784
	ctx.r8.s64 = ctx.r8.s64 + -7784;
	// stw r11,18232(r10)
	REX_STORE_U32(ctx.r10.u32 + 18232, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8214AFDC:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8214AFE8;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214b004
	if (!ctx.cr6.eq) goto loc_8214B004;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x8214b008
	goto loc_8214B008;
loc_8214B004:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8214B008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214b01c
	if (!ctx.cr6.eq) goto loc_8214B01C;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_8214B01C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x8214B028;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b058
	if (ctx.cr6.eq) goto loc_8214B058;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214b054
	if (ctx.cr6.eq) goto loc_8214B054;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214B054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214B054:
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_8214B058:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28104
	ctx.r4.s64 = ctx.r11.s64 + -28104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82201f08
	ctx.lr = 0x8214B06C;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8214B074;
	sub_821D4310(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82156E18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82156E20;
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
	// li r4,2
	ctx.r4.s64 = 2;
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
	ctx.lr = 0x82156E64;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-17252
	ctx.r9.s64 = ctx.r10.s64 + -17252;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x82156E7C;
	sub_82172600(ctx, base);
	// lis r8,-32148
	ctx.r8.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,-17264
	ctx.r7.s64 = ctx.r8.s64 + -17264;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82172600
	ctx.lr = 0x82156E94;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,17068
	ctx.r30.s64 = ctx.r11.s64 + 17068;
	// stw r6,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// lwz r11,17980(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17980);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82156edc
	if (!ctx.cr6.eq) goto loc_82156EDC;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28800
	ctx.r9.s64 = ctx.r9.s64 + 28800;
	// addi r8,r8,28824
	ctx.r8.s64 = ctx.r8.s64 + 28824;
	// stw r11,17980(r10)
	REX_STORE_U32(ctx.r10.u32 + 17980, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82156EDC:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82156EE8;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156f04
	if (!ctx.cr6.eq) goto loc_82156F04;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82156f08
	goto loc_82156F08;
loc_82156F04:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82156F08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156f1c
	if (!ctx.cr6.eq) goto loc_82156F1C;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82156F1C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82156F28;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156f58
	if (ctx.cr6.eq) goto loc_82156F58;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156f54
	if (ctx.cr6.eq) goto loc_82156F54;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82156F54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82156F54:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82156F58:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,13100
	ctx.r30.s64 = ctx.r11.s64 + 13100;
	// lwz r11,13696(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 13696);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82156f98
	if (!ctx.cr6.eq) goto loc_82156F98;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28984
	ctx.r9.s64 = ctx.r9.s64 + 28984;
	// addi r8,r8,29008
	ctx.r8.s64 = ctx.r8.s64 + 29008;
	// stw r11,13696(r10)
	REX_STORE_U32(ctx.r10.u32 + 13696, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82156F98:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82156FA4;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156fc0
	if (!ctx.cr6.eq) goto loc_82156FC0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x82156fc4
	goto loc_82156FC4;
loc_82156FC0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82156FC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156fd8
	if (!ctx.cr6.eq) goto loc_82156FD8;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82156FD8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x82156FE4;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157014
	if (ctx.cr6.eq) goto loc_82157014;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157010
	if (ctx.cr6.eq) goto loc_82157010;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82157010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157010:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82157014:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x82157024;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8215702C;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82163880) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82163888;
	__savegprlr_26(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r31,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stb r28,280(r1)
	REX_STORE_U8(ctx.r1.u32 + 280, ctx.r28.u8);
	// bl 0x82172518
	ctx.lr = 0x821638D0;
	sub_82172518(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r30,r11,20984
	ctx.r30.s64 = ctx.r11.s64 + 20984;
	// lwz r11,21324(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21324);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82163914
	if (!ctx.cr6.eq) goto loc_82163914;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2232
	ctx.r9.s64 = ctx.r9.s64 + 2232;
	// addi r8,r8,2296
	ctx.r8.s64 = ctx.r8.s64 + 2296;
	// stw r11,21324(r10)
	REX_STORE_U32(ctx.r10.u32 + 21324, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82163914:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82163920;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216393c
	if (!ctx.cr6.eq) goto loc_8216393C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82163940
	goto loc_82163940;
loc_8216393C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82163940:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82163954
	if (!ctx.cr6.eq) goto loc_82163954;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82163954:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82163960;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163990
	if (ctx.cr6.eq) goto loc_82163990;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216398c
	if (ctx.cr6.eq) goto loc_8216398C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216398C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216398C:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82163990:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,14016
	ctx.r30.s64 = ctx.r11.s64 + 14016;
	// lwz r11,15168(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15168);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821639d0
	if (!ctx.cr6.eq) goto loc_821639D0;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2456
	ctx.r9.s64 = ctx.r9.s64 + 2456;
	// addi r8,r8,2632
	ctx.r8.s64 = ctx.r8.s64 + 2632;
	// stw r11,15168(r10)
	REX_STORE_U32(ctx.r10.u32 + 15168, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_821639D0:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x821639DC;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821639f8
	if (!ctx.cr6.eq) goto loc_821639F8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x821639fc
	goto loc_821639FC;
loc_821639F8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821639FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82163a10
	if (!ctx.cr6.eq) goto loc_82163A10;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82163A10:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x82163A1C;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163a4c
	if (ctx.cr6.eq) goto loc_82163A4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82163a48
	if (ctx.cr6.eq) goto loc_82163A48;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82163A48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82163A48:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82163A4C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82201f08
	ctx.lr = 0x82163A5C;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x82163A64;
	sub_821D4310(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216FBC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x8216FBD0;
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
	ctx.lr = 0x8216FC14;
	sub_82172518(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stw r28,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r31,r11,20824
	ctx.r31.s64 = ctx.r11.s64 + 20824;
	// lwz r11,21244(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21244);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216fc58
	if (!ctx.cr6.eq) goto loc_8216FC58;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22856
	ctx.r9.s64 = ctx.r9.s64 + -22856;
	// addi r8,r8,-22792
	ctx.r8.s64 = ctx.r8.s64 + -22792;
	// stw r11,21244(r10)
	REX_STORE_U32(ctx.r10.u32 + 21244, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8216FC58:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8216FC64;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fc80
	if (!ctx.cr6.eq) goto loc_8216FC80;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x8216fc84
	goto loc_8216FC84;
loc_8216FC80:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8216FC84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fc98
	if (!ctx.cr6.eq) goto loc_8216FC98;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8216FC98:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x8216FCA4;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fcd4
	if (ctx.cr6.eq) goto loc_8216FCD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fcd0
	if (ctx.cr6.eq) goto loc_8216FCD0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216FCD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FCD0:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8216FCD4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,13896
	ctx.r31.s64 = ctx.r11.s64 + 13896;
	// lwz r11,15108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15108);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8216fd14
	if (!ctx.cr6.eq) goto loc_8216FD14;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22632
	ctx.r9.s64 = ctx.r9.s64 + -22632;
	// addi r8,r8,-22480
	ctx.r8.s64 = ctx.r8.s64 + -22480;
	// stw r11,15108(r10)
	REX_STORE_U32(ctx.r10.u32 + 15108, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8216FD14:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8216FD20;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fd3c
	if (!ctx.cr6.eq) goto loc_8216FD3C;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x8216fd40
	goto loc_8216FD40;
loc_8216FD3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8216FD40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216fd54
	if (!ctx.cr6.eq) goto loc_8216FD54;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_8216FD54:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x8216FD60;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fd90
	if (ctx.cr6.eq) goto loc_8216FD90;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216fd8c
	if (ctx.cr6.eq) goto loc_8216FD8C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216FD8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216FD8C:
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
loc_8216FD90:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-15708
	ctx.r4.s64 = ctx.r11.s64 + -15708;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82201f08
	ctx.lr = 0x8216FDA4;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8216FDAC;
	sub_821D4310(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821799B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x821799C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
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
	// bge cr6,0x82179a14
	if (!ctx.cr6.lt) goto loc_82179A14;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82179a14
	if (ctx.cr6.eq) goto loc_82179A14;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82179a58
	if (ctx.cr6.eq) goto loc_82179A58;
loc_82179A14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82179A20;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-18844
	ctx.r4.s64 = ctx.r10.s64 + -18844;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x82179A3C;
	sub_8220AB90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82179a54
	if (!ctx.cr6.eq) goto loc_82179A54;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82179A54:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82179A58:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8217d818
	ctx.lr = 0x82179A6C;
	sub_8217D818(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82179A7C;
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
	// beq cr6,0x82179aa8
	if (ctx.cr6.eq) goto loc_82179AA8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82179AA8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179ac0
	if (ctx.cr6.eq) goto loc_82179AC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82179AC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217DE98) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8217DEBC;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217def0
	if (ctx.cr6.eq) goto loc_8217DEF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217def0
	if (!ctx.cr6.eq) goto loc_8217DEF0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8217DEF0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821ed688
	ctx.lr = 0x8217DEF8;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r10,-18928
	ctx.r4.s64 = ctx.r10.s64 + -18928;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x8217DF14;
	sub_8220AB90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8217df28
	if (!ctx.cr6.eq) goto loc_8217DF28;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8217DF28:
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

DEFINE_REX_FUNC(sub_82182228) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// bl 0x821d3e50
	ctx.lr = 0x82182240;
	sub_821D3E50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82182254
	if (!ctx.cr6.eq) goto loc_82182254;
loc_8218224C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821822e4
	goto loc_821822E4;
loc_82182254:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218224c
	if (!ctx.cr6.eq) goto loc_8218224C;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-18844
	ctx.r30.s64 = ctx.r11.s64 + -18844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x825cf2a0
	ctx.lr = 0x8218227C;
	sub_825CF2A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8218229c
	if (ctx.cr6.eq) goto loc_8218229C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821822e4
	goto loc_821822E4;
loc_8218229C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825cf2a0
	ctx.lr = 0x821822AC;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821822d0
	if (ctx.cr6.eq) goto loc_821822D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// b 0x821822e4
	goto loc_821822E4;
loc_821822D0:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8220b348
	ctx.lr = 0x821822E4;
	sub_8220B348(ctx, base);
loc_821822E4:
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

DEFINE_REX_FUNC(sub_821867C8) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ad148
	sub_821AD148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821872B8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821872D8;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,8496
	ctx.r31.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821872f4
	if (ctx.cr6.eq) goto loc_821872F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218733c
	if (ctx.cr6.eq) goto loc_8218733C;
loc_821872F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821eceb0
	ctx.lr = 0x82187300;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8218732c
	if (ctx.cr6.eq) goto loc_8218732C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218732c
	if (!ctx.cr6.eq) goto loc_8218732C;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8218732C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82181958
	ctx.lr = 0x82187334;
	sub_82181958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82187340
	if (!ctx.cr6.lt) goto loc_82187340;
loc_8218733C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82187340:
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

DEFINE_REX_FUNC(sub_8218A440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8218A448;
	__savegprlr_29(ctx, base);
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
	ctx.lr = 0x8218A45C;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218a478
	if (ctx.cr6.eq) goto loc_8218A478;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8218a48c
	if (ctx.cr6.eq) goto loc_8218A48C;
loc_8218A478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfc60
	ctx.lr = 0x8218A480;
	sub_821CFC60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8218a498
	if (!ctx.cr6.lt) goto loc_8218A498;
loc_8218A48C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8218A498:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8218A4A4;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8218a4c8
	if (ctx.cr6.eq) goto loc_8218A4C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218a4c8
	if (!ctx.cr6.eq) goto loc_8218A4C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8218A4C8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181df0
	ctx.lr = 0x8218A4D4;
	sub_82181DF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8218a48c
	if (ctx.cr6.lt) goto loc_8218A48C;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218E250) {
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
	// beq cr6,0x8218e2c8
	if (ctx.cr6.eq) goto loc_8218E2C8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8218e290
	if (!ctx.cr6.eq) goto loc_8218E290;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218e2d4
	if (ctx.cr6.eq) goto loc_8218E2D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218e2d4
	goto loc_8218E2D4;
loc_8218E290:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8218e2d4
	if (ctx.cr6.eq) goto loc_8218E2D4;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,13144
	ctx.r4.s64 = ctx.r11.s64 + 13144;
	// bl 0x825cf2a0
	ctx.lr = 0x8218E2A8;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218e2bc
	if (ctx.cr6.eq) goto loc_8218E2BC;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8218e2d4
	goto loc_8218E2D4;
loc_8218E2BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218e2d4
	goto loc_8218E2D4;
loc_8218E2C8:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,13144
	ctx.r10.s64 = ctx.r11.s64 + 13144;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8218E2D4:
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

DEFINE_REX_FUNC(sub_82192060) {
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
	// beq cr6,0x821920d8
	if (ctx.cr6.eq) goto loc_821920D8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821920a0
	if (!ctx.cr6.eq) goto loc_821920A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821920e4
	if (ctx.cr6.eq) goto loc_821920E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821920e4
	goto loc_821920E4;
loc_821920A0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821920e4
	if (ctx.cr6.eq) goto loc_821920E4;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,22168
	ctx.r4.s64 = ctx.r11.s64 + 22168;
	// bl 0x825cf2a0
	ctx.lr = 0x821920B8;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821920cc
	if (ctx.cr6.eq) goto loc_821920CC;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821920e4
	goto loc_821920E4;
loc_821920CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821920e4
	goto loc_821920E4;
loc_821920D8:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,22168
	ctx.r10.s64 = ctx.r11.s64 + 22168;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821920E4:
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

DEFINE_REX_FUNC(sub_82195C18) {
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
	// beq cr6,0x82195c90
	if (ctx.cr6.eq) goto loc_82195C90;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82195c58
	if (!ctx.cr6.eq) goto loc_82195C58;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82195c9c
	if (ctx.cr6.eq) goto loc_82195C9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82195c9c
	goto loc_82195C9C;
loc_82195C58:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82195c9c
	if (ctx.cr6.eq) goto loc_82195C9C;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,30544
	ctx.r4.s64 = ctx.r11.s64 + 30544;
	// bl 0x825cf2a0
	ctx.lr = 0x82195C70;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82195c84
	if (ctx.cr6.eq) goto loc_82195C84;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82195c9c
	goto loc_82195C9C;
loc_82195C84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82195c9c
	goto loc_82195C9C;
loc_82195C90:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,30544
	ctx.r10.s64 = ctx.r11.s64 + 30544;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82195C9C:
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

DEFINE_REX_FUNC(sub_82199950) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8219996C;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82199988
	if (ctx.cr6.eq) goto loc_82199988;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82199998
	if (ctx.cr6.eq) goto loc_82199998;
loc_82199988:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821d0e50
	ctx.lr = 0x82199990;
	sub_821D0E50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8219999c
	if (!ctx.cr6.lt) goto loc_8219999C;
loc_82199998:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8219999C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219C010) {
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
	// beq cr6,0x8219c088
	if (ctx.cr6.eq) goto loc_8219C088;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8219c050
	if (!ctx.cr6.eq) goto loc_8219C050;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219c094
	if (ctx.cr6.eq) goto loc_8219C094;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8219c094
	goto loc_8219C094;
loc_8219C050:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8219c094
	if (ctx.cr6.eq) goto loc_8219C094;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-20552
	ctx.r4.s64 = ctx.r11.s64 + -20552;
	// bl 0x825cf2a0
	ctx.lr = 0x8219C068;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219c07c
	if (ctx.cr6.eq) goto loc_8219C07C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8219c094
	goto loc_8219C094;
loc_8219C07C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219c094
	goto loc_8219C094;
loc_8219C088:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-20552
	ctx.r10.s64 = ctx.r11.s64 + -20552;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8219C094:
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

DEFINE_REX_FUNC(sub_8219FE98) {
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
	// beq cr6,0x8219ff10
	if (ctx.cr6.eq) goto loc_8219FF10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8219fed8
	if (!ctx.cr6.eq) goto loc_8219FED8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219ff1c
	if (ctx.cr6.eq) goto loc_8219FF1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219ff1c
	goto loc_8219FF1C;
loc_8219FED8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8219ff1c
	if (ctx.cr6.eq) goto loc_8219FF1C;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-11816
	ctx.r4.s64 = ctx.r11.s64 + -11816;
	// bl 0x825cf2a0
	ctx.lr = 0x8219FEF0;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ff04
	if (ctx.cr6.eq) goto loc_8219FF04;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8219ff1c
	goto loc_8219FF1C;
loc_8219FF04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219ff1c
	goto loc_8219FF1C;
loc_8219FF10:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-11816
	ctx.r10.s64 = ctx.r11.s64 + -11816;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8219FF1C:
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

DEFINE_REX_FUNC(sub_821A3A30) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c1538
	sub_821C1538(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4058) {
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
	// beq cr6,0x821a40d0
	if (ctx.cr6.eq) goto loc_821A40D0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821a4098
	if (!ctx.cr6.eq) goto loc_821A4098;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a40dc
	if (ctx.cr6.eq) goto loc_821A40DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a40dc
	goto loc_821A40DC;
loc_821A4098:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821a40dc
	if (ctx.cr6.eq) goto loc_821A40DC;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-3664
	ctx.r4.s64 = ctx.r11.s64 + -3664;
	// bl 0x825cf2a0
	ctx.lr = 0x821A40B0;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a40c4
	if (ctx.cr6.eq) goto loc_821A40C4;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821a40dc
	goto loc_821A40DC;
loc_821A40C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a40dc
	goto loc_821A40DC;
loc_821A40D0:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-3664
	ctx.r10.s64 = ctx.r11.s64 + -3664;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A40DC:
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

DEFINE_REX_FUNC(sub_821A7D60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821A7D68;
	__savegprlr_29(ctx, base);
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
	ctx.lr = 0x821A7D7C;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821a7d98
	if (ctx.cr6.eq) goto loc_821A7D98;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a7dd4
	if (ctx.cr6.eq) goto loc_821A7DD4;
loc_821A7D98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821A7DA4;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821a7dc0
	if (ctx.cr6.eq) goto loc_821A7DC0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a7dc0
	if (!ctx.cr6.eq) goto loc_821A7DC0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821a7dcc
	goto loc_821A7DCC;
loc_821A7DC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3740
	ctx.lr = 0x821A7DC8;
	sub_821D3740(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821A7DCC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x821a7de0
	if (!ctx.cr6.lt) goto loc_821A7DE0;
loc_821A7DD4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_821A7DE0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821A7DEC;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821a7dd4
	if (ctx.cr6.eq) goto loc_821A7DD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a7dd4
	if (!ctx.cr6.eq) goto loc_821A7DD4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,12002(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 12002);
	// bl 0x82181ce8
	ctx.lr = 0x821A7E14;
	sub_82181CE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821a7dd4
	if (ctx.cr6.lt) goto loc_821A7DD4;
	// add r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AD148) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821AD150;
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
	// bge cr6,0x821ad198
	if (!ctx.cr6.lt) goto loc_821AD198;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ad198
	if (ctx.cr6.eq) goto loc_821AD198;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ad1d8
	if (ctx.cr6.eq) goto loc_821AD1D8;
loc_821AD198:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821AD1A4;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-19048
	ctx.r4.s64 = ctx.r10.s64 + -19048;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821AD1C0;
	sub_8220AB90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821ad1d8
	if (!ctx.cr6.eq) goto loc_821AD1D8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_821AD1D8:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821AD1E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r29,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r29.u64;
	// beq cr6,0x821ad20c
	if (ctx.cr6.eq) goto loc_821AD20C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AD20C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AD20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B2EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821B2EE8;
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
	// bge cr6,0x821b2f2c
	if (!ctx.cr6.lt) goto loc_821B2F2C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821B2F2C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b2f54
	if (ctx.cr6.eq) goto loc_821B2F54;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f6a80
	ctx.lr = 0x821B2F40;
	sub_821F6A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b2f54
	if (!ctx.cr6.eq) goto loc_821B2F54;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x821b2f58
	goto loc_821B2F58;
loc_821B2F54:
	// lfd f31,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_821B2F58:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821b2f84
	if (!ctx.cr6.lt) goto loc_821B2F84;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821b2f84
	if (ctx.cr6.eq) goto loc_821B2F84;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b2f84
	if (!ctx.cr6.eq) goto loc_821B2F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b2fc4
	goto loc_821B2FC4;
loc_821B2F84:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821B2F90;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-18692
	ctx.r4.s64 = ctx.r10.s64 + -18692;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821B2FAC;
	sub_8220AB90(ctx, base);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b2fc4
	if (!ctx.cr6.eq) goto loc_821B2FC4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_821B2FC4:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821B2FD8;
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
	// subf r31,r28,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r28.u64;
	// beq cr6,0x821b3004
	if (ctx.cr6.eq) goto loc_821B3004;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B3004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B3004:
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

DEFINE_REX_FUNC(sub_821BC4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x821BC4C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r3,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r3.u64);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r10,8496
	ctx.r30.s64 = ctx.r10.s64 + 8496;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// srawi r27,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r8.s32 >> 4;
	// bge cr6,0x821bc520
	if (!ctx.cr6.lt) goto loc_821BC520;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821bc520
	if (ctx.cr6.eq) goto loc_821BC520;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bc520
	if (!ctx.cr6.eq) goto loc_821BC520;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x821bc564
	goto loc_821BC564;
loc_821BC520:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821BC52C;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-17996
	ctx.r4.s64 = ctx.r10.s64 + -17996;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821BC548;
	sub_8220AB90(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bc560
	if (!ctx.cr6.eq) goto loc_821BC560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_821BC560:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821BC564:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bc590
	if (!ctx.cr6.lt) goto loc_821BC590;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821bc590
	if (ctx.cr6.eq) goto loc_821BC590;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bc590
	if (!ctx.cr6.eq) goto loc_821BC590;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x821bc5d4
	goto loc_821BC5D4;
loc_821BC590:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821BC59C;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-32252
	ctx.r4.s64 = ctx.r10.s64 + -32252;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821BC5B8;
	sub_8220AB90(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bc5d4
	if (!ctx.cr6.eq) goto loc_821BC5D4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r9,r11,-1352
	ctx.r9.s64 = ctx.r11.s64 + -1352;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
loc_821BC5D4:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,240(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821BC5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// subf r31,r27,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r27.u64;
	// beq cr6,0x821bc618
	if (ctx.cr6.eq) goto loc_821BC618;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BC618:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bc630
	if (ctx.cr6.eq) goto loc_821BC630;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BC630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BC630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C4C80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x821C4C88;
	__savegprlr_23(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r30,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// srawi r28,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 4;
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821C4CDC;
	sub_8217DA88(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r30.u8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821C4CFC;
	sub_8217DA88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r30,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821C4D1C;
	sub_8217DA88(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821C4D3C;
	sub_8217DA88(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r30,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821C4D5C;
	sub_8217DA88(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821c4d94
	if (!ctx.cr6.lt) goto loc_821C4D94;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821c4d94
	if (ctx.cr6.eq) goto loc_821C4D94;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c4d94
	if (!ctx.cr6.eq) goto loc_821C4D94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821c4dd4
	goto loc_821C4DD4;
loc_821C4D94:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821C4DA0;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17488
	ctx.r4.s64 = ctx.r10.s64 + -17488;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821C4DBC;
	sub_8220AB90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821c4dd4
	if (!ctx.cr6.eq) goto loc_821C4DD4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1352
	ctx.r10.s64 = ctx.r11.s64 + -1352;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_821C4DD4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821C4DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821808f8
	ctx.lr = 0x821C4E00;
	sub_821808F8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// subf r31,r28,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r28.u64;
	// beq cr6,0x821c4e2c
	if (ctx.cr6.eq) goto loc_821C4E2C;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4E2C:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4e44
	if (ctx.cr6.eq) goto loc_821C4E44;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4E44:
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4e5c
	if (ctx.cr6.eq) goto loc_821C4E5C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4E5C:
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4e74
	if (ctx.cr6.eq) goto loc_821C4E74;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4E74:
	// lwz r11,368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4e8c
	if (ctx.cr6.eq) goto loc_821C4E8C;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4E8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c4ea4
	if (ctx.cr6.eq) goto loc_821C4EA4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C4EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C4EA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CFA78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x820fdfd0
	sub_820FDFD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CFFF8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821D0010;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821d0040
	if (ctx.cr6.eq) goto loc_821D0040;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d0040
	if (!ctx.cr6.eq) goto loc_821D0040;
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
loc_821D0040:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821d0370
	ctx.lr = 0x821D004C;
	sub_821D0370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D2A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821d3e50
	ctx.lr = 0x821D2AB4;
	sub_821D3E50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d2ac8
	if (!ctx.cr6.eq) goto loc_821D2AC8;
loc_821D2AC0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821d2b58
	goto loc_821D2B58;
loc_821D2AC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821d2ac0
	if (!ctx.cr6.eq) goto loc_821D2AC0;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-18724
	ctx.r30.s64 = ctx.r11.s64 + -18724;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x825cf2a0
	ctx.lr = 0x821D2AF0;
	sub_825CF2A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821d2b10
	if (ctx.cr6.eq) goto loc_821D2B10;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821d2b58
	goto loc_821D2B58;
loc_821D2B10:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x825cf2a0
	ctx.lr = 0x821D2B20;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d2b44
	if (ctx.cr6.eq) goto loc_821D2B44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// neg r3,r8
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// b 0x821d2b58
	goto loc_821D2B58;
loc_821D2B44:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8220b348
	ctx.lr = 0x821D2B58;
	sub_8220B348(ctx, base);
loc_821D2B58:
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

DEFINE_REX_FUNC(sub_821D3D20) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821D3D40) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821D3E00) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821D6CC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6d30
	if (ctx.cr6.eq) goto loc_821D6D30;
	// lwz r6,524(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 524);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821d6d30
	if (ctx.cr6.eq) goto loc_821D6D30;
	// lwz r8,512(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
loc_821D6CE8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821D6CF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// beq cr6,0x821d6d18
	if (ctx.cr6.eq) goto loc_821D6D18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d6cf4
	if (ctx.cr6.eq) goto loc_821D6CF4;
loc_821D6D18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821d6d38
	if (ctx.cr6.eq) goto loc_821D6D38;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821d6ce8
	if (ctx.cr6.lt) goto loc_821D6CE8;
loc_821D6D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821D6D38:
	// rlwinm r11,r7,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFFFC0000;
	// oris r3,r11,3
	ctx.r3.u64 = ctx.r11.u64 | 196608;
	// ori r3,r3,65532
	ctx.r3.u64 = ctx.r3.u64 | 65532;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DC670) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821DC694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821DC6AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821E0240) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,9108(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821E0270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_821E15C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E1718) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x821E1720;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,6
	ctx.r28.s64 = 6;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r27,56(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x821e176c
	if (!ctx.cr6.eq) goto loc_821E176C;
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821e1768
	if (!ctx.cr6.lt) goto loc_821E1768;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x821e176c
	goto loc_821E176C;
loc_821E1768:
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_821E176C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82279640
	ctx.lr = 0x821E1780;
	sub_82279640(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1820
	if (ctx.cr6.eq) goto loc_821E1820;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,60(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x822796f0
	ctx.lr = 0x821E17A8;
	sub_822796F0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
loc_821E17AC:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821e180c
	if (!ctx.cr6.gt) goto loc_821E180C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_821E17BC:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x821e17d0
	if (!ctx.cr6.eq) goto loc_821E17D0;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// b 0x821e17d8
	goto loc_821E17D8;
loc_821E17D0:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_821E17D8:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lwz r6,48(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x821e17fc
	if (!ctx.cr6.eq) goto loc_821E17FC;
	// sth r5,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x821e1804
	goto loc_821E1804;
loc_821E17FC:
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_821E1804:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821e17bc
	if (!ctx.cr0.eq) goto loc_821E17BC;
loc_821E180C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x821e17ac
	if (ctx.cr6.lt) goto loc_821E17AC;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82279738
	ctx.lr = 0x821E1820;
	sub_82279738(ctx, base);
loc_821E1820:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E71A8) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,7(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x821e71e0
	if (ctx.cr6.lt) goto loc_821E71E0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x821e71e8
	goto loc_821E71E8;
loc_821E71E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,8496
	ctx.r11.s64 = ctx.r11.s64 + 8496;
loc_821E71E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x821e71fc
	if (!ctx.cr6.eq) goto loc_821E71FC;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821E71FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// bl 0x821e6f08
	ctx.lr = 0x821E7214;
	sub_821E6F08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821e7260
	if (!ctx.cr6.lt) goto loc_821E7260;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed288
	ctx.lr = 0x821E722C;
	sub_821ED288(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7258
	if (ctx.cr6.eq) goto loc_821E7258;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3720
	ctx.lr = 0x821E7240;
	sub_821E3720(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed158
	ctx.lr = 0x821E724C;
	sub_821ED158(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee288
	ctx.lr = 0x821E7258;
	sub_821EE288(ctx, base);
loc_821E7258:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef588
	ctx.lr = 0x821E7260;
	sub_821EF588(ctx, base);
loc_821E7260:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

DEFINE_REX_FUNC(sub_821EBDD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e3a98
	ctx.lr = 0x821EBDF0;
	sub_821E3A98(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821e3a98
	ctx.lr = 0x821EBE00;
	sub_821E3A98(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x825d1920
	ctx.lr = 0x821EBE08;
	sub_825D1920(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f1.u64);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ED8B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821ED8CC;
	sub_821ECEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821ED8D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed8d4
	if (!ctx.cr6.eq) goto loc_821ED8D4;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821f59f8
	ctx.lr = 0x821ED8FC;
	sub_821F59F8(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821f6d78
	ctx.lr = 0x821ED91C;
	sub_821F6D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_821F1C20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x821F1C28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,16(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// addi r6,r31,120
	ctx.r6.s64 = ctx.r31.s64 + 120;
	// lwz r7,140(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821f1c98
	if (ctx.cr6.eq) goto loc_821F1C98;
loc_821F1C44:
	// lbz r11,5(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f1c8c
	if (!ctx.cr6.eq) goto loc_821F1C8C;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f1c8c
	if (!ctx.cr6.eq) goto loc_821F1C8C;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821f1c8c
	if (ctx.cr6.lt) goto loc_821F1C8C;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f1c8c
	if (ctx.cr6.eq) goto loc_821F1C8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0990
	ctx.lr = 0x821F1C8C;
	sub_821F0990(ctx, base);
loc_821F1C8C:
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821f1c44
	if (!ctx.cr6.eq) goto loc_821F1C44;
loc_821F1C98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f14d8
	ctx.lr = 0x821F1CA0;
	sub_821F14D8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lbz r10,5(r26)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r26.u32 + 5);
	// clrlwi r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1ccc
	if (ctx.cr6.eq) goto loc_821F1CCC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0990
	ctx.lr = 0x821F1CCC;
	sub_821F0990(ctx, base);
loc_821F1CCC:
	// addi r7,r31,152
	ctx.r7.s64 = ctx.r31.s64 + 152;
	// li r6,9
	ctx.r6.s64 = 9;
loc_821F1CD4:
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f1cf8
	if (ctx.cr6.eq) goto loc_821F1CF8;
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f1cf8
	if (ctx.cr6.eq) goto loc_821F1CF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0990
	ctx.lr = 0x821F1CF8;
	sub_821F0990(ctx, base);
loc_821F1CF8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x821f1cd4
	if (!ctx.cr0.eq) goto loc_821F1CD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f14d8
	ctx.lr = 0x821F1D0C;
	sub_821F14D8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r25,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bl 0x821f14d8
	ctx.lr = 0x821F1D20;
	sub_821F14D8(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lwz r28,16(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r30,112(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821f1e08
	if (ctx.cr6.eq) goto loc_821F1E08;
loc_821F1D38:
	// lbz r29,5(r6)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1d54
	if (ctx.cr6.eq) goto loc_821F1D54;
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1d5c
	if (ctx.cr6.eq) goto loc_821F1D5C;
loc_821F1D54:
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// b 0x821f1dfc
	goto loc_821F1DFC;
loc_821F1D5C:
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f1da0
	if (ctx.cr6.eq) goto loc_821F1DA0;
	// lbz r11,6(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f1da0
	if (!ctx.cr6.eq) goto loc_821F1DA0;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,196(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// bl 0x821f2de0
	ctx.lr = 0x821F1D88;
	sub_821F2DE0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f1db4
	if (!ctx.cr6.eq) goto loc_821F1DB4;
	// lbz r11,6(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stb r10,6(r5)
	REX_STORE_U8(ctx.r5.u32 + 6, ctx.r10.u8);
loc_821F1DA0:
	// lbz r11,5(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 5);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,5(r6)
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r10.u8);
	// b 0x821f1dfc
	goto loc_821F1DFC;
loc_821F1DB4:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r8,5(r6)
	REX_STORE_U8(ctx.r6.u32 + 5, ctx.r8.u8);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r27,r11,24
	ctx.r27.s64 = ctx.r11.s64 + 24;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f1de8
	if (!ctx.cr6.eq) goto loc_821F1DE8;
	// stw r6,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// b 0x821f1df8
	goto loc_821F1DF8;
loc_821F1DE8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_821F1DF8:
	// stw r6,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r6.u32);
loc_821F1DFC:
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821f1d38
	if (!ctx.cr6.eq) goto loc_821F1D38;
loc_821F1E08:
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f1e48
	if (ctx.cr6.eq) goto loc_821F1E48;
loc_821F1E14:
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lbz r10,5(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// rlwimi r11,r10,0,24,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF07);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r9,5(r7)
	REX_STORE_U8(ctx.r7.u32 + 5, ctx.r9.u8);
	// bl 0x821f0990
	ctx.lr = 0x821F1E3C;
	sub_821F0990(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821f1e14
	if (!ctx.cr6.eq) goto loc_821F1E14;
loc_821F1E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f14d8
	ctx.lr = 0x821F1E50;
	sub_821F14D8(ctx, base);
	// add r30,r3,r27
	ctx.r30.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x821f1538
	ctx.lr = 0x821F1E5C;
	sub_821F1538(ctx, base);
	// lbz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 20);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// li r10,2
	ctx.r10.s64 = 2;
	// xori r5,r7,3
	ctx.r5.u64 = ctx.r7.u64 ^ 3;
	// stw r25,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// subf r6,r30,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r30.u64;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r10,21(r31)
	REX_STORE_U8(ctx.r31.u32 + 21, ctx.r10.u8);
	// stw r6,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stb r5,20(r31)
	REX_STORE_U8(ctx.r31.u32 + 20, ctx.r5.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82202DF0) {
	REX_FUNC_PROLOGUE();
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lbz r11,65(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 65);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82202e58
	if (!ctx.cr6.eq) goto loc_82202E58;
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82202E08:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82202E10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// beq cr6,0x82202e34
	if (ctx.cr6.eq) goto loc_82202E34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82202e10
	if (ctx.cr6.eq) goto loc_82202E10;
loc_82202E34:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82202e44
	if (!ctx.cr6.lt) goto loc_82202E44;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82202e4c
	goto loc_82202E4C;
loc_82202E44:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_82202E4C:
	// lbz r11,65(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 65);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82202e08
	if (ctx.cr6.eq) goto loc_82202E08;
loc_82202E58:
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205680) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82205688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82205730
	if (ctx.cr6.eq) goto loc_82205730;
	// li r28,0
	ctx.r28.s64 = 0;
loc_822056A4:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82205708
	if (ctx.cr6.eq) goto loc_82205708;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822056dc
	if (ctx.cr6.eq) goto loc_822056DC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822056d8
	if (ctx.cr6.eq) goto loc_822056D8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822056D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822056D8:
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_822056DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82205708
	if (ctx.cr6.eq) goto loc_82205708;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82205708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205708:
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// bne cr6,0x822056a4
	if (!ctx.cr6.eq) goto loc_822056A4;
loc_82205730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220B778) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8220b7ac
	if (ctx.cr6.lt) goto loc_8220B7AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8220B7AC:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8220b800
	if (ctx.cr6.eq) goto loc_8220B800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6b00
	ctx.lr = 0x8220B7C0;
	sub_821F6B00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220b7d0
	if (!ctx.cr6.eq) goto loc_8220B7D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8220b808
	goto loc_8220B808;
loc_8220B7D0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8220b7ec
	if (ctx.cr6.lt) goto loc_8220B7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f20a0
	ctx.lr = 0x8220B7EC;
	sub_821F20A0(ctx, base);
loc_8220B7EC:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220b800
	if (ctx.cr6.lt) goto loc_8220B800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8220B800:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
loc_8220B808:
	// li r4,372
	ctx.r4.s64 = 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee350
	ctx.lr = 0x8220B814;
	sub_821EE350(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220b828
	if (ctx.cr6.eq) goto loc_8220B828;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82208398
	ctx.lr = 0x8220B828;
	sub_82208398(ctx, base);
loc_8220B828:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8220b84c
	if (!ctx.cr6.eq) goto loc_8220B84C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8220b878
	goto loc_8220B878;
loc_8220B84C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8220B850:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220b850
	if (!ctx.cr6.eq) goto loc_8220B850;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x8220B878;
	sub_821ED6F0(ctx, base);
loc_8220B878:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,-32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + -32);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,-24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// bl 0x821f6ed8
	ctx.lr = 0x8220B8AC;
	sub_821F6ED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// addi r7,r11,-32
	ctx.r7.s64 = ctx.r11.s64 + -32;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r4,r8,-18960
	ctx.r4.s64 = ctx.r8.s64 + -18960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed7d8
	ctx.lr = 0x8220B8CC;
	sub_821ED7D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82213D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x82213D30;
	__savegprlr_24(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// lfs f0,9868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r3,r6,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// srw r9,r11,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r3.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// bge cr6,0x82213d74
	if (!ctx.cr6.lt) goto loc_82213D74;
	// xori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 8;
loc_82213D74:
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r4,r6,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// srw r3,r11,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// bge cr6,0x82213d98
	if (!ctx.cr6.lt) goto loc_82213D98;
	// xori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 8;
loc_82213D98:
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// lfs f13,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r4,r6,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// srw r3,r11,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r9,r3,28
	ctx.r9.u64 = ctx.r3.u32 & 0xF;
	// bge cr6,0x82213dc8
	if (!ctx.cr6.lt) goto loc_82213DC8;
	// xori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 ^ 8;
loc_82213DC8:
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r4,r9,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lfs f13,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwinm r4,r6,2,16,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// srw r3,r11,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// bge cr6,0x82213df8
	if (!ctx.cr6.lt) goto loc_82213DF8;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
loc_82213DF8:
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r4,r11,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// ble cr6,0x82213fa0
	if (!ctx.cr6.gt) goto loc_82213FA0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_82213E20:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lhz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r27,r9,17
	ctx.r27.u64 = ctx.r9.u32 & 0x7FFF;
	// rlwimi r6,r8,31,17,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF8000);
	// clrlwi r26,r8,17
	ctx.r26.u64 = ctx.r8.u32 & 0x7FFF;
	// rlwinm r10,r6,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x3;
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrlwi r28,r30,17
	ctx.r28.u64 = ctx.r30.u32 & 0x7FFF;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r24,r9,1
	ctx.r24.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,1,29,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x6;
	// sthx r28,r25,r4
	REX_STORE_U16(ctx.r25.u32 + ctx.r4.u32, ctx.r28.u16);
	// rlwinm r4,r30,17,15,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1FFFF;
	// sthx r27,r9,r31
	REX_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r27.u16);
	// sthx r26,r24,r29
	REX_STORE_U16(ctx.r24.u32 + ctx.r29.u32, ctx.r26.u16);
loc_82213E88:
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82213ea8
	if (ctx.cr6.eq) goto loc_82213EA8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82213e88
	if (ctx.cr6.lt) goto loc_82213E88;
	// b 0x82213eac
	goto loc_82213EAC;
loc_82213EA8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_82213EAC:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82213ec8
	if (!ctx.cr6.lt) goto loc_82213EC8;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82213EC8:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r28,r1,-96
	ctx.r28.s64 = ctx.r1.s64 + -96;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,8(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,12(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r31,r1,-96
	ctx.r31.s64 = ctx.r1.s64 + -96;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r26,r1,-96
	ctx.r26.s64 = ctx.r1.s64 + -96;
	// lhzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// addi r27,r9,1
	ctx.r27.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r8,r31
	ctx.r31.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// addi r25,r1,-96
	ctx.r25.s64 = ctx.r1.s64 + -96;
	// clrlwi r8,r27,30
	ctx.r8.u64 = ctx.r27.u32 & 0x3;
	// sth r6,-86(r1)
	REX_STORE_U16(ctx.r1.u32 + -86, ctx.r6.u16);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r26
	ctx.r30.u64 = REX_LOAD_U16(ctx.r30.u32 + ctx.r26.u32);
	// addi r27,r8,1
	ctx.r27.s64 = ctx.r8.s64 + 1;
	// addi r26,r1,-88
	ctx.r26.s64 = ctx.r1.s64 + -88;
	// sth r31,-88(r1)
	REX_STORE_U16(ctx.r1.u32 + -88, ctx.r31.u16);
	// lhzx r29,r29,r25
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r25.u32);
	// addi r6,r1,-88
	ctx.r6.s64 = ctx.r1.s64 + -88;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r1,-88
	ctx.r28.s64 = ctx.r1.s64 + -88;
	// sth r30,-84(r1)
	REX_STORE_U16(ctx.r1.u32 + -84, ctx.r30.u16);
	// rlwinm r27,r27,1,29,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x6;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// sth r29,-82(r1)
	REX_STORE_U16(ctx.r1.u32 + -82, ctx.r29.u16);
	// lhzx r9,r9,r26
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r26.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lhzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// lhzx r31,r27,r28
	ctx.r31.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r28.u32);
	// sth r31,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// beq cr6,0x82213f74
	if (ctx.cr6.eq) goto loc_82213F74;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
loc_82213F74:
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r8,r10,14,2,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF8000;
	// lhz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r4,r10,15,0,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFFFF8000;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r9,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// bne 0x82213e20
	if (!ctx.cr0.eq) goto loc_82213E20;
loc_82213FA0:
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822239E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82223a60
	if (ctx.cr6.eq) goto loc_82223A60;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82223a40
	if (ctx.cr6.eq) goto loc_82223A40;
loc_82223A10:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223a34
	if (ctx.cr6.lt) goto loc_82223A34;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82223a70
	if (ctx.cr6.lt) goto loc_82223A70;
loc_82223A34:
	// lwz r5,12(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82223a10
	if (!ctx.cr6.eq) goto loc_82223A10;
loc_82223A40:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r11,1528
	ctx.r6.s64 = ctx.r11.s64 + 1528;
	// addi r5,r10,1636
	ctx.r5.s64 = ctx.r10.s64 + 1636;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r4,38
	ctx.r4.s64 = 38;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822282e8
	ctx.lr = 0x82223A60;
	sub_822282E8(ctx, base);
loc_82223A60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82223A70:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne 0x82223ac4
	if (!ctx.cr0.eq) goto loc_82223AC4;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lwz r9,16(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r4,126
	ctx.r4.s64 = 126;
	// addi r3,r8,1528
	ctx.r3.s64 = ctx.r8.s64 + 1528;
	// lwz r7,20604(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20604);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r6,16(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82223AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82223AC4:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82229428;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822294a8
	if (ctx.cr6.eq) goto loc_822294A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822294a8
	if (!ctx.cr6.gt) goto loc_822294A8;
loc_82229458:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r9,r11,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82229880
	ctx.lr = 0x82229474;
	sub_82229880(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822294c8
	ctx.lr = 0x82229480;
	sub_822294C8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822294bc
	if (!ctx.cr6.eq) goto loc_822294BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82229458
	if (ctx.cr6.lt) goto loc_82229458;
loc_822294A8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_822294BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222C038) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x8222C040;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222c070
	if (!ctx.cr6.eq) goto loc_8222C070;
	// li r11,4000
	ctx.r11.s64 = 4000;
	// stw r26,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8222C070:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8222c0bc
	if (!ctx.cr6.gt) goto loc_8222C0BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222bf80
	ctx.lr = 0x8222C088;
	sub_8222BF80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c1a8
	if (ctx.cr6.eq) goto loc_8222C1A8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c0b0
	if (ctx.cr6.eq) goto loc_8222C0B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r3,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// b 0x8222c154
	goto loc_8222C154;
loc_8222C0B0:
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x8222c154
	goto loc_8222C154;
loc_8222C0BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222c100
	if (ctx.cr6.eq) goto loc_8222C100;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// cmpd cr6,r8,r9
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r9.s64, ctx.xer);
	// blt cr6,0x8222c124
	if (ctx.cr6.lt) goto loc_8222C124;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmpd cr6,r8,r9
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r9.s64, ctx.xer);
	// bgt cr6,0x8222c124
	if (ctx.cr6.gt) goto loc_8222C124;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
loc_8222C100:
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8222c150
	if (!ctx.cr6.gt) goto loc_8222C150;
	// bl 0x8222bf80
	ctx.lr = 0x8222C10C;
	sub_8222BF80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c1a8
	if (ctx.cr6.eq) goto loc_8222C1A8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// b 0x8222c154
	goto loc_8222C154;
loc_8222C124:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r11,4884
	ctx.r6.s64 = ctx.r11.s64 + 4884;
	// addi r5,r10,4920
	ctx.r5.s64 = ctx.r10.s64 + 4920;
	// li r7,187
	ctx.r7.s64 = 187;
	// li r4,21
	ctx.r4.s64 = 21;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822282e8
	ctx.lr = 0x8222C144;
	sub_822282E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_8222C150:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8222C154:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222c1a8
	if (ctx.cr6.eq) goto loc_8222C1A8;
	// lwz r27,4(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8222c194
	if (ctx.cr6.eq) goto loc_8222C194;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8222c194
	if (ctx.cr6.eq) goto loc_8222C194;
loc_8222C17C:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r8,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8222c17c
	if (!ctx.cr0.eq) goto loc_8222C17C;
loc_8222C194:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stbx r26,r11,r30
	REX_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r26.u8);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_8222C1A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82238710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82238718;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82238750
	if (ctx.cr6.lt) goto loc_82238750;
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82238748
	if (ctx.cr6.lt) goto loc_82238748;
	// bl 0x822381f0
	ctx.lr = 0x82238748;
	sub_822381F0(ctx, base);
loc_82238748:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82238640
	ctx.lr = 0x82238750;
	sub_82238640(ctx, base);
loc_82238750:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r26,r25,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lhzx r29,r26,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8223876c
	if (!ctx.cr6.gt) goto loc_8223876C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223876C:
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// addi r10,r29,41
	ctx.r10.s64 = ctx.r29.s64 + 41;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// lhzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// addi r28,r7,-32768
	ctx.r28.s64 = ctx.r7.s64 + -32768;
	// subf r27,r7,r6
	ctx.r27.u64 = ctx.r6.u64 - ctx.r7.u64;
	// bl 0x82236628
	ctx.lr = 0x82238794;
	sub_82236628(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r28,r27
	ctx.r5.u64 = ctx.r28.u64 + ctx.r27.u64;
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// bge cr6,0x822387b4
	if (!ctx.cr6.lt) goto loc_822387B4;
	// mullw r11,r10,r27
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// b 0x822387b8
	goto loc_822387B8;
loc_822387B4:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
loc_822387B8:
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r10,r11
	REX_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// bne cr6,0x822388cc
	if (!ctx.cr6.eq) goto loc_822388CC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lhzx r29,r26,r11
	ctx.r29.u64 = REX_LOAD_U16(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82238870
	if (!ctx.cr6.eq) goto loc_82238870;
	// lhz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82238824
	if (ctx.cr6.eq) goto loc_82238824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236628
	ctx.lr = 0x82238818;
	sub_82236628(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82238824:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r29,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r29.u16);
	// sthx r29,r26,r10
	REX_STORE_U16(ctx.r26.u32 + ctx.r10.u32, ctx.r29.u16);
	// lhz r7,14(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r8,10(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82238868
	if (!ctx.cr6.eq) goto loc_82238868;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// sth r7,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
loc_82238868:
	// lis r25,2
	ctx.r25.s64 = 131072;
	// b 0x822388ac
	goto loc_822388AC;
loc_82238870:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82236628
	ctx.lr = 0x82238878;
	sub_82236628(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lhz r6,10(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// lhz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// subf r11,r5,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// subf r5,r5,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82236838
	ctx.lr = 0x822388AC;
	sub_82236838(ctx, base);
loc_822388AC:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// sth r7,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
loc_822388CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82243AD0) {
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
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x82246358
	ctx.lr = 0x82243AF8;
	sub_82246358(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,20(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r30,504
	ctx.r3.s64 = ctx.r30.s64 + 504;
	// bl 0x82246358
	ctx.lr = 0x82243B0C;
	sub_82246358(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82243b20
	if (ctx.cr6.gt) goto loc_82243B20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243B20:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,304(r30)
	REX_STORE_U8(ctx.r30.u32 + 304, ctx.r11.u8);
	// lwz r31,24(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// bl 0x82246358
	ctx.lr = 0x82243B38;
	sub_82246358(ctx, base);
	// lwz r10,508(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 508);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82243b4c
	if (ctx.cr6.gt) goto loc_82243B4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243B4C:
	// stb r11,304(r31)
	REX_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_82249780) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60cc
	ctx.lr = 0x82249788;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x825d73e0
	ctx.lr = 0x82249790;
	__savefpr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// lwz r11,488(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 488);
	// lwz r31,480(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 480);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r30,484(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 484);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,10064(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 10064);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,10064(r9)
	REX_STORE_U32(ctx.r9.u32 + 10064, ctx.r10.u32);
	// ble cr6,0x8224a3f8
	if (!ctx.cr6.gt) goto loc_8224A3F8;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,8492
	ctx.r9.s64 = ctx.r11.s64 + 8492;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r21,-32142
	ctx.r21.s64 = -2106458112;
	// lis r20,-32142
	ctx.r20.s64 = -2106458112;
	// lfs f24,8492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8492);
	ctx.f24.f64 = double(temp.f32);
	// lfs f0,9824(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9824);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r4,56
	ctx.r29.s64 = ctx.r4.s64 + 56;
	// lfs f31,1376(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1376);
	ctx.f31.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f13,9608(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 9608);
	ctx.f13.f64 = double(temp.f32);
	// lwz r24,9256(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 9256);
	// stfs f24,152(r1)
	temp.f32 = float(ctx.f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r25,10060(r20)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 10060);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_8224980C:
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8224a3e4
	if (ctx.cr6.gt) goto loc_8224A3E4;
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,416
	ctx.r11.s64 = ctx.r30.s64 + 416;
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f11,-8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r31,416
	ctx.r9.s64 = ctx.r31.s64 + 416;
	// lfs f10,-4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f10,f12
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,-24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f28,f0,f9
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f6,-20(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f27,f8,f7
	ctx.f27.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f4,-16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f26,f6,f5
	ctx.f26.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,60(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f25,f4,f3
	ctx.f25.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f13,20(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f12,36(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f10,24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f27,112(r1)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f26,116(r1)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f25,120(r1)
	temp.f32 = float(ctx.f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f11,304(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f10,308(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lfs f9,40(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f23,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,44(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f18.f64 = double(temp.f32);
	// lfs f2,392(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,392(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f9,312(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f8,320(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,364(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f7,324(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f31,380(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f6,328(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f5,336(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f4,340(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f3,344(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f23,352(r1)
	temp.f32 = float(ctx.f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f22,356(r1)
	temp.f32 = float(ctx.f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f21,360(r1)
	temp.f32 = float(ctx.f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f20,368(r1)
	temp.f32 = float(ctx.f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f19,372(r1)
	temp.f32 = float(ctx.f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f18,376(r1)
	temp.f32 = float(ctx.f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// bl 0x822465b0
	ctx.lr = 0x8224995C;
	sub_822465B0(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822499b0
	if (ctx.cr6.eq) goto loc_822499B0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r9,60(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82249a10
	if (ctx.cr6.eq) goto loc_82249A10;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r26.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r26.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r26,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r26.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x82249a08
	goto loc_82249A08;
loc_822499B0:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,180
	ctx.r3.s64 = 180;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bl 0x825d0430
	ctx.lr = 0x822499C0;
	sub_825D0430(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822499fc
	if (ctx.cr6.eq) goto loc_822499FC;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r26,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r26.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r26.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r26,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r26.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,16(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f31,36(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x82249a00
	goto loc_82249A00;
loc_822499FC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82249A00:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r11,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
loc_82249A08:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82249A10:
	// lfs f0,464(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r10,528(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 528);
	// lwz r9,528(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 528);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r10,42
	ctx.r8.s64 = ctx.r10.s64 + 42;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// stw r6,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r6.u32);
	// lwz r10,524(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 524);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 524);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r10,26
	ctx.r4.s64 = ctx.r10.s64 + 26;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// stw r10,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lfs f10,380(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,376(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,376(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,384(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 384);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,384(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,368(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,380(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fmsubs f5,f29,f6,f11
	ctx.f5.f64 = double(float(std::fma(ctx.f29.f64, ctx.f6.f64, -ctx.f11.f64)));
	// lfs f11,368(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f28,f6
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f6.f64));
	// lfs f6,360(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fmuls f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmsubs f1,f2,f26,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f26.f64, -ctx.f9.f64)));
	// fmuls f9,f2,f25
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f25.f64));
	// lfs f2,360(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// lfs f5,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f7,f28,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f28.f64, ctx.f12.f64, -ctx.f7.f64)));
	// lfs f12,364(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f3,f10,f25,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f25.f64, -ctx.f3.f64)));
	// lfs f10,364(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f8,f8,f30,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f30.f64, -ctx.f13.f64)));
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f1,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lfs f6,32(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f3,24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f4,f4,f27,f9
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f27.f64, -ctx.f9.f64)));
	// lfs f9,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f0,f11
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fadds f11,f10,f4
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// lfs f0,28(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f8,f5,f2
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f5,f1,f10,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f4,f9,f7,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmuls f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bgt cr6,0x82249b24
	if (ctx.cr6.gt) goto loc_82249B24;
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_82249B24:
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82249b48
	if (!ctx.cr6.gt) goto loc_82249B48;
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
loc_82249B48:
	// lwz r10,232(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 232);
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82249b70
	if (ctx.cr6.eq) goto loc_82249B70;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82249b74
	goto loc_82249B74;
loc_82249B70:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82249B74:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// lfs f12,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82249bf4
	if (!ctx.cr6.gt) goto loc_82249BF4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f31,12(r10)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f7,f24,f8
	ctx.f7.f64 = double(float(ctx.f24.f64 / ctx.f8.f64));
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f2,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// b 0x82249c4c
	goto loc_82249C4C;
loc_82249BF4:
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,8(r10)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f31,12(r10)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f24,f9
	ctx.f8.f64 = double(float(ctx.f24.f64 / ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f2,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stfs f5,8(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f0,f2,f3
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
loc_82249C4C:
	// stfs f31,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r8,r31,312
	ctx.r8.s64 = ctx.r31.s64 + 312;
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r8,r30,312
	ctx.r8.s64 = ctx.r30.s64 + 312;
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f20,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,-16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f26,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f28.f64 = double(temp.f32);
	// lfs f15,316(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f15.f64 = double(temp.f32);
	// lfs f22,328(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f22.f64 = double(temp.f32);
	// lfs f1,-24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// lfs f31,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// lfs f13,-8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f25,f8
	ctx.f25.f64 = ctx.f8.f64;
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// lfs f29,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,-20(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f10,60(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f24,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// lfs f7,328(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f7.f64 = double(temp.f32);
	// lfs f19,332(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f19.f64 = double(temp.f32);
	// stfs f19,100(r1)
	temp.f32 = float(ctx.f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f21,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f21.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f5,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,344(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f11,-4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f23,f24
	ctx.f23.f64 = ctx.f24.f64;
	// fsubs f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f4,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f29,f27,f20
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f20.f64));
	// lfs f18,352(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f18.f64 = double(temp.f32);
	// lfs f3,332(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f3.f64 = double(temp.f32);
	// lfs f19,312(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f19.f64 = double(temp.f32);
	// lfs f17,312(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,320(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f27,f31,f0
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f20,f30,f12
	ctx.f20.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
	// lfs f9,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f9.f64 = double(temp.f32);
	// stfs f15,96(r1)
	temp.f32 = float(ctx.f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f15,f24,f28
	ctx.f15.f64 = double(float(ctx.f24.f64 * ctx.f28.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f14,f23,f10
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f10.f64));
	// stfs f16,96(r1)
	temp.f32 = float(ctx.f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f27,f25,f28,f27
	ctx.f27.f64 = double(float(std::fma(ctx.f25.f64, ctx.f28.f64, -ctx.f27.f64)));
	// fmsubs f20,f8,f10,f20
	ctx.f20.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, -ctx.f20.f64)));
	// lfs f26,348(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f9,f25,f11
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// lfs f2,336(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f16,f8,f29
	ctx.f16.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmsubs f15,f31,f11,f15
	ctx.f15.f64 = double(float(std::fma(ctx.f31.f64, ctx.f11.f64, -ctx.f15.f64)));
	// fmsubs f14,f30,f29,f14
	ctx.f14.f64 = double(float(std::fma(ctx.f30.f64, ctx.f29.f64, -ctx.f14.f64)));
	// fmuls f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fmuls f22,f22,f20
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f20.f64));
	// fmsubs f9,f24,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f24.f64, ctx.f0.f64, -ctx.f9.f64)));
	// fmsubs f16,f23,f12,f16
	ctx.f16.f64 = double(float(std::fma(ctx.f23.f64, ctx.f12.f64, -ctx.f16.f64)));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f27,f21,f27
	ctx.f27.f64 = double(float(ctx.f21.f64 * ctx.f27.f64));
	// fmuls f3,f3,f20
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f20.f64));
	// fmuls f2,f2,f20
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f20.f64));
	// fmadds f7,f5,f9,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, ctx.f7.f64)));
	// fmadds f6,f6,f16,f22
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f16.f64, ctx.f22.f64)));
	// fmadds f5,f4,f9,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f4,f18,f9,f27
	ctx.f4.f64 = double(float(std::fma(ctx.f18.f64, ctx.f9.f64, ctx.f27.f64)));
	// fmadds f3,f26,f16,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f26.f64, ctx.f16.f64, ctx.f3.f64)));
	// fmadds f13,f15,f19,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f15.f64, ctx.f19.f64, ctx.f7.f64)));
	// fmadds f9,f17,f14,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f17.f64, ctx.f14.f64, ctx.f6.f64)));
	// lfs f6,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f1,f15,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f15.f64, ctx.f5.f64)));
	// fmadds f5,f6,f15,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f15.f64, ctx.f4.f64)));
	// fmuls f4,f13,f28
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f26,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,352(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f3,f26,f14,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f26.f64, ctx.f14.f64, ctx.f3.f64)));
	// fmadds f2,f27,f16,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f16.f64, ctx.f2.f64)));
	// lfs f27,320(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,392(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f13,f13,f11,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f6.f64)));
	// lfs f6,392(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmsubs f5,f0,f5,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -ctx.f4.f64)));
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f12,f3
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmadds f2,f27,f14,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f27.f64, ctx.f14.f64, ctx.f2.f64)));
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmsubs f11,f7,f28,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f28.f64, -ctx.f11.f64)));
	// fmsubs f9,f9,f29,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f29.f64, -ctx.f4.f64)));
	// fmsubs f4,f12,f2,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f1.f64)));
	// fmuls f7,f2,f29
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// fmadds f2,f24,f5,f13
	ctx.f2.f64 = double(float(std::fma(ctx.f24.f64, ctx.f5.f64, ctx.f13.f64)));
	// fmuls f13,f23,f4
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// fmsubs f1,f3,f10,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f7.f64)));
	// fmadds f12,f25,f11,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f25.f64, ctx.f11.f64, ctx.f2.f64)));
	// fmadds f11,f8,f1,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f13.f64)));
	// fadds f10,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f26.f64));
	// fmadds f9,f30,f9,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f30.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,-4(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -24);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,52(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f26.f64 = double(temp.f32);
	// lfs f4,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f25,56(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f25.f64 = double(temp.f32);
	// lfs f30,316(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-20(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,320(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,312(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f28.f64 = double(temp.f32);
	// lfs f24,332(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f24.f64 = double(temp.f32);
	// lfs f21,-16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -16);
	ctx.f21.f64 = double(temp.f32);
	// lfs f22,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f22.f64 = double(temp.f32);
	// lfs f3,-8(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f5,60(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,352(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fsubs f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f11,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f26,f31,f26
	ctx.f26.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// lfs f31,60(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f27,f27,f25
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmr f25,f8
	ctx.f25.f64 = ctx.f8.f64;
	// lfs f4,328(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// fmr f23,f1
	ctx.f23.f64 = ctx.f1.f64;
	// lfs f13,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fmr f20,f6
	ctx.f20.f64 = ctx.f6.f64;
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmsubs f7,f8,f9,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f7.f64)));
	// fmuls f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f18,f25,f27
	ctx.f18.f64 = double(float(ctx.f25.f64 * ctx.f27.f64));
	// fmuls f19,f23,f26
	ctx.f19.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// fmsubs f5,f6,f2,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, -ctx.f5.f64)));
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmsubs f3,f1,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmadds f11,f11,f5,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f5.f64, ctx.f4.f64)));
	// fsubs f21,f21,f31
	ctx.f21.f64 = double(float(ctx.f21.f64 - ctx.f31.f64));
	// lfs f31,348(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f5,f30,f3,f13
	ctx.f5.f64 = double(float(std::fma(ctx.f30.f64, ctx.f3.f64, ctx.f13.f64)));
	// fmadds f4,f29,f3,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f29.f64, ctx.f3.f64, ctx.f12.f64)));
	// fmadds f3,f3,f28,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f28.f64, ctx.f11.f64)));
	// fmadds f11,f24,f7,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f24.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmadds f7,f22,f7,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f22.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmsubs f4,f20,f26,f18
	ctx.f4.f64 = double(float(std::fma(ctx.f20.f64, ctx.f26.f64, -ctx.f18.f64)));
	// lfs f18,352(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f12,f20,f21
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f21.f64));
	// lfs f29,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f29.f64 = double(temp.f32);
	// fmsubs f28,f25,f21,f19
	ctx.f28.f64 = double(float(std::fma(ctx.f25.f64, ctx.f21.f64, -ctx.f19.f64)));
	// lfs f30,328(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f19,f2,f11
	ctx.f19.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f24,344(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f17,f7,f10
	ctx.f17.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f22,332(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f16,312(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,392(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f15.f64 = double(temp.f32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f14,392(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f14.f64 = double(temp.f32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// fmuls f13,f31,f4
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f4.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f12,f23,f27,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f23.f64, ctx.f27.f64, -ctx.f12.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f18,f18,f4
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f4.f64));
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmsubs f10,f3,f10,f19
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f19.f64)));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f9,f11,f9,f17
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, -ctx.f17.f64)));
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f7,f2,f7,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, -ctx.f5.f64)));
	// lfs f5,320(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,336(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,284(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fmuls f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmadds f4,f24,f4,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f24.f64, ctx.f4.f64, ctx.f30.f64)));
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f3,f29,f11,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f29.f64, ctx.f11.f64, ctx.f3.f64)));
	// fmadds f5,f5,f11,f18
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f18.f64)));
	// fmadds f4,f11,f16,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f16.f64, ctx.f4.f64)));
	// fmadds f10,f22,f28,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f22.f64, ctx.f28.f64, ctx.f3.f64)));
	// fmadds f3,f2,f28,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f28.f64, ctx.f5.f64)));
	// fmadds f2,f6,f7,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, ctx.f1.f64)));
	// fmuls f11,f4,f21
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f21.f64));
	// fmuls f1,f26,f10
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f10.f64));
	// fmuls f7,f3,f27
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// fmadds f6,f8,f9,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f2.f64)));
	// fmsubs f5,f4,f27,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f27.f64, -ctx.f1.f64)));
	// fmsubs f4,f26,f3,f11
	ctx.f4.f64 = double(float(std::fma(ctx.f26.f64, ctx.f3.f64, -ctx.f11.f64)));
	// fmsubs f3,f10,f21,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f21.f64, -ctx.f7.f64)));
	// fadds f2,f6,f14
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f14.f64));
	// fmuls f1,f23,f5
	ctx.f1.f64 = double(float(ctx.f23.f64 * ctx.f5.f64));
	// fmadds f11,f20,f4,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f20.f64, ctx.f4.f64, ctx.f1.f64)));
	// fmadds f10,f25,f3,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f25.f64, ctx.f3.f64, ctx.f11.f64)));
	// fadds f9,f10,f15
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f15.f64));
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f4,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmr f10,f2
	ctx.f10.f64 = ctx.f2.f64;
	// fmuls f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f5,316(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f30,f6,f9
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f8,328(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f29,f9,f4
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f7,332(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f28,f9,f10
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f9,320(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f1,f13,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f26,312(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,352(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f25.f64 = double(temp.f32);
	// fmsubs f3,f13,f2,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f3.f64)));
	// lfs f2,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f10,f12,f6,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f11.f64)));
	// lfs f24,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f24.f64 = double(temp.f32);
	// fmsubs f1,f4,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, -ctx.f1.f64)));
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// stfs f30,208(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stfs f29,212(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r19,r1,240
	ctx.r19.s64 = ctx.r1.s64 + 240;
	// stfs f28,216(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fmuls f6,f5,f10
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f4,f2,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f9,f1,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f6.f64)));
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f27,f1,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f27.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmadds f6,f25,f1,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f25.f64, ctx.f1.f64, ctx.f4.f64)));
	// fmadds f5,f3,f26,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f26.f64, ctx.f2.f64)));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f4,f3,f8,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f7.f64)));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f3,f3,f24,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f24.f64, ctx.f6.f64)));
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,8(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r4,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r4.u32);
	// stw r3,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r3.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r5.u32);
	// stw r8,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// lfs f3,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,332(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f27,348(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f27.f64 = double(temp.f32);
	// lfs f22,328(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f22.f64 = double(temp.f32);
	// lfs f25,320(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f25.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfs f23,312(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f23.f64 = double(temp.f32);
	// lfs f8,0(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f6,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f1,f8,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmuls f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f26,336(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f7,f6,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, -ctx.f7.f64)));
	// lfs f24,352(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f24.f64 = double(temp.f32);
	// lfs f8,344(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f6,f2,f10,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fmuls f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// fmuls f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmuls f2,f27,f1
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f1.f64));
	// fmadds f1,f25,f7,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f25.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f5,f26,f7,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f26.f64, ctx.f7.f64, ctx.f3.f64)));
	// fmadds f4,f24,f7,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f24.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f3,f6,f23,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f23.f64, ctx.f1.f64)));
	// stfs f3,272(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f2,f6,f22,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f22.f64, ctx.f5.f64)));
	// stfs f2,276(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmadds f1,f8,f6,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f4.f64)));
	// stfs f1,280(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,160(r11)
	REX_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r3,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r3.u32);
	// stw r4,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r4.u32);
	// stw r5,168(r11)
	REX_STORE_U32(ctx.r11.u32 + 168, ctx.r5.u32);
	// lfs f8,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmsubs f3,f12,f8,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f4.f64)));
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,316(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f2,332(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f27,f12,f7
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f22,320(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f8,f0,f7,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, -ctx.f8.f64)));
	// lfs f26,352(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f25,312(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f7,f2,f3
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f24,328(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// lfs f23,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f23.f64 = double(temp.f32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmsubs f2,f13,f5,f27
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f27.f64)));
	// fmadds f1,f22,f8,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f22.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f7,f4,f8,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f7.f64)));
	// fmadds f6,f26,f8,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f26.f64, ctx.f8.f64, ctx.f3.f64)));
	// fmadds f5,f2,f25,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f25.f64, ctx.f1.f64)));
	// stfs f5,256(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fmadds f4,f24,f2,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f24.f64, ctx.f2.f64, ctx.f7.f64)));
	// stfs f4,260(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmadds f3,f2,f23,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f23.f64, ctx.f6.f64)));
	// stfs f3,264(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lwz r18,4(r6)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,0(r6)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r17,8(r6)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r18,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r18.u32);
	// stw r28,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// stw r17,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r17.u32);
	// stw r6,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// lfs f25,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f24,316(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f23,f12,f25
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// lfs f22,332(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,348(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f21.f64 = double(temp.f32);
	// lfs f8,320(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,344(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// lfs f27,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f13,f27
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmsubs f12,f12,f27,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f27.f64, -ctx.f6.f64)));
	// lfs f2,352(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f6,f0,f25,f26
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f25.f64, -ctx.f26.f64)));
	// lfs f1,336(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f0,f13,f7,f23
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f23.f64)));
	// lfs f5,312(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,328(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f24,f12
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f12.f64));
	// fmuls f7,f22,f12
	ctx.f7.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// fmuls f12,f21,f12
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f12.f64));
	// fmadds f13,f8,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f13.f64)));
	// fmadds f2,f2,f6,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f12.f64)));
	// fmadds f12,f1,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f7.f64)));
	// fmadds f7,f0,f5,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f13.f64)));
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fmadds f8,f0,f4,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f2.f64)));
	// stfs f8,248(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmadds f6,f0,f3,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f12.f64)));
	// stfs f6,244(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lwz r28,4(r19)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r19.u32 + 4);
	// stw r28,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r28.u32);
	// lwz r6,8(r19)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r28,12(r19)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r19,0(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// stw r28,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r28.u32);
	// stw r19,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r19.u32);
	// stw r6,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r6.u32);
	// lfs f2,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// lfs f3,336(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f1,f2,f9,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f4.f64)));
	// lfs f0,328(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f13.f64)));
	// lfs f7,332(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f4,348(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f6,320(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// lfs f27,352(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,312(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// lfs f26,344(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f26.f64 = double(temp.f32);
	// fmsubs f1,f5,f10,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, -ctx.f12.f64)));
	// fmadds f12,f6,f13,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f8,f3,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f7,f27,f13,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f27.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f6,f1,f2,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f12.f64)));
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f5,f1,f0,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f4,f1,f26,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f26.f64, ctx.f7.f64)));
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r28,8(r7)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r6,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// stw r28,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r28.u32);
	// stw r7,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lfs f26,336(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,320(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f27.f64 = double(temp.f32);
	// lfs f12,348(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,332(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f4,344(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f2,f1,f9,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f2.f64)));
	// lfs f7,352(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f6,316(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f6.f64 = double(temp.f32);
	// fmsubs f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f0.f64)));
	// lfs f1,328(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f1.f64 = double(temp.f32);
	// lfs f25,312(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmsubs f13,f3,f10,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f8.f64)));
	// fmuls f10,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f11,f6,f2
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmadds f9,f7,f0,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f7,f26,f0,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f26.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f8,f27,f0,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f27.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f6,f13,f4,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, ctx.f9.f64)));
	// stfs f6,200(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmadds f4,f13,f1,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f7.f64)));
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fmadds f5,f13,f25,f8
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f25.f64, ctx.f8.f64)));
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r6,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// stw r8,136(r11)
	REX_STORE_U32(ctx.r11.u32 + 136, ctx.r8.u32);
	// bl 0x82108858
	ctx.lr = 0x8224A3B4;
	sub_82108858(ctx, base);
	// fneg f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f2,f29
	ctx.f2.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// stfs f3,224(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fneg f1,f28
	ctx.f1.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// stfs f2,228(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82108858
	ctx.lr = 0x8224A3E0;
	sub_82108858(ctx, base);
	// lfs f24,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f24.f64 = double(temp.f32);
loc_8224A3E4:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r29,r29,120
	ctx.r29.s64 = ctx.r29.s64 + 120;
	// bne 0x8224980c
	if (!ctx.cr0.eq) goto loc_8224980C;
	// stw r25,10060(r20)
	REX_STORE_U32(ctx.r20.u32 + 10060, ctx.r25.u32);
	// stw r24,9256(r21)
	REX_STORE_U32(ctx.r21.u32 + 9256, ctx.r24.u32);
loc_8224A3F8:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x825d742c
	ctx.lr = 0x8224A404;
	__restfpr_14(ctx, base);
	// b 0x825d611c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A3500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x822A3508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r29,r11,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822a3570
	if (ctx.cr0.eq) goto loc_822A3570;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822A3538:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822a3550
	if (!ctx.cr6.gt) goto loc_822A3550;
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// b 0x822a3558
	goto loc_822A3558;
loc_822A3550:
	// bge cr6,0x822a3568
	if (!ctx.cr6.lt) goto loc_822A3568;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_822A3558:
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r29,r10,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// blt cr6,0x822a3538
	if (ctx.cr6.lt) goto loc_822A3538;
loc_822A3568:
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822a3688
	if (ctx.cr6.lt) goto loc_822A3688;
loc_822A3570:
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822a3624
	if (!ctx.cr6.eq) goto loc_822A3624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x822a3594
	if (!ctx.cr6.eq) goto loc_822A3594;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A3594:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8226a7f8
	ctx.lr = 0x822A35A0;
	sub_8226A7F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822a35f4
	if (ctx.cr0.eq) goto loc_822A35F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d6e10
	ctx.lr = 0x822A35BC;
	sub_825D6E10(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8226a890
	ctx.lr = 0x822A35C8;
	sub_8226A890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x822a35e0
	if (!ctx.cr6.eq) goto loc_822A35E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A35E0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8226a7f8
	ctx.lr = 0x822A35EC;
	sub_8226A7F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822a3600
	if (!ctx.cr0.eq) goto loc_822A3600;
loc_822A35F4:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x822a3694
	goto loc_822A3694;
loc_822A3600:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d6e10
	ctx.lr = 0x822A3614;
	sub_825D6E10(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8226a890
	ctx.lr = 0x822A3620;
	sub_8226A890(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_822A3624:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x822a3664
	if (!ctx.cr6.gt) goto loc_822A3664;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r29.u64;
loc_822A3638:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x822a3638
	if (!ctx.cr0.eq) goto loc_822A3638;
loc_822A3664:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822A3688:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822a3694
	if (ctx.cr6.eq) goto loc_822A3694;
	// stw r29,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_822A3694:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8226a890
	ctx.lr = 0x822A36A0;
	sub_8226A890(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B0F50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d0
	ctx.lr = 0x822B0F58;
	__savegprlr_18(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822b1224
	if (ctx.cr6.eq) goto loc_822B1224;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x822b0fb0
	if (!ctx.cr6.eq) goto loc_822B0FB0;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b0fb0
	if (ctx.cr6.eq) goto loc_822B0FB0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// addi r20,r1,100
	ctx.r20.s64 = ctx.r1.s64 + 100;
	// li r23,1
	ctx.r23.s64 = 1;
loc_822B0FB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822b11f0
	if (!ctx.cr6.eq) goto loc_822B11F0;
	// lwz r22,332(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822b11f0
	if (ctx.cr6.eq) goto loc_822B11F0;
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822b11f0
	if (!ctx.cr6.eq) goto loc_822B11F0;
loc_822B0FD0:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,18
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 18, ctx.xer);
	// bne cr6,0x822b1048
	if (!ctx.cr6.eq) goto loc_822B1048;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,24(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// beq cr6,0x822b1044
	if (ctx.cr6.eq) goto loc_822B1044;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82298fa8
	ctx.lr = 0x822B1010;
	sub_82298FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822b1048
	if (ctx.cr0.lt) goto loc_822B1048;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b1030
	if (!ctx.cr6.eq) goto loc_822B1030;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x822b1048
	goto loc_822B1048;
loc_822B1030:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822b1048
	if (!ctx.cr6.eq) goto loc_822B1048;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x822b1048
	goto loc_822B1048;
loc_822B1044:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_822B1048:
	// lwz r22,12(r22)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822b106c
	if (!ctx.cr6.eq) goto loc_822B106C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bne cr6,0x822b1064
	if (!ctx.cr6.eq) goto loc_822B1064;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_822B1064:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822b11e8
	if (ctx.cr6.eq) goto loc_822B11E8;
loc_822B106C:
	// lwz r3,8(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822b108c
	if (!ctx.cr6.lt) goto loc_822B108C;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822b1090
	goto loc_822B1090;
loc_822B108C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_822B1090:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822b1244
	if (ctx.cr6.eq) goto loc_822B1244;
	// bl 0x82310750
	ctx.lr = 0x822B109C;
	sub_82310750(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822b10c0
	if (!ctx.cr6.lt) goto loc_822B10C0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822b10c4
	goto loc_822B10C4;
loc_822B10C0:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_822B10C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822b1250
	if (ctx.cr6.eq) goto loc_822B1250;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b1140
	if (!ctx.cr0.eq) goto loc_822B1140;
	// ori r11,r11,2112
	ctx.r11.u64 = ctx.r11.u64 | 2112;
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// beq 0x822b11e4
	if (ctx.cr0.eq) goto loc_822B11E4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b11e4
	if (!ctx.cr0.eq) goto loc_822B11E4;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1114
	if (ctx.cr0.eq) goto loc_822B1114;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b1114
	if (ctx.cr0.eq) goto loc_822B1114;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_822B1114:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b11e4
	if (!ctx.cr0.eq) goto loc_822B11E4;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,112(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822b11e4
	if (ctx.cr0.eq) goto loc_822B11E4;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// b 0x822b11e4
	goto loc_822B11E4;
loc_822B1140:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822B1148:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822b1148
	if (!ctx.cr6.eq) goto loc_822B1148;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_822B1168:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822b1168
	if (!ctx.cr6.eq) goto loc_822B1168;
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// bl 0x822dc188
	ctx.lr = 0x822B1198;
	sub_822DC188(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822b1250
	if (ctx.cr0.eq) goto loc_822B1250;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e10
	ctx.lr = 0x822B11B0;
	sub_825D6E10(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r10,59
	ctx.r10.s64 = 59;
	// li r9,32
	ctx.r9.s64 = 32;
	// stbx r10,r31,r30
	REX_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x825d6e10
	ctx.lr = 0x822B11D4;
	sub_825D6E10(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r24,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r24.u8);
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_822B11E4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_822B11E8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x822b0fd0
	if (!ctx.cr6.eq) goto loc_822B0FD0;
loc_822B11F0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ae0e8
	ctx.lr = 0x822B121C;
	sub_822AE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822b123c
	if (ctx.cr0.lt) goto loc_822B123C;
loc_822B1224:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b1238
	if (ctx.cr6.eq) goto loc_822B1238;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822B1238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B123C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6120
	__restgprlr_18(ctx, base);
	return;
loc_822B1244:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822b123c
	goto loc_822B123C;
loc_822B1250:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822b123c
	goto loc_822B123C;
}

DEFINE_REX_FUNC(sub_822CD0E8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x822CD0F0;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,96(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,32(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x822cd1cc
	goto loc_822CD1CC;
loc_822CD114:
	// lwz r7,104(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822cd1b0
	if (!ctx.cr6.lt) goto loc_822CD1B0;
loc_822CD138:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r31,r6,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// lhz r27,2(r11)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// andi. r4,r6,3855
	ctx.r4.u64 = ctx.r6.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r26,2(r10)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// andi. r6,r28,3855
	ctx.r6.u64 = ctx.r28.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r5,r28,0,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0;
	// andi. r4,r27,3855
	ctx.r4.u64 = ctx.r27.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r27,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0;
	// andi. r4,r26,3855
	ctx.r4.u64 = ctx.r26.u64 & 3855;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r26,0,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xF0;
	// addi r6,r6,514
	ctx.r6.s64 = ctx.r6.s64 + 514;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// rlwinm r6,r6,30,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFF;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// rlwinm r6,r6,0,28,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rlwinm r5,r5,30,24,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xF0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822cd138
	if (ctx.cr6.lt) goto loc_822CD138;
loc_822CD1B0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_822CD1CC:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822cd114
	if (ctx.cr6.lt) goto loc_822CD114;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D2930) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x822D2938;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x825d7418
	ctx.lr = 0x822D2940;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d296c
	if (ctx.cr6.eq) goto loc_822D296C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82461610
	ctx.lr = 0x822D2968;
	sub_82461610(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822D296C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d2988
	if (ctx.cr6.eq) goto loc_822D2988;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d12e8
	ctx.lr = 0x822D2984;
	sub_822D12E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822D2988:
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
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
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
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r6
	ctx.r26.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x822d29f8
	if (!ctx.cr0.eq) goto loc_822D29F8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x822d2a00
	goto loc_822D2A00;
loc_822D29F8:
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_822D2A00:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2a18
	if (ctx.cr6.eq) goto loc_822D2A18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d18b0
	ctx.lr = 0x822D2A18;
	sub_822D18B0(ctx, base);
loc_822D2A18:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d2d98
	if (!ctx.cr6.gt) goto loc_822D2D98;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r7,r30,r29
	ctx.r7.u64 = ctx.r29.u64 - ctx.r30.u64;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r30,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfd f11,-312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + -312);
	// lfs f12,9872(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9872);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-320(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-324(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-296(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -296);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,-304(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -304);
	ctx.f5.f64 = double(temp.f32);
loc_822D2A7C:
	// lfs f9,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r27,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xC;
	// lfs f8,-4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fadds f4,f9,f29
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f28.f64));
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lfsx f3,r11,r25
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f3.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmuls f8,f7,f5
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f6,f4,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fadds f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// fctiwz f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f4,f2
	ctx.f4.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fctiwz f4,f1
	ctx.f4.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// fctiwz f4,f3
	ctx.f4.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x822d2ca8
	if (ctx.cr6.eq) goto loc_822D2CA8;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// extsw r24,r3
	ctx.r24.s64 = ctx.r3.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r24,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r24.u64);
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f2,120(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// extsw r24,r6
	ctx.r24.s64 = ctx.r6.s32;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// std r24,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r24.u64);
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f4,f8,f0,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f4,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f8,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fcfid f4,f2
	ctx.f4.f64 = double(ctx.f2.s64);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f8,f12,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f3.f64)));
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f3,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f3,f7,f0,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfs f3,20(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f4,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// fmuls f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f4,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f7,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f4,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// frsp f31,f8
	ctx.f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f6,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// frsp f30,f7
	ctx.f30.f64 = double(float(ctx.f7.f64));
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f7
	ctx.f8.f64 = double(ctx.f7.s64);
	// lfs f7,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f6,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmul f7,f6,f11
	ctx.f7.f64 = ctx.f6.f64 * ctx.f11.f64;
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f7
	ctx.f29.f64 = double(float(ctx.f7.f64));
	// fmadds f8,f9,f0,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f8,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// frsp f28,f7
	ctx.f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
loc_822D2CA8:
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x822d2cb8
	if (ctx.cr6.lt) goto loc_822D2CB8;
	// li r11,31
	ctx.r11.s64 = 31;
loc_822D2CB8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d2cd0
	if (!ctx.cr6.gt) goto loc_822D2CD0;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x822d2cd4
	if (ctx.cr6.lt) goto loc_822D2CD4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x822d2cd4
	goto loc_822D2CD4;
loc_822D2CD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D2CD4:
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x822d2ce4
	if (ctx.cr6.lt) goto loc_822D2CE4;
	// li r11,31
	ctx.r11.s64 = 31;
loc_822D2CE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d2cfc
	if (!ctx.cr6.gt) goto loc_822D2CFC;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// blt cr6,0x822d2d00
	if (ctx.cr6.lt) goto loc_822D2D00;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x822d2d00
	goto loc_822D2D00;
loc_822D2CFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822D2D00:
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x822d2d10
	if (ctx.cr6.lt) goto loc_822D2D10;
	// li r11,31
	ctx.r11.s64 = 31;
loc_822D2D10:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d2d28
	if (!ctx.cr6.gt) goto loc_822D2D28;
	// cmpwi cr6,r5,31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 31, ctx.xer);
	// blt cr6,0x822d2d2c
	if (ctx.cr6.lt) goto loc_822D2D2C;
	// li r5,31
	ctx.r5.s64 = 31;
	// b 0x822d2d2c
	goto loc_822D2D2C;
loc_822D2D28:
	// li r5,0
	ctx.r5.s64 = 0;
loc_822D2D2C:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x822d2d3c
	if (ctx.cr6.lt) goto loc_822D2D3C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D2D3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822d2d54
	if (!ctx.cr6.gt) goto loc_822D2D54;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x822d2d58
	if (ctx.cr6.lt) goto loc_822D2D58;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822d2d58
	goto loc_822D2D58;
loc_822D2D54:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822D2D58:
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// add r9,r29,r9
	ctx.r9.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r29,r8
	ctx.r8.u64 = ctx.r29.u64 + ctx.r8.u64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// sth r11,0(r26)
	REX_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
	// add r26,r28,r26
	ctx.r26.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d2a7c
	if (ctx.cr6.lt) goto loc_822D2A7C;
loc_822D2D98:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x825d7464
	ctx.lr = 0x822D2DA4;
	__restfpr_28(ctx, base);
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EA478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x822EA480;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ead94
	if (!ctx.cr6.eq) goto loc_822EAD94;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ea4e4
	if (ctx.cr6.eq) goto loc_822EA4E4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822EA4B8:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea518
	if (ctx.cr6.eq) goto loc_822EA518;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// bdnz 0x822ea4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822EA4B8;
loc_822EA4E4:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r4,98
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 98, ctx.xer);
	// bgt cr6,0x822ead2c
	if (ctx.cr6.gt) goto loc_822EAD2C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,11392
	ctx.r12.s64 = ctx.r12.s64 + 11392;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32209
	ctx.r12.s64 = -2110849024;
	// addi r12,r12,-23272
	ctx.r12.s64 = ctx.r12.s64 + -23272;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_822EA62C;
	case 1:
		goto loc_822EA53C;
	case 2:
		goto loc_822EA53C;
	case 3:
		goto loc_822EA544;
	case 4:
		goto loc_822EA53C;
	case 5:
		goto loc_822EA53C;
	case 6:
		goto loc_822EA558;
	case 7:
		goto loc_822EA62C;
	case 8:
		goto loc_822EA614;
	case 9:
		goto loc_822EA634;
	case 10:
		goto loc_822EA648;
	case 11:
		goto loc_822EA53C;
	case 12:
		goto loc_822EA654;
	case 13:
		goto loc_822EA53C;
	case 14:
		goto loc_822EA668;
	case 15:
		goto loc_822EA678;
	case 16:
		goto loc_822EA678;
	case 17:
		goto loc_822EA678;
	case 18:
		goto loc_822EA678;
	case 19:
		goto loc_822EA678;
	case 20:
		goto loc_822EA678;
	case 21:
		goto loc_822EA678;
	case 22:
		goto loc_822EA678;
	case 23:
		goto loc_822EA678;
	case 24:
		goto loc_822EA6CC;
	case 25:
		goto loc_822EA6CC;
	case 26:
		goto loc_822EA708;
	case 27:
		goto loc_822EA718;
	case 28:
		goto loc_822EA728;
	case 29:
		goto loc_822EA738;
	case 30:
		goto loc_822EA750;
	case 31:
		goto loc_822EA678;
	case 32:
		goto loc_822EA780;
	case 33:
		goto loc_822EA678;
	case 34:
		goto loc_822EA780;
	case 35:
		goto loc_822EA678;
	case 36:
		goto loc_822EA708;
	case 37:
		goto loc_822EA728;
	case 38:
		goto loc_822EA750;
	case 39:
		goto loc_822EA6CC;
	case 40:
		goto loc_822EA760;
	case 41:
		goto loc_822EA7F0;
	case 42:
		goto loc_822EA81C;
	case 43:
		goto loc_822EA844;
	case 44:
		goto loc_822EA860;
	case 45:
		goto loc_822EA8E8;
	case 46:
		goto loc_822EA53C;
	case 47:
		goto loc_822EA90C;
	case 48:
		goto loc_822EA53C;
	case 49:
		goto loc_822EA53C;
	case 50:
		goto loc_822EA53C;
	case 51:
		goto loc_822EA954;
	case 52:
		goto loc_822EA53C;
	case 53:
		goto loc_822EA9A4;
	case 54:
		goto loc_822EA9D0;
	case 55:
		goto loc_822EA9FC;
	case 56:
		goto loc_822EA53C;
	case 57:
		goto loc_822EAA44;
	case 58:
		goto loc_822EAD2C;
	case 59:
		goto loc_822EAD2C;
	case 60:
		goto loc_822EAA94;
	case 61:
		goto loc_822EAAAC;
	case 62:
		goto loc_822EA53C;
	case 63:
		goto loc_822EAAB4;
	case 64:
		goto loc_822EAB14;
	case 65:
		goto loc_822EAB44;
	case 66:
		goto loc_822EAB64;
	case 67:
		goto loc_822EABA4;
	case 68:
		goto loc_822EA53C;
	case 69:
		goto loc_822EA53C;
	case 70:
		goto loc_822EABDC;
	case 71:
		goto loc_822EABF0;
	case 72:
		goto loc_822EABF0;
	case 73:
		goto loc_822EAC18;
	case 74:
		goto loc_822EA53C;
	case 75:
		goto loc_822EA53C;
	case 76:
		goto loc_822EAC40;
	case 77:
		goto loc_822EACCC;
	case 78:
		goto loc_822EACCC;
	case 79:
		goto loc_822EACCC;
	case 80:
		goto loc_822EACCC;
	case 81:
		goto loc_822EACCC;
	case 82:
		goto loc_822EACCC;
	case 83:
		goto loc_822EACCC;
	case 84:
		goto loc_822EACCC;
	case 85:
		goto loc_822EACCC;
	case 86:
		goto loc_822EACCC;
	case 87:
		goto loc_822EACCC;
	case 88:
		goto loc_822EACCC;
	case 89:
		goto loc_822EACCC;
	case 90:
		goto loc_822EAD2C;
	case 91:
		goto loc_822EACCC;
	case 92:
		goto loc_822EACCC;
	case 93:
		goto loc_822EACCC;
	case 94:
		goto loc_822EACCC;
	case 95:
		goto loc_822EACCC;
	case 96:
		goto loc_822EACFC;
	case 97:
		goto loc_822EACFC;
	case 98:
		goto loc_822EACFC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_822EA518:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23436
	ctx.r6.s64 = ctx.r11.s64 + -23436;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822a3890
	ctx.lr = 0x822EA530;
	sub_822A3890(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// b 0x822ead94
	goto loc_822EAD94;
loc_822EA53C:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA544:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822dc430
	ctx.lr = 0x822EA550;
	sub_822DC430(ctx, base);
loc_822EA550:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA558:
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ead2c
	if (ctx.cr6.eq) goto loc_822EAD2C;
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea588
	if (ctx.cr6.eq) goto loc_822EA588;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,22632
	ctx.r4.s64 = ctx.r11.s64 + 22632;
	// bl 0x822e3948
	ctx.lr = 0x822EA584;
	sub_822E3948(ctx, base);
	// b 0x822ea5f0
	goto loc_822EA5F0;
loc_822EA588:
	// lwz r11,84(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ea5ac
	if (!ctx.cr6.eq) goto loc_822EA5AC;
	// stw r27,84(r29)
	REX_STORE_U32(ctx.r29.u32 + 84, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e7b40
	ctx.lr = 0x822EA5A0;
	sub_822E7B40(ctx, base);
	// lwz r4,96(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r3,312(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 312);
	// bl 0x82280be8
	ctx.lr = 0x822EA5AC;
	sub_82280BE8(ctx, base);
loc_822EA5AC:
	// lwz r3,128(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r30,312(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA5C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82280bf0
	ctx.lr = 0x822EA5F0;
	sub_82280BF0(ctx, base);
loc_822EA5F0:
	// lwz r3,128(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ead2c
	if (ctx.cr6.eq) goto loc_822EAD2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,128(r29)
	REX_STORE_U32(ctx.r29.u32 + 128, ctx.r28.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA614:
	// lwz r11,284(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ea62c
	if (!ctx.cr6.eq) goto loc_822EA62C;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,284(r29)
	REX_STORE_U32(ctx.r29.u32 + 284, ctx.r11.u32);
loc_822EA62C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA634:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_822EA638:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822ea378
	ctx.lr = 0x822EA644;
	sub_822EA378(ctx, base);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA648:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r27,80(r4)
	REX_STORE_U32(ctx.r4.u32 + 80, ctx.r27.u32);
	// b 0x822ea638
	goto loc_822EA638;
loc_822EA654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822e6710
	ctx.lr = 0x822EA664;
	sub_822E6710(ctx, base);
	// b 0x822ea550
	goto loc_822EA550;
loc_822EA668:
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA678:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x822ea698
	if (!ctx.cr6.gt) goto loc_822EA698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82360ff0
	ctx.lr = 0x822EA694;
	sub_82360FF0(ctx, base);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_822EA698:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// ble cr6,0x822ead2c
	if (!ctx.cr6.gt) goto loc_822EAD2C;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
loc_822EA6AC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x822ea6ac
	if (!ctx.cr0.eq) goto loc_822EA6AC;
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA6CC:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x822ead2c
	if (!ctx.cr6.gt) goto loc_822EAD2C;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
loc_822EA6E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x822ea6e8
	if (!ctx.cr0.eq) goto loc_822EA6E8;
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA708:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA718:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA728:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA738:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_822EA744:
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_822EA748:
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA750:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x822ea744
	goto loc_822EA744;
loc_822EA760:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA780:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// ble cr6,0x822ea7a0
	if (!ctx.cr6.gt) goto loc_822EA7A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82360ff0
	ctx.lr = 0x822EA79C;
	sub_82360FF0(ctx, base);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
loc_822EA7A0:
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// ble cr6,0x822ea7d4
	if (!ctx.cr6.gt) goto loc_822EA7D4;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_822EA7B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x822ea7b8
	if (!ctx.cr0.eq) goto loc_822EA7B8;
loc_822EA7D4:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// b 0x822ea748
	goto loc_822EA748;
loc_822EA7F0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ead2c
	if (ctx.cr6.eq) goto loc_822EAD2C;
loc_822EA800:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ea800
	if (!ctx.cr6.eq) goto loc_822EA800;
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA81C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x822EA824;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea62c
	if (ctx.cr0.eq) goto loc_822EA62C;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
loc_822EA834:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,22624
	ctx.r6.s64 = ctx.r11.s64 + 22624;
loc_822EA83C:
	// bl 0x822dc498
	ctx.lr = 0x822EA840;
	sub_822DC498(ctx, base);
	// b 0x822ea550
	goto loc_822EA550;
loc_822EA844:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x822EA84C;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea62c
	if (ctx.cr0.eq) goto loc_822EA62C;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x822ea834
	goto loc_822EA834;
loc_822EA860:
	// lwz r10,72(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x822ea8c4
	if (ctx.cr6.eq) goto loc_822EA8C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822ea8c4
	if (!ctx.cr6.eq) goto loc_822EA8C4;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e15f0
	ctx.lr = 0x822EA894;
	sub_822E15F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ea8c4
	if (!ctx.cr0.eq) goto loc_822EA8C4;
	// lwz r3,76(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA8B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ea8c4
	if (!ctx.cr0.eq) goto loc_822EA8C4;
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_822EA8C4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x822EA8CC;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea62c
	if (ctx.cr0.eq) goto loc_822EA62C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,22616
	ctx.r6.s64 = ctx.r11.s64 + 22616;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x822ea83c
	goto loc_822EA83C;
loc_822EA8E8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x822EA8F0;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea62c
	if (ctx.cr0.eq) goto loc_822EA62C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r11,22616
	ctx.r6.s64 = ctx.r11.s64 + 22616;
	// b 0x822ea83c
	goto loc_822EA83C;
loc_822EA90C:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ead2c
	if (ctx.cr6.eq) goto loc_822EAD2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822ead2c
	if (!ctx.cr6.eq) goto loc_822EAD2C;
	// lwz r3,76(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ead2c
	if (!ctx.cr0.eq) goto loc_822EAD2C;
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA954:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ea98c
	if (ctx.cr6.eq) goto loc_822EA98C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-8928
	ctx.r6.s64 = ctx.r11.s64 + -8928;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822a3890
	ctx.lr = 0x822EA97C;
	sub_822A3890(ctx, base);
	// li r11,2257
	ctx.r11.s64 = 2257;
	// stw r27,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA98C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822e1cf8
	ctx.lr = 0x822EA99C;
	sub_822E1CF8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA9A4:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea9c4
	if (ctx.cr6.eq) goto loc_822EA9C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,-8968
	ctx.r6.s64 = ctx.r11.s64 + -8968;
	// b 0x822eab00
	goto loc_822EAB00;
loc_822EA9C4:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_822EA9C8:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EA9D0:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ea9f4
	if (ctx.cr6.eq) goto loc_822EA9F4;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822ead2c
	if (!ctx.cr6.eq) goto loc_822EAD2C;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x822ea9c8
	goto loc_822EA9C8;
loc_822EA9F4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x822ea9c8
	goto loc_822EA9C8;
loc_822EA9FC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822eaa20
	if (ctx.cr6.eq) goto loc_822EAA20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,-9048
	ctx.r6.s64 = ctx.r11.s64 + -9048;
	// b 0x822eab00
	goto loc_822EAB00;
loc_822EAA20:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822eaa3c
	if (ctx.cr6.eq) goto loc_822EAA3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,-9096
	ctx.r6.s64 = ctx.r11.s64 + -9096;
	// b 0x822eab00
	goto loc_822EAB00;
loc_822EAA3C:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x822ea9c8
	goto loc_822EA9C8;
loc_822EAA44:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822eaa7c
	if (ctx.cr6.eq) goto loc_822EAA7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-9184
	ctx.r6.s64 = ctx.r11.s64 + -9184;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822a3890
	ctx.lr = 0x822EAA6C;
	sub_822A3890(ctx, base);
	// li r11,228
	ctx.r11.s64 = 228;
	// stw r27,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EAA7C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822e1ef8
	ctx.lr = 0x822EAA8C;
	sub_822E1EF8(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EAA94:
	// li r5,0
	ctx.r5.s64 = 0;
loc_822EAA98:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822e6108
	ctx.lr = 0x822EAAA8;
	sub_822E6108(ctx, base);
	// b 0x822ead14
	goto loc_822EAD14;
loc_822EAAAC:
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x822eaa98
	goto loc_822EAA98;
loc_822EAAB4:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x822eaae8
	if (!ctx.cr6.eq) goto loc_822EAAE8;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r28,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EAAE8:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ead2c
	if (ctx.cr6.eq) goto loc_822EAD2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,-9264
	ctx.r6.s64 = ctx.r11.s64 + -9264;
loc_822EAB00:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822a3890
	ctx.lr = 0x822EAB0C;
	sub_822A3890(ctx, base);
	// stw r27,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EAB14:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822dc2d0
	ctx.lr = 0x822EAB1C;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ead1c
	if (ctx.cr0.eq) goto loc_822EAD1C;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
loc_822EAB2C:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82361218
	ctx.lr = 0x822EAB40;
	sub_82361218(ctx, base);
	// b 0x822ead14
	goto loc_822EAD14;
loc_822EAB44:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822dc2d0
	ctx.lr = 0x822EAB4C;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ead1c
	if (ctx.cr0.eq) goto loc_822EAD1C;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822eab2c
	goto loc_822EAB2C;
loc_822EAB64:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822dc2d0
	ctx.lr = 0x822EAB6C;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eab84
	if (ctx.cr0.eq) goto loc_822EAB84;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822dc8f0
	ctx.lr = 0x822EAB7C;
	sub_822DC8F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822eab88
	goto loc_822EAB88;
loc_822EAB84:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822EAB88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e1a78
	ctx.lr = 0x822EAB94;
	sub_822E1A78(ctx, base);
	// stw r27,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_822EAB98:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EABA4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822dc2d0
	ctx.lr = 0x822EABAC;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eabc4
	if (ctx.cr0.eq) goto loc_822EABC4;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822dc8f0
	ctx.lr = 0x822EABBC;
	sub_822DC8F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822eabc8
	goto loc_822EABC8;
loc_822EABC4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822EABC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e1a78
	ctx.lr = 0x822EABD4;
	sub_822E1A78(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x822eab98
	goto loc_822EAB98;
loc_822EABDC:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EABF0:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_822EAC10:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EAC18:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x822eac10
	goto loc_822EAC10;
loc_822EAC40:
	// lwz r31,128(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822eac64
	if (!ctx.cr6.eq) goto loc_822EAC64;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// b 0x822eacbc
	goto loc_822EACBC;
loc_822EAC64:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eac78
	if (!ctx.cr6.eq) goto loc_822EAC78;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x822eacc0
	goto loc_822EACC0;
loc_822EAC78:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eacb8
	if (!ctx.cr6.eq) goto loc_822EACB8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eac98
	if (!ctx.cr6.eq) goto loc_822EAC98;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x822eacbc
	goto loc_822EACBC;
loc_822EAC98:
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822eacb0
	if (ctx.cr6.eq) goto loc_822EACB0;
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822eacb8
	if (!ctx.cr6.eq) goto loc_822EACB8;
loc_822EACB0:
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x822eacc0
	goto loc_822EACC0;
loc_822EACB8:
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
loc_822EACBC:
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_822EACC0:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x822ead2c
	goto loc_822EAD2C;
loc_822EACCC:
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822dc2d0
	ctx.lr = 0x822EACD4;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ead1c
	if (ctx.cr0.eq) goto loc_822EAD1C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// lwz r9,120(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r8,116(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r7,112(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// lwz r6,108(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// lwz r5,104(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x82360f10
	ctx.lr = 0x822EACF8;
	sub_82360F10(ctx, base);
	// b 0x822ead14
	goto loc_822EAD14;
loc_822EACFC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822dc2d0
	ctx.lr = 0x822EAD04;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ead1c
	if (ctx.cr0.eq) goto loc_822EAD1C;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822dc8f0
	ctx.lr = 0x822EAD14;
	sub_822DC8F0(ctx, base);
loc_822EAD14:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822ead20
	goto loc_822EAD20;
loc_822EAD1C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822EAD20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e1a78
	ctx.lr = 0x822EAD2C;
	sub_822E1A78(ctx, base);
loc_822EAD2C:
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822ead94
	if (!ctx.cr6.eq) goto loc_822EAD94;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x822EAD40;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ead60
	if (ctx.cr0.eq) goto loc_822EAD60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,-23488
	ctx.r6.s64 = ctx.r11.s64 + -23488;
	// bl 0x822dc498
	ctx.lr = 0x822EAD5C;
	sub_822DC498(ctx, base);
	// b 0x822ead64
	goto loc_822EAD64;
loc_822EAD60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_822EAD64:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ead90
	if (!ctx.cr6.eq) goto loc_822EAD90;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-23520
	ctx.r6.s64 = ctx.r11.s64 + -23520;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x822a3890
	ctx.lr = 0x822EAD84;
	sub_822A3890(ctx, base);
	// stw r27,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r27.u32);
	// stw r27,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r27.u32);
	// b 0x822ead94
	goto loc_822EAD94;
loc_822EAD90:
	// stw r3,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
loc_822EAD94:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232C500) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232c5e8
	if (ctx.cr6.eq) goto loc_8232C5E8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822dc2d0
	ctx.lr = 0x8232C538;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232c54c
	if (ctx.cr0.eq) goto loc_8232C54C;
	// bl 0x822dea50
	ctx.lr = 0x8232C544;
	sub_822DEA50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8232c550
	goto loc_8232C550;
loc_8232C54C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8232C550:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8232c5e8
	if (ctx.cr6.eq) goto loc_8232C5E8;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x822dc2d0
	ctx.lr = 0x8232C57C;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232c5a4
	if (ctx.cr0.eq) goto loc_8232C5A4;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822def88
	ctx.lr = 0x8232C5A0;
	sub_822DEF88(ctx, base);
	// b 0x8232c5a8
	goto loc_8232C5A8;
loc_8232C5A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232C5A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232c5e8
	if (ctx.cr6.eq) goto loc_8232C5E8;
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x8232C5BC;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232c5dc
	if (ctx.cr0.eq) goto loc_8232C5DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-4420
	ctx.r6.s64 = ctx.r11.s64 + -4420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822dc498
	ctx.lr = 0x8232C5D8;
	sub_822DC498(ctx, base);
	// b 0x8232c5e0
	goto loc_8232C5E0;
loc_8232C5DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232C5E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8232c5ec
	if (!ctx.cr6.eq) goto loc_8232C5EC;
loc_8232C5E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232C5EC:
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

DEFINE_REX_FUNC(sub_8232F748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8232ca08
	ctx.lr = 0x8232F780;
	sub_8232CA08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82331600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82331608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x82331620
	goto loc_82331620;
loc_8233161C:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_82331620:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8233161c
	if (!ctx.cr6.eq) goto loc_8233161C;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822dc2d0
	ctx.lr = 0x82331634;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82331660
	if (ctx.cr0.eq) goto loc_82331660;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822def88
	ctx.lr = 0x82331658;
	sub_822DEF88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82331664
	goto loc_82331664;
loc_82331660:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82331664:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82331674
	if (!ctx.cr6.eq) goto loc_82331674;
loc_8233166C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233174c
	goto loc_8233174C;
loc_82331674:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233169c
	if (ctx.cr6.eq) goto loc_8233169C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82331690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233166c
	if (ctx.cr0.eq) goto loc_8233166C;
loc_8233169C:
	// lwz r28,32(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233173c
	if (ctx.cr6.eq) goto loc_8233173C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,-1440
	ctx.r27.s64 = ctx.r11.s64 + -1440;
loc_823316B4:
	// lwz r31,8(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82331730
	if (ctx.cr6.eq) goto loc_82331730;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82331730
	if (!ctx.cr6.eq) goto loc_82331730;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82331730
	if (ctx.cr6.eq) goto loc_82331730;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x823316E0;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823316fc
	if (ctx.cr0.eq) goto loc_823316FC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dc498
	ctx.lr = 0x823316F8;
	sub_822DC498(ctx, base);
	// b 0x82331700
	goto loc_82331700;
loc_823316FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82331700:
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233166c
	if (ctx.cr6.eq) goto loc_8233166C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822dc410
	ctx.lr = 0x82331714;
	sub_822DC410(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233166c
	if (ctx.cr6.eq) goto loc_8233166C;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_82331730:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823316b4
	if (!ctx.cr6.eq) goto loc_823316B4;
loc_8233173C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232f3f8
	ctx.lr = 0x82331748;
	sub_8232F3F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8233174C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233FC60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x8233FC68;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,8(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r28,r9,12
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,16(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,340(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 340);
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233FCB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233fd8c
	if (ctx.cr0.lt) goto loc_8233FD8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,548(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r8,552(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233FCD0:
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// bge cr6,0x8233fd10
	if (!ctx.cr6.lt) goto loc_8233FD10;
	// lwzx r7,r11,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// stwx r7,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u32);
loc_8233FD10:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8233fcd0
	if (ctx.cr6.lt) goto loc_8233FCD0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309220
	ctx.lr = 0x8233FD58;
	sub_82309220(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82309220
	ctx.lr = 0x8233FD8C;
	sub_82309220(ctx, base);
loc_8233FD8C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82343F18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x82343F20;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// lwz r30,552(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 552);
	// lwz r14,76(r27)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r14,r30
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r30.u32, ctx.xer);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bge cr6,0x82344434
	if (!ctx.cr6.lt) goto loc_82344434;
	// rlwinm r11,r14,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r16,-1
	ctx.r16.s64 = -1;
	// addi r11,r11,13680
	ctx.r11.s64 = ctx.r11.s64 + 13680;
	// lfd f31,9568(r10)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82343F6C:
	// lwz r11,564(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 564);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r25,r11,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8234441c
	if (ctx.cr6.eq) goto loc_8234441C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234441c
	if (ctx.cr6.eq) goto loc_8234441C;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r22,r11,12
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// divwu. r19,r10,r22
	ctx.r19.u64 = uint32_t(ctx.r22.u32 ? ctx.r10.u32 / ctx.r22.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x823443a0
	if (ctx.cr0.eq) goto loc_823443A0;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// addi r23,r1,144
	ctx.r23.s64 = ctx.r1.s64 + 144;
	// rlwinm r17,r22,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_82343FB0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r16,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r16.u32);
	// stw r16,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r16.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r16,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r16.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r16,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r16.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// std r16,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r16.u64);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// std r16,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r16.u64);
	// beq cr6,0x82344120
	if (ctx.cr6.eq) goto loc_82344120;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// lwz r7,20(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82344000:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r29,20480
	ctx.r29.s64 = 1342177280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// beq cr6,0x8234403c
	if (ctx.cr6.eq) goto loc_8234403C;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8234403c
	if (!ctx.cr6.eq) goto loc_8234403C;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82344040
	goto loc_82344040;
loc_8234403C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82344040:
	// lwz r28,4(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r28,r3
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// lwz r28,4(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm. r28,r28,0,23,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r28,r5,r11
	ctx.r28.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x82344070
	if (ctx.cr0.eq) goto loc_82344070;
	// stwx r11,r28,r26
	REX_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r11.u32);
	// b 0x82344074
	goto loc_82344074;
loc_82344070:
	// stwx r8,r28,r26
	REX_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r8.u32);
loc_82344074:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82344080
	if (!ctx.cr6.eq) goto loc_82344080;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82344080:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8234408c
	if (!ctx.cr6.eq) goto loc_8234408C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8234408C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// stwx r20,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r20.u32);
	// blt cr6,0x82344000
	if (ctx.cr6.lt) goto loc_82344000;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82344120
	if (ctx.cr6.eq) goto loc_82344120;
	// cmplwi cr6,r22,1
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 1, ctx.xer);
	// bne cr6,0x82344120
	if (!ctx.cr6.eq) goto loc_82344120;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823440d0
	if (!ctx.cr6.eq) goto loc_823440D0;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82344120
	if (ctx.cr6.eq) goto loc_82344120;
loc_823440D0:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823440DC:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82344108
	if (ctx.cr6.eq) goto loc_82344108;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82344108
	if (ctx.cr6.eq) goto loc_82344108;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
loc_82344108:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x823440dc
	if (ctx.cr6.lt) goto loc_823440DC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82344388
	if (!ctx.cr6.eq) goto loc_82344388;
loc_82344120:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82343dd8
	ctx.lr = 0x82344130;
	sub_82343DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82344388
	if (!ctx.cr0.eq) goto loc_82344388;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82344478
	if (!ctx.cr6.eq) goto loc_82344478;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
loc_82344148:
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82310618
	ctx.lr = 0x82344160;
	sub_82310618(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823444c8
	if (ctx.cr6.eq) goto loc_823444C8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82344148
	if (ctx.cr6.lt) goto loc_82344148;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8230f988
	ctx.lr = 0x82344184;
	sub_8230F988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82344198
	if (ctx.cr0.eq) goto loc_82344198;
	// bl 0x8230f290
	ctx.lr = 0x82344190;
	sub_8230F290(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x8234419c
	goto loc_8234419C;
loc_82344198:
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_8234419C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x823444c8
	if (ctx.cr6.eq) goto loc_823444C8;
	// lis r4,20480
	ctx.r4.s64 = 1342177280;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8230fa20
	ctx.lr = 0x823441C0;
	sub_8230FA20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82344438
	if (ctx.cr0.lt) goto loc_82344438;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8230f2e0
	ctx.lr = 0x823441D4;
	sub_8230F2E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82344438
	if (ctx.cr0.lt) goto loc_82344438;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r26,16(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
loc_823441FC:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82344210
	if (!ctx.cr6.eq) goto loc_82344210;
	// lwz r11,1096(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1096);
	// b 0x82344214
	goto loc_82344214;
loc_82344210:
	// lwz r11,1092(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 1092);
loc_82344214:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r11,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82310618
	ctx.lr = 0x82344230;
	sub_82310618(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x823444c8
	if (ctx.cr6.eq) goto loc_823444C8;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ff98
	ctx.lr = 0x82344258;
	sub_8230FF98(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82344280
	if (!ctx.cr6.eq) goto loc_82344280;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// b 0x82344284
	goto loc_82344284;
loc_82344280:
	// stw r10,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
loc_82344284:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// blt cr6,0x823441fc
	if (ctx.cr6.lt) goto loc_823441FC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq cr6,0x8234434c
	if (ctx.cr6.eq) goto loc_8234434C;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823442FC:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r7,r5,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r7,56(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 56);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82344334
	if (ctx.cr6.eq) goto loc_82344334;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x823444a0
	if (ctx.cr6.eq) goto loc_823444A0;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823444a0
	if (!ctx.cr6.eq) goto loc_823444A0;
loc_82344334:
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x823442fc
	if (ctx.cr6.lt) goto loc_823442FC;
loc_8234434C:
	// lwz r11,552(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 552);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x823444c8
	if (!ctx.cr6.lt) goto loc_823444C8;
	// lwz r10,564(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwx r18,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r18.u32);
	// lwz r11,552(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r27)
	REX_STORE_U32(ctx.r27.u32 + 552, ctx.r11.u32);
	// bl 0x823104a8
	ctx.lr = 0x8234437C;
	sub_823104A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823444c8
	if (ctx.cr0.lt) goto loc_823444C8;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
loc_82344388:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// add r24,r17,r24
	ctx.r24.u64 = ctx.r17.u64 + ctx.r24.u64;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82343fb0
	if (ctx.cr6.lt) goto loc_82343FB0;
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_823443A0:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8230f988
	ctx.lr = 0x823443A8;
	sub_8230F988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823443bc
	if (ctx.cr0.eq) goto loc_823443BC;
	// bl 0x8230f290
	ctx.lr = 0x823443B4;
	sub_8230F290(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// b 0x823443c0
	goto loc_823443C0;
loc_823443BC:
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
loc_823443C0:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823444c8
	if (ctx.cr6.eq) goto loc_823444C8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823104a8
	ctx.lr = 0x823443D4;
	sub_823104A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823444c8
	if (ctx.cr0.lt) goto loc_823444C8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8230fd40
	ctx.lr = 0x823443E8;
	sub_8230FD40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82344450
	if (ctx.cr0.lt) goto loc_82344450;
	// lwz r11,552(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 552);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x823444c8
	if (!ctx.cr6.lt) goto loc_823444C8;
	// lwz r10,564(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r15,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r15.u32);
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// lwz r11,552(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r27)
	REX_STORE_U32(ctx.r27.u32 + 552, ctx.r11.u32);
	// stw r20,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r20.u32);
loc_8234441C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r14,r30
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r30.u32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82343f6c
	if (ctx.cr6.lt) goto loc_82343F6C;
loc_82344434:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82344438:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82344450
	if (ctx.cr6.eq) goto loc_82344450;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x822ddad0
	ctx.lr = 0x82344448;
	sub_822DDAD0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8230f9e0
	ctx.lr = 0x82344450;
	sub_8230F9E0(ctx, base);
loc_82344450:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82344468
	if (ctx.cr6.eq) goto loc_82344468;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x822ddad0
	ctx.lr = 0x82344460;
	sub_822DDAD0(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8230f9e0
	ctx.lr = 0x82344468;
	sub_8230F9E0(ctx, base);
loc_82344468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
loc_82344478:
	// lwz r11,260(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 260);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,4533
	ctx.r5.s64 = 4533;
	// addi r6,r10,9452
	ctx.r6.s64 = ctx.r10.s64 + 9452;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82321ad0
	ctx.lr = 0x82344494;
	sub_82321AD0(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82344468
	goto loc_82344468;
loc_823444A0:
	// lwz r11,260(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 260);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,4533
	ctx.r5.s64 = 4533;
	// addi r6,r10,9452
	ctx.r6.s64 = ctx.r10.s64 + 9452;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82321ad0
	ctx.lr = 0x823444BC;
	sub_82321AD0(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x82344438
	goto loc_82344438;
loc_823444C8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82344438
	goto loc_82344438;
}

DEFINE_REX_FUNC(sub_82361490) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// ble cr6,0x823614a0
	if (!ctx.cr6.gt) goto loc_823614A0;
	// li r7,4
	ctx.r7.s64 = 4;
loc_823614A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82362918) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82362a18
	if (ctx.cr6.eq) goto loc_82362A18;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82362a18
	if (!ctx.cr6.eq) goto loc_82362A18;
	// lwz r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-26004
	ctx.r11.s64 = ctx.r11.s64 + -26004;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8236294C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x82362970
	if (ctx.cr0.eq) goto loc_82362970;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236294c
	if (ctx.cr6.eq) goto loc_8236294C;
loc_82362970:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82362984
	if (!ctx.cr0.eq) goto loc_82362984;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8236297C:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82362a20
	goto loc_82362A20;
loc_82362984:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,-26036
	ctx.r11.s64 = ctx.r11.s64 + -26036;
loc_82362990:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x823629b4
	if (ctx.cr0.eq) goto loc_823629B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82362990
	if (ctx.cr6.eq) goto loc_82362990;
loc_823629B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823629c4
	if (!ctx.cr0.eq) goto loc_823629C4;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8236297c
	goto loc_8236297C;
loc_823629C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r11,-26072
	ctx.r11.s64 = ctx.r11.s64 + -26072;
loc_823629D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x823629f4
	if (ctx.cr0.eq) goto loc_823629F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823629d0
	if (ctx.cr6.eq) goto loc_823629D0;
loc_823629F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82362a04
	if (!ctx.cr0.eq) goto loc_82362A04;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8236297c
	goto loc_8236297C;
loc_82362A04:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// addi r6,r11,-26100
	ctx.r6.s64 = ctx.r11.s64 + -26100;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bl 0x8232cc18
	ctx.lr = 0x82362A18;
	sub_8232CC18(ctx, base);
loc_82362A18:
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// ori r8,r8,16389
	ctx.r8.u64 = ctx.r8.u64 | 16389;
loc_82362A20:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82366620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82366628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82365428
	ctx.lr = 0x82366638;
	sub_82365428(ctx, base);
	// li r4,216
	ctx.r4.s64 = 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365428
	ctx.lr = 0x82366644;
	sub_82365428(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
loc_8236664C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366664
	if (ctx.cr6.eq) goto loc_82366664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823654b0
	ctx.lr = 0x82366664;
	sub_823654B0(ctx, base);
loc_82366664:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8236664c
	if (ctx.cr6.lt) goto loc_8236664C;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823666d0
	if (!ctx.cr6.eq) goto loc_823666D0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
loc_82366688:
	// lwz r11,-16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823666a4
	if (ctx.cr6.eq) goto loc_823666A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365858
	ctx.lr = 0x823666A4;
	sub_82365858(ctx, base);
loc_823666A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823666c0
	if (ctx.cr6.eq) goto loc_823666C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365858
	ctx.lr = 0x823666C0;
	sub_82365858(ctx, base);
loc_823666C0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82366688
	if (ctx.cr6.lt) goto loc_82366688;
loc_823666D0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bne 0x82366734
	if (!ctx.cr0.eq) goto loc_82366734;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366734
	if (!ctx.cr6.eq) goto loc_82366734;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82366734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82366734:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,217
	ctx.r10.s64 = 217;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addic. r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82366794
	if (!ctx.cr0.eq) goto loc_82366794;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82366794
	if (!ctx.cr6.eq) goto loc_82366794;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82366794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82366794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236E568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x8236E570;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r26,448(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e5ac
	if (!ctx.cr6.eq) goto loc_8236E5AC;
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 408);
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x8236e5ac
	if (!ctx.cr6.eq) goto loc_8236E5AC;
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e5ac
	if (!ctx.cr6.eq) goto loc_8236E5AC;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e5d0
	if (ctx.cr6.eq) goto loc_8236E5D0;
loc_8236E5AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,122
	ctx.r10.s64 = 122;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236E5D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236E5D0:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236e648
	if (!ctx.cr6.gt) goto loc_8236E648;
	// addi r29,r26,20
	ctx.r29.s64 = ctx.r26.s64 + 20;
	// addi r30,r31,336
	ctx.r30.s64 = ctx.r31.s64 + 336;
loc_8236E5EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x8236da88
	ctx.lr = 0x8236E610;
	sub_8236DA88(ctx, base);
	// addi r9,r28,14
	ctx.r9.s64 = ctx.r28.s64 + 14;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236da88
	ctx.lr = 0x8236E62C;
	sub_8236DA88(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r25,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r8,332(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8236e5ec
	if (ctx.cr6.lt) goto loc_8236E5EC;
loc_8236E648:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236e6e8
	if (!ctx.cr6.gt) goto loc_8236E6E8;
	// addi r11,r26,192
	ctx.r11.s64 = ctx.r26.s64 + 192;
	// addi r8,r31,364
	ctx.r8.s64 = ctx.r31.s64 + 364;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8236E664:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r5,r9,10
	ctx.r5.s64 = ctx.r9.s64 + 10;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r26
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r26.u32);
	// stw r3,-120(r11)
	REX_STORE_U32(ctx.r11.u32 + -120, ctx.r3.u32);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// stw r4,-80(r11)
	REX_STORE_U32(ctx.r11.u32 + -80, ctx.r4.u32);
	// lwz r3,48(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e6c8
	if (ctx.cr6.eq) goto loc_8236E6C8;
	// stw r6,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r6.u32);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bgt cr6,0x8236e6c0
	if (ctx.cr6.gt) goto loc_8236E6C0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8236E6C0:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8236e6d0
	goto loc_8236E6D0;
loc_8236E6C8:
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,-40(r11)
	REX_STORE_U32(ctx.r11.u32 + -40, ctx.r25.u32);
loc_8236E6D0:
	// lwz r10,360(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236e664
	if (ctx.cr6.lt) goto loc_8236E664;
loc_8236E6E8:
	// stw r25,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r25.u32);
	// stw r25,16(r26)
	REX_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
	// stw r25,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r25.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82375F98) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82375FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,-32201
	ctx.r9.s64 = -2110324736;
	// stw r30,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// addi r8,r9,19136
	ctx.r8.s64 = ctx.r9.s64 + 19136;
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82376070
	if (ctx.cr6.gt) goto loc_82376070;
	// lis r12,-32201
	ctx.r12.s64 = -2110324736;
	// addi r12,r12,24576
	ctx.r12.s64 = ctx.r12.s64 + 24576;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8237601C;
	case 1:
		goto loc_82376038;
	case 2:
		goto loc_82376054;
	case 3:
		goto loc_8237601C;
	case 4:
		goto loc_82376038;
	case 5:
		goto loc_8237601C;
	case 6:
		goto loc_82376038;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8237601C:
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r9,r11,20240
	ctx.r9.s64 = ctx.r11.s64 + 20240;
	// addi r8,r10,-8696
	ctx.r8.s64 = ctx.r10.s64 + -8696;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// b 0x82376090
	goto loc_82376090;
loc_82376038:
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r9,r11,20240
	ctx.r9.s64 = ctx.r11.s64 + 20240;
	// addi r8,r10,-9456
	ctx.r8.s64 = ctx.r10.s64 + -9456;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// b 0x82376090
	goto loc_82376090;
loc_82376054:
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// addi r9,r11,21736
	ctx.r9.s64 = ctx.r11.s64 + 21736;
	// addi r8,r10,-13112
	ctx.r8.s64 = ctx.r10.s64 + -13112;
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// b 0x82376090
	goto loc_82376090;
loc_82376070:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82376090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82376090:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8237609C:
	// stw r9,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8237609c
	if (!ctx.cr0.eq) goto loc_8237609C;
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

DEFINE_REX_FUNC(sub_8237AD50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x8237AD58;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r24,4(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// lwz r27,32(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,28(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bge cr6,0x8237ad94
	if (!ctx.cr6.lt) goto loc_8237AD94;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// b 0x8237ad9c
	goto loc_8237AD9C;
loc_8237AD94:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// subf r23,r26,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r26.u64;
loc_8237AD9C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// bgt cr6,0x8237b48c
	if (ctx.cr6.gt) goto loc_8237B48C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r18,6
	ctx.r18.s64 = 6;
	// li r16,7
	ctx.r16.s64 = 7;
	// li r20,9
	ctx.r20.s64 = 9;
	// addi r19,r11,-13728
	ctx.r19.s64 = ctx.r11.s64 + -13728;
	// addi r17,r10,-19136
	ctx.r17.s64 = ctx.r10.s64 + -19136;
loc_8237ADC8:
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,-19056
	ctx.r12.s64 = ctx.r12.s64 + -19056;
	// rlwinm r0,r9,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// addi r12,r12,-21008
	ctx.r12.s64 = ctx.r12.s64 + -21008;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_8237AE14;
	case 1:
		goto loc_8237AF08;
	case 2:
		goto loc_8237AF5C;
	case 3:
		goto loc_8237B094;
	case 4:
		goto loc_8237B158;
	case 5:
		goto loc_8237B1D4;
	case 6:
		goto loc_8237B3E8;
	case 7:
		goto loc_8237B560;
	case 8:
		goto loc_8237B590;
	case 9:
		goto loc_8237B598;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8237ADF0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237AE14:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x8237adf0
	if (ctx.cr6.lt) goto loc_8237ADF0;
	// clrlwi r10,r27,31
	ctx.r10.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r11,r27,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x3;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8237aec4
	if (ctx.cr6.lt) goto loc_8237AEC4;
	// beq cr6,0x8237ae78
	if (ctx.cr6.eq) goto loc_8237AE78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8237ae68
	if (ctx.cr6.lt) goto loc_8237AE68;
	// bne cr6,0x8237b480
	if (!ctx.cr6.eq) goto loc_8237B480;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r20,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// addi r10,r28,-3
	ctx.r10.s64 = ctx.r28.s64 + -3;
	// addi r11,r11,-18940
	ctx.r11.s64 = ctx.r11.s64 + -18940;
	// rlwinm r9,r27,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// b 0x8237b498
	goto loc_8237B498;
loc_8237AE68:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r27,r27,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r28,r28,-3
	ctx.r28.s64 = ctx.r28.s64 + -3;
	// b 0x8237af54
	goto loc_8237AF54;
loc_8237AE78:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8237eef8
	ctx.lr = 0x8237AE90;
	sub_8237EEF8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8237e0d8
	ctx.lr = 0x8237AEA8;
	sub_8237E0D8(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237b4e0
	if (ctx.cr0.eq) goto loc_8237B4E0;
	// rlwinm r27,r27,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r18,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// addi r28,r28,-3
	ctx.r28.s64 = ctx.r28.s64 + -3;
	// b 0x8237b480
	goto loc_8237B480;
loc_8237AEC4:
	// addi r11,r28,-3
	ctx.r11.s64 = ctx.r28.s64 + -3;
	// rlwinm r10,r27,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// srw r27,r10,r9
	ctx.r27.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r28,r9,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// b 0x8237b480
	goto loc_8237B480;
loc_8237AEE4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237AF08:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// blt cr6,0x8237aee4
	if (ctx.cr6.lt) goto loc_8237AEE4;
	// not r10,r27
	ctx.r10.u64 = ~ctx.r27.u64;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8237b4e8
	if (!ctx.cr6.eq) goto loc_8237B4E8;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237af44
	if (ctx.cr6.eq) goto loc_8237AF44;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8237af54
	goto loc_8237AF54;
loc_8237AF44:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_8237AF54:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8237b480
	goto loc_8237B480;
loc_8237AF5C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8237b01c
	if (!ctx.cr6.eq) goto loc_8237B01C;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8237afa8
	if (!ctx.cr6.eq) goto loc_8237AFA8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237afa8
	if (ctx.cr6.eq) goto loc_8237AFA8;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bge cr6,0x8237af9c
	if (!ctx.cr6.lt) goto loc_8237AF9C;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// b 0x8237afa0
	goto loc_8237AFA0;
loc_8237AF9C:
	// subf r23,r26,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r26.u64;
loc_8237AFA0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8237b01c
	if (!ctx.cr6.eq) goto loc_8237B01C;
loc_8237AFA8:
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ef28
	ctx.lr = 0x8237AFBC;
	sub_8237EF28(ctx, base);
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8237afdc
	if (!ctx.cr6.lt) goto loc_8237AFDC;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r23,r10,-1
	ctx.r23.s64 = ctx.r10.s64 + -1;
	// b 0x8237afe4
	goto loc_8237AFE4;
loc_8237AFDC:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// subf r23,r26,r10
	ctx.r23.u64 = ctx.r10.u64 - ctx.r26.u64;
loc_8237AFE4:
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8237b014
	if (!ctx.cr6.eq) goto loc_8237B014;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8237b014
	if (ctx.cr6.eq) goto loc_8237B014;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bge cr6,0x8237b010
	if (!ctx.cr6.lt) goto loc_8237B010;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// b 0x8237b014
	goto loc_8237B014;
loc_8237B010:
	// subf r23,r26,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r26.u64;
loc_8237B014:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8237b490
	if (ctx.cr6.eq) goto loc_8237B490;
loc_8237B01C:
	// lwz r25,4(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8237b030
	if (!ctx.cr6.gt) goto loc_8237B030;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_8237B030:
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x8237b03c
	if (!ctx.cr6.gt) goto loc_8237B03C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8237B03C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d6e10
	ctx.lr = 0x8237B04C;
	sub_825D6E10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// subf. r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r24,r25,r24
	ctx.r24.u64 = ctx.r24.u64 - ctx.r25.u64;
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// subf r23,r25,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r25.u64;
	// bne 0x8237b480
	if (!ctx.cr0.eq) goto loc_8237B480;
	// b 0x8237af44
	goto loc_8237AF44;
loc_8237B070:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237B094:
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// blt cr6,0x8237b070
	if (ctx.cr6.lt) goto loc_8237B070;
	// clrlwi r10,r27,18
	ctx.r10.u64 = ctx.r27.u32 & 0x3FFF;
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x8237b500
	if (ctx.cr6.gt) goto loc_8237B500;
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bgt cr6,0x8237b500
	if (ctx.cr6.gt) goto loc_8237B500;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,258
	ctx.r4.s64 = ctx.r11.s64 + 258;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237B0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237b4e0
	if (ctx.cr0.eq) goto loc_8237B4E0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r21,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// rlwinm r27,r27,18,14,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 18) & 0x3FFFF;
	// addi r28,r28,-14
	ctx.r28.s64 = ctx.r28.s64 + -14;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8237b158
	goto loc_8237B158;
loc_8237B0FC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237B120:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x8237b0fc
	if (ctx.cr6.lt) goto loc_8237B0FC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,29
	ctx.r10.u64 = ctx.r27.u32 & 0x7;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r27,r27,29,3,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-3
	ctx.r28.s64 = ctx.r28.s64 + -3;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8237B158:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b120
	if (ctx.cr6.lt) goto loc_8237B120;
	// b 0x8237b198
	goto loc_8237B198;
loc_8237B174:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8237B198:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// blt cr6,0x8237b174
	if (ctx.cr6.lt) goto loc_8237B174;
	// stw r16,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r16.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8237ec58
	ctx.lr = 0x8237B1C0;
	sub_8237EC58(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8237b50c
	if (!ctx.cr0.eq) goto loc_8237B50C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r21,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8237B1D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8237b354
	goto loc_8237B354;
loc_8237B1E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x8237b214
	goto loc_8237B214;
loc_8237B1F0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r10,r10,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237B214:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b1f0
	if (ctx.cr6.lt) goto loc_8237B1F0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r10,r19
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// and r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & ctx.r27.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8237b268
	if (!ctx.cr6.lt) goto loc_8237B268;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// srw r27,r27,r10
	ctx.r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r10,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r10.u64;
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8237b340
	goto loc_8237B340;
loc_8237B268:
	// cmplwi cr6,r5,18
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 18, ctx.xer);
	// bne cr6,0x8237b27c
	if (!ctx.cr6.eq) goto loc_8237B27C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// b 0x8237b284
	goto loc_8237B284;
loc_8237B27C:
	// addi r11,r5,-14
	ctx.r11.s64 = ctx.r5.s64 + -14;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8237B284:
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8237b2b0
	goto loc_8237B2B0;
loc_8237B28C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8237b4cc
	if (ctx.cr6.eq) goto loc_8237B4CC;
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// slw r8,r8,r28
	ctx.r8.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r28.u8 & 0x3F));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 | ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8237B2B0:
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8237b28c
	if (ctx.cr6.lt) goto loc_8237B28C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// srw r4,r27,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// lwzx r9,r9,r19
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// rlwinm r8,r7,27,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1F;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r28
	ctx.r3.u64 = ctx.r28.u64 - ctx.r11.u64;
	// srw r27,r4,r11
	ctx.r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r8,r8,258
	ctx.r8.s64 = ctx.r8.s64 + 258;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r28,r10,r3
	ctx.r28.u64 = ctx.r3.u64 - ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8237b534
	if (ctx.cr6.gt) goto loc_8237B534;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bne cr6,0x8237b320
	if (!ctx.cr6.eq) goto loc_8237B320;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8237b534
	if (ctx.cr6.lt) goto loc_8237B534;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x8237b324
	goto loc_8237B324;
loc_8237B320:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_8237B324:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8237B328:
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8237b328
	if (!ctx.cr0.eq) goto loc_8237B328;
loc_8237B340:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8237B354:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,258
	ctx.r11.s64 = ctx.r11.s64 + 258;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8237b1e8
	if (ctx.cr6.lt) goto loc_8237B1E8;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r6,27
	ctx.r11.u64 = ctx.r6.u32 & 0x1F;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r4,r6,27,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1F;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r21,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r3,r11,257
	ctx.r3.s64 = ctx.r11.s64 + 257;
	// bl 0x8237ed38
	ctx.lr = 0x8237B3A4;
	sub_8237ED38(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x8237b554
	if (!ctx.cr0.eq) goto loc_8237B554;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8237e0d8
	ctx.lr = 0x8237B3C4;
	sub_8237E0D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8237b4e0
	if (ctx.cr0.eq) goto loc_8237B4E0;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B3E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r18,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
loc_8237B3E8:
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// bl 0x8237e138
	ctx.lr = 0x8237B420;
	sub_8237E138(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8237b4bc
	if (!ctx.cr6.eq) goto loc_8237B4BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// bl 0x8237e768
	ctx.lr = 0x8237B43C;
	sub_8237E768(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r24,4(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// lwz r27,32(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,28(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bge cr6,0x8237b468
	if (!ctx.cr6.lt) goto loc_8237B468;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// addi r23,r11,-1
	ctx.r23.s64 = ctx.r11.s64 + -1;
	// b 0x8237b470
	goto loc_8237B470;
loc_8237B468:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// subf r23,r26,r11
	ctx.r23.u64 = ctx.r11.u64 - ctx.r26.u64;
loc_8237B470:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8237b55c
	if (!ctx.cr6.eq) goto loc_8237B55C;
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
loc_8237B480:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// ble cr6,0x8237adc8
	if (!ctx.cr6.gt) goto loc_8237ADC8;
loc_8237B48C:
	// li r5,-2
	ctx.r5.s64 = -2;
loc_8237B490:
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
loc_8237B498:
	// stw r24,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_8237B49C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r11.u64;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
loc_8237B4BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ef28
	ctx.lr = 0x8237B4C4;
	sub_8237EF28(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
loc_8237B4CC:
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r28,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r21,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r21.u32);
	// b 0x8237b49c
	goto loc_8237B49C;
loc_8237B4E0:
	// li r5,-4
	ctx.r5.s64 = -4;
	// b 0x8237b490
	goto loc_8237B490;
loc_8237B4E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-18972
	ctx.r11.s64 = ctx.r11.s64 + -18972;
loc_8237B4F0:
	// stw r20,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x8237b490
	goto loc_8237B490;
loc_8237B500:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-19008
	ctx.r11.s64 = ctx.r11.s64 + -19008;
	// b 0x8237b4f0
	goto loc_8237B4F0;
loc_8237B50C:
	// cmpwi cr6,r25,-3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -3, ctx.xer);
loc_8237B510:
	// bne cr6,0x8237b52c
	if (!ctx.cr6.eq) goto loc_8237B52C;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
loc_8237B52C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8237b490
	goto loc_8237B490;
loc_8237B534:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237B548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-19036
	ctx.r11.s64 = ctx.r11.s64 + -19036;
	// b 0x8237b4f0
	goto loc_8237B4F0;
loc_8237B554:
	// cmpwi cr6,r25,-3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -3, ctx.xer);
	// b 0x8237b510
	goto loc_8237B510;
loc_8237B55C:
	// stw r16,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
loc_8237B560:
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237ef28
	ctx.lr = 0x8237B574;
	sub_8237EF28(ctx, base);
	// lwz r26,52(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8237b490
	if (!ctx.cr6.eq) goto loc_8237B490;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8237B590:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8237b490
	goto loc_8237B490;
loc_8237B598:
	// li r5,-3
	ctx.r5.s64 = -3;
	// b 0x8237b490
	goto loc_8237B490;
}

DEFINE_REX_FUNC(sub_823AC350) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x823AC358;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	ctx.r31.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r28,0(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823ac3e4
	if (ctx.cr6.eq) goto loc_823AC3E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823ac3dc
	if (ctx.cr6.eq) goto loc_823AC3DC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823ac3d4
	if (ctx.cr6.eq) goto loc_823AC3D4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823ac3cc
	if (ctx.cr6.eq) goto loc_823AC3CC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823ac3c4
	if (ctx.cr6.eq) goto loc_823AC3C4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823ac3bc
	if (ctx.cr6.eq) goto loc_823AC3BC;
	// bl 0x825e6398
	ctx.lr = 0x823AC3B8;
	sub_825E6398(ctx, base);
	// b 0x823ac3ec
	goto loc_823AC3EC;
loc_823AC3BC:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x823ac3ec
	goto loc_823AC3EC;
loc_823AC3C4:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x823ac3ec
	goto loc_823AC3EC;
loc_823AC3CC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823ac3e8
	goto loc_823AC3E8;
loc_823AC3D4:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x823ac3ec
	goto loc_823AC3EC;
loc_823AC3DC:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x823ac3ec
	goto loc_823AC3EC;
loc_823AC3E4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_823AC3E8:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_823AC3EC:
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// bne cr6,0x823ac49c
	if (!ctx.cr6.eq) goto loc_823AC49C;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x823ac424
	if (ctx.cr6.eq) goto loc_823AC424;
	// bl 0x825e6398
	ctx.lr = 0x823AC424;
	sub_825E6398(ctx, base);
loc_823AC424:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ac448
	if (!ctx.cr6.eq) goto loc_823AC448;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x823ac494
	goto loc_823AC494;
loc_823AC448:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823ac468
	if (ctx.cr0.eq) goto loc_823AC468;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823AC468:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823ac474
	if (ctx.cr0.eq) goto loc_823AC474;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_823AC474:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823ac480
	if (ctx.cr0.eq) goto loc_823AC480;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_823AC480:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823ac48c
	if (ctx.cr0.eq) goto loc_823AC48C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_823AC48C:
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_823AC494:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x823ac4b0
	goto loc_823AC4B0;
loc_823AC49C:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x823ac4b0
	if (!ctx.cr6.eq) goto loc_823AC4B0;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	REX_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_823AC4B0:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ac50c
	if (ctx.cr0.eq) goto loc_823AC50C;
loc_823AC4BC:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x823ac4e8
	if (!ctx.cr6.eq) goto loc_823AC4E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ac4e0
	if (!ctx.cr0.eq) goto loc_823AC4E0;
	// bl 0x825e6398
	ctx.lr = 0x823AC4E0;
	sub_825E6398(ctx, base);
loc_823AC4E0:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_823AC4E8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ab438
	ctx.lr = 0x823AC4FC;
	sub_823AB438(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823ac4bc
	if (!ctx.cr0.eq) goto loc_823AC4BC;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823AC50C:
	// stw r29,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B5900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x823B5908;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-10336
	ctx.r30.s64 = ctx.r11.s64 + -10336;
	// addi r29,r10,10608
	ctx.r29.s64 = ctx.r10.s64 + 10608;
	// bne cr6,0x823b594c
	if (!ctx.cr6.eq) goto loc_823B594C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,9672
	ctx.r5.s64 = ctx.r11.s64 + 9672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,919
	ctx.r7.s64 = 919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B594C;
	sub_823AFBD8(ctx, base);
loc_823B594C:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x823b5970
	if (ctx.cr6.lt) goto loc_823B5970;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11036
	ctx.r5.s64 = ctx.r11.s64 + 11036;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,920
	ctx.r7.s64 = 920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B5970;
	sub_823AFBD8(ctx, base);
loc_823B5970:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823b5994
	if (!ctx.cr6.eq) goto loc_823B5994;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11068
	ctx.r5.s64 = ctx.r11.s64 + 11068;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,921
	ctx.r7.s64 = 921;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B5994;
	sub_823AFBD8(ctx, base);
loc_823B5994:
	// mulli r11,r28,148
	ctx.r11.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(148));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825d6e10
	ctx.lr = 0x823B59AC;
	sub_825D6E10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B9380) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d8
	ctx.lr = 0x823B9388;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// clrlwi r27,r31,21
	ctx.r27.u64 = ctx.r31.u32 & 0x7FF;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823b94d0
	if (ctx.cr6.eq) goto loc_823B94D0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823b942c
	if (ctx.cr6.eq) goto loc_823B942C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823b9424
	if (ctx.cr6.eq) goto loc_823B9424;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x823b941c
	if (ctx.cr6.eq) goto loc_823B941C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x823b9410
	if (ctx.cr6.eq) goto loc_823B9410;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x823b9408
	if (ctx.cr6.eq) goto loc_823B9408;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// li r25,4
	ctx.r25.s64 = 4;
	// bne cr6,0x823b9510
	if (!ctx.cr6.eq) goto loc_823B9510;
	// li r27,32
	ctx.r27.s64 = 32;
	// b 0x823b9510
	goto loc_823B9510;
loc_823B9408:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x823b9510
	goto loc_823B9510;
loc_823B9410:
	// bl 0x825e6398
	ctx.lr = 0x823B9414;
	sub_825E6398(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823b9510
	goto loc_823B9510;
loc_823B941C:
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x823b9510
	goto loc_823B9510;
loc_823B9424:
	// li r25,3
	ctx.r25.s64 = 3;
	// b 0x823b9510
	goto loc_823B9510;
loc_823B942C:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x823b94b4
	if (!ctx.cr6.eq) goto loc_823B94B4;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// blt cr6,0x823b9474
	if (ctx.cr6.lt) goto loc_823B9474;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823b947c
	if (ctx.cr6.eq) goto loc_823B947C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x823b946c
	if (ctx.cr6.eq) goto loc_823B946C;
	// bl 0x825e6398
	ctx.lr = 0x823B9468;
	sub_825E6398(ctx, base);
	// b 0x823b9474
	goto loc_823B9474;
loc_823B946C:
	// lis r22,1
	ctx.r22.s64 = 65536;
loc_823B9470:
	// li r26,0
	ctx.r26.s64 = 0;
loc_823B9474:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// b 0x823b94c8
	goto loc_823B94C8;
loc_823B947C:
	// rlwinm r11,r23,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823b9470
	if (ctx.cr6.lt) goto loc_823B9470;
	// beq cr6,0x823b94ac
	if (ctx.cr6.eq) goto loc_823B94AC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823b94a4
	if (ctx.cr6.lt) goto loc_823B94A4;
	// bne cr6,0x823b9470
	if (!ctx.cr6.eq) goto loc_823B9470;
	// lis r26,6
	ctx.r26.s64 = 393216;
	// b 0x823b9474
	goto loc_823B9474;
loc_823B94A4:
	// lis r26,4
	ctx.r26.s64 = 262144;
	// b 0x823b9474
	goto loc_823B9474;
loc_823B94AC:
	// lis r26,2
	ctx.r26.s64 = 131072;
	// b 0x823b9474
	goto loc_823B9474;
loc_823B94B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823b94c8
	if (ctx.cr6.lt) goto loc_823B94C8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_823B94C8:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x823b9510
	goto loc_823B9510;
loc_823B94D0:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// li r25,5
	ctx.r25.s64 = 5;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x823b9510
	if (!ctx.cr6.eq) goto loc_823B9510;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// blt cr6,0x823b9510
	if (ctx.cr6.lt) goto loc_823B9510;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lis r24,128
	ctx.r24.s64 = 8388608;
	// rlwimi r11,r23,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x823b9508
	if (ctx.cr6.eq) goto loc_823B9508;
	// bl 0x825e6398
	ctx.lr = 0x823B9504;
	sub_825E6398(ctx, base);
	// b 0x823b9510
	goto loc_823B9510;
loc_823B9508:
	// lis r22,1
	ctx.r22.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823B9510:
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b9528
	if (!ctx.cr6.eq) goto loc_823B9528;
	// li r3,12816
	ctx.r3.s64 = 12816;
	// b 0x823b9530
	goto loc_823B9530;
loc_823B9528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b91e0
	ctx.lr = 0x823B9530;
	sub_823B91E0(ctx, base);
loc_823B9530:
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// rlwinm r11,r31,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823b95c4
	if (ctx.cr6.gt) goto loc_823B95C4;
	// beq cr6,0x823b95bc
	if (ctx.cr6.eq) goto loc_823B95BC;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b95b4
	if (ctx.cr6.eq) goto loc_823B95B4;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b95ac
	if (ctx.cr6.eq) goto loc_823B95AC;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b95a4
	if (ctx.cr6.eq) goto loc_823B95A4;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b959c
	if (ctx.cr6.eq) goto loc_823B959C;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9594
	if (ctx.cr6.eq) goto loc_823B9594;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b9600
	if (!ctx.cr6.eq) goto loc_823B9600;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B9594:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x823b962c
	goto loc_823B962C;
loc_823B959C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B95A4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x823b962c
	goto loc_823B962C;
loc_823B95AC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B95B4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// b 0x823b962c
	goto loc_823B962C;
loc_823B95BC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B95C4:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9628
	if (ctx.cr6.eq) goto loc_823B9628;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9620
	if (ctx.cr6.eq) goto loc_823B9620;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9618
	if (ctx.cr6.eq) goto loc_823B9618;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9610
	if (ctx.cr6.eq) goto loc_823B9610;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823b9608
	if (ctx.cr6.eq) goto loc_823B9608;
loc_823B9600:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B9608:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x823b962c
	goto loc_823B962C;
loc_823B9610:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B9618:
	// lis r11,96
	ctx.r11.s64 = 6291456;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B9620:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// b 0x823b9630
	goto loc_823B9630;
loc_823B9628:
	// lis r11,4
	ctx.r11.s64 = 262144;
loc_823B962C:
	// ori r11,r11,34952
	ctx.r11.u64 = ctx.r11.u64 | 34952;
loc_823B9630:
	// cmplwi cr6,r21,9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 9, ctx.xer);
	// beq cr6,0x823b9768
	if (ctx.cr6.eq) goto loc_823B9768;
	// cmplwi cr6,r21,53
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 53, ctx.xer);
	// beq cr6,0x823b9768
	if (ctx.cr6.eq) goto loc_823B9768;
	// cmplwi cr6,r21,59
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 59, ctx.xer);
	// ble cr6,0x823b9678
	if (!ctx.cr6.gt) goto loc_823B9678;
	// cmplwi cr6,r21,61
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 61, ctx.xer);
	// ble cr6,0x823b9674
	if (!ctx.cr6.gt) goto loc_823B9674;
	// cmplwi cr6,r21,62
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 62, ctx.xer);
	// beq cr6,0x823b9768
	if (ctx.cr6.eq) goto loc_823B9768;
	// cmplwi cr6,r21,78
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 78, ctx.xer);
	// beq cr6,0x823b966c
	if (ctx.cr6.eq) goto loc_823B966C;
	// cmplwi cr6,r21,85
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 85, ctx.xer);
	// beq cr6,0x823b9674
	if (ctx.cr6.eq) goto loc_823B9674;
	// b 0x823b9678
	goto loc_823B9678;
loc_823B966C:
	// clrlwi. r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823b9678
	if (!ctx.cr0.eq) goto loc_823B9678;
loc_823B9674:
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
loc_823B9678:
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823b9708
	if (!ctx.cr6.eq) goto loc_823B9708;
	// cmplwi cr6,r3,12816
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x823b96c0
	if (!ctx.cr6.eq) goto loc_823B96C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b96c0
	if (!ctx.cr6.eq) goto loc_823B96C0;
	// rlwinm r11,r25,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r23,21
	ctx.r9.u64 = ctx.r23.u32 & 0x7FF;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// or r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 | ctx.r26.u64;
	// or r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 | ctx.r22.u64;
	// stw r8,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r9,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// b 0x823b974c
	goto loc_823B974C;
loc_823B96C0:
	// rlwinm r9,r25,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// or r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 | ctx.r3.u64;
	// clrlwi r7,r23,21
	ctx.r7.u64 = ctx.r23.u32 & 0x7FF;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// clrlwi r6,r27,16
	ctx.r6.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 12582912;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 | ctx.r26.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 | ctx.r22.u64;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x823b9760
	goto loc_823B9760;
loc_823B9708:
	// cmplwi cr6,r3,12816
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12816, ctx.xer);
	// bne cr6,0x823b972c
	if (!ctx.cr6.eq) goto loc_823B972C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b972c
	if (!ctx.cr6.eq) goto loc_823B972C;
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r27,r24
	ctx.r10.u64 = ctx.r27.u64 | ctx.r24.u64;
	// rlwinm r10,r10,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x823b9770
	goto loc_823B9770;
loc_823B972C:
	// rlwinm r9,r25,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r8,r27,16
	ctx.r8.u64 = ctx.r27.u32 & 0xFFFF;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 | ctx.r24.u64;
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r7,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
loc_823B974C:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_823B9760:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x823b9784
	goto loc_823B9784;
loc_823B9768:
	// rlwimi r27,r25,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_823B9770:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823B9784:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6128
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DB1F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823db22c
	if (ctx.cr0.eq) goto loc_823DB22C;
	// b 0x823db210
	goto loc_823DB210;
loc_823DB204:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823db21c
	if (ctx.cr0.eq) goto loc_823DB21C;
loc_823DB210:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823db204
	if (!ctx.cr6.eq) goto loc_823DB204;
loc_823DB21C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823db210
	if (!ctx.cr0.eq) goto loc_823DB210;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_823DB22C:
	// lwz r3,108(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DBA40) {
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
	// lwz r31,44(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r5,r4,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8248cdb0
	ctx.lr = 0x823DBA68;
	sub_8248CDB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// rlwinm r4,r11,7,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82484c60
	ctx.lr = 0x823DBA80;
	sub_82484C60(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,57
	ctx.r11.s64 = 57;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwimi r9,r11,7,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// ori r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 | 32783;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r10,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,1,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x823d0030
	ctx.lr = 0x823DBAB0;
	sub_823D0030(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

DEFINE_REX_FUNC(sub_823E31F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x823E3200;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E3214:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x823e322c
	if (!ctx.cr6.gt) goto loc_823E322C;
	// bl 0x823e2f08
	ctx.lr = 0x823E3228;
	sub_823E2F08(ctx, base);
	// b 0x823e3234
	goto loc_823E3234;
loc_823E322C:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x823e2f80
	ctx.lr = 0x823E3234;
	sub_823E2F80(ctx, base);
loc_823E3234:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e3288
	if (ctx.cr6.eq) goto loc_823E3288;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x823e3294
	if (ctx.cr6.eq) goto loc_823E3294;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x823e32a4
	if (!ctx.cr6.lt) goto loc_823E32A4;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x823e3214
	if (!ctx.cr6.gt) goto loc_823E3214;
loc_823E3288:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823E328C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_823E3294:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x823e32a8
	goto loc_823E32A8;
loc_823E32A4:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_823E32A8:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823e328c
	goto loc_823E328C;
}

DEFINE_REX_FUNC(sub_823E56B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x823E56B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r17,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r17.u32);
	// lwz r11,88(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e56d4
	if (ctx.cr6.eq) goto loc_823E56D4;
	// bl 0x823e3eb0
	ctx.lr = 0x823E56D4;
	sub_823E3EB0(ctx, base);
loc_823E56D4:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r17,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r17.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x825d6870
	ctx.lr = 0x823E56E8;
	sub_825D6870(ctx, base);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r17,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r14,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r14.u64);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// std r14,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r14.u64);
	// std r14,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r14.u64);
	// stw r14,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// std r14,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r14.u64);
	// stw r14,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r14.u32);
	// beq 0x823e5730
	if (ctx.cr0.eq) goto loc_823E5730;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823E5730:
	// lwz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r15,1
	ctx.r15.s64 = 1;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e57bc
	if (!ctx.cr0.eq) goto loc_823E57BC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x823e57bc
	if (ctx.cr0.eq) goto loc_823E57BC;
loc_823E5748:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x823e57a4
	if (!ctx.cr6.eq) goto loc_823E57A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E5770;
	sub_823BC400(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823e57a4
	if (ctx.cr6.eq) goto loc_823E57A4;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_823E57A4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e57bc
	if (!ctx.cr0.eq) goto loc_823E57BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823e5748
	if (!ctx.cr6.eq) goto loc_823E5748;
loc_823E57BC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5a40
	if (ctx.cr0.eq) goto loc_823E5A40;
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e5894
	if (!ctx.cr6.gt) goto loc_823E5894;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_823E57D8:
	// lwz r10,12(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e5880
	if (ctx.cr6.eq) goto loc_823E5880;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5880
	if (ctx.cr0.eq) goto loc_823E5880;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823e582c
	if (ctx.cr6.eq) goto loc_823E582C;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
loc_823E5808:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823e5824
	if (ctx.cr6.eq) goto loc_823E5824;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823e5808
	if (ctx.cr6.lt) goto loc_823E5808;
loc_823E5824:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823e5880
	if (ctx.cr6.lt) goto loc_823E5880;
loc_823E582C:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e5880
	if (!ctx.cr6.gt) goto loc_823E5880;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_823E5840:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823e586c
	if (!ctx.cr6.eq) goto loc_823E586C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r4,r9,0,2,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x823e586c
	if (!ctx.cr0.eq) goto loc_823E586C;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_823E586C:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e5840
	if (ctx.cr6.lt) goto loc_823E5840;
loc_823E5880:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e57d8
	if (ctx.cr6.lt) goto loc_823E57D8;
loc_823E5894:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e5a40
	if (!ctx.cr6.gt) goto loc_823E5A40;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_823E58A8:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r27,r26,r11
	ctx.r27.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e5a2c
	if (ctx.cr6.eq) goto loc_823E5A2C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e5a2c
	if (ctx.cr0.eq) goto loc_823E5A2C;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// beq 0x823e5a2c
	if (ctx.cr0.eq) goto loc_823E5A2C;
loc_823E58D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82489d50
	ctx.lr = 0x823E58EC;
	sub_82489D50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_823E58F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e591c
	if (ctx.cr6.eq) goto loc_823E591C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e5914
	if (ctx.cr6.eq) goto loc_823E5914;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e5a18
	if (!ctx.cr0.eq) goto loc_823E5A18;
loc_823E5914:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823e58f4
	goto loc_823E58F4;
loc_823E591C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823e59a4
	if (!ctx.cr6.eq) goto loc_823E59A4;
	// lwz r4,4(r17)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5934
	if (ctx.cr0.eq) goto loc_823E5934;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
loc_823E5934:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82487a60
	ctx.lr = 0x823E594C;
	sub_82487A60(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5960
	if (ctx.cr0.eq) goto loc_823E5960;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_823E5960:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823E59A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823cfcb0
	ctx.lr = 0x823E59B0;
	sub_823CFCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x823E59BC;
	sub_823CFE80(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r8,r11,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r7,r11,0,31,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw r11,r15,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r7,0,18,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823E5A18:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e58d8
	if (ctx.cr6.lt) goto loc_823E58D8;
loc_823E5A2C:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e58a8
	if (ctx.cr6.lt) goto loc_823E58A8;
loc_823E5A40:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e5a54
	if (ctx.cr0.eq) goto loc_823E5A54;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823E5A54:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e5fe4
	if (!ctx.cr0.eq) goto loc_823E5FE4;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e5fe4
	if (ctx.cr0.eq) goto loc_823E5FE4;
loc_823E5A6C:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x823e5f4c
	if (!ctx.cr6.eq) goto loc_823E5F4C;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r22,r20,-8
	ctx.r22.s64 = ctx.r20.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E5A98;
	sub_823BC400(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// clrlwi r30,r11,17
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// mulli r21,r30,40
	ctx.r21.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(40));
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// add r25,r21,r11
	ctx.r25.u64 = ctx.r21.u64 + ctx.r11.u64;
	// bl 0x823bc400
	ctx.lr = 0x823E5AC4;
	sub_823BC400(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r22.u32);
	// lwz r31,4(r20)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// addi r19,r20,4
	ctx.r19.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_823E5ADC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e5b3c
	if (ctx.cr6.eq) goto loc_823E5B3C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e5b34
	if (ctx.cr6.eq) goto loc_823E5B34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e5b34
	if (ctx.cr0.eq) goto loc_823E5B34;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5b28
	if (ctx.cr0.eq) goto loc_823E5B28;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// rlwinm r10,r10,0,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x823e5ffc
	if (ctx.cr6.gt) goto loc_823E5FFC;
	// addi r18,r11,1
	ctx.r18.s64 = ctx.r11.s64 + 1;
loc_823E5B28:
	// bl 0x823e2a50
	ctx.lr = 0x823E5B2C;
	sub_823E2A50(ctx, base);
	// slw r11,r15,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r3.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_823E5B34:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x823e5adc
	goto loc_823E5ADC;
loc_823E5B3C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x823e5b70
	if (ctx.cr6.eq) goto loc_823E5B70;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823e5b68
	if (!ctx.cr6.eq) goto loc_823E5B68;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x823e5b68
	if (!ctx.cr6.eq) goto loc_823E5B68;
	// rlwimi r11,r10,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// b 0x823e5b70
	goto loc_823E5B70;
loc_823E5B68:
	// slw r11,r15,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_823E5B70:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5b84
	if (ctx.cr0.eq) goto loc_823E5B84;
	// rlwinm. r28,r28,0,25,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x823e5b8c
	if (!ctx.cr0.eq) goto loc_823E5B8C;
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
loc_823E5B84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823e5da0
	if (ctx.cr6.eq) goto loc_823E5DA0;
loc_823E5B8C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// subf r11,r11,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e5d6c
	if (!ctx.cr0.eq) goto loc_823E5D6C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6068
	if (!ctx.cr0.eq) goto loc_823E6068;
	// lwz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e6068
	if (!ctx.cr6.eq) goto loc_823E6068;
	// rlwinm r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823e6008
	if (!ctx.cr6.eq) goto loc_823E6008;
loc_823E5BC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823e5be4
	if (ctx.cr6.eq) goto loc_823E5BE4;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x823e5be8
	if (ctx.cr0.eq) goto loc_823E5BE8;
loc_823E5BE4:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823E5BE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e5d64
	if (!ctx.cr0.eq) goto loc_823E5D64;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ~ctx.r11.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r28,r11,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r11.u64;
	// subfic r24,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r24.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82488640
	ctx.lr = 0x823E5C14;
	sub_82488640(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823bc400
	ctx.lr = 0x823E5C30;
	sub_823BC400(ctx, base);
	// add r26,r3,r22
	ctx.r26.u64 = ctx.r3.u64 + ctx.r22.u64;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_823E5C38:
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e5bc8
	if (ctx.cr6.eq) goto loc_823E5BC8;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823e5d50
	if (ctx.cr6.eq) goto loc_823E5D50;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r29,r30,7,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823e5d50
	if (ctx.cr0.eq) goto loc_823E5D50;
	// bl 0x823e2a50
	ctx.lr = 0x823E5C60;
	sub_823E2A50(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x823e5d50
	if (!ctx.cr6.eq) goto loc_823E5D50;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823e5cbc
	if (ctx.cr6.eq) goto loc_823E5CBC;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// rlwinm r8,r30,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0xFF;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_823E5C84:
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// slw r7,r15,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r7.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x823e5c84
	if (!ctx.cr0.eq) goto loc_823E5C84;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e5cbc
	if (ctx.cr6.eq) goto loc_823E5CBC;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x823e5cc0
	if (ctx.cr0.eq) goto loc_823E5CC0;
loc_823E5CBC:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823E5CC0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e605c
	if (ctx.cr0.eq) goto loc_823E605C;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r11,r30,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x3;
	// lwz r9,12(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// li r8,40
	ctx.r8.s64 = 40;
	// rlwinm r10,r10,26,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFF;
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r4,r9,r8
	ctx.r4.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82489d50
	ctx.lr = 0x823E5CF4;
	sub_82489D50(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// rlwinm r11,r11,0,17,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823e5d24
	goto loc_823E5D24;
loc_823E5D1C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_823E5D24:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823e5d1c
	if (!ctx.cr6.eq) goto loc_823E5D1C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823E5D50:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823e5c38
	if (!ctx.cr6.eq) goto loc_823E5C38;
	// addi r23,r31,8
	ctx.r23.s64 = ctx.r31.s64 + 8;
	// b 0x823e5c38
	goto loc_823E5C38;
loc_823E5D64:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r25,r21,r11
	ctx.r25.u64 = ctx.r21.u64 + ctx.r11.u64;
loc_823E5D6C:
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x823e5d80
	if (!ctx.cr6.eq) goto loc_823E5D80;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e60cc
	if (ctx.cr0.eq) goto loc_823E60CC;
loc_823E5D80:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x823e5da0
	if (!ctx.cr6.eq) goto loc_823E5DA0;
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r10.u64;
	// rlwimi r11,r10,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_823E5DA0:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823e5db8
	if (!ctx.cr6.gt) goto loc_823E5DB8;
	// rlwimi r11,r18,7,16,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 7) & 0xFF80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF007F);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
loc_823E5DB8:
	// lwz r31,4(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r11,r31,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823e5f04
	if (!ctx.cr6.eq) goto loc_823E5F04;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E5DE0;
	sub_823BC400(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r22
	ctx.r30.u64 = ctx.r3.u64 + ctx.r22.u64;
	// bne 0x823e5e18
	if (!ctx.cr0.eq) goto loc_823E5E18;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,20,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FFF8;
	// lwz r9,28(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwimi r10,r11,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_823E5E18:
	// lwz r29,0(r19)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
loc_823E5E1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823e5f4c
	if (ctx.cr6.eq) goto loc_823E5F4C;
	// lwz r31,16(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e5efc
	if (ctx.cr6.eq) goto loc_823E5EFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x823e5e54
	if (ctx.cr6.eq) goto loc_823E5E54;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x823e5e54
	if (ctx.cr6.eq) goto loc_823E5E54;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x823e5e58
	if (!ctx.cr6.eq) goto loc_823E5E58;
loc_823E5E54:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_823E5E58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq 0x823e60d8
	if (ctx.cr0.eq) goto loc_823E60D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E5E78;
	sub_823BC400(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x823e5ea8
	if (ctx.cr6.eq) goto loc_823E5EA8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x823e5efc
	if (!ctx.cr6.gt) goto loc_823E5EFC;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// ble cr6,0x823e5ea8
	if (!ctx.cr6.gt) goto loc_823E5EA8;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x823e5efc
	if (!ctx.cr6.eq) goto loc_823E5EFC;
loc_823E5EA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e5ed0
	if (!ctx.cr0.eq) goto loc_823E5ED0;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,22,26,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x30) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x823e5efc
	goto loc_823E5EFC;
loc_823E5ED0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e5eec
	if (!ctx.cr0.eq) goto loc_823E5EEC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// beq cr6,0x823e5efc
	if (ctx.cr6.eq) goto loc_823E5EFC;
loc_823E5EEC:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e60e0
	if (!ctx.cr6.eq) goto loc_823E60E0;
loc_823E5EFC:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x823e5e1c
	goto loc_823E5E1C;
loc_823E5F04:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823e5f4c
	if (!ctx.cr6.eq) goto loc_823E5F4C;
	// lwz r30,0(r19)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
loc_823E5F10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e5f4c
	if (ctx.cr6.eq) goto loc_823E5F4C;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e5f44
	if (ctx.cr6.eq) goto loc_823E5F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c4b98
	ctx.lr = 0x823E5F2C;
	sub_823C4B98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e5f44
	if (ctx.cr0.eq) goto loc_823E5F44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x823e60ec
	if (!ctx.cr6.eq) goto loc_823E60EC;
loc_823E5F44:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x823e5f10
	goto loc_823E5F10;
loc_823E5F4C:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823e5f94
	if (ctx.cr6.eq) goto loc_823E5F94;
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne 0x823e5f6c
	if (!ctx.cr0.eq) goto loc_823E5F6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823E5F6C:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823e5f84
	if (!ctx.cr6.eq) goto loc_823E5F84;
loc_823E5F74:
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x823e5fd0
	goto loc_823E5FD0;
loc_823E5F84:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e5fe4
	if (!ctx.cr0.eq) goto loc_823E5FE4;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// b 0x823e5fdc
	goto loc_823E5FDC;
loc_823E5F94:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e5fa8
	if (!ctx.cr0.eq) goto loc_823E5FA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823E5FA8:
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823e5fb8
	if (ctx.cr0.eq) goto loc_823E5FB8;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_823E5FB8:
	// cmplw cr6,r20,r10
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823e5f74
	if (ctx.cr6.eq) goto loc_823E5F74;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e5fcc
	if (ctx.cr6.eq) goto loc_823E5FCC;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_823E5FCC:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_823E5FD0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e5fe4
	if (!ctx.cr0.eq) goto loc_823E5FE4;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_823E5FDC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x823e5a6c
	if (!ctx.cr6.eq) goto loc_823E5A6C;
loc_823E5FE4:
	// lwz r11,804(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 804);
	// lis r30,-1
	ctx.r30.s64 = -65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e60f8
	if (ctx.cr6.eq) goto loc_823E60F8;
	// lwz r31,800(r17)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r17.u32 + 800);
	// b 0x823e6124
	goto loc_823E6124;
loc_823E5FFC:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6008;
	sub_823A0E88(ctx, base);
loc_823E6008:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// beq 0x823e601c
	if (ctx.cr0.eq) goto loc_823E601C;
	// li r4,3548
	ctx.r4.s64 = 3548;
	// bl 0x823a0e88
	ctx.lr = 0x823E601C;
	sub_823A0E88(ctx, base);
loc_823E601C:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e602c
	if (ctx.cr0.eq) goto loc_823E602C;
	// li r4,3598
	ctx.r4.s64 = 3598;
	// bl 0x823a0e88
	ctx.lr = 0x823E602C;
	sub_823A0E88(ctx, base);
loc_823E602C:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e603c
	if (ctx.cr0.eq) goto loc_823E603C;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// bl 0x823a0e88
	ctx.lr = 0x823E603C;
	sub_823A0E88(ctx, base);
loc_823E603C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6054
	if (ctx.cr0.eq) goto loc_823E6054;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,14724
	ctx.r5.s64 = ctx.r11.s64 + 14724;
	// bl 0x823a0e88
	ctx.lr = 0x823E6054;
	sub_823A0E88(ctx, base);
loc_823E6054:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x823a0e88
	ctx.lr = 0x823E605C;
	sub_823A0E88(ctx, base);
loc_823E605C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6068;
	sub_823A0E88(ctx, base);
loc_823E6068:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e49d8
	ctx.lr = 0x823E6074;
	sub_823E49D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823e608c
	if (ctx.cr0.eq) goto loc_823E608C;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E608C;
	sub_823A0E88(ctx, base);
loc_823E608C:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r10,r10,20676
	ctx.r10.s64 = ctx.r10.s64 + 20676;
	// rlwinm r11,r11,30,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1C;
	// addi r5,r8,14716
	ctx.r5.s64 = ctx.r8.s64 + 14716;
	// rlwinm r7,r9,12,23,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1FF;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825d8e58
	ctx.lr = 0x823E60BC;
	sub_825D8E58(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E60CC;
	sub_823A0E88(ctx, base);
loc_823E60CC:
	// li r4,3599
	ctx.r4.s64 = 3599;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E60D8;
	sub_823A0E88(ctx, base);
loc_823E60D8:
	// li r4,3512
	ctx.r4.s64 = 3512;
	// bl 0x823a0e88
	ctx.lr = 0x823E60E0;
	sub_823A0E88(ctx, base);
loc_823E60E0:
	// li r4,4539
	ctx.r4.s64 = 4539;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E60EC;
	sub_823A0E88(ctx, base);
loc_823E60EC:
	// li r4,3548
	ctx.r4.s64 = 3548;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E60F8;
	sub_823A0E88(ctx, base);
loc_823E60F8:
	// lwz r11,40(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e610c
	if (ctx.cr0.eq) goto loc_823E610C;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x823e6124
	goto loc_823E6124;
loc_823E610C:
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,31,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x10;
	// xori r31,r11,16
	ctx.r31.u64 = ctx.r11.u64 ^ 16;
loc_823E6124:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e2af0
	ctx.lr = 0x823E612C;
	sub_823E2AF0(ctx, base);
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 48);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x823e615c
	if (!ctx.cr6.eq) goto loc_823E615C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823e3b08
	ctx.lr = 0x823E6154;
	sub_823E3B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823e6168
	goto loc_823E6168;
loc_823E615C:
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x823e3b08
	ctx.lr = 0x823E6164;
	sub_823E3B08(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
loc_823E6168:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823e3c60
	ctx.lr = 0x823E6174;
	sub_823E3C60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823e618c
	if (ctx.cr6.eq) goto loc_823E618C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e3c60
	ctx.lr = 0x823E618C;
	sub_823E3C60(ctx, base);
loc_823E618C:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// bge cr6,0x823e61a4
	if (!ctx.cr6.lt) goto loc_823E61A4;
	// subfic r5,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e3c60
	ctx.lr = 0x823E61A4;
	sub_823E3C60(ctx, base);
loc_823E61A4:
	// lwz r21,16(r17)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// beq cr6,0x823e62e0
	if (ctx.cr6.eq) goto loc_823E62E0;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_823E61C0:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 | ctx.r23.u64;
	// beq 0x823e62d0
	if (ctx.cr0.eq) goto loc_823E62D0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,14,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// beq 0x823e6200
	if (ctx.cr0.eq) goto loc_823E6200;
	// rlwinm. r10,r11,0,16,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e66b8
	if (!ctx.cr0.eq) goto loc_823E66B8;
	// rlwinm r11,r11,0,16,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// b 0x823e62cc
	goto loc_823E62CC;
loc_823E6200:
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// beq cr6,0x823e62c8
	if (ctx.cr6.eq) goto loc_823E62C8;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e4a68
	ctx.lr = 0x823E6220;
	sub_823E4A68(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm. r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e625c
	if (ctx.cr0.eq) goto loc_823E625C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,12,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1FF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x823e6250
	if (ctx.cr6.gt) goto loc_823E6250;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e625c
	if (!ctx.cr6.lt) goto loc_823E625C;
loc_823E6250:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823e66c4
	if (!ctx.cr6.eq) goto loc_823E66C4;
loc_823E625C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bgt cr6,0x823e62d0
	if (ctx.cr6.gt) goto loc_823E62D0;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823e6280
	if (!ctx.cr6.lt) goto loc_823E6280;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_823E6280:
	// rlwimi r11,r5,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r10,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823e62bc
	if (ctx.cr6.lt) goto loc_823E62BC;
	// beq cr6,0x823e62b0
	if (ctx.cr6.eq) goto loc_823E62B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823e62d0
	if (!ctx.cr6.eq) goto loc_823E62D0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e4e70
	ctx.lr = 0x823E62AC;
	sub_823E4E70(ctx, base);
	// b 0x823e62c4
	goto loc_823E62C4;
loc_823E62B0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823e4e70
	ctx.lr = 0x823E62B8;
	sub_823E4E70(ctx, base);
	// b 0x823e62c4
	goto loc_823E62C4;
loc_823E62BC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823e4de0
	ctx.lr = 0x823E62C4;
	sub_823E4DE0(ctx, base);
loc_823E62C4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_823E62C8:
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_823E62CC:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_823E62D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823e61c0
	if (ctx.cr6.lt) goto loc_823E61C0;
loc_823E62E0:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r17,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825d6870
	ctx.lr = 0x823E62F4;
	sub_825D6870(ctx, base);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823e63f4
	if (ctx.cr6.eq) goto loc_823E63F4;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
loc_823E6304:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r26,r25,r11
	ctx.r26.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e63e4
	if (!ctx.cr0.eq) goto loc_823E63E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e63e4
	if (ctx.cr0.eq) goto loc_823E63E4;
	// rlwinm r11,r11,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF00000;
	// lis r10,4080
	ctx.r10.s64 = 267386880;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823e63e4
	if (ctx.cr6.gt) goto loc_823E63E4;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x825d6e10
	ctx.lr = 0x823E6344;
	sub_825D6E10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e4f60
	ctx.lr = 0x823E6350;
	sub_823E4F60(ctx, base);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_823E6358:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e63d4
	if (ctx.cr0.eq) goto loc_823E63D4;
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r10,r29,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e63d4
	if (!ctx.cr0.eq) goto loc_823E63D4;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,36(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823e63d4
	if (!ctx.cr6.eq) goto loc_823E63D4;
	// rlwinm r31,r11,12,23,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bgt cr6,0x823e63d4
	if (ctx.cr6.gt) goto loc_823E63D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x823e2e38
	ctx.lr = 0x823E63A0;
	sub_823E2E38(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e63b8
	if (ctx.cr6.eq) goto loc_823E63B8;
	// rlwinm r11,r29,16,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e66d0
	if (ctx.cr6.lt) goto loc_823E66D0;
loc_823E63B8:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823e4ca8
	ctx.lr = 0x823E63C8;
	sub_823E4CA8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823E63D4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823e6358
	if (ctx.cr6.lt) goto loc_823E6358;
loc_823E63E4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,40
	ctx.r25.s64 = ctx.r25.s64 + 40;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823e6304
	if (ctx.cr6.lt) goto loc_823E6304;
loc_823E63F4:
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823e6610
	if (ctx.cr6.eq) goto loc_823E6610;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823e6604
	if (ctx.cr6.eq) goto loc_823E6604;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
loc_823E6410:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r24,r23,r11
	ctx.r24.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e65f4
	if (!ctx.cr0.eq) goto loc_823E65F4;
	// lwz r10,36(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e65f4
	if (ctx.cr6.eq) goto loc_823E65F4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e65f4
	if (!ctx.cr0.eq) goto loc_823E65F4;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x825d6e10
	ctx.lr = 0x823E6448;
	sub_825D6E10(ctx, base);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_823E6458:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823e6490
	if (ctx.cr0.eq) goto loc_823E6490;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,36(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823e6490
	if (!ctx.cr6.eq) goto loc_823E6490;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r4,r11,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// bl 0x823e4d40
	ctx.lr = 0x823E6490;
	sub_823E4D40(ctx, base);
loc_823E6490:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x823e6458
	if (!ctx.cr0.eq) goto loc_823E6458;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e4f60
	ctx.lr = 0x823E64A8;
	sub_823E4F60(ctx, base);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_823E64B0:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e6514
	if (ctx.cr0.eq) goto loc_823E6514;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,36(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823e6514
	if (!ctx.cr6.eq) goto loc_823E6514;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// bl 0x823e4ca8
	ctx.lr = 0x823E64E8;
	sub_823E4CA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823e64fc
	if (!ctx.cr6.lt) goto loc_823E64FC;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_823E64FC:
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823e6514
	if (!ctx.cr6.gt) goto loc_823E6514;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_823E6514:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x823e64b0
	if (!ctx.cr0.eq) goto loc_823E64B0;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
loc_823E6528:
	// lwz r11,12(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 12);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r29,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e65e4
	if (!ctx.cr0.eq) goto loc_823E65E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,36(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e65e4
	if (!ctx.cr6.eq) goto loc_823E65E4;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823e6568
	if (ctx.cr6.eq) goto loc_823E6568;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823e3960
	ctx.lr = 0x823E6568;
	sub_823E3960(ctx, base);
loc_823E6568:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e6584
	if (ctx.cr6.eq) goto loc_823E6584;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x823e65a0
	if (ctx.cr6.eq) goto loc_823E65A0;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x823e65a0
	if (!ctx.cr6.gt) goto loc_823E65A0;
loc_823E6584:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823e3960
	ctx.lr = 0x823E6594;
	sub_823E3960(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e65a0
	if (ctx.cr6.eq) goto loc_823E65A0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_823E65A0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x823e66dc
	if (ctx.cr6.eq) goto loc_823E66DC;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823c7170
	ctx.lr = 0x823E65B8;
	sub_823C7170(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// clrlwi r5,r11,23
	ctx.r5.u64 = ctx.r11.u32 & 0x1FF;
	// bl 0x823c7170
	ctx.lr = 0x823E65CC;
	sub_823C7170(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r30,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_823E65E4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823e6528
	if (ctx.cr6.lt) goto loc_823E6528;
loc_823E65F4:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823e6410
	if (ctx.cr6.lt) goto loc_823E6410;
loc_823E6604:
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e4f60
	ctx.lr = 0x823E6610;
	sub_823E4F60(ctx, base);
loc_823E6610:
	// lwz r11,44(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 44);
	// stb r14,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6aac
	if (ctx.cr0.eq) goto loc_823E6AAC;
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6aac
	if (!ctx.cr0.eq) goto loc_823E6AAC;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e6aac
	if (ctx.cr0.eq) goto loc_823E6AAC;
loc_823E663C:
	// lwz r11,28(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e69d4
	if (!ctx.cr0.eq) goto loc_823E69D4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e69d4
	if (ctx.cr0.eq) goto loc_823E69D4;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,644(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
loc_823E665C:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// bne cr6,0x823e69b8
	if (!ctx.cr6.eq) goto loc_823E69B8;
	// lwz r19,44(r17)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r17.u32 + 44);
	// lwz r18,12(r19)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x823e69b8
	if (ctx.cr6.eq) goto loc_823E69B8;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x823e69f4
	if (!ctx.cr6.eq) goto loc_823E69F4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823e694c
	if (!ctx.cr6.eq) goto loc_823E694C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e66a4
	if (ctx.cr0.eq) goto loc_823E66A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E66A4:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e66e8
	if (ctx.cr0.eq) goto loc_823E66E8;
loc_823E66B0:
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x823e6768
	goto loc_823E6768;
loc_823E66B8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E66C4;
	sub_823A0E88(ctx, base);
loc_823E66C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823e4bc0
	ctx.lr = 0x823E66D0;
	sub_823E4BC0(ctx, base);
loc_823E66D0:
	// li r4,3613
	ctx.r4.s64 = 3613;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E66DC;
	sub_823A0E88(ctx, base);
loc_823E66DC:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E66E8;
	sub_823A0E88(ctx, base);
loc_823E66E8:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e6768
	if (ctx.cr0.eq) goto loc_823E6768;
loc_823E66F4:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x823e6740
	if (!ctx.cr6.eq) goto loc_823E6740;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E671C;
	sub_823BC400(ctx, base);
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e6740
	if (ctx.cr0.eq) goto loc_823E6740;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x823e6760
	if (!ctx.cr6.eq) goto loc_823E6760;
loc_823E6740:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e66b0
	if (!ctx.cr0.eq) goto loc_823E66B0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e66f4
	if (!ctx.cr6.eq) goto loc_823E66F4;
	// b 0x823e6768
	goto loc_823E6768;
loc_823E6760:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x823e694c
	if (!ctx.cr6.eq) goto loc_823E694C;
loc_823E6768:
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e6944
	if (ctx.cr6.eq) goto loc_823E6944;
	// lwz r20,12(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_823E6784:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x823e68c8
	if (!ctx.cr6.eq) goto loc_823E68C8;
	// lwz r28,0(r23)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm. r10,r28,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e68c8
	if (!ctx.cr0.eq) goto loc_823E68C8;
	// rlwinm. r22,r11,16,23,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x823e68c8
	if (ctx.cr0.eq) goto loc_823E68C8;
	// rlwinm. r26,r28,29,18,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x823e68b0
	if (ctx.cr0.eq) goto loc_823E68B0;
	// lwz r27,28(r23)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
loc_823E67B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x823e68a0
	if (ctx.cr6.eq) goto loc_823E68A0;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x823e68a0
	if (ctx.cr6.eq) goto loc_823E68A0;
	// rlwinm. r10,r28,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e68b0
	if (ctx.cr0.eq) goto loc_823E68B0;
	// rlwinm r10,r11,28,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x823e68a0
	if (!ctx.cr6.lt) goto loc_823E68A0;
	// rlwinm r11,r28,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x1FF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_823E67F4:
	// lwz r31,4(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r31,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x823e6880
	if (!ctx.cr6.eq) goto loc_823E6880;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r4,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6880
	if (ctx.cr0.eq) goto loc_823E6880;
	// rlwinm. r11,r4,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6880
	if (ctx.cr0.eq) goto loc_823E6880;
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x823e6880
	if (ctx.cr6.eq) goto loc_823E6880;
	// rlwinm. r6,r4,29,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x823e6878
	if (ctx.cr0.eq) goto loc_823E6878;
	// lwz r7,28(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
loc_823E6830:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lis r10,592
	ctx.r10.s64 = 38797312;
	// rlwinm r14,r11,0,6,11
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00000;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823e6864
	if (!ctx.cr6.eq) goto loc_823E6864;
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// rlwinm r10,r31,16,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e6864
	if (!ctx.cr6.lt) goto loc_823E6864;
	// rlwinm r10,r4,12,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823e6874
	if (ctx.cr6.eq) goto loc_823E6874;
loc_823E6864:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823e6830
	if (ctx.cr6.lt) goto loc_823E6830;
loc_823E6874:
	// lbz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_823E6878:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823e6894
	if (ctx.cr6.lt) goto loc_823E6894;
loc_823E6880:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e67f4
	if (ctx.cr6.lt) goto loc_823E67F4;
loc_823E6894:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823e68b0
	if (!ctx.cr6.lt) goto loc_823E68B0;
loc_823E68A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x823e67b8
	if (ctx.cr6.lt) goto loc_823E67B8;
loc_823E68B0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x823e68c8
	if (!ctx.cr6.lt) goto loc_823E68C8;
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x823e68c8
	if (!ctx.cr6.lt) goto loc_823E68C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_823E68C8:
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,40
	ctx.r23.s64 = ctx.r23.s64 + 40;
	// cmplw cr6,r21,r30
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823e6784
	if (ctx.cr6.lt) goto loc_823E6784;
	// lwz r31,644(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x823e6944
	if (ctx.cr6.eq) goto loc_823E6944;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82489d50
	ctx.lr = 0x823E68F8;
	sub_82489D50(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mulli r11,r25,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r25.u64 * static_cast<uint64_t>(40));
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r10,r10,0,30,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,0,17,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r10,r10,16386
	ctx.r10.u64 = ctx.r10.u64 | 16386;
	// stw r10,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,7,16,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFF80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF007F);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_823E6944:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823e6a00
	if (ctx.cr6.eq) goto loc_823E6A00;
loc_823E694C:
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823e6964
	goto loc_823E6964;
loc_823E695C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_823E6964:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x823e695c
	if (!ctx.cr6.eq) goto loc_823E695C;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,8(r19)
	REX_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// stw r19,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r19.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r24,12(r19)
	REX_STORE_U32(ctx.r19.u32 + 12, ctx.r24.u32);
	// stw r11,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// bl 0x823bc950
	ctx.lr = 0x823E699C;
	sub_823BC950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e69b8
	if (ctx.cr0.eq) goto loc_823E69B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248e4d8
	ctx.lr = 0x823E69B8;
	sub_8248E4D8(ctx, base);
loc_823E69B8:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e69d4
	if (!ctx.cr0.eq) goto loc_823E69D4;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e665c
	if (!ctx.cr6.eq) goto loc_823E665C;
loc_823E69D4:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6aac
	if (!ctx.cr0.eq) goto loc_823E6AAC;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e663c
	if (!ctx.cr6.eq) goto loc_823E663C;
	// b 0x823e6aac
	goto loc_823E6AAC;
loc_823E69F4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6A00;
	sub_823A0E88(ctx, base);
loc_823E6A00:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6a9c
	if (ctx.cr0.eq) goto loc_823E6A9C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e6aa0
	if (ctx.cr6.eq) goto loc_823E6AA0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_823E6A1C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823e6a70
	if (ctx.cr0.eq) goto loc_823E6A70;
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r9,r9,0,14,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e6a70
	if (!ctx.cr0.eq) goto loc_823E6A70;
	// rlwinm. r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6a70
	if (!ctx.cr0.eq) goto loc_823E6A70;
	// lhz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r9,r9,23
	ctx.r9.u64 = ctx.r9.u32 & 0x1FF;
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823e6a70
	if (ctx.cr0.eq) goto loc_823E6A70;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x823e6a84
	if (ctx.cr6.eq) goto loc_823E6A84;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x823e6a90
	if (ctx.cr6.eq) goto loc_823E6A90;
loc_823E6A70:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823e6a1c
	if (ctx.cr6.lt) goto loc_823E6A1C;
	// b 0x823e6aa0
	goto loc_823E6AA0;
loc_823E6A84:
	// li r4,3601
	ctx.r4.s64 = 3601;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6A90;
	sub_823A0E88(ctx, base);
loc_823E6A90:
	// li r4,3602
	ctx.r4.s64 = 3602;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6A9C;
	sub_823A0E88(ctx, base);
loc_823E6A9C:
	// li r14,1
	ctx.r14.s64 = 1;
loc_823E6AA0:
	// li r4,3600
	ctx.r4.s64 = 3600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a0d90
	ctx.lr = 0x823E6AAC;
	sub_823A0D90(ctx, base);
loc_823E6AAC:
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r25,644(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823e6c58
	if (ctx.cr6.eq) goto loc_823E6C58;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823E6AC4:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6c48
	if (!ctx.cr0.eq) goto loc_823E6C48;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e6c48
	if (ctx.cr0.eq) goto loc_823E6C48;
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// rlwinm r28,r11,25,23,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823e6c24
	if (ctx.cr6.lt) goto loc_823E6C24;
	// beq cr6,0x823e6c14
	if (ctx.cr6.eq) goto loc_823E6C14;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x823e6c00
	if (ctx.cr6.lt) goto loc_823E6C00;
	// bne cr6,0x823e6cdc
	if (!ctx.cr6.eq) goto loc_823E6CDC;
	// clrlwi. r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x823e6bc4
	if (ctx.cr0.eq) goto loc_823E6BC4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e6b20
	if (ctx.cr0.eq) goto loc_823E6B20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6B20:
	// lwz r30,20(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6bc4
	if (!ctx.cr0.eq) goto loc_823E6BC4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x823e6bc4
	if (ctx.cr0.eq) goto loc_823E6BC4;
loc_823E6B34:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x823e6b8c
	if (!ctx.cr6.eq) goto loc_823E6B8C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E6B5C;
	sub_823BC400(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823e6b8c
	if (!ctx.cr6.eq) goto loc_823E6B8C;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6b8c
	if (ctx.cr0.eq) goto loc_823E6B8C;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x823e6ba8
	if (ctx.cr6.eq) goto loc_823E6BA8;
loc_823E6B8C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6bc4
	if (!ctx.cr0.eq) goto loc_823E6BC4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x823e6b34
	if (!ctx.cr6.eq) goto loc_823E6B34;
	// b 0x823e6bc4
	goto loc_823E6BC4;
loc_823E6BA8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6bc4
	if (!ctx.cr0.eq) goto loc_823E6BC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e3bf8
	ctx.lr = 0x823E6BC0;
	sub_823E3BF8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_823E6BC4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e48a0
	ctx.lr = 0x823E6BD0;
	sub_823E48A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x823e6c48
	if (ctx.cr0.eq) goto loc_823E6C48;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x823e6c48
	goto loc_823E6C48;
loc_823E6C00:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823e4628
	ctx.lr = 0x823E6C10;
	sub_823E4628(ctx, base);
	// b 0x823e6c30
	goto loc_823E6C30;
loc_823E6C14:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823e4980
	ctx.lr = 0x823E6C20;
	sub_823E4980(ctx, base);
	// b 0x823e6c30
	goto loc_823E6C30;
loc_823E6C24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823e4928
	ctx.lr = 0x823E6C30;
	sub_823E4928(ctx, base);
loc_823E6C30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_823E6C48:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x823e6ac4
	if (ctx.cr6.lt) goto loc_823E6AC4;
loc_823E6C58:
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823e4f60
	ctx.lr = 0x823E6C64;
	sub_823E4F60(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823e6c74
	if (ctx.cr0.eq) goto loc_823E6C74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6C74:
	// lwz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6d94
	if (!ctx.cr0.eq) goto loc_823E6D94;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x823e6d94
	if (ctx.cr0.eq) goto loc_823E6D94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r27,r11,14436
	ctx.r27.s64 = ctx.r11.s64 + 14436;
loc_823E6C94:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x823e6ce8
	if (!ctx.cr6.eq) goto loc_823E6CE8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823e38e0
	ctx.lr = 0x823E6CB0;
	sub_823E38E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwimi r3,r28,0,28,31
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r28,r11,0,0,27
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r28.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x823e6d6c
	goto loc_823E6D6C;
loc_823E6CDC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6CE8;
	sub_823A0E88(ctx, base);
loc_823E6CE8:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x823e6d7c
	if (!ctx.cr6.eq) goto loc_823E6D7C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823ee290
	ctx.lr = 0x823E6CFC;
	sub_823EE290(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// bl 0x823bc400
	ctx.lr = 0x823E6D18;
	sub_823BC400(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r11,r9,21,14,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x3FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFC000F);
	// clrlwi r29,r11,14
	ctx.r29.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x823bc400
	ctx.lr = 0x823E6D44;
	sub_823BC400(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwimi r11,r29,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
loc_823E6D6C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x824856b0
	ctx.lr = 0x823E6D7C;
	sub_824856B0(ctx, base);
loc_823E6D7C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6d94
	if (!ctx.cr0.eq) goto loc_823E6D94;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823e6c94
	if (!ctx.cr6.eq) goto loc_823E6C94;
loc_823E6D94:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6eb0
	if (ctx.cr0.eq) goto loc_823E6EB0;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6eb0
	if (!ctx.cr0.eq) goto loc_823E6EB0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823e6eb0
	if (ctx.cr0.eq) goto loc_823E6EB0;
loc_823E6DB8:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6e94
	if (!ctx.cr0.eq) goto loc_823E6E94;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823e6e94
	if (ctx.cr0.eq) goto loc_823E6E94;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x823e6e94
	if (!ctx.cr6.eq) goto loc_823E6E94;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc400
	ctx.lr = 0x823E6DF8;
	sub_823BC400(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_823E6E04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823e6e7c
	if (ctx.cr6.eq) goto loc_823E6E7C;
	// lwz r31,12(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x823e6e60
	if (!ctx.cr6.eq) goto loc_823E6E60;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x823E6E38;
	sub_823BC400(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lwz r10,12(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x823e6e68
	if (ctx.cr6.eq) goto loc_823E6E68;
loc_823E6E60:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x823e6e04
	goto loc_823E6E04;
loc_823E6E68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r10,r11,15,27,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// b 0x823e6e94
	goto loc_823E6E94;
loc_823E6E7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823e3cc0
	ctx.lr = 0x823E6E88;
	sub_823E3CC0(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,28,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_823E6E94:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e6eb0
	if (!ctx.cr0.eq) goto loc_823E6EB0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e6db8
	if (!ctx.cr6.eq) goto loc_823E6DB8;
loc_823E6EB0:
	// lwz r10,44(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6edc
	if (ctx.cr0.eq) goto loc_823E6EDC;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e6ed4
	if (ctx.cr6.eq) goto loc_823E6ED4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e6edc
	if (!ctx.cr0.eq) goto loc_823E6EDC;
loc_823E6ED4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823e6ee0
	goto loc_823E6EE0;
loc_823E6EDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6EE0:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x823e6f18
	if (ctx.cr0.eq) goto loc_823E6F18;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e6f08
	if (ctx.cr6.eq) goto loc_823E6F08;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823e6f0c
	if (!ctx.cr0.eq) goto loc_823E6F0C;
loc_823E6F08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6F0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x823e6f1c
	if (ctx.cr0.eq) goto loc_823E6F1C;
loc_823E6F18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E6F1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x823e6f30
	if (!ctx.cr0.eq) goto loc_823E6F30;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6fbc
	if (ctx.cr0.eq) goto loc_823E6FBC;
loc_823E6F30:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823e3850
	ctx.lr = 0x823E6F40;
	sub_823E3850(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e6fb0
	if (ctx.cr6.eq) goto loc_823E6FB0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823e3850
	ctx.lr = 0x823E6F58;
	sub_823E3850(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e6fb0
	if (ctx.cr6.eq) goto loc_823E6FB0;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e6fbc
	if (ctx.cr0.eq) goto loc_823E6FBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823e39e8
	ctx.lr = 0x823E6F78;
	sub_823E39E8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823e6f8c
	if (!ctx.cr6.eq) goto loc_823E6F8C;
	// li r4,3645
	ctx.r4.s64 = 3645;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6F8C;
	sub_823A0E88(ctx, base);
loc_823E6F8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823e3b68
	ctx.lr = 0x823E6F9C;
	sub_823E3B68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823e6fbc
	if (!ctx.cr6.eq) goto loc_823E6FBC;
	// li r4,3646
	ctx.r4.s64 = 3646;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6FB0;
	sub_823A0E88(ctx, base);
loc_823E6FB0:
	// li r4,3644
	ctx.r4.s64 = 3644;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a0e88
	ctx.lr = 0x823E6FBC;
	sub_823A0E88(ctx, base);
loc_823E6FBC:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824A1D48) {
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
	// bl 0x824a1518
	ctx.lr = 0x824A1D60;
	sub_824A1518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249e6b8
	ctx.lr = 0x824A1D68;
	sub_8249E6B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249df90
	ctx.lr = 0x824A1D70;
	sub_8249DF90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249e0d8
	ctx.lr = 0x824A1D78;
	sub_8249E0D8(ctx, base);
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

DEFINE_REX_FUNC(sub_824A25E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a25f8
	if (!ctx.cr6.lt) goto loc_824A25F8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_824A25F8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2604
	if (!ctx.cr0.eq) goto loc_824A2604;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824A2604:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x824a2630
	if (ctx.cr6.eq) goto loc_824A2630;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x824a2630
	if (ctx.cr6.eq) goto loc_824A2630;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x824a2630
	if (ctx.cr6.eq) goto loc_824A2630;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x824a2630
	if (ctx.cr6.eq) goto loc_824A2630;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824a2634
	if (!ctx.cr6.eq) goto loc_824A2634;
loc_824A2630:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824A2634:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A51D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x824A51E0;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a521c
	if (ctx.cr6.eq) goto loc_824A521C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-21744
	ctx.r6.s64 = ctx.r11.s64 + -21744;
	// addi r5,r10,-21544
	ctx.r5.s64 = ctx.r10.s64 + -21544;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,2011
	ctx.r7.s64 = 2011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824A521C;
	sub_823AFBD8(ctx, base);
loc_824A521C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x824c94f8
	ctx.lr = 0x824A522C;
	sub_824C94F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A524C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A526C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A528C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A52AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r24,164(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 164);
	// lwz r23,236(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A52D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A52F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5330;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lbz r19,159(r31)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r31.u32 + 159);
	// lbz r18,153(r31)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r31.u32 + 153);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A5348;
	sub_824BB000(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// stw r11,80(r17)
	REX_STORE_U32(ctx.r17.u32 + 80, ctx.r11.u32);
	// stw r29,56(r17)
	REX_STORE_U32(ctx.r17.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A53B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A53D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A53E4;
	sub_8249B520(ctx, base);
	// stb r19,159(r17)
	REX_STORE_U8(ctx.r17.u32 + 159, ctx.r19.u8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8249b520
	ctx.lr = 0x824A53F8;
	sub_8249B520(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r19,160(r17)
	REX_STORE_U8(ctx.r17.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,154(r17)
	REX_STORE_U8(ctx.r17.u32 + 154, ctx.r11.u8);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,228(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r17)
	REX_STORE_U32(ctx.r17.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A5420;
	sub_824BE148(ctx, base);
	// li r3,59
	ctx.r3.s64 = 59;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A542C;
	sub_824BB000(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// stw r11,80(r16)
	REX_STORE_U32(ctx.r16.u32 + 80, ctx.r11.u32);
	// stw r29,56(r16)
	REX_STORE_U32(ctx.r16.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5498;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A54B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A54C8;
	sub_8249B520(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A54E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5528;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 228);
	// stb r19,159(r16)
	REX_STORE_U8(ctx.r16.u32 + 159, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r18,153(r16)
	REX_STORE_U8(ctx.r16.u32 + 153, ctx.r18.u8);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r11,228(r16)
	REX_STORE_U32(ctx.r16.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A556C;
	sub_824BE148(ctx, base);
	// li r3,39
	ctx.r3.s64 = 39;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A5578;
	sub_824BB000(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,80(r21)
	REX_STORE_U32(ctx.r21.u32 + 80, ctx.r11.u32);
	// stw r29,56(r21)
	REX_STORE_U32(ctx.r21.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A55A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A55C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A55E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A5614;
	sub_8249B520(ctx, base);
	// stb r19,159(r21)
	REX_STORE_U8(ctx.r21.u32 + 159, ctx.r19.u8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8249b520
	ctx.lr = 0x824A5628;
	sub_8249B520(ctx, base);
	// lwz r11,228(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 228);
	// stb r19,160(r21)
	REX_STORE_U8(ctx.r21.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,228(r21)
	REX_STORE_U32(ctx.r21.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A5648;
	sub_824BE148(ctx, base);
	// li r3,97
	ctx.r3.s64 = 97;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A5654;
	sub_824BB000(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r29,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A56A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A56C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A56E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A56F0;
	sub_8249B520(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	REX_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// stb r18,153(r28)
	REX_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8249b520
	ctx.lr = 0x824A5788;
	sub_8249B520(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A57A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A57C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A57E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// stb r19,160(r28)
	REX_STORE_U8(ctx.r28.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r18,154(r28)
	REX_STORE_U8(ctx.r28.u32 + 154, ctx.r18.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,228(r28)
	REX_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A582C;
	sub_824BE148(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A5838;
	sub_824BB000(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,80(r28)
	REX_STORE_U32(ctx.r28.u32 + 80, ctx.r11.u32);
	// stw r29,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A58A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A58C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r28)
	REX_STORE_U8(ctx.r28.u32 + 164, ctx.r24.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A58D8;
	sub_8249B520(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A58F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	REX_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// stb r18,153(r28)
	REX_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8249b520
	ctx.lr = 0x824A5970;
	sub_8249B520(ctx, base);
	// lis r27,-32251
	ctx.r27.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r27,-22164
	ctx.r11.s64 = ctx.r27.s64 + -22164;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,136(r28)
	REX_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r28)
	REX_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A599C;
	sub_824BE148(ctx, base);
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824bb000
	ctx.lr = 0x824A59A8;
	sub_824BB000(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r29.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A59D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A59F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A5A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r30)
	REX_STORE_U8(ctx.r30.u32 + 164, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8249b520
	ctx.lr = 0x824A5A48;
	sub_8249B520(ctx, base);
	// lwz r11,-22164(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -22164);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	REX_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x824be148
	ctx.lr = 0x824A5A6C;
	sub_824BE148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b8970
	ctx.lr = 0x824A5A74;
	sub_824B8970(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824CE758) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824CE760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r31,196
	ctx.r28.s64 = ctx.r31.s64 + 196;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x824CE778;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ce794
	if (ctx.cr6.eq) goto loc_824CE794;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824d2308
	ctx.lr = 0x824CE790;
	sub_824D2308(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_824CE794:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x824ce7f0
	if (ctx.cr6.eq) goto loc_824CE7F0;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824ce7ec
	if (ctx.cr6.eq) goto loc_824CE7EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824ccb38
	ctx.lr = 0x824CE7C0;
	sub_824CCB38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824ce7ec
	if (ctx.cr6.lt) goto loc_824CE7EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ce7ec
	if (ctx.cr6.eq) goto loc_824CE7EC;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x824ce7f0
	if (!ctx.cr6.eq) goto loc_824CE7F0;
loc_824CE7EC:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_824CE7F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x824CE7F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D05C8) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,18976
	ctx.r8.s64 = ctx.r11.s64 + 18976;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r7,r10,21108
	ctx.r7.s64 = ctx.r10.s64 + 21108;
	// addi r6,r9,18968
	ctx.r6.s64 = ctx.r9.s64 + 18968;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// beq cr6,0x824d0620
	if (ctx.cr6.eq) goto loc_824D0620;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824D0620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824D0620:
	// addi r3,r31,268
	ctx.r3.s64 = ctx.r31.s64 + 268;
	// bl 0x824cfb38
	ctx.lr = 0x824D0628;
	sub_824CFB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824da290
	ctx.lr = 0x824D0630;
	sub_824DA290(ctx, base);
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

DEFINE_REX_FUNC(sub_824D33E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D38D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x824D38D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addi r31,r11,196
	ctx.r31.s64 = ctx.r11.s64 + 196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x824D38F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824D3908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x824D3914;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D4CE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x824D4CE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d4d10
	if (!ctx.cr6.eq) goto loc_824D4D10;
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,10
	ctx.r28.u64 = ctx.r28.u64 | 10;
loc_824D4D10:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824d4e28
	if (ctx.cr6.lt) goto loc_824D4E28;
	// lwz r31,336(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 336);
	// addi r30,r29,332
	ctx.r30.s64 = ctx.r29.s64 + 332;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x824d4d48
	if (ctx.cr6.eq) goto loc_824D4D48;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
loc_824D4D30:
	// lhz r10,248(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 248);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824d4d50
	if (ctx.cr6.eq) goto loc_824D4D50;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824d4d30
	if (!ctx.cr6.eq) goto loc_824D4D30;
loc_824D4D48:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x824d4d58
	goto loc_824D4D58;
loc_824D4D50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824d4e28
	if (!ctx.cr6.eq) goto loc_824D4E28;
loc_824D4D58:
	// lwz r3,60(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824D4D7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x824d4e28
	if (ctx.cr6.lt) goto loc_824D4E28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824d4da8
	if (!ctx.cr6.eq) goto loc_824D4DA8;
	// lis r28,-30009
	ctx.r28.s64 = -1966669824;
	// ori r28,r28,10
	ctx.r28.u64 = ctx.r28.u64 | 10;
	// b 0x824d4e28
	goto loc_824D4E28;
loc_824D4DA8:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32812
	ctx.r4.u64 = ctx.r4.u64 | 32812;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x824cf450
	ctx.lr = 0x824D4DC0;
	sub_824CF450(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824d4de4
	if (ctx.cr6.eq) goto loc_824D4DE4;
	// bl 0x824cf550
	ctx.lr = 0x824D4DCC;
	sub_824CF550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824d4df4
	if (!ctx.cr6.eq) goto loc_824D4DF4;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x824d4e28
	goto loc_824D4E28;
loc_824D4DE4:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x824d4e28
	goto loc_824D4E28;
loc_824D4DF4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cf460
	ctx.lr = 0x824D4E10;
	sub_824CF460(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_824D4E28:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x824d4e38
	if (ctx.cr6.eq) goto loc_824D4E38;
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_824D4E38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DB4B0) {
	REX_FUNC_PROLOGUE();
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r10,1
	ctx.r4.u64 = ctx.r10.u64 ^ 1;
	// b 0x825f7720
	sub_825F7720(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DC080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824DC088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r10,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x824cf450
	ctx.lr = 0x824DC0C0;
	sub_824CF450(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x824dc180
	if (ctx.cr6.eq) goto loc_824DC180;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x824cf450
	ctx.lr = 0x824DC0EC;
	sub_824CF450(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dc110
	if (ctx.cr6.eq) goto loc_824DC110;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824e5bb8
	ctx.lr = 0x824DC10C;
	sub_824E5BB8(ctx, base);
	// b 0x824dc114
	goto loc_824DC114;
loc_824DC110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_824DC114:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824dc180
	if (ctx.cr6.eq) goto loc_824DC180;
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824DC144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x824dc1c8
	if (ctx.cr6.lt) goto loc_824DC1C8;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824DC164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x824dc1cc
	if (ctx.cr6.eq) goto loc_824DC1CC;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_824DC180:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// stb r28,24(r31)
	REX_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// beq cr6,0x824dc1c8
	if (ctx.cr6.eq) goto loc_824DC1C8;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824dc1b4
	if (ctx.cr6.eq) goto loc_824DC1B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824DC1B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824DC1B4:
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x824cf458
	ctx.lr = 0x824DC1C4;
	sub_824CF458(ctx, base);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_824DC1C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824DC1CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E20B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x824d9cc8
	sub_824D9CC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E2450) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x824E2458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,196
	ctx.r29.s64 = ctx.r11.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x824E2474;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824e249c
	if (!ctx.cr6.eq) goto loc_824E249C;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// bl 0x8261c0e4
	ctx.lr = 0x824E2490;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_824E249C:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r27,68(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x824d9c18
	ctx.lr = 0x824E24A8;
	sub_824D9C18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824e20b8
	ctx.lr = 0x824E24B4;
	sub_824E20B8(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r10,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// bl 0x8261c0e4
	ctx.lr = 0x824E24C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E5B98) {
	REX_FUNC_PROLOGUE();
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E5C28) {
	REX_FUNC_PROLOGUE();
	// lbz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 52);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E5C70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lhz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lfd f0,25080(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 25080);
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E69D8) {
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
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x824e6a1c
	if (!ctx.cr6.eq) goto loc_824E6A1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x824dcb58
	ctx.lr = 0x824E6A08;
	sub_824DCB58(ctx, base);
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
loc_824E6A1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// ori r9,r11,64
	ctx.r9.u64 = ctx.r11.u64 | 64;
	// stb r9,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// lbz r11,45(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 45);
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// stb r8,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r8.u8);
	// bl 0x824ccbb0
	ctx.lr = 0x824E6A3C;
	sub_824CCBB0(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x824dc298
	ctx.lr = 0x824E6A48;
	sub_824DC298(ctx, base);
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

DEFINE_REX_FUNC(sub_824E92B0) {
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
	// bl 0x824e6940
	ctx.lr = 0x824E92C8;
	sub_824E6940(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824e92f0
	if (ctx.cr6.eq) goto loc_824E92F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824E92E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
loc_824E92F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824E9304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_824EC920) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EE740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824EE75C:
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x824ee75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824EE75C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824ee070
	ctx.lr = 0x824EE77C;
	sub_824EE070(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EF520) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824EF8E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x824EF8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824EF904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x824efa00
	if (ctx.cr6.lt) goto loc_824EFA00;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825f7d18
	ctx.lr = 0x824EF918;
	sub_825F7D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x824efa00
	if (ctx.cr6.lt) goto loc_824EFA00;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,1484(r30)
	REX_STORE_U32(ctx.r30.u32 + 1484, ctx.r7.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824ef93c
	if (!ctx.cr6.eq) goto loc_824EF93C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_824EF93C:
	// stw r9,1468(r30)
	REX_STORE_U32(ctx.r30.u32 + 1468, ctx.r9.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,11
	ctx.r8.s64 = 11;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824EF950:
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x824ef950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824EF950;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lis r6,-32177
	ctx.r6.s64 = -2108751872;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r6,-2000
	ctx.r11.s64 = ctx.r6.s64 + -2000;
	// stb r9,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r9.u8);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// stb r7,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r7.u8);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r8,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r8.u8);
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824EF9A0:
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x824ef9a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824EF9A0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r11,44100
	ctx.r9.u64 = ctx.r11.u64 | 44100;
	// stb r10,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f7d20
	ctx.lr = 0x824EF9D0;
	sub_825F7D20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x824efa00
	if (ctx.cr6.lt) goto loc_824EFA00;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824EF9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x824efa14
	if (!ctx.cr6.lt) goto loc_824EFA14;
loc_824EFA00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824EFA14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824EFA14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F4FE8) {
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
	// bl 0x824f50e0
	ctx.lr = 0x824F5000;
	sub_824F50E0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,29368
	ctx.r8.s64 = ctx.r10.s64 + 29368;
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// std r11,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,80(r31)
	REX_STORE_U64(ctx.r31.u32 + 80, ctx.r11.u64);
	// std r11,88(r31)
	REX_STORE_U64(ctx.r31.u32 + 88, ctx.r11.u64);
	// std r11,96(r31)
	REX_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824F9290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x824F9298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x824f9518
	if (ctx.cr6.eq) goto loc_824F9518;
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x824f9518
	if (ctx.cr6.eq) goto loc_824F9518;
	// lwz r3,584(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// bl 0x825062e0
	ctx.lr = 0x824F92BC;
	sub_825062E0(ctx, base);
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// stw r28,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 32768;
	// beq cr6,0x824f92e4
	if (ctx.cr6.eq) goto loc_824F92E4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F92E0;
	sub_8226A890(ctx, base);
	// stw r28,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
loc_824F92E4:
	// lwz r30,204(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824f933c
	if (ctx.cr6.eq) goto loc_824F933C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8226a890
	ctx.lr = 0x824F92FC;
	sub_8226A890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8226a890
	ctx.lr = 0x824F9308;
	sub_8226A890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8226a890
	ctx.lr = 0x824F9314;
	sub_8226A890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x8226a890
	ctx.lr = 0x824F9320;
	sub_8226A890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x8226a890
	ctx.lr = 0x824F932C;
	sub_8226A890(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F9338;
	sub_8226A890(ctx, base);
	// stw r28,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
loc_824F933C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f93ec
	if (ctx.cr6.eq) goto loc_824F93EC;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f93dc
	if (ctx.cr6.eq) goto loc_824F93DC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_824F935C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x8226a890
	ctx.lr = 0x824F9374;
	sub_8226A890(ctx, base);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8226a890
	ctx.lr = 0x824F938C;
	sub_8226A890(ctx, base);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f935c
	if (ctx.cr6.lt) goto loc_824F935C;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8226a890
	ctx.lr = 0x824F93D4;
	sub_8226A890(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_824F93DC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x8226a890
	ctx.lr = 0x824F93E8;
	sub_8226A890(ctx, base);
	// stw r28,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r28.u32);
loc_824F93EC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f94b4
	if (ctx.cr6.eq) goto loc_824F94B4;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f94a4
	if (ctx.cr6.eq) goto loc_824F94A4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_824F940C:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f9474
	if (ctx.cr6.eq) goto loc_824F9474;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f9434
	if (ctx.cr6.eq) goto loc_824F9434;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F9434;
	sub_8226A890(ctx, base);
loc_824F9434:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lwz r9,232(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f9464
	if (ctx.cr6.eq) goto loc_824F9464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F9464;
	sub_8226A890(ctx, base);
loc_824F9464:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r28.u32);
loc_824F9474:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824f940c
	if (ctx.cr6.lt) goto loc_824F940C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8226a890
	ctx.lr = 0x824F949C;
	sub_8226A890(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// stw r28,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_824F94A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 232);
	// bl 0x8226a890
	ctx.lr = 0x824F94B0;
	sub_8226A890(ctx, base);
	// stw r28,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r28.u32);
loc_824F94B4:
	// lwz r3,612(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f94c8
	if (ctx.cr6.eq) goto loc_824F94C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F94C8;
	sub_8226A890(ctx, base);
loc_824F94C8:
	// lwz r30,616(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// stw r28,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824f94f8
	if (ctx.cr6.eq) goto loc_824F94F8;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f94ec
	if (ctx.cr6.eq) goto loc_824F94EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F94EC;
	sub_8226A890(ctx, base);
loc_824F94EC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F94F8;
	sub_8226A890(ctx, base);
loc_824F94F8:
	// stw r28,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226a890
	ctx.lr = 0x824F9508;
	sub_8226A890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_824F9518:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8250CF70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x8250CF78;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8250d218
	if (ctx.cr6.eq) goto loc_8250D218;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8250d218
	if (ctx.cr6.eq) goto loc_8250D218;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8250d218
	if (ctx.cr6.eq) goto loc_8250D218;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8250cfd0
	if (ctx.cr6.eq) goto loc_8250CFD0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8250d218
	if (ctx.cr6.eq) goto loc_8250D218;
loc_8250CFD0:
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8250cfe8
	if (ctx.cr6.eq) goto loc_8250CFE8;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8250d228
	goto loc_8250D228;
loc_8250CFE8:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,700(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// beq cr6,0x8250d01c
	if (ctx.cr6.eq) goto loc_8250D01C;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8250d018
	if (ctx.cr6.eq) goto loc_8250D018;
	// stw r10,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
	// b 0x8250d01c
	goto loc_8250D01C;
loc_8250D018:
	// stw r27,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r27.u32);
loc_8250D01C:
	// lwz r9,416(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8250d02c
	if (ctx.cr6.eq) goto loc_8250D02C;
	// stw r10,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r10.u32);
loc_8250D02C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250d040
	if (ctx.cr6.eq) goto loc_8250D040;
	// lhz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8250d044
	goto loc_8250D044;
loc_8250D040:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8250D044:
	// lwz r29,192(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// stw r27,692(r31)
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x825d6870
	ctx.lr = 0x8250D064;
	sub_825D6870(ctx, base);
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250d09c
	if (ctx.cr6.eq) goto loc_8250D09C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8250D074:
	// lwz r10,88(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// stwx r6,r8,r29
	REX_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r6.u32);
	// lhz r5,34(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8250d074
	if (ctx.cr6.lt) goto loc_8250D074;
loc_8250D09C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8250d0c8
	if (ctx.cr6.eq) goto loc_8250D0C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8250d0c8
	if (ctx.cr6.eq) goto loc_8250D0C8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8250d0c8
	if (ctx.cr6.eq) goto loc_8250D0C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8250d228
	goto loc_8250D228;
loc_8250D0C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lwz r9,452(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8250d100
	if (ctx.cr6.eq) goto loc_8250D100;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 328);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r10,332(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// mullw r9,r11,r25
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// divwu r11,r9,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8250d100
	if (ctx.cr6.lt) goto loc_8250D100;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8250D100:
	// lhz r8,34(r30)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r30.u32 + 34);
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 424);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// bne cr6,0x8250d124
	if (!ctx.cr6.eq) goto loc_8250D124;
	// li r11,6
	ctx.r11.s64 = 6;
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// b 0x8250d130
	goto loc_8250D130;
loc_8250D124:
	// lwz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
loc_8250D130:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8250d13c
	if (ctx.cr6.lt) goto loc_8250D13C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_8250D13C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r9,708(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251cd40
	ctx.lr = 0x8250D158;
	sub_8251CD40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8250d224
	if (ctx.cr6.lt) goto loc_8250D224;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lhz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250cdc8
	ctx.lr = 0x8250D17C;
	sub_8250CDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8250d224
	if (ctx.cr6.lt) goto loc_8250D224;
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8250d1a8
	if (ctx.cr6.eq) goto loc_8250D1A8;
	// lwz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 368);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// stw r6,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r6.u32);
loc_8250D1A8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8250d1e4
	if (ctx.cr6.eq) goto loc_8250D1E4;
	// lis r11,152
	ctx.r11.s64 = 9961472;
	// ld r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 184);
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// ori r7,r11,38528
	ctx.r7.u64 = ctx.r11.u64 | 38528;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r10,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r7.u64);
	// rotldi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 1);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// std r4,0(r21)
	REX_STORE_U64(ctx.r21.u32 + 0, ctx.r4.u64);
	// andc r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// tdlgei r10,-1
	if (ctx.r10.s64 == -1ll || ctx.r10.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_8250D1E4:
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// ld r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 184);
	// clrldi r11,r9,48
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFF;
	// subf r7,r8,r22
	ctx.r7.u64 = ctx.r22.u64 - ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r5,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r7.u64;
	// stw r7,700(r31)
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r7.u32);
	// std r6,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r6.u64);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,692(r31)
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// b 0x8250d228
	goto loc_8250D228;
loc_8250D218:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x8250d228
	goto loc_8250D228;
loc_8250D224:
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8250D228:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8250d238
	if (ctx.cr6.eq) goto loc_8250D238;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8250D238:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8250d274
	if (ctx.cr6.eq) goto loc_8250D274;
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8250d274
	if (ctx.cr6.eq) goto loc_8250D274;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8250d274
	if (!ctx.cr6.eq) goto loc_8250D274;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,692(r31)
	REX_STORE_U32(ctx.r31.u32 + 692, ctx.r8.u32);
loc_8250D274:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8250d284
	if (ctx.cr6.eq) goto loc_8250D284;
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 692);
	// stw r11,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_8250D284:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251B9B0) {
	REX_FUNC_PROLOGUE();
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// b 0x8226a890
	sub_8226A890(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251BA78) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,-1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x8226a890
	sub_8226A890(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251C0D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8251C0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r30,r31,664
	ctx.r30.s64 = ctx.r31.s64 + 664;
	// li r5,8
	ctx.r5.s64 = 8;
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 110);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r3,720(r31)
	REX_STORE_U32(ctx.r31.u32 + 720, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,724(r31)
	REX_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// bl 0x82530128
	ctx.lr = 0x8251C130;
	sub_82530128(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8251c5bc
	if (ctx.cr6.lt) goto loc_8251C5BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825302b0
	ctx.lr = 0x8251C148;
	sub_825302B0(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r30,r11,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C158;
	sub_8251B9A0(ctx, base);
	// stw r3,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x8251C170;
	sub_825D6870(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r29,r11,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C180;
	sub_8251B9A0(ctx, base);
	// stw r3,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x8251C198;
	sub_825D6870(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b9c0
	ctx.lr = 0x8251C1A4;
	sub_8251B9C0(ctx, base);
	// stw r3,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x8251C1BC;
	sub_825D6870(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8251b9c0
	ctx.lr = 0x8251C1C8;
	sub_8251B9C0(ctx, base);
	// stw r3,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x8251C1E0;
	sub_825D6870(ctx, base);
	// lwz r7,448(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8251c298
	if (ctx.cr6.eq) goto loc_8251C298;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x8251c23c
	if (!ctx.cr6.gt) goto loc_8251C23C;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_8251C22C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8251c22c
	if (ctx.cr6.gt) goto loc_8251C22C;
loc_8251C23C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251C240:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8251c240
	if (ctx.cr6.gt) goto loc_8251C240;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8251c27c
	if (ctx.cr6.lt) goto loc_8251C27C;
loc_8251C268:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_8251C27C:
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulld r8,r9,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r10.u64);
	// rldicr r6,r8,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x8251c268
	if (ctx.cr6.gt) goto loc_8251C268;
loc_8251C298:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x8251c2c4
	if (ctx.cr6.eq) goto loc_8251C2C4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sraw r11,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r11.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x8251c2f0
	goto loc_8251C2F0;
loc_8251C2C4:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8251c2e4
	if (ctx.cr6.eq) goto loc_8251C2E4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// slw r11,r6,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x8251c2f0
	goto loc_8251C2F0;
loc_8251C2E4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_8251C2F0:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r4,32
	ctx.r4.s64 = 32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9c0
	ctx.lr = 0x8251C304;
	sub_8251B9C0(ctx, base);
	// stw r3,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251c338
	if (ctx.cr6.eq) goto loc_8251C338;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9c0
	ctx.lr = 0x8251C32C;
	sub_8251B9C0(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
loc_8251C338:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C344;
	sub_8251B9A0(ctx, base);
	// stw r3,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// mulli r3,r11,116
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// bl 0x8251b9a0
	ctx.lr = 0x8251C35C;
	sub_8251B9A0(ctx, base);
	// stw r3,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825227c8
	ctx.lr = 0x8251C370;
	sub_825227C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251f3a8
	ctx.lr = 0x8251C378;
	sub_8251F3A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8251c5bc
	if (ctx.cr6.lt) goto loc_8251C5BC;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C390;
	sub_8251B9A0(ctx, base);
	// stw r3,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x8251b9a0
	ctx.lr = 0x8251C3A8;
	sub_8251B9A0(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x8251b9a0
	ctx.lr = 0x8251C3C0;
	sub_8251B9A0(ctx, base);
	// stw r3,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c5b4
	if (ctx.cr6.eq) goto loc_8251C5B4;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C3D8;
	sub_8251B9A0(ctx, base);
	// stw r3,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8251c3f4
	if (!ctx.cr6.eq) goto loc_8251C3F4;
loc_8251C3E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_8251C3F4:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C404;
	sub_8251B9A0(ctx, base);
	// stw r3,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C424;
	sub_8251B9A0(ctx, base);
	// stw r3,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C444;
	sub_8251B9A0(ctx, base);
	// stw r3,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251f910
	ctx.lr = 0x8251C458;
	sub_8251F910(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8251c5bc
	if (ctx.cr6.lt) goto loc_8251C5BC;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C470;
	sub_8251B9A0(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C488;
	sub_8251B9A0(ctx, base);
	// stw r3,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8251c4d0
	if (!ctx.cr6.gt) goto loc_8251C4D0;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C4AC;
	sub_8251B9A0(ctx, base);
	// stw r3,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C4C4;
	sub_8251B9A0(ctx, base);
	// stw r3,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
loc_8251C4D0:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C4DC;
	sub_8251B9A0(ctx, base);
	// stw r3,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x8251b9a0
	ctx.lr = 0x8251C4F4;
	sub_8251B9A0(ctx, base);
	// stw r3,740(r31)
	REX_STORE_U32(ctx.r31.u32 + 740, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251c3e4
	if (ctx.cr6.eq) goto loc_8251C3E4;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251c5bc
	if (!ctx.cr6.eq) goto loc_8251C5BC;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251c5bc
	if (!ctx.cr6.eq) goto loc_8251C5BC;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251c594
	if (ctx.cr6.eq) goto loc_8251C594;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x8251c548
	if (!ctx.cr6.gt) goto loc_8251C548;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_8251C538:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8251c538
	if (ctx.cr6.gt) goto loc_8251C538;
loc_8251C548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251C54C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8251c54c
	if (ctx.cr6.gt) goto loc_8251C54C;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8251c268
	if (!ctx.cr6.lt) goto loc_8251C268;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// sld r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// mulld r7,r8,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r10.u64);
	// rldicr r6,r7,2,61
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// cmpd cr6,r6,r28
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r28.s64, ctx.xer);
	// bgt cr6,0x8251c268
	if (ctx.cr6.gt) goto loc_8251C268;
loc_8251C594:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8251b9a0
	ctx.lr = 0x8251C5A8;
	sub_8251B9A0(ctx, base);
	// stw r3,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8251c5bc
	if (!ctx.cr6.eq) goto loc_8251C5BC;
loc_8251C5B4:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_8251C5BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82542E10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82542E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x82542e94
	if (!ctx.cr6.lt) goto loc_82542E94;
loc_82542E3C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542e94
	if (ctx.cr6.eq) goto loc_82542E94;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82542e84
	if (!ctx.cr0.lt) goto loc_82542E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82542E84;
	sub_82562A68(ctx, base);
loc_82542E84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82542e3c
	if (ctx.cr6.gt) goto loc_82542E3C;
loc_82542E94:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x82542ed0
	if (!ctx.cr0.lt) goto loc_82542ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82542ED0;
	sub_82562A68(ctx, base);
loc_82542ED0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x82542ee4
	if (ctx.cr6.eq) goto loc_82542EE4;
loc_82542ED8:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_82542EE4:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82542f58
	if (!ctx.cr6.lt) goto loc_82542F58;
loc_82542F00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542f58
	if (ctx.cr6.eq) goto loc_82542F58;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82542f48
	if (!ctx.cr0.lt) goto loc_82542F48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82542F48;
	sub_82562A68(ctx, base);
loc_82542F48:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82542f00
	if (ctx.cr6.gt) goto loc_82542F00;
loc_82542F58:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x82542f94
	if (!ctx.cr0.lt) goto loc_82542F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82542F94;
	sub_82562A68(ctx, base);
loc_82542F94:
	// cmplwi cr6,r30,182
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 182, ctx.xer);
	// bne cr6,0x82542ed8
	if (!ctx.cr6.eq) goto loc_82542ED8;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82543010
	if (!ctx.cr6.lt) goto loc_82543010;
loc_82542FB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543010
	if (ctx.cr6.eq) goto loc_82543010;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82543000
	if (!ctx.cr0.lt) goto loc_82543000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543000;
	sub_82562A68(ctx, base);
loc_82543000:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82542fb8
	if (ctx.cr6.gt) goto loc_82542FB8;
loc_82543010:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8254304c
	if (!ctx.cr0.lt) goto loc_8254304C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8254304C;
	sub_82562A68(ctx, base);
loc_8254304C:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r30,284(r26)
	REX_STORE_U32(ctx.r26.u32 + 284, ctx.r30.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82543058:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x825430d0
	if (!ctx.cr6.lt) goto loc_825430D0;
loc_82543074:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825430d0
	if (ctx.cr6.eq) goto loc_825430D0;
	// subfic r10,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r10,32
	ctx.r6.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x825430c0
	if (!ctx.cr0.lt) goto loc_825430C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825430C0;
	sub_82562A68(ctx, base);
loc_825430C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543074
	if (ctx.cr6.gt) goto loc_82543074;
loc_825430D0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8254310c
	if (!ctx.cr0.lt) goto loc_8254310C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8254310C;
	sub_82562A68(ctx, base);
loc_8254310C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8254311c
	if (ctx.cr6.eq) goto loc_8254311C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82543058
	goto loc_82543058;
loc_8254311C:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// ld r11,3624(r26)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r26.u32 + 3624);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82543180
	if (!ctx.cr6.lt) goto loc_82543180;
loc_82543140:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543180
	if (ctx.cr6.eq) goto loc_82543180;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x82543170
	if (!ctx.cr0.lt) goto loc_82543170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543170;
	sub_82562A68(ctx, base);
loc_82543170:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543140
	if (ctx.cr6.gt) goto loc_82543140;
loc_82543180:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf. r7,r30,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x825431a8
	if (!ctx.cr0.lt) goto loc_825431A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825431A8;
	sub_82562A68(ctx, base);
loc_825431A8:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,3656(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 3656);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x825431cc
	if (!ctx.cr6.gt) goto loc_825431CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254327c
	goto loc_8254327C;
loc_825431CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825431dc
	if (!ctx.cr6.eq) goto loc_825431DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8254327c
	goto loc_8254327C;
loc_825431DC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8254323c
	if (!ctx.cr6.gt) goto loc_8254323C;
loc_825431E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254323c
	if (ctx.cr6.eq) goto loc_8254323C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8254322c
	if (!ctx.cr0.lt) goto loc_8254322C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8254322C;
	sub_82562A68(ctx, base);
loc_8254322C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825431e4
	if (ctx.cr6.gt) goto loc_825431E4;
loc_8254323C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x82543278
	if (!ctx.cr0.lt) goto loc_82543278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543278;
	sub_82562A68(ctx, base);
loc_82543278:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8254327C:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x825432d8
	if (!ctx.cr6.lt) goto loc_825432D8;
loc_82543298:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825432d8
	if (ctx.cr6.eq) goto loc_825432D8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x825432c8
	if (!ctx.cr0.lt) goto loc_825432C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825432C8;
	sub_82562A68(ctx, base);
loc_825432C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543298
	if (ctx.cr6.gt) goto loc_82543298;
loc_825432D8:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf. r7,r30,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x82543300
	if (!ctx.cr0.lt) goto loc_82543300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543300;
	sub_82562A68(ctx, base);
loc_82543300:
	// lwz r11,3592(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 3592);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ld r10,3624(r26)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r26.u32 + 3624);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ld r8,3632(r26)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r26.u32 + 3632);
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mulld r11,r9,r27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r27.u64);
	// std r27,3624(r26)
	REX_STORE_U64(ctx.r26.u32 + 3624, ctx.r27.u64);
	// std r10,3640(r26)
	REX_STORE_U64(ctx.r26.u32 + 3640, ctx.r10.u64);
	// std r8,3648(r26)
	REX_STORE_U64(ctx.r26.u32 + 3648, ctx.r8.u64);
	// std r10,3632(r26)
	REX_STORE_U64(ctx.r26.u32 + 3632, ctx.r10.u64);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r7,3600(r26)
	REX_STORE_U64(ctx.r26.u32 + 3600, ctx.r7.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x825433a0
	if (!ctx.cr6.lt) goto loc_825433A0;
loc_82543348:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825433a0
	if (ctx.cr6.eq) goto loc_825433A0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82543390
	if (!ctx.cr0.lt) goto loc_82543390;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543390;
	sub_82562A68(ctx, base);
loc_82543390:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543348
	if (ctx.cr6.gt) goto loc_82543348;
loc_825433A0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x825433dc
	if (!ctx.cr0.lt) goto loc_825433DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825433DC;
	sub_82562A68(ctx, base);
loc_825433DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82542ed8
	if (ctx.cr6.eq) goto loc_82542ED8;
	// lwz r11,284(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 284);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825434a8
	if (!ctx.cr6.eq) goto loc_825434A8;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82543464
	if (!ctx.cr6.lt) goto loc_82543464;
loc_8254340C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543464
	if (ctx.cr6.eq) goto loc_82543464;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82543454
	if (!ctx.cr0.lt) goto loc_82543454;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543454;
	sub_82562A68(ctx, base);
loc_82543454:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8254340c
	if (ctx.cr6.gt) goto loc_8254340C;
loc_82543464:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x825434a0
	if (!ctx.cr0.lt) goto loc_825434A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825434A0;
	sub_82562A68(ctx, base);
loc_825434A0:
	// stw r30,3928(r26)
	REX_STORE_U32(ctx.r26.u32 + 3928, ctx.r30.u32);
	// b 0x825434b0
	goto loc_825434B0;
loc_825434A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3928(r26)
	REX_STORE_U32(ctx.r26.u32 + 3928, ctx.r11.u32);
loc_825434B0:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82543508
	if (!ctx.cr6.lt) goto loc_82543508;
loc_825434C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543508
	if (ctx.cr6.eq) goto loc_82543508;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x825434f8
	if (!ctx.cr0.lt) goto loc_825434F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825434F8;
	sub_82562A68(ctx, base);
loc_825434F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825434c8
	if (ctx.cr6.gt) goto loc_825434C8;
loc_82543508:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf. r7,r30,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r7,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge 0x82543530
	if (!ctx.cr0.lt) goto loc_82543530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543530;
	sub_82562A68(ctx, base);
loc_82543530:
	// lwz r11,284(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82543600
	if (!ctx.cr6.eq) goto loc_82543600;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x825435b0
	if (!ctx.cr6.lt) goto loc_825435B0;
loc_82543558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825435b0
	if (ctx.cr6.eq) goto loc_825435B0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x825435a0
	if (!ctx.cr0.lt) goto loc_825435A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825435A0;
	sub_82562A68(ctx, base);
loc_825435A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543558
	if (ctx.cr6.gt) goto loc_82543558;
loc_825435B0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x825435ec
	if (!ctx.cr0.lt) goto loc_825435EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825435EC;
	sub_82562A68(ctx, base);
loc_825435EC:
	// stw r30,248(r26)
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,3580(r26)
	REX_STORE_U32(ctx.r26.u32 + 3580, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_82543600:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82543788
	if (!ctx.cr6.eq) goto loc_82543788;
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x8254367c
	if (!ctx.cr6.lt) goto loc_8254367C;
loc_82543624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254367c
	if (ctx.cr6.eq) goto loc_8254367C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x8254366c
	if (!ctx.cr0.lt) goto loc_8254366C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8254366C;
	sub_82562A68(ctx, base);
loc_8254366C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82543624
	if (ctx.cr6.gt) goto loc_82543624;
loc_8254367C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x825436b8
	if (!ctx.cr0.lt) goto loc_825436B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825436B8;
	sub_82562A68(ctx, base);
loc_825436B8:
	// lwz r31,84(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r29,248(r26)
	REX_STORE_U32(ctx.r26.u32 + 248, ctx.r29.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82543730
	if (!ctx.cr6.lt) goto loc_82543730;
loc_825436D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543730
	if (ctx.cr6.eq) goto loc_82543730;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x82543720
	if (!ctx.cr0.lt) goto loc_82543720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82543720;
	sub_82562A68(ctx, base);
loc_82543720:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825436d8
	if (ctx.cr6.gt) goto loc_825436D8;
loc_82543730:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x8254376c
	if (!ctx.cr0.lt) goto loc_8254376C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8254376C;
	sub_82562A68(ctx, base);
loc_8254376C:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,3580(r26)
	REX_STORE_U32(ctx.r26.u32 + 3580, ctx.r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// stw r9,3588(r26)
	REX_STORE_U32(ctx.r26.u32 + 3588, ctx.r9.u32);
	// stw r8,3584(r26)
	REX_STORE_U32(ctx.r26.u32 + 3584, ctx.r8.u32);
loc_82543788:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82582D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x82582D98;
	__savegprlr_19(ctx, base);
	// lis r31,-32141
	ctx.r31.s64 = -2106392576;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r3,r6
	ctx.r30.u64 = ctx.r3.u64 + ctx.r6.u64;
	// addi r27,r31,-26752
	ctx.r27.s64 = ctx.r31.s64 + -26752;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r31,r9,-1
	ctx.r31.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// subf r26,r9,r30
	ctx.r26.u64 = ctx.r30.u64 - ctx.r9.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bge cr6,0x82582e58
	if (!ctx.cr6.lt) goto loc_82582E58;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// subfic r29,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r29.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// subf r28,r26,r30
	ctx.r28.u64 = ctx.r30.u64 - ctx.r26.u64;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82582DE0:
	// lbz r23,0(r31)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r21,r1,-128
	ctx.r21.s64 = ctx.r1.s64 + -128;
	// addi r19,r1,-128
	ctx.r19.s64 = ctx.r1.s64 + -128;
	// lbzx r4,r28,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r6.u32);
	// addi r24,r1,-144
	ctx.r24.s64 = ctx.r1.s64 + -144;
	// addi r20,r1,-144
	ctx.r20.s64 = ctx.r1.s64 + -144;
	// add r30,r29,r9
	ctx.r30.u64 = ctx.r29.u64 + ctx.r9.u64;
	// stw r23,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r23.u32);
	// lvx128 v13,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r4,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// lvx128 v0,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v13,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_set1_epi8(char(0xC))));
	// stvx128 v0,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stvx128 v13,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stvlx v0,r29,r9
	ea = ctx.r29.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r30,r10
	ea = ctx.r30.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx v13,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stvlx v13,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// bne 0x82582de0
	if (!ctx.cr0.eq) goto loc_82582DE0;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
loc_82582E58:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82582e78
	if (!ctx.cr6.eq) goto loc_82582E78;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r10,2
	ctx.r22.s64 = ctx.r10.s64 + 2;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 1;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
loc_82582E78:
	// rlwinm r25,r25,0,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82582f54
	if (ctx.cr6.eq) goto loc_82582F54;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82582f54
	if (!ctx.cr6.gt) goto loc_82582F54;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r22,-1
	ctx.r7.s64 = ctx.r22.s64 + -1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r7,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r27,r5,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r11,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r24,r10,1
	ctx.r24.s64 = ctx.r10.s64 + 1;
loc_82582EAC:
	// add r10,r27,r9
	ctx.r10.u64 = ctx.r27.u64 + ctx.r9.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82582f48
	if (!ctx.cr6.gt) goto loc_82582F48;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r28,r25,-1
	ctx.r28.s64 = ctx.r25.s64 + -1;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r10,r5
	ctx.r29.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r30,r10,r7
	ctx.r30.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r5,r28,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// subf r31,r10,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r10.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r7,r27,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r27.u64;
	// subf r28,r9,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r9.u64;
	// add r29,r29,r9
	ctx.r29.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82582F14:
	// lvx128 v63,r7,r28
	ea = (ctx.r7.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// stvx128 v63,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82582f14
	if (!ctx.cr0.eq) goto loc_82582F14;
loc_82582F48:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 + ctx.r9.u64;
	// bne 0x82582eac
	if (!ctx.cr0.eq) goto loc_82582EAC;
loc_82582F54:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8258302c
	if (ctx.cr6.eq) goto loc_8258302C;
	// subf r28,r11,r6
	ctx.r28.u64 = ctx.r6.u64 - ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x8258302c
	if (!ctx.cr6.gt) goto loc_8258302C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r29,r8,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 1;
loc_82582F84:
	// add r10,r29,r6
	ctx.r10.u64 = ctx.r29.u64 + ctx.r6.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82583020
	if (!ctx.cr6.gt) goto loc_82583020;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r7,r11,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r10,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r3,r10,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r10.u64;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r8,r30,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// subf r4,r10,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r9,r29,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r29.u64;
	// subf r30,r6,r28
	ctx.r30.u64 = ctx.r28.u64 - ctx.r6.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82582FEC:
	// lvx128 v62,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stvx128 v62,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82582fec
	if (!ctx.cr0.eq) goto loc_82582FEC;
loc_82583020:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// bne 0x82582f84
	if (!ctx.cr0.eq) goto loc_82582F84;
loc_8258302C:
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259482C) {
	REX_FUNC_PROLOGUE();
	// lwz r6,248(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// stb r6,1244(r31)
	REX_STORE_U8(ctx.r31.u32 + 1244, ctx.r6.u8);
	// lwz r4,4004(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4004);
	// stb r4,1245(r31)
	REX_STORE_U8(ctx.r31.u32 + 1245, ctx.r4.u8);
	// lwz r11,4012(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4012);
	// stb r11,1246(r31)
	REX_STORE_U8(ctx.r31.u32 + 1246, ctx.r11.u8);
	// lwz r5,252(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// stb r5,1249(r31)
	REX_STORE_U8(ctx.r31.u32 + 1249, ctx.r5.u8);
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// stb r3,1250(r31)
	REX_STORE_U8(ctx.r31.u32 + 1250, ctx.r3.u8);
	// lwz r6,22192(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 22192);
	// stw r6,1304(r31)
	REX_STORE_U32(ctx.r31.u32 + 1304, ctx.r6.u32);
	// lwz r5,284(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 284);
	// stw r5,1308(r31)
	REX_STORE_U32(ctx.r31.u32 + 1308, ctx.r5.u32);
	// lwz r4,1972(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1972);
	// stb r4,1247(r31)
	REX_STORE_U8(ctx.r31.u32 + 1247, ctx.r4.u8);
	// lwz r11,1976(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1976);
	// stb r11,1248(r31)
	REX_STORE_U8(ctx.r31.u32 + 1248, ctx.r11.u8);
	// lwz r5,1968(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1968);
	// stb r5,1251(r31)
	REX_STORE_U8(ctx.r31.u32 + 1251, ctx.r5.u8);
	// lwz r3,22508(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 22508);
	// stw r3,1312(r31)
	REX_STORE_U32(ctx.r31.u32 + 1312, ctx.r3.u32);
	// lwz r11,3940(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 3940);
	// stw r11,1316(r31)
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// stw r10,1260(r31)
	REX_STORE_U32(ctx.r31.u32 + 1260, ctx.r10.u32);
	// stw r9,1232(r31)
	REX_STORE_U32(ctx.r31.u32 + 1232, ctx.r9.u32);
	// lwz r10,20932(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20932);
	// stb r10,1254(r31)
	REX_STORE_U8(ctx.r31.u32 + 1254, ctx.r10.u8);
	// lwz r6,21868(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 21868);
	// stb r6,1255(r31)
	REX_STORE_U8(ctx.r31.u32 + 1255, ctx.r6.u8);
	// stw r8,1264(r31)
	REX_STORE_U32(ctx.r31.u32 + 1264, ctx.r8.u32);
	// lwz r4,20904(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20904);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825948dc
	if (ctx.cr6.eq) goto loc_825948DC;
	// lwz r11,20908(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825948dc
	if (!ctx.cr6.eq) goto loc_825948DC;
	// lwz r11,1832(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1832);
	// stw r11,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,20976(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20976);
	// stw r10,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,20980(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20980);
	// stw r9,1300(r31)
	REX_STORE_U32(ctx.r31.u32 + 1300, ctx.r9.u32);
	// b 0x8259495c
	goto loc_8259495C;
loc_825948DC:
	// lwz r11,15504(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8259492c
	if (!ctx.cr6.eq) goto loc_8259492C;
	// lwz r11,1812(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r11,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1812(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r10,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1820(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r9,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1816(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r8,1280(r31)
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r8.u32);
	// lwz r6,1820(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r6,1284(r31)
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1816(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r5,1288(r31)
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r4,1292(r31)
	REX_STORE_U32(ctx.r31.u32 + 1292, ctx.r4.u32);
	// lwz r3,1816(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r3,1296(r31)
	REX_STORE_U32(ctx.r31.u32 + 1296, ctx.r3.u32);
	// b 0x8259495c
	goto loc_8259495C;
loc_8259492C:
	// lwz r11,1808(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r11,1268(r31)
	REX_STORE_U32(ctx.r31.u32 + 1268, ctx.r11.u32);
	// lwz r10,1820(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 1820);
	// stw r10,1272(r31)
	REX_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// lwz r9,1804(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r9,1276(r31)
	REX_STORE_U32(ctx.r31.u32 + 1276, ctx.r9.u32);
	// lwz r8,1816(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r8,1280(r31)
	REX_STORE_U32(ctx.r31.u32 + 1280, ctx.r8.u32);
	// lwz r6,1800(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r6,1284(r31)
	REX_STORE_U32(ctx.r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1812(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r5,1288(r31)
	REX_STORE_U32(ctx.r31.u32 + 1288, ctx.r5.u32);
loc_8259495C:
	// sth r7,1256(r31)
	REX_STORE_U16(ctx.r31.u32 + 1256, ctx.r7.u16);
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r10,r10,-25684
	ctx.r10.s64 = ctx.r10.s64 + -25684;
	// addi r7,r11,-28928
	ctx.r7.s64 = ctx.r11.s64 + -28928;
	// addi r8,r30,24512
	ctx.r8.s64 = ctx.r30.s64 + 24512;
	// addi r6,r30,24704
	ctx.r6.s64 = ctx.r30.s64 + 24704;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r5,1796(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1796);
	// stb r5,1252(r31)
	REX_STORE_U8(ctx.r31.u32 + 1252, ctx.r5.u8);
	// lwz r3,1936(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1936);
	// stb r3,1253(r31)
	REX_STORE_U8(ctx.r31.u32 + 1253, ctx.r3.u8);
	// lwz r5,22508(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 22508);
	// stw r5,1312(r31)
	REX_STORE_U32(ctx.r31.u32 + 1312, ctx.r5.u32);
	// lwz r4,3940(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 3940);
	// stw r4,1316(r31)
	REX_STORE_U32(ctx.r31.u32 + 1316, ctx.r4.u32);
	// lwz r3,3944(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 3944);
	// stw r3,1320(r31)
	REX_STORE_U32(ctx.r31.u32 + 1320, ctx.r3.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r3,r4
	ctx.r10.u64 = uint32_t((ctx.r4.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r3.s32 / ctx.r4.s32 : 0);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// stw r10,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r10.u32);
	// stw r8,1356(r31)
	REX_STORE_U32(ctx.r31.u32 + 1356, ctx.r8.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r6,1360(r31)
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r6.u32);
	// andc r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,1764(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 1764);
	// stw r5,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r5.u32);
	// lwz r4,15872(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 15872);
	// stw r4,960(r31)
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r4.u32);
	// lwz r11,1356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1356);
	// lwz r8,204(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_825949FC:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// rlwinm r5,r10,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r10,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stb r4,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82594a3c
	if (ctx.cr6.eq) goto loc_82594A3C;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r10,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r10,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_82594A3C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r7,64
	ctx.r10.s64 = ctx.r7.s64 + 64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825949fc
	if (ctx.cr6.lt) goto loc_825949FC;
	// lwz r11,1360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r8,208(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82594A60:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// rlwinm r5,r10,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r10,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stb r4,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r4.u8);
	// stw r3,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r10,31
	ctx.r5.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82594aa0
	if (ctx.cr6.eq) goto loc_82594AA0;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r10,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r10,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r8
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// stb r4,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// stw r3,7(r11)
	REX_STORE_U32(ctx.r11.u32 + 7, ctx.r3.u32);
loc_82594AA0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r7,64
	ctx.r10.s64 = ctx.r7.s64 + 64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82594a60
	if (ctx.cr6.lt) goto loc_82594A60;
	// lwz r11,1792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82594cec
	if (ctx.cr6.eq) goto loc_82594CEC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82594cec
	if (!ctx.cr6.eq) goto loc_82594CEC;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 620);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r9,-25508
	ctx.r9.s64 = ctx.r9.s64 + -25508;
	// stw r9,1796(r31)
	REX_STORE_U32(ctx.r31.u32 + 1796, ctx.r9.u32);
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82594AE8:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r6,r7,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x30;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stbx r3,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x30;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r7,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x30;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r7,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x30;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82594ae8
	if (!ctx.cr0.eq) goto loc_82594AE8;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r9,r9,-25476
	ctx.r9.s64 = ctx.r9.s64 + -25476;
	// stw r9,1800(r31)
	REX_STORE_U32(ctx.r31.u32 + 1800, ctx.r9.u32);
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_82594B74:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r6,r7,3,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xF8;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,26,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3E;
	// stbx r3,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,3,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xF8;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,26,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3E;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r7,3,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xF8;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,26,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3E;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r7,3,24,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xF8;
	// rlwinm r5,r7,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,26,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x3E;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82594b74
	if (!ctx.cr0.eq) goto loc_82594B74;
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 632);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r8,-25444
	ctx.r8.s64 = ctx.r8.s64 + -25444;
	// stw r8,1808(r31)
	REX_STORE_U32(ctx.r31.u32 + 1808, ctx.r8.u32);
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82594C00:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r6,r7,3,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x18;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stbx r3,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,3,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x18;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r7,3,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x18;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r7,3,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x18;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,25,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E;
	// stb r3,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82594c00
	if (!ctx.cr0.eq) goto loc_82594C00;
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r8,-25572
	ctx.r8.s64 = ctx.r8.s64 + -25572;
	// stw r8,1812(r31)
	REX_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82594C8C:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r6,r7,30,2,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r5,r7,4,25,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x70;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stbx r4,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r3,30,2,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r6,r3,4,25,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x70;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stb r5,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r5.u8);
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r3,r4,30,2,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r7,r4,4,25,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x70;
	// or r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 | ctx.r7.u64;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r5,30,2,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r3,r5,4,25,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x70;
	// or r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stb r7,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82594c8c
	if (!ctx.cr0.eq) goto loc_82594C8C;
loc_82594CEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825AC250) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ac284
	if (ctx.cr6.eq) goto loc_825AC284;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825ac27c
	if (ctx.cr6.eq) goto loc_825AC27C;
	// bl 0x82558b88
	ctx.lr = 0x825AC27C;
	sub_82558B88(ctx, base);
loc_825AC27C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558b88
	ctx.lr = 0x825AC284;
	sub_82558B88(ctx, base);
loc_825AC284:
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

DEFINE_REX_FUNC(sub_825ACA00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825ACA08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82558b78
	ctx.lr = 0x825ACA20;
	sub_82558B78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825acb0c
	if (ctx.cr6.eq) goto loc_825ACB0C;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x825ACA38;
	sub_825D6870(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// stw r11,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// stw r10,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
loc_825ACA5C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ac8a0
	ctx.lr = 0x825ACA6C;
	sub_825AC8A0(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825aca98
	if (ctx.cr6.eq) goto loc_825ACA98;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825aca5c
	if (ctx.cr6.lt) goto loc_825ACA5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_825ACA98:
	// addic. r29,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r29.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x825acb04
	if (ctx.cr0.lt) goto loc_825ACB04;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825ACAAC:
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825acaf8
	if (ctx.cr6.eq) goto loc_825ACAF8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x825a68f0
	ctx.lr = 0x825ACAC0;
	sub_825A68F0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825acad0
	if (ctx.cr6.eq) goto loc_825ACAD0;
	// bl 0x82558b88
	ctx.lr = 0x825ACAD0;
	sub_82558B88(ctx, base);
loc_825ACAD0:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825acae0
	if (ctx.cr6.eq) goto loc_825ACAE0;
	// bl 0x82558b88
	ctx.lr = 0x825ACAE0;
	sub_82558B88(ctx, base);
loc_825ACAE0:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825acaf0
	if (ctx.cr6.eq) goto loc_825ACAF0;
	// bl 0x82558b88
	ctx.lr = 0x825ACAF0;
	sub_82558B88(ctx, base);
loc_825ACAF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82558b88
	ctx.lr = 0x825ACAF8;
	sub_82558B88(ctx, base);
loc_825ACAF8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x825acaac
	if (!ctx.cr0.lt) goto loc_825ACAAC;
loc_825ACB04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82558b88
	ctx.lr = 0x825ACB0C;
	sub_82558B88(ctx, base);
loc_825ACB0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B85C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x825B85C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d7410
	ctx.lr = 0x825B85D0;
	__savefpr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// lwz r9,412(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f28,f0
	ctx.f28.f64 = double(ctx.f0.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fsub f12,f28,f30
	ctx.f12.f64 = ctx.f28.f64 - ctx.f30.f64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// fadd f11,f28,f30
	ctx.f11.f64 = ctx.f28.f64 + ctx.f30.f64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lfd f26,9568(r10)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// srawi r24,r19,1
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r19.s32 >> 1;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// srawi r18,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r17.s32 >> 1;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r23,84(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r23
	ctx.r6.s64 = ctx.r23.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fsub f7,f12,f8
	ctx.f7.f64 = ctx.f12.f64 - ctx.f8.f64;
	// fctiwz f6,f11
	ctx.f6.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f7,f26
	ctx.cr6.compare(ctx.f7.f64, ctx.f26.f64);
	// bne cr6,0x825b866c
	if (!ctx.cr6.eq) goto loc_825B866C;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
loc_825B866C:
	// lwz r25,388(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x825b86f0
	if (!ctx.cr6.gt) goto loc_825B86F0;
	// subf r11,r22,r19
	ctx.r11.u64 = ctx.r19.u64 - ctx.r22.u64;
	// addi r28,r23,1
	ctx.r28.s64 = ctx.r23.s64 + 1;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subf r26,r25,r21
	ctx.r26.u64 = ctx.r21.u64 - ctx.r25.u64;
	// subf r30,r25,r19
	ctx.r30.u64 = ctx.r19.u64 - ctx.r25.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_825B8694:
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// blt cr6,0x825b86a4
	if (ctx.cr6.lt) goto loc_825B86A4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_825B86A4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825b86b8
	if (!ctx.cr6.gt) goto loc_825B86B8;
	// add r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B86B8;
	sub_825D6E10(ctx, base);
loc_825B86B8:
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r19.s32, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// blt cr6,0x825b86c8
	if (ctx.cr6.lt) goto loc_825B86C8;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_825B86C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825b86e4
	if (!ctx.cr6.gt) goto loc_825B86E4;
	// subf r11,r5,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B86E4;
	sub_825D6E10(ctx, base);
loc_825B86E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r19
	ctx.r31.u64 = ctx.r31.u64 + ctx.r19.u64;
	// bne 0x825b8694
	if (!ctx.cr0.eq) goto loc_825B8694;
loc_825B86F0:
	// lwz r26,404(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r20,396(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x825b87b4
	if (!ctx.cr6.gt) goto loc_825B87B4;
	// srawi r11,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 1;
	// srawi r10,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r22.s32 >> 1;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// subf r11,r10,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r10.u64;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
loc_825B8718:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// blt cr6,0x825b8728
	if (ctx.cr6.lt) goto loc_825B8728;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_825B8728:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825b8760
	if (!ctx.cr6.gt) goto loc_825B8760;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r24
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B874C;
	sub_825D6E10(ctx, base);
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B8760;
	sub_825D6E10(ctx, base);
loc_825B8760:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// blt cr6,0x825b8770
	if (ctx.cr6.lt) goto loc_825B8770;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_825B8770:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825b87a8
	if (!ctx.cr6.gt) goto loc_825B87A8;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// subf r31,r30,r10
	ctx.r31.u64 = ctx.r10.u64 - ctx.r30.u64;
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B8798;
	sub_825D6E10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B87A8;
	sub_825D6E10(ctx, base);
loc_825B87A8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r29,r17
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x825b8718
	if (ctx.cr6.lt) goto loc_825B8718;
loc_825B87B4:
	// addic. r11,r23,1
	ctx.xer.ca = ctx.r23.u32 > 4294967294;
	ctx.r11.s64 = ctx.r23.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// blt 0x825b87c4
	if (ctx.cr0.lt) goto loc_825B87C4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_825B87C4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r28,80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// add r27,r29,r25
	ctx.r27.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// subf r23,r21,r14
	ctx.r23.u64 = ctx.r14.u64 - ctx.r21.u64;
	// lfd f27,-21792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -21792);
	// subf r25,r25,r21
	ctx.r25.u64 = ctx.r21.u64 - ctx.r25.u64;
	// lfd f29,9464(r10)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 9464);
loc_825B87E8:
	// cmpw cr6,r22,r19
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r19.s32, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x825b87f8
	if (ctx.cr6.lt) goto loc_825B87F8;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_825B87F8:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b895c
	if (!ctx.cr6.lt) goto loc_825B895C;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f28,f13
	ctx.f31.f64 = ctx.f28.f64 - ctx.f13.f64;
	// fdiv f1,f31,f30
	ctx.f1.f64 = ctx.f31.f64 / ctx.f30.f64;
	// bl 0x825d1068
	ctx.lr = 0x825B881C;
	sub_825D1068(ctx, base);
	// fsub f12,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f27.f64 - ctx.f1.f64;
	// fmsub f11,f1,f30,f31
	ctx.f11.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f31.f64);
	// fmsub f10,f12,f30,f31
	ctx.f10.f64 = std::fma(ctx.f12.f64, ctx.f30.f64, -ctx.f31.f64);
	// fadd f9,f11,f29
	ctx.f9.f64 = ctx.f11.f64 + ctx.f29.f64;
	// fadd f8,f10,f29
	ctx.f8.f64 = ctx.f10.f64 + ctx.f29.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// add. r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825b8870
	if (ctx.cr0.lt) goto loc_825B8870;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// b 0x825b88b0
	goto loc_825B88B0;
loc_825B8870:
	// add. r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x825b88a8
	if (ctx.cr0.lt) goto loc_825B88A8;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// ble cr6,0x825b8898
	if (!ctx.cr6.gt) goto loc_825B8898;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// srawi r9,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + ctx.r14.u64;
	// b 0x825b88b0
	goto loc_825B88B0;
loc_825B8898:
	// add r11,r23,r27
	ctx.r11.u64 = ctx.r23.u64 + ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x825b88b0
	goto loc_825B88B0;
loc_825B88A8:
	// li r30,2
	ctx.r30.s64 = 2;
	// add r4,r27,r25
	ctx.r4.u64 = ctx.r27.u64 + ctx.r25.u64;
loc_825B88B0:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b8de8
	ctx.lr = 0x825B88C0;
	sub_825B8DE8(ctx, base);
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825b8950
	if (!ctx.cr6.eq) goto loc_825B8950;
	// srawi r31,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x825b88f4
	if (!ctx.cr6.eq) goto loc_825B88F4;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r31,r16
	ctx.r4.u64 = ctx.r31.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x825b8de8
	ctx.lr = 0x825B88EC;
	sub_825B8DE8(ctx, base);
	// add r4,r31,r15
	ctx.r4.u64 = ctx.r31.u64 + ctx.r15.u64;
	// b 0x825b8940
	goto loc_825B8940;
loc_825B88F4:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x825b8918
	if (!ctx.cr6.eq) goto loc_825B8918;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r28,r16
	ctx.r4.u64 = ctx.r28.u64 + ctx.r16.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x825b8de8
	ctx.lr = 0x825B8910;
	sub_825B8DE8(ctx, base);
	// add r4,r28,r15
	ctx.r4.u64 = ctx.r28.u64 + ctx.r15.u64;
	// b 0x825b8940
	goto loc_825B8940;
loc_825B8918:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x825b8950
	if (!ctx.cr6.eq) goto loc_825B8950;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// bl 0x825b8de8
	ctx.lr = 0x825B8938;
	sub_825B8DE8(ctx, base);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
loc_825B8940:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// add r3,r31,r26
	ctx.r3.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x825b8de8
	ctx.lr = 0x825B8950;
	sub_825B8DE8(ctx, base);
loc_825B8950:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x825b87e8
	goto loc_825B87E8;
loc_825B895C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d745c
	ctx.lr = 0x825B8968;
	__restfpr_26(ctx, base);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825C83E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825C83E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r5,r11,13392
	ctx.r5.u64 = ctx.r11.u64 | 13392;
	// lis r8,21849
	ctx.r8.s64 = 1431896064;
	// lis r7,22870
	ctx.r7.s64 = 1498808320;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lis r4,12593
	ctx.r4.s64 = 825294848;
	// lis r31,22101
	ctx.r31.s64 = 1448411136;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r9,r10,21849
	ctx.r9.u64 = ctx.r10.u64 | 21849;
	// ori r8,r8,22105
	ctx.r8.u64 = ctx.r8.u64 | 22105;
	// ori r10,r7,22869
	ctx.r10.u64 = ctx.r7.u64 | 22869;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r27,r4,13392
	ctx.r27.u64 = ctx.r4.u64 | 13392;
	// ori r31,r31,22857
	ctx.r31.u64 = ctx.r31.u64 | 22857;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x825c8470
	if (ctx.cr6.gt) goto loc_825C8470;
	// beq cr6,0x825c8468
	if (ctx.cr6.eq) goto loc_825C8468;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x825c8460
	if (ctx.cr6.gt) goto loc_825C8460;
	// beq cr6,0x825c8468
	if (ctx.cr6.eq) goto loc_825C8468;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c8498
	if (ctx.cr6.eq) goto loc_825C8498;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825c8498
	if (ctx.cr6.eq) goto loc_825C8498;
	// b 0x825c849c
	goto loc_825C849C;
loc_825C8460:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825c849c
	if (!ctx.cr6.eq) goto loc_825C849C;
loc_825C8468:
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// b 0x825c849c
	goto loc_825C849C;
loc_825C8470:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x825c8490
	if (ctx.cr6.gt) goto loc_825C8490;
	// beq cr6,0x825c8468
	if (ctx.cr6.eq) goto loc_825C8468;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825c8498
	if (ctx.cr6.eq) goto loc_825C8498;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825c8498
	if (ctx.cr6.eq) goto loc_825C8498;
	// b 0x825c849c
	goto loc_825C849C;
loc_825C8490:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825c849c
	if (!ctx.cr6.eq) goto loc_825C849C;
loc_825C8498:
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
loc_825C849C:
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r7,r11,22105
	ctx.r7.u64 = ctx.r11.u64 | 22105;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x825c84f0
	if (ctx.cr6.gt) goto loc_825C84F0;
	// beq cr6,0x825c84e8
	if (ctx.cr6.eq) goto loc_825C84E8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x825c84d8
	if (ctx.cr6.gt) goto loc_825C84D8;
	// beq cr6,0x825c84e8
	if (ctx.cr6.eq) goto loc_825C84E8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c8518
	if (ctx.cr6.eq) goto loc_825C8518;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825c8518
	if (ctx.cr6.eq) goto loc_825C8518;
	// b 0x825c851c
	goto loc_825C851C;
loc_825C84D8:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825c84e8
	if (ctx.cr6.eq) goto loc_825C84E8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x825c851c
	if (!ctx.cr6.eq) goto loc_825C851C;
loc_825C84E8:
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// b 0x825c851c
	goto loc_825C851C;
loc_825C84F0:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x825c8510
	if (ctx.cr6.gt) goto loc_825C8510;
	// beq cr6,0x825c84e8
	if (ctx.cr6.eq) goto loc_825C84E8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825c8518
	if (ctx.cr6.eq) goto loc_825C8518;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825c8518
	if (ctx.cr6.eq) goto loc_825C8518;
	// b 0x825c851c
	goto loc_825C851C;
loc_825C8510:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825c851c
	if (!ctx.cr6.eq) goto loc_825C851C;
loc_825C8518:
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
loc_825C851C:
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c853c
	if (ctx.cr6.eq) goto loc_825C853C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825c853c
	if (ctx.cr6.eq) goto loc_825C853C;
	// stw r29,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r29.u32);
	// b 0x825c8554
	goto loc_825C8554;
loc_825C853C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x825c8550
	if (ctx.cr6.gt) goto loc_825C8550;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825C8550:
	// stw r11,14472(r3)
	REX_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_825C8554:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,14516(r3)
	REX_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r6,14520(r3)
	REX_STORE_U32(ctx.r3.u32 + 14520, ctx.r6.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x825c859c
	if (ctx.cr6.gt) goto loc_825C859C;
	// beq cr6,0x825c85ac
	if (ctx.cr6.eq) goto loc_825C85AC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825c85ac
	if (ctx.cr6.eq) goto loc_825C85AC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825c85bc
	if (!ctx.cr6.eq) goto loc_825C85BC;
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x825c85b4
	goto loc_825C85B4;
loc_825C859C:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x825c85ac
	if (ctx.cr6.eq) goto loc_825C85AC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825c85bc
	if (!ctx.cr6.eq) goto loc_825C85BC;
loc_825C85AC:
	// lwz r11,14516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14516);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_825C85B4:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14524(r3)
	REX_STORE_U32(ctx.r3.u32 + 14524, ctx.r9.u32);
loc_825C85BC:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c85d8
	if (ctx.cr6.eq) goto loc_825C85D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825c85d8
	if (ctx.cr6.eq) goto loc_825C85D8;
	// stw r29,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r29.u32);
	// b 0x825c85f0
	goto loc_825C85F0;
loc_825C85D8:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x825c85ec
	if (ctx.cr6.gt) goto loc_825C85EC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825C85EC:
	// stw r11,14476(r3)
	REX_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
loc_825C85F0:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,14480(r3)
	REX_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r6,14484(r3)
	REX_STORE_U32(ctx.r3.u32 + 14484, ctx.r6.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x825c8638
	if (ctx.cr6.gt) goto loc_825C8638;
	// beq cr6,0x825c8648
	if (ctx.cr6.eq) goto loc_825C8648;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825c8648
	if (ctx.cr6.eq) goto loc_825C8648;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825c8658
	if (!ctx.cr6.eq) goto loc_825C8658;
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// b 0x825c8650
	goto loc_825C8650;
loc_825C8638:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x825c8648
	if (ctx.cr6.eq) goto loc_825C8648;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825c8658
	if (!ctx.cr6.eq) goto loc_825C8658;
loc_825C8648:
	// lwz r11,14480(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14480);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
loc_825C8650:
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14488(r3)
	REX_STORE_U32(ctx.r3.u32 + 14488, ctx.r9.u32);
loc_825C8658:
	// lwz r11,14600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x825c866c
	if (!ctx.cr6.eq) goto loc_825C866C;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_825C866C:
	// lwz r11,14596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x825c8680
	if (!ctx.cr6.eq) goto loc_825C8680;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_825C8680:
	// lwz r11,14592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825c8690
	if (!ctx.cr6.eq) goto loc_825C8690;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_825C8690:
	// lwz r4,14588(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 14588);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x825c86a0
	if (!ctx.cr6.eq) goto loc_825C86A0;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_825C86A0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x825c7080
	ctx.lr = 0x825C86A8;
	sub_825C7080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825D26C4) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825d3948
	ctx.lr = 0x825D26E4;
	sub_825D3948(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D2DC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x825D2DC8;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825d2e28
	if (!ctx.cr6.eq) goto loc_825D2E28;
loc_825D2DFC:
	// bl 0x825d3a20
	ctx.lr = 0x825D2E00;
	sub_825D3A20(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825d9610
	ctx.lr = 0x825D2E20;
	sub_825D9610(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x825d2e8c
	sub_825D2E8C(ctx, base);
	return;
loc_825D2E28:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d2dfc
	if (ctx.cr6.eq) goto loc_825D2DFC;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d2dfc
	if (ctx.cr6.eq) goto loc_825D2DFC;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d2dfc
	if (ctx.cr6.eq) goto loc_825D2DFC;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825d2e94
	if (!ctx.cr6.eq) goto loc_825D2E94;
	// bl 0x825d3a20
	ctx.lr = 0x825D2E7C;
	sub_825D3A20(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825D2E84:
	// bl 0x825d3a20
	ctx.lr = 0x825D2E88;
	sub_825D3A20(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825D2E8C:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_825D2E94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x825d3888
	ctx.lr = 0x825D2EA0;
	sub_825D3888(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d2ebc
	if (ctx.cr0.eq) goto loc_825D2EBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d2f78
	ctx.lr = 0x825D2EBC;
	sub_825D2F78(ctx, base);
loc_825D2EBC:
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825dca80
	ctx.lr = 0x825D2EE0;
	sub_825DCA80(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x825d2f08
	ctx.lr = 0x825D2EF0;
	sub_825D2F08(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d2e84
	if (ctx.cr6.eq) {
		sub_825D2E84(ctx, base);
		return;
	}
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d2e8c
	sub_825D2E8C(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_21) {
	REX_FUNC_PROLOGUE();
	// std r21,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_30) {
	REX_FUNC_PROLOGUE();
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D64F0) {
	REX_FUNC_PROLOGUE();
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825D69D8) {
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
	// lis r31,-32150
	ctx.r31.s64 = -2106982400;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,-7664(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -7664);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825d6a18
	if (ctx.cr6.eq) goto loc_825D6A18;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lwz r11,29228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 29228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D6A10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-7664(r31)
	REX_STORE_U32(ctx.r31.u32 + -7664, ctx.r11.u32);
loc_825D6A18:
	// lis r31,-32150
	ctx.r31.s64 = -2106982400;
	// lwz r3,-7660(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -7660);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825d6a34
	if (ctx.cr6.eq) goto loc_825D6A34;
	// bl 0x8261c714
	ctx.lr = 0x825D6A2C;
	__imp__KeTlsFree(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-7660(r31)
	REX_STORE_U32(ctx.r31.u32 + -7660, ctx.r11.u32);
loc_825D6A34:
	// bl 0x825de008
	ctx.lr = 0x825D6A38;
	sub_825DE008(ctx, base);
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

DEFINE_REX_FUNC(__savevmx_16) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_127) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_19) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DB0A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,9568(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x825db0bc
	if (!ctx.cr6.eq) goto loc_825DB0BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x825db18c
	goto loc_825DB18C;
loc_825DB0BC:
	// lhz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r10,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bne 0x825db168
	if (!ctx.cr0.eq) goto loc_825DB168;
	// lwz r7,16(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r8,r7,12
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x825db0e4
	if (!ctx.cr0.eq) goto loc_825DB0E4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825db168
	if (ctx.cr6.eq) goto loc_825DB168;
loc_825DB0E4:
	// li r8,-1021
	ctx.r8.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r6,1
	ctx.r6.s64 = 1;
	// blt cr6,0x825db0f8
	if (ctx.cr6.lt) goto loc_825DB0F8;
	// li r6,0
	ctx.r6.s64 = 0;
loc_825DB0F8:
	// rlwinm. r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825db130
	if (!ctx.cr0.eq) goto loc_825DB130;
loc_825DB100:
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r9,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r7.u32);
	// beq 0x825db118
	if (ctx.cr0.eq) goto loc_825DB118;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// stw r7,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r7.u32);
loc_825DB118:
	// lhz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825db100
	if (ctx.cr0.eq) goto loc_825DB100;
	// stw r9,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r9.u32);
loc_825DB130:
	// andi. r11,r10,65519
	ctx.r11.u64 = ctx.r10.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// sth r11,16(r1)
	REX_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x825db148
	if (ctx.cr6.eq) goto loc_825DB148;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	REX_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_825DB148:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x825db188
	goto loc_825DB188;
loc_825DB168:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfd f1,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r10,r10,16352
	ctx.r10.u64 = ctx.r10.u64 | 16352;
	// rlwinm r11,r11,28,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF;
	// sth r10,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r10.u16);
	// addi r8,r11,-1022
	ctx.r8.s64 = ctx.r11.s64 + -1022;
loc_825DB188:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_825DB18C:
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825DF4FC) {
	REX_FUNC_PROLOGUE();
	// bl 0x825de260
	ctx.lr = 0x825DF500;
	sub_825DE260(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x825df50c
	goto loc_825DF50C;
loc_825DF50C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825DFE50) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825d3e80
	ctx.lr = 0x825DFE70;
	sub_825D3E80(ctx, base);
	// cmpwi cr6,r3,101
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 101, ctx.xer);
	// beq cr6,0x825dfe8c
	if (ctx.cr6.eq) goto loc_825DFE8C;
loc_825DFE78:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x825d7d10
	ctx.lr = 0x825DFE84;
	sub_825D7D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825dfe78
	if (!ctx.cr0.eq) goto loc_825DFE78;
loc_825DFE8C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x825d3e80
	ctx.lr = 0x825DFE98;
	sub_825D3E80(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x825dfea4
	if (!ctx.cr6.eq) goto loc_825DFEA4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_825DFEA4:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r11,-7688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7688);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stb r9,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_825DFEC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825dfec0
	if (!ctx.cr6.eq) goto loc_825DFEC0;
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

DEFINE_REX_FUNC(sub_825E46A8) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x825de078
	ctx.lr = 0x825E46BC;
	sub_825DE078(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E4DF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x825E4DF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x825e2d10
	ctx.lr = 0x825E4E14;
	sub_825E2D10(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpdi cr6,r26,-1
	ctx.cr6.compare<int64_t>(ctx.r26.s64, -1, ctx.xer);
	// beq cr6,0x825e4e68
	if (ctx.cr6.eq) goto loc_825E4E68;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2d10
	ctx.lr = 0x825E4E30;
	sub_825E2D10(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x825e4e68
	if (ctx.cr6.eq) goto loc_825E4E68;
	// subf r30,r3,r29
	ctx.r30.u64 = ctx.r29.u64 - ctx.r3.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// ble cr6,0x825e4f04
	if (!ctx.cr6.gt) goto loc_825E4F04;
	// bl 0x8226ae08
	ctx.lr = 0x825E4E48;
	sub_8226AE08(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bl 0x82268900
	ctx.lr = 0x825E4E54;
	sub_82268900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x825e4e78
	if (!ctx.cr0.eq) goto loc_825E4E78;
	// bl 0x825d3a20
	ctx.lr = 0x825E4E60;
	sub_825D3A20(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825E4E68:
	// bl 0x825d3a20
	ctx.lr = 0x825E4E6C;
	sub_825D3A20(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_825E4E70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_825E4E78:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x825e4f88
	ctx.lr = 0x825E4E88;
	sub_825E4F88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_825E4E8C:
	// cmpdi cr6,r30,4096
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 4096, ctx.xer);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// bge cr6,0x825e4e9c
	if (!ctx.cr6.lt) goto loc_825E4E9C;
	// extsw r5,r30
	ctx.r5.s64 = ctx.r30.s32;
loc_825E4E9C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825de730
	ctx.lr = 0x825E4EA8;
	sub_825DE730(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825e4ec4
	if (ctx.cr6.eq) goto loc_825E4EC4;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(ctx.r30.s64, 0, ctx.xer);
	// bgt cr6,0x825e4e8c
	if (ctx.cr6.gt) goto loc_825E4E8C;
	// b 0x825e4ee4
	goto loc_825E4EE4;
loc_825E4EC4:
	// bl 0x825d3a58
	ctx.lr = 0x825E4EC8;
	sub_825D3A58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x825e4ee0
	if (!ctx.cr6.eq) goto loc_825E4EE0;
	// bl 0x825d3a20
	ctx.lr = 0x825E4ED8;
	sub_825D3A20(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_825E4EE0:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_825E4EE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e4f88
	ctx.lr = 0x825E4EF0;
	sub_825E4F88(ctx, base);
	// bl 0x8226ae08
	ctx.lr = 0x825E4EF4;
	sub_8226AE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822691d0
	ctx.lr = 0x825E4F00;
	sub_822691D0(ctx, base);
	// b 0x825e4f5c
	goto loc_825E4F5C;
loc_825E4F04:
	// bge cr6,0x825e4f64
	if (!ctx.cr6.lt) goto loc_825E4F64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2d10
	ctx.lr = 0x825E4F18;
	sub_825E2D10(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x825e4e68
	if (ctx.cr6.eq) goto loc_825E4E68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e42a0
	ctx.lr = 0x825E4F28;
	sub_825E42A0(ctx, base);
	// bl 0x825e5fd8
	ctx.lr = 0x825E4F2C;
	sub_825E5FD8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// neg r27,r11
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(ctx.r27.s64, -1, ctx.xer);
	// bne cr6,0x825e4f64
	if (!ctx.cr6.eq) goto loc_825E4F64;
	// bl 0x825d3a20
	ctx.lr = 0x825E4F44;
	sub_825D3A20(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x825d3a58
	ctx.lr = 0x825E4F50;
	sub_825D3A58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226a650
	ctx.lr = 0x825E4F58;
	sub_8226A650(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_825E4F5C:
	// cmpdi cr6,r27,-1
	ctx.cr6.compare<int64_t>(ctx.r27.s64, -1, ctx.xer);
	// beq cr6,0x825e4e68
	if (ctx.cr6.eq) goto loc_825E4E68;
loc_825E4F64:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e2d10
	ctx.lr = 0x825E4F74;
	sub_825E2D10(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x825e4e68
	if (ctx.cr6.eq) goto loc_825E4E68;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e4e70
	goto loc_825E4E70;
}

DEFINE_REX_FUNC(sub_825ED728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x825ED730;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825ed828
	if (!ctx.cr6.eq) goto loc_825ED828;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,876(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,64(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825ed77c
	if (ctx.cr6.eq) goto loc_825ED77C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x825ed828
	if (ctx.cr6.eq) goto loc_825ED828;
loc_825ED77C:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x825ed828
	if (!ctx.cr6.eq) goto loc_825ED828;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x825ed828
	if (!ctx.cr6.eq) goto loc_825ED828;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x825ed81c
	if (ctx.cr6.eq) goto loc_825ED81C;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229d768
	ctx.lr = 0x825ED7B8;
	sub_8229D768(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825ED7BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825ed7bc
	if (!ctx.cr6.eq) goto loc_825ED7BC;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc288
	ctx.lr = 0x825ED7E8;
	sub_822DC288(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825ed804
	if (!ctx.cr0.eq) goto loc_825ED804;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// bl 0x8229d7c0
	ctx.lr = 0x825ED800;
	sub_8229D7C0(ctx, base);
	// b 0x825ed830
	goto loc_825ED830;
loc_825ED804:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825ED814;
	sub_825D6E10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8229d7c0
	ctx.lr = 0x825ED81C;
	sub_8229D7C0(ctx, base);
loc_825ED81C:
	// stw r30,24(r27)
	REX_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
	// stw r31,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r31.u32);
	// b 0x825ed830
	goto loc_825ED830;
loc_825ED828:
	// lis r26,-30602
	ctx.r26.s64 = -2005532672;
	// ori r26,r26,2156
	ctx.r26.u64 = ctx.r26.u64 | 2156;
loc_825ED830:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F3278) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825f28f8
	sub_825F28F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F32E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x825F32F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r14,r29
	ctx.r14.u64 = ctx.r29.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x8226a7f8
	ctx.lr = 0x825F3338;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f3368
	if (ctx.cr0.eq) goto loc_825F3368;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x825f336c
	goto loc_825F336C;
loc_825F3368:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_825F336C:
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8226a7f8
	ctx.lr = 0x825F3384;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f33b4
	if (ctx.cr0.eq) goto loc_825F33B4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x825f33b8
	goto loc_825F33B8;
loc_825F33B4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825F33B8:
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8226a7f8
	ctx.lr = 0x825F33D0;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f3400
	if (ctx.cr0.eq) goto loc_825F3400;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x825f3404
	goto loc_825F3404;
loc_825F3400:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825F3404:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8226a7f8
	ctx.lr = 0x825F341C;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f344c
	if (ctx.cr0.eq) goto loc_825F344C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x825f3450
	goto loc_825F3450;
loc_825F344C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825F3450:
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x8226a7f8
	ctx.lr = 0x825F3468;
	sub_8226A7F8(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f34a4
	if (ctx.cr0.eq) goto loc_825F34A4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// b 0x825f34a8
	goto loc_825F34A8;
loc_825F34A4:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_825F34A8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// lwz r23,24(r15)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r15.u32 + 24);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,44(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825f3b94
	if (!ctx.cr0.eq) goto loc_825F3B94;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r19,r11,16
	ctx.r19.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r16,24(r11)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,60(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 60);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// rlwimi r9,r10,29,27,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r17,r9,29,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3;
	// beq cr6,0x825f3540
	if (ctx.cr6.eq) goto loc_825F3540;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r20,24(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_825F3540:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ea408
	ctx.lr = 0x825F3564;
	sub_825EA408(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x825f3588
	if (!ctx.cr0.lt) goto loc_825F3588;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,-13800
	ctx.r6.s64 = ctx.r11.s64 + -13800;
loc_825F3574:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x822a3890
	ctx.lr = 0x825F3584;
	sub_822A3890(ctx, base);
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F3588:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x825f3b94
	if (ctx.cr6.eq) goto loc_825F3B94;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x825f3b94
	if (ctx.cr6.eq) goto loc_825F3B94;
	// lis r10,243
	ctx.r10.s64 = 15925248;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825f3634
	if (!ctx.cr6.eq) goto loc_825F3634;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3b94
	if (ctx.cr6.eq) goto loc_825F3B94;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8226a7f8
	ctx.lr = 0x825F35FC;
	sub_8226A7F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f360c
	if (ctx.cr0.eq) goto loc_825F360C;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x825f3610
	goto loc_825F3610;
loc_825F360C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825F3610:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3b8c
	if (ctx.cr6.eq) goto loc_825F3B8C;
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,904(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 904);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,904(r26)
	REX_STORE_U32(ctx.r26.u32 + 904, ctx.r11.u32);
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F3634:
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825eee60
	ctx.lr = 0x825F365C;
	sub_825EEE60(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x825f3670
	if (!ctx.cr0.lt) goto loc_825F3670;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r11,-13612
	ctx.r6.s64 = ctx.r11.s64 + -13612;
	// b 0x825f3574
	goto loc_825F3574;
loc_825F3670:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x825f3988
	if (ctx.cr6.lt) goto loc_825F3988;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bgt cr6,0x825f3988
	if (ctx.cr6.gt) goto loc_825F3988;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f392c
	if (ctx.cr6.eq) goto loc_825F392C;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_825F36D4:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x825f36e4
	if (!ctx.cr6.lt) goto loc_825F36E4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825F36E4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f38b8
	if (!ctx.cr6.lt) goto loc_825F38B8;
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825d6870
	ctx.lr = 0x825F36FC;
	sub_825D6870(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r16,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r28,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3780
	if (ctx.cr6.eq) goto loc_825F3780;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
loc_825F3728:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825f0ff0
	ctx.lr = 0x825F3748;
	sub_825F0FF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f391c
	if (ctx.cr0.lt) goto loc_825F391C;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f3770
	if (ctx.cr6.eq) goto loc_825F3770;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_825F3770:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825f3728
	if (!ctx.cr6.eq) goto loc_825F3728;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
loc_825F3780:
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// b 0x825f37c0
	goto loc_825F37C0;
loc_825F3788:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r6,848(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 848);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825ef398
	ctx.lr = 0x825F37B0;
	sub_825EF398(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f391c
	if (ctx.cr0.lt) goto loc_825F391C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_825F37C0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bne cr6,0x825f3788
	if (!ctx.cr6.eq) goto loc_825F3788;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// beq cr6,0x825f37dc
	if (ctx.cr6.eq) goto loc_825F37DC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_825F37DC:
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ee860
	ctx.lr = 0x825F37EC;
	sub_825EE860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f391c
	if (ctx.cr0.lt) goto loc_825F391C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8226a7f8
	ctx.lr = 0x825F381C;
	sub_8226A7F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f384c
	if (ctx.cr0.eq) goto loc_825F384C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x825f3850
	goto loc_825F3850;
loc_825F384C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_825F3850:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f3914
	if (ctx.cr6.eq) goto loc_825F3914;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f38a0
	if (ctx.cr6.eq) goto loc_825F38A0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x8226a7f8
	ctx.lr = 0x825F3874;
	sub_8226A7F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825f3914
	if (ctx.cr0.eq) goto loc_825F3914;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,268
	ctx.r5.s64 = 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825F388C;
	sub_825D6E10(ctx, base);
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_825F38A0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825ea1f8
	ctx.lr = 0x825F38A8;
	sub_825EA1F8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r27,12(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x825f36d4
	if (!ctx.cr6.eq) goto loc_825F36D4;
loc_825F38B8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r10.u32);
	// beq cr6,0x825f3974
	if (ctx.cr6.eq) goto loc_825F3974;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x825f3974
	if (!ctx.cr6.lt) goto loc_825F3974;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-13672
	ctx.r6.s64 = ctx.r11.s64 + -13672;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x822a3890
	ctx.lr = 0x825F3904;
	sub_822A3890(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x825f3bb4
	goto loc_825F3BB4;
loc_825F3914:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_825F391C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825ea1f8
	ctx.lr = 0x825F3924;
	sub_825EA1F8(ctx, base);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F392C:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_825F3930:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x825f3940
	if (!ctx.cr6.lt) goto loc_825F3940;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825F3940:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f38b8
	if (!ctx.cr6.lt) goto loc_825F38B8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// beq cr6,0x825f3958
	if (ctx.cr6.eq) goto loc_825F3958;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_825F3958:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825ee860
	ctx.lr = 0x825F3964;
	sub_825EE860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x825f3930
	goto loc_825F3930;
loc_825F3974:
	// lwz r11,860(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 860);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,860(r26)
	REX_STORE_U32(ctx.r26.u32 + 860, ctx.r11.u32);
	// b 0x825f39e8
	goto loc_825F39E8;
loc_825F3988:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8226a7f8
	ctx.lr = 0x825F3994;
	sub_8226A7F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// beq 0x825f3b8c
	if (ctx.cr0.eq) goto loc_825F3B8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6870
	ctx.lr = 0x825F39B0;
	sub_825D6870(ctx, base);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825eab78
	ctx.lr = 0x825F39C4;
	sub_825EAB78(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825ee8c0
	ctx.lr = 0x825F39E0;
	sub_825EE8C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
loc_825F39E8:
	// stw r29,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r29.u32);
	// lwz r31,28(r15)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825f3a9c
	if (ctx.cr6.eq) goto loc_825F3A9C;
loc_825F39F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825f3a90
	if (ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x825f3a90
	if (!ctx.cr6.eq) goto loc_825F3A90;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825f3a78
	if (!ctx.cr6.eq) goto loc_825F3A78;
	// addi r7,r25,48
	ctx.r7.s64 = ctx.r25.s64 + 48;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825f2f58
	ctx.lr = 0x825F3A3C;
	sub_825F2F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825f3a50
	if (!ctx.cr0.lt) goto loc_825F3A50;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x825f3a50
	if (ctx.cr6.lt) goto loc_825F3A50;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_825F3A50:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825f39f8
	if (!ctx.cr6.eq) goto loc_825F39F8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x825f3a9c
	if (!ctx.cr6.lt) goto loc_825F3A9C;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F3A78:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-13736
	ctx.r6.s64 = ctx.r11.s64 + -13736;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x822a3890
	ctx.lr = 0x825F3A90;
	sub_822A3890(ctx, base);
loc_825F3A90:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F3A9C:
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
	// bl 0x825ee9f0
	ctx.lr = 0x825F3ACC;
	sub_825EE9F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825ee9f0
	ctx.lr = 0x825F3AE8;
	sub_825EE9F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x825ee860
	ctx.lr = 0x825F3B00;
	sub_825EE860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,40(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x825ee860
	ctx.lr = 0x825F3B18;
	sub_825EE860(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x825f3b94
	if (ctx.cr0.lt) goto loc_825F3B94;
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r11,16(r18)
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r11.u32);
	// stw r20,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r20.u32);
	// stw r16,32(r25)
	REX_STORE_U32(ctx.r25.u32 + 32, ctx.r16.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
	// stw r30,60(r25)
	REX_STORE_U32(ctx.r25.u32 + 60, ctx.r30.u32);
	// stw r10,68(r25)
	REX_STORE_U32(ctx.r25.u32 + 68, ctx.r10.u32);
	// stw r23,44(r25)
	REX_STORE_U32(ctx.r25.u32 + 44, ctx.r23.u32);
	// lwz r11,892(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 892);
	// stw r11,52(r25)
	REX_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,56(r25)
	REX_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// lwz r11,848(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 848);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,892(r26)
	REX_STORE_U32(ctx.r26.u32 + 892, ctx.r25.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r11,848(r26)
	REX_STORE_U32(ctx.r26.u32 + 848, ctx.r11.u32);
	// b 0x825f3b94
	goto loc_825F3B94;
loc_825F3B8C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_825F3B94:
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3bb4
	if (ctx.cr6.eq) goto loc_825F3BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ee668
	ctx.lr = 0x825F3BA8;
	sub_825EE668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F3BB4;
	sub_8226A890(ctx, base);
loc_825F3BB4:
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3bd4
	if (ctx.cr6.eq) goto loc_825F3BD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ee668
	ctx.lr = 0x825F3BC8;
	sub_825EE668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F3BD4;
	sub_8226A890(ctx, base);
loc_825F3BD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825f3bf0
	if (ctx.cr6.eq) goto loc_825F3BF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825ee668
	ctx.lr = 0x825F3BE4;
	sub_825EE668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F3BF0;
	sub_8226A890(ctx, base);
loc_825F3BF0:
	// lwz r30,108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f3c10
	if (ctx.cr6.eq) goto loc_825F3C10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ee668
	ctx.lr = 0x825F3C04;
	sub_825EE668(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F3C10;
	sub_8226A890(ctx, base);
loc_825F3C10:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x825f3c2c
	if (ctx.cr6.eq) goto loc_825F3C2C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825f0e58
	ctx.lr = 0x825F3C20;
	sub_825F0E58(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F3C2C;
	sub_8226A890(ctx, base);
loc_825F3C2C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8226a890
	ctx.lr = 0x825F3C38;
	sub_8226A890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8261BA38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,30728
	ctx.r11.s64 = ctx.r11.s64 + 30728;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8261BA74:
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8261ba74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261BA74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261BC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// lis r9,-32151
	ctx.r9.s64 = -2107047936;
	// lfs f0,5840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24956(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24956);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,24968(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 24968, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261BE60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,15352
	ctx.r3.s64 = ctx.r11.s64 + 15352;
	// b 0x8226ce18
	sub_8226CE18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82621938) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// srawi r9,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 16;
	// lwz r10,1368(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1368);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addi r6,r5,64
	ctx.r6.s64 = ctx.r5.s64 + 64;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmplwi cr6,r3,128
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 128, ctx.xer);
	// blt cr6,0x82621a28
	if (ctx.cr6.lt) goto loc_82621A28;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x826219b4
	if (ctx.cr6.lt) goto loc_826219B4;
	// lhz r8,62(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 62);
	// neg r4,r8
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subf r7,r4,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// xor r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// andc r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// b 0x826219c4
	goto loc_826219C4;
loc_826219B4:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
loc_826219C4:
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// blt cr6,0x82621a10
	if (ctx.cr6.lt) goto loc_82621A10;
	// lhz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 64);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r6,r11,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r5,r7,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r7.u64;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// and r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 & ctx.r8.u64;
	// or r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 | ctx.r9.u64;
	// and r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 & ctx.r7.u64;
	// andc r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82621A10:
	// lwz r11,1468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_82621A28:
	// lwz r10,1476(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1476);
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1468(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1468);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lhzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826385D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v31,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x82638690
	if (!ctx.cr6.eq) goto loc_82638690;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82638774
	if (!ctx.cr6.gt) goto loc_82638774;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8263861C:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v63,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v9,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v12,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v30,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v24,v28,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v21,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vsubshs v20,v7,v23
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vadduhm v19,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v18,v3,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v17,v19,v2
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne 0x8263861c
	if (!ctx.cr0.eq) goto loc_8263861C;
	// b 0x82638774
	goto loc_82638774;
loc_82638690:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82638774
	if (!ctx.cr6.gt) goto loc_82638774;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r8,16
	ctx.r8.s64 = 16;
loc_826386A0:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// vslh v10,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v9,v0,v62,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 12));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vsldoi128 v3,v0,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi128 v30,v0,v62,6
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 10));
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v29,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vslh v28,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vslh v27,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v25,v12,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v24,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v17,v21,v10
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v14,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v9,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v4,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v10,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v0,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v16,v24
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v28,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v27,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v26,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vadduhm v25,v4,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v24,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v23,v28,v30
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vadduhm v22,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v20,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v19,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vsrah v16,v18,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v17,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v61,v8,v16
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvx128 v16,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// vor128 v8,v61,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// bne 0x826386a0
	if (!ctx.cr0.eq) goto loc_826386A0;
loc_82638774:
	// vand v0,v8,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// mfocrf r11,2
	ctx.r11.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826441F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82644200;
	__savegprlr_25(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v57,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v60,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v59,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lvx128 v56,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cntlzw r9,r29
	ctx.r9.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lvsl v4,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v61,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v31,v57,v56,v2
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v55,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v12,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// vperm128 v6,v54,v55,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v5,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// and r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 & ctx.r30.u64;
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// vadduhm v1,v4,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// addi r27,r1,240
	ctx.r27.s64 = ctx.r1.s64 + 240;
	// vadduhm v31,v3,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// li r7,1
	ctx.r7.s64 = 1;
	// vadduhm v30,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// vadduhm v29,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r26,4
	ctx.r26.s64 = 4;
	// vadduhm v28,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// vadduhm v26,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v30,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// slw r6,r26,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r30.u8 & 0x3F));
	// stvx128 v29,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x826443e0
	if (!ctx.cr6.eq) goto loc_826443E0;
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r30,r8,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v53,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	ctx.r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v52,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	ctx.r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	ctx.r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	ctx.r26.s64 = ctx.r1.s64 + 432;
	// lvx128 v49,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v53,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v51,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v2,v49,v48,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v47,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_826443E0:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x82644450
	if (ctx.cr6.lt) goto loc_82644450;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82644450
	if (!ctx.cr6.gt) goto loc_82644450;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subf r26,r31,r8
	ctx.r26.u64 = ctx.r8.u64 - ctx.r31.u64;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
loc_82644410:
	// lbz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lbzx r25,r26,r11
	ctx.r25.u64 = REX_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rotlwi r29,r3,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lbz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r27,r25,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r3,r25,r27
	ctx.r3.u64 = ctx.r25.u64 + ctx.r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r30,r29,r25
	ctx.r30.u64 = ctx.r29.u64 + ctx.r25.u64;
	// sth r3,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r3.u16);
	// sth r30,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// bne 0x82644410
	if (!ctx.cr0.eq) goto loc_82644410;
loc_82644450:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82641b10
	ctx.lr = 0x82644458;
	sub_82641B10(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

