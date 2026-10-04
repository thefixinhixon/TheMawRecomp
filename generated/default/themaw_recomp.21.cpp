#include "themaw_funcs.21.h"

DEFINE_REX_FUNC(sub_820D0E80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x820D0E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r6,16
	ctx.r6.s64 = 16;
	// ori r7,r9,9126
	ctx.r7.u64 = ctx.r9.u64 | 9126;
	// lis r11,24
	ctx.r11.s64 = 1572864;
	// sth r6,126(r1)
	REX_STORE_U16(ctx.r1.u32 + 126, ctx.r6.u16);
	// lis r8,44
	ctx.r8.s64 = 2883584;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r11,r11,10374
	ctx.r11.u64 = ctx.r11.u64 | 10374;
	// li r10,10
	ctx.r10.s64 = 10;
	// sth r31,112(r1)
	REX_STORE_U16(ctx.r1.u32 + 112, ctx.r31.u16);
	// li r5,20
	ctx.r5.s64 = 20;
	// sth r31,114(r1)
	REX_STORE_U16(ctx.r1.u32 + 114, ctx.r31.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r31,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
	// li r9,24
	ctx.r9.s64 = 24;
	// stb r31,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r31.u8);
	// ori r8,r8,9125
	ctx.r8.u64 = ctx.r8.u64 | 9125;
	// stb r31,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// li r7,5
	ctx.r7.s64 = 5;
	// sth r31,124(r1)
	REX_STORE_U16(ctx.r1.u32 + 124, ctx.r31.u16);
	// li r6,255
	ctx.r6.s64 = 255;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stb r31,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r31.u8);
	// stb r10,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r10.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r31,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r31.u8);
	// lis r28,14
	ctx.r28.s64 = 917504;
	// sth r31,136(r1)
	REX_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sth r5,138(r1)
	REX_STORE_U16(ctx.r1.u32 + 138, ctx.r5.u16);
	// ori r28,r28,33424
	ctx.r28.u64 = ctx.r28.u64 | 33424;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stb r31,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r10,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// stb r4,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r4.u8);
	// sth r31,148(r1)
	REX_STORE_U16(ctx.r1.u32 + 148, ctx.r31.u16);
	// sth r9,150(r1)
	REX_STORE_U16(ctx.r1.u32 + 150, ctx.r9.u16);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stb r31,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r31.u8);
	// stb r7,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, ctx.r7.u8);
	// stb r31,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r31.u8);
	// sth r6,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, ctx.r6.u16);
	// sth r31,162(r1)
	REX_STORE_U16(ctx.r1.u32 + 162, ctx.r31.u16);
	// stw r29,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stb r31,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// stb r31,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r31.u8);
	// stb r31,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r31.u8);
	// bl 0x8227c4f0
	ctx.lr = 0x820D0F54;
	sub_8227C4F0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// stwx r3,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r29,r11,15328
	ctx.r29.s64 = ctx.r11.s64 + 15328;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r8,r5,20064
	ctx.r8.s64 = ctx.r5.s64 + 20064;
	// addi r7,r4,20072
	ctx.r7.s64 = ctx.r4.s64 + 20072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4520
	ctx.r4.s64 = 4520;
	// bl 0x82299c60
	ctx.lr = 0x820D0F94;
	sub_82299C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820d0fd8
	if (ctx.cr6.lt) goto loc_820D0FD8;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,14
	ctx.r11.s64 = 917504;
	// ori r28,r11,33428
	ctx.r28.u64 = ctx.r11.u64 | 33428;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D0FB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8227da60
	ctx.lr = 0x820D0FBC;
	sub_8227DA60(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stwx r3,r30,r28
	REX_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820D0FD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D0FD8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r7,r10,20100
	ctx.r7.s64 = ctx.r10.s64 + 20100;
	// addi r8,r11,20092
	ctx.r8.s64 = ctx.r11.s64 + 20092;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4520
	ctx.r4.s64 = 4520;
	// bl 0x82299c60
	ctx.lr = 0x820D100C;
	sub_82299C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820d1050
	if (ctx.cr6.lt) goto loc_820D1050;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,14
	ctx.r11.s64 = 917504;
	// ori r31,r11,33432
	ctx.r31.u64 = ctx.r11.u64 | 33432;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D1030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8227d970
	ctx.lr = 0x820D1034;
	sub_8227D970(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820D1050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820D1050:
	// lis r11,14
	ctx.r11.s64 = 917504;
	// li r10,32
	ctx.r10.s64 = 32;
	// ori r9,r11,33440
	ctx.r9.u64 = ctx.r11.u64 | 33440;
	// li r4,16
	ctx.r4.s64 = 16;
	// lis r3,3
	ctx.r3.s64 = 196608;
	// stwx r10,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x825d0430
	ctx.lr = 0x820D106C;
	sub_825D0430(ctx, base);
	// lis r8,14
	ctx.r8.s64 = 917504;
	// ori r7,r8,33436
	ctx.r7.u64 = ctx.r8.u64 | 33436;
	// stwx r3,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E1BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e1bcc
	if (!ctx.cr6.eq) goto loc_820E1BCC;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e1bcc
	if (!ctx.cr6.lt) goto loc_820E1BCC;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_820E1BCC:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E28B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E5120) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E5470) {
	REX_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E5D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,9884
	ctx.r9.s64 = ctx.r11.s64 + 9884;
	// stw r10,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
	// lfs f13,9884(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9884);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,292(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 292, temp.u32);
	// lfs f0,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,280(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stfs f0,288(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 288, temp.u32);
	// stfs f13,296(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 296, temp.u32);
	// stfs f0,300(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 300, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E7F58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x820E7F60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8020
	if (ctx.cr6.eq) goto loc_820E8020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e8020
	if (!ctx.cr6.gt) goto loc_820E8020;
	// lwz r31,24(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821d6430
	ctx.lr = 0x820E7F94;
	sub_821D6430(ctx, base);
	// divwu r11,r3,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r3.u32 / ctx.r30.u32 : 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r8,r10,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r10.u64;
	// ble cr6,0x820e8020
	if (!ctx.cr6.gt) goto loc_820E8020;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_820E7FB0:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e7ff0
	if (ctx.cr6.eq) goto loc_820E7FF0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E7FC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq cr6,0x820e7fe8
	if (ctx.cr6.eq) goto loc_820E7FE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e7fc4
	if (ctx.cr6.eq) goto loc_820E7FC4;
loc_820E7FE8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e802c
	if (ctx.cr6.eq) goto loc_820E802C;
loc_820E7FF0:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r30
	ctx.r9.u64 = uint32_t((ctx.r30.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r10.s32 / ctx.r30.s32 : 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mullw r6,r9,r30
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// andc r5,r30,r8
	ctx.r5.u64 = ctx.r30.u64 & ~ctx.r8.u64;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r8,r6,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r6.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x820e7fb0
	if (ctx.cr6.lt) goto loc_820E7FB0;
loc_820E8020:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_820E802C:
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F00F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820d3ec8
	ctx.lr = 0x820F0120;
	sub_820D3EC8(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f1,f13,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f2,f2,f13,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f8.f64)));
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f3,f10,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f3.f64)));
	// lfs f7,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f7,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f6.f64)));
	// lfs f9,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f6,f5,f12,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f5,f8,f12,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmadds f2,f4,f11,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f7.f64)));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f3,f1,f11,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f1,f13,f11,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f6.f64)));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f0,f10,f11,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f5.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_820F83B8) {
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
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// addi r6,r11,31264
	ctx.r6.s64 = ctx.r11.s64 + 31264;
	// addi r5,r10,31228
	ctx.r5.s64 = ctx.r10.s64 + 31228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825cfd98
	ctx.lr = 0x820F83EC;
	sub_825CFD98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x820f83fc
	if (!ctx.cr6.eq) goto loc_820F83FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F83FC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f843c
	if (ctx.cr6.eq) goto loc_820F843C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f8424
	if (ctx.cr6.eq) goto loc_820F8424;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820f8440
	if (!ctx.cr6.eq) goto loc_820F8440;
loc_820F8424:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_820F843C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_820F8440:
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

DEFINE_REX_FUNC(sub_820F9650) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f13,f10
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f3,f7,f0,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC198) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,32452
	ctx.r3.s64 = ctx.r11.s64 + 32452;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC448) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x825d0430
	ctx.lr = 0x820FC460;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fc4d4
	if (ctx.cr6.eq) goto loc_820FC4D4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,31412
	ctx.r8.s64 = ctx.r9.s64 + 31412;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,9868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820FC4D4:
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

DEFINE_REX_FUNC(sub_82100418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821005F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,212(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,220(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// addi r10,r3,312
	ctx.r10.s64 = ctx.r3.s64 + 312;
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// lfs f0,9868(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f0,232(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// stfs f0,236(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stw r11,272(r3)
	REX_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// lfs f13,244(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,248(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,252(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f0,256(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f0,260(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f0,264(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f0,268(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r11,552(r3)
	REX_STORE_U32(ctx.r3.u32 + 552, ctx.r11.u32);
	// lfs f12,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,528(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// lfs f11,524(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,532(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// stfs f0,536(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f0,540(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f0,544(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 544, temp.u32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// stw r11,584(r3)
	REX_STORE_U32(ctx.r3.u32 + 584, ctx.r11.u32);
	// lfs f10,556(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,560(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 560, temp.u32);
	// lfs f9,556(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 556);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,564(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 564, temp.u32);
	// stfs f0,568(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 568, temp.u32);
	// stfs f0,572(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 572, temp.u32);
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f0,580(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stw r11,864(r3)
	REX_STORE_U32(ctx.r3.u32 + 864, ctx.r11.u32);
	// lfs f8,836(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 836);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,840(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 840, temp.u32);
	// lfs f7,836(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 836);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,844(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 844, temp.u32);
	// stfs f0,848(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 848, temp.u32);
	// stfs f0,852(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 852, temp.u32);
	// stfs f0,856(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 856, temp.u32);
	// stfs f0,860(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 860, temp.u32);
	// stw r11,896(r3)
	REX_STORE_U32(ctx.r3.u32 + 896, ctx.r11.u32);
	// lfs f6,868(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 868);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,872(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 872, temp.u32);
	// lfs f5,868(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 868);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,876(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 876, temp.u32);
	// stfs f0,880(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 880, temp.u32);
	// stfs f0,884(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 884, temp.u32);
	// stfs f0,888(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 888, temp.u32);
	// stfs f0,892(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 892, temp.u32);
	// stw r11,1176(r3)
	REX_STORE_U32(ctx.r3.u32 + 1176, ctx.r11.u32);
	// lfs f4,1148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1148);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,1152(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 1152, temp.u32);
	// lfs f3,1148(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1148);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,1156(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 1156, temp.u32);
	// stfs f0,1160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1160, temp.u32);
	// stfs f0,1164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1164, temp.u32);
	// stfs f0,1168(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1168, temp.u32);
	// stfs f0,1172(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1172, temp.u32);
	// stw r11,1208(r3)
	REX_STORE_U32(ctx.r3.u32 + 1208, ctx.r11.u32);
	// lfs f2,1180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,1184(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 1184, temp.u32);
	// lfs f1,1180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1180);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,1188(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 1188, temp.u32);
	// stfs f0,1192(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1192, temp.u32);
	// stfs f0,1196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1196, temp.u32);
	// stfs f0,1200(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1200, temp.u32);
	// stfs f0,1204(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 1204, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82118848) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28936
	ctx.r4.s64 = ctx.r11.s64 + -28936;
	// bl 0x82201b80
	ctx.lr = 0x82118868;
	sub_82201B80(ctx, base);
	// lis r6,-32148
	ctx.r6.s64 = -2106851328;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// stw r31,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r31.u32);
	// addi r5,r6,-17360
	ctx.r5.s64 = ctx.r6.s64 + -17360;
	// addi r8,r10,-19116
	ctx.r8.s64 = ctx.r10.s64 + -19116;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r7,r9,14460
	ctx.r7.s64 = ctx.r9.s64 + 14460;
	// addi r9,r4,-9176
	ctx.r9.s64 = ctx.r4.s64 + -9176;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,332(r6)
	REX_STORE_U32(ctx.r6.u32 + 332, ctx.r8.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,336(r4)
	REX_STORE_U32(ctx.r4.u32 + 336, ctx.r7.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r5.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,292(r8)
	REX_STORE_U32(ctx.r8.u32 + 292, ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,296(r7)
	REX_STORE_U32(ctx.r7.u32 + 296, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,300(r6)
	REX_STORE_U32(ctx.r6.u32 + 300, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,304(r5)
	REX_STORE_U32(ctx.r5.u32 + 304, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,308(r4)
	REX_STORE_U32(ctx.r4.u32 + 308, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,316(r8)
	REX_STORE_U32(ctx.r8.u32 + 316, ctx.r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,284(r7)
	REX_STORE_U32(ctx.r7.u32 + 284, ctx.r9.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,288(r6)
	REX_STORE_U32(ctx.r6.u32 + 288, ctx.r11.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,320(r5)
	REX_STORE_U32(ctx.r5.u32 + 320, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,324(r4)
	REX_STORE_U32(ctx.r4.u32 + 324, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,328(r11)
	REX_STORE_U32(ctx.r11.u32 + 328, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8211AF90) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r8,r10,-32436
	ctx.r8.s64 = ctx.r10.s64 + -32436;
	// lis r7,-32148
	ctx.r7.s64 = -2106851328;
	// addi r6,r9,14460
	ctx.r6.s64 = ctx.r9.s64 + 14460;
	// stw r8,332(r11)
	REX_STORE_U32(ctx.r11.u32 + 332, ctx.r8.u32);
	// addi r5,r7,-17360
	ctx.r5.s64 = ctx.r7.s64 + -17360;
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,336(r4)
	REX_STORE_U32(ctx.r4.u32 + 336, ctx.r6.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32149
	ctx.r7.s64 = -2106916864;
	// stw r5,340(r9)
	REX_STORE_U32(ctx.r9.u32 + 340, ctx.r5.u32);
	// addi r8,r10,-9440
	ctx.r8.s64 = ctx.r10.s64 + -9440;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r7,31012
	ctx.r10.s64 = ctx.r7.s64 + 31012;
	// stw r11,292(r6)
	REX_STORE_U32(ctx.r6.u32 + 292, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,296(r9)
	REX_STORE_U32(ctx.r9.u32 + 296, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,300(r7)
	REX_STORE_U32(ctx.r7.u32 + 300, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,304(r6)
	REX_STORE_U32(ctx.r6.u32 + 304, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,308(r9)
	REX_STORE_U32(ctx.r9.u32 + 308, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,312(r7)
	REX_STORE_U32(ctx.r7.u32 + 312, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,316(r6)
	REX_STORE_U32(ctx.r6.u32 + 316, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,284(r9)
	REX_STORE_U32(ctx.r9.u32 + 284, ctx.r8.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,288(r8)
	REX_STORE_U32(ctx.r8.u32 + 288, ctx.r11.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,320(r7)
	REX_STORE_U32(ctx.r7.u32 + 320, ctx.r11.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,324(r6)
	REX_STORE_U32(ctx.r6.u32 + 324, ctx.r11.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r5,328(r9)
	REX_STORE_U32(ctx.r9.u32 + 328, ctx.r5.u32);
	// bl 0x82201d88
	ctx.lr = 0x8211B054;
	sub_82201D88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211E0B0) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8211E0D0;
	sub_825D0430(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e10c
	if (ctx.cr6.eq) goto loc_8211E10C;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r10,-14628
	ctx.r7.s64 = ctx.r10.s64 + -14628;
	// addi r6,r9,-28184
	ctx.r6.s64 = ctx.r9.s64 + -28184;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29432
	ctx.r4.s64 = ctx.r8.s64 + -29432;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// b 0x8211e110
	goto loc_8211E110;
loc_8211E10C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211E110:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_82120AC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82120AC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r31,r11,21200
	ctx.r31.s64 = ctx.r11.s64 + 21200;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,21432(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21432);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120b14
	if (!ctx.cr6.eq) goto loc_82120B14;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16352
	ctx.r9.s64 = ctx.r9.s64 + 16352;
	// addi r8,r8,16512
	ctx.r8.s64 = ctx.r8.s64 + 16512;
	// stw r11,21432(r10)
	REX_STORE_U32(ctx.r10.u32 + 21432, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82120B14:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x823974d8
	ctx.lr = 0x82120B24;
	sub_823974D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82120b44
	if (!ctx.cr6.eq) goto loc_82120B44;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// b 0x82120b48
	goto loc_82120B48;
loc_82120B44:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82120B48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120b5c
	if (!ctx.cr6.eq) goto loc_82120B5C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_82120B5C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-24224
	ctx.r30.s64 = ctx.r11.s64 + -24224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82201c78
	ctx.lr = 0x82120B74;
	sub_82201C78(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120ba4
	if (ctx.cr6.eq) goto loc_82120BA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120ba0
	if (ctx.cr6.eq) goto loc_82120BA0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82120BA0:
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_82120BA4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r31,r11,21192
	ctx.r31.s64 = ctx.r11.s64 + 21192;
	// lwz r11,21428(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 21428);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120be4
	if (!ctx.cr6.eq) goto loc_82120BE4;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16680
	ctx.r9.s64 = ctx.r9.s64 + 16680;
	// addi r8,r8,16872
	ctx.r8.s64 = ctx.r8.s64 + 16872;
	// stw r11,21428(r10)
	REX_STORE_U32(ctx.r10.u32 + 21428, ctx.r11.u32);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82120BE4:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x823974d8
	ctx.lr = 0x82120BF4;
	sub_823974D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82120c10
	if (!ctx.cr6.eq) goto loc_82120C10;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// b 0x82120c14
	goto loc_82120C14;
loc_82120C10:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82120C14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120c28
	if (!ctx.cr6.eq) goto loc_82120C28;
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
loc_82120C28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82201d00
	ctx.lr = 0x82120C38;
	sub_82201D00(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120c64
	if (ctx.cr6.eq) goto loc_82120C64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120c64
	if (ctx.cr6.eq) goto loc_82120C64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82120C64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82133A98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82133AA0;
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
	// li r4,5
	ctx.r4.s64 = 5;
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
	ctx.lr = 0x82133ADC;
	sub_82172518(ctx, base);
	// lis r9,-32148
	ctx.r9.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-16860
	ctx.r8.s64 = ctx.r9.s64 + -16860;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82172600
	ctx.lr = 0x82133AF4;
	sub_82172600(ctx, base);
	// lis r7,-32148
	ctx.r7.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r7,-17052
	ctx.r30.s64 = ctx.r7.s64 + -17052;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82172600
	ctx.lr = 0x82133B0C;
	sub_82172600(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82172600
	ctx.lr = 0x82133B1C;
	sub_82172600(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82172600
	ctx.lr = 0x82133B2C;
	sub_82172600(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82172600
	ctx.lr = 0x82133B3C;
	sub_82172600(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-2280
	ctx.r4.s64 = ctx.r4.s64 + -2280;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82171eb0
	ctx.lr = 0x82133B58;
	sub_82171EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d3f98
	ctx.lr = 0x82133B64;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133b94
	if (ctx.cr6.eq) goto loc_82133B94;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133b90
	if (ctx.cr6.eq) goto loc_82133B90;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133B90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133B90:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82133B94:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r11,-2264
	ctx.r10.s64 = ctx.r11.s64 + -2264;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bne cr6,0x82133bc4
	if (!ctx.cr6.eq) goto loc_82133BC4;
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
	// b 0x82133bec
	goto loc_82133BEC;
loc_82133BC4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82133BC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82133bc8
	if (!ctx.cr6.eq) goto loc_82133BC8;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x82133BEC;
	sub_821ED6F0(ctx, base);
loc_82133BEC:
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
	ctx.lr = 0x82133C04;
	sub_821F6D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82133c94
	if (!ctx.cr6.eq) goto loc_82133C94;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82133c94
	if (ctx.cr6.eq) goto loc_82133C94;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x82133C38;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133c94
	if (ctx.cr6.eq) goto loc_82133C94;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82133C4C;
	sub_821ED688(ctx, base);
	// cmplwi cr6,r3,4919
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4919, ctx.xer);
	// bne cr6,0x82133c88
	if (!ctx.cr6.eq) goto loc_82133C88;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee510
	ctx.lr = 0x82133C64;
	sub_821EE510(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133c88
	if (ctx.cr6.eq) goto loc_82133C88;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x82133C78;
	sub_821ED688(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82133C88:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82133C94:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82133dec
	if (!ctx.cr6.eq) goto loc_82133DEC;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82133cc8
	if (!ctx.cr6.eq) goto loc_82133CC8;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82133cf0
	goto loc_82133CF0;
loc_82133CC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82133CCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82133ccc
	if (!ctx.cr6.eq) goto loc_82133CCC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x821ed6f0
	ctx.lr = 0x82133CF0;
	sub_821ED6F0(ctx, base);
loc_82133CF0:
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ee350
	ctx.lr = 0x82133CFC;
	sub_821EE350(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82133d1c
	if (ctx.cr6.eq) goto loc_82133D1C;
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
loc_82133D1C:
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
	ctx.lr = 0x82133D48;
	sub_821E4310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82206798
	ctx.lr = 0x82133D50;
	sub_82206798(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x821f2d18
	ctx.lr = 0x82133D60;
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
	ctx.lr = 0x82133D90;
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
	ctx.lr = 0x82133DC4;
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
	ctx.lr = 0x82133DE0;
	sub_821F6ED8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82133DEC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82207528
	ctx.lr = 0x82133DF8;
	sub_82207528(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8213dc80
	ctx.lr = 0x82133E00;
	sub_8213DC80(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213F658) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8217eca0
	sub_8217ECA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213FA10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8213FA18;
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
	ctx.lr = 0x8213FA28;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213fa78
	if (ctx.cr6.eq) goto loc_8213FA78;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fa78
	if (!ctx.cr6.eq) goto loc_8213FA78;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8213FA48:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x8213FA54;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8213fa9c
	if (ctx.cr6.eq) goto loc_8213FA9C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fa9c
	if (!ctx.cr6.eq) goto loc_8213FA9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8213FA78:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182228
	ctx.lr = 0x8213FA84;
	sub_82182228(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x8213fa48
	if (!ctx.cr6.lt) goto loc_8213FA48;
loc_8213FA90:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_8213FA9C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181b08
	ctx.lr = 0x8213FAA8;
	sub_82181B08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213fa90
	if (ctx.cr6.lt) goto loc_8213FA90;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82147620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82147628;
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
	// li r4,1
	ctx.r4.s64 = 1;
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
	ctx.lr = 0x82147668;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-16916
	ctx.r9.s64 = ctx.r10.s64 + -16916;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x82147680;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r30,r11,19716
	ctx.r30.s64 = ctx.r11.s64 + 19716;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r11,20692(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20692);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821476c8
	if (!ctx.cr6.eq) goto loc_821476C8;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20072
	ctx.r9.s64 = ctx.r9.s64 + -20072;
	// addi r8,r8,-20048
	ctx.r8.s64 = ctx.r8.s64 + -20048;
	// stw r11,20692(r10)
	REX_STORE_U32(ctx.r10.u32 + 20692, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_821476C8:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x821476D4;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821476f0
	if (!ctx.cr6.eq) goto loc_821476F0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x821476f4
	goto loc_821476F4;
loc_821476F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821476F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82147708
	if (!ctx.cr6.eq) goto loc_82147708;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82147708:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82147714;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147744
	if (ctx.cr6.eq) goto loc_82147744;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147740
	if (ctx.cr6.eq) goto loc_82147740;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82147740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82147740:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82147744:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,15756
	ctx.r30.s64 = ctx.r11.s64 + 15756;
	// lwz r11,15780(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 15780);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82147784
	if (!ctx.cr6.eq) goto loc_82147784;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19888
	ctx.r9.s64 = ctx.r9.s64 + -19888;
	// addi r8,r8,-19864
	ctx.r8.s64 = ctx.r8.s64 + -19864;
	// stw r11,15780(r10)
	REX_STORE_U32(ctx.r10.u32 + 15780, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82147784:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82147790;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821477ac
	if (!ctx.cr6.eq) goto loc_821477AC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x821477b0
	goto loc_821477B0;
loc_821477AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821477B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821477c4
	if (!ctx.cr6.eq) goto loc_821477C4;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_821477C4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x821477D0;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82147800
	if (ctx.cr6.eq) goto loc_82147800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821477fc
	if (ctx.cr6.eq) goto loc_821477FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821477FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821477FC:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82147800:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28224
	ctx.r4.s64 = ctx.r11.s64 + -28224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x82147814;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8214781C;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82152F60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82152F68;
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
	ctx.lr = 0x82152FAC;
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
	ctx.lr = 0x82152FC4;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r30,r11,17268
	ctx.r30.s64 = ctx.r11.s64 + 17268;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r11,18080(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18080);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8215300c
	if (!ctx.cr6.eq) goto loc_8215300C;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16896
	ctx.r9.s64 = ctx.r9.s64 + 16896;
	// addi r8,r8,17088
	ctx.r8.s64 = ctx.r8.s64 + 17088;
	// stw r11,18080(r10)
	REX_STORE_U32(ctx.r10.u32 + 18080, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8215300C:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82153018;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82153034
	if (!ctx.cr6.eq) goto loc_82153034;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82153038
	goto loc_82153038;
loc_82153034:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82153038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215304c
	if (!ctx.cr6.eq) goto loc_8215304C;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8215304C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82153058;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153088
	if (ctx.cr6.eq) goto loc_82153088;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153084
	if (ctx.cr6.eq) goto loc_82153084;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82153084:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82153088:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,13220
	ctx.r30.s64 = ctx.r11.s64 + 13220;
	// lwz r11,13756(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 13756);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821530c8
	if (!ctx.cr6.eq) goto loc_821530C8;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17248
	ctx.r9.s64 = ctx.r9.s64 + 17248;
	// addi r8,r8,17272
	ctx.r8.s64 = ctx.r8.s64 + 17272;
	// stw r11,13756(r10)
	REX_STORE_U32(ctx.r10.u32 + 13756, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_821530C8:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x821530D4;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821530f0
	if (!ctx.cr6.eq) goto loc_821530F0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x821530f4
	goto loc_821530F4;
loc_821530F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821530F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82153108
	if (!ctx.cr6.eq) goto loc_82153108;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82153108:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x82153114;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153144
	if (ctx.cr6.eq) goto loc_82153144;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82153140
	if (ctx.cr6.eq) goto loc_82153140;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82153140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82153140:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_82153144:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x82153154;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8215315C;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215D6A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8215D6B0;
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
	// li r4,2
	ctx.r4.s64 = 2;
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
	ctx.lr = 0x8215D6F0;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-17216
	ctx.r9.s64 = ctx.r10.s64 + -17216;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x8215D708;
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
	ctx.lr = 0x8215D720;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// ld r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,19124
	ctx.r30.s64 = ctx.r11.s64 + 19124;
	// stw r6,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// lwz r11,20396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20396);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8215d768
	if (!ctx.cr6.eq) goto loc_8215D768;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17984
	ctx.r9.s64 = ctx.r9.s64 + -17984;
	// addi r8,r8,-17816
	ctx.r8.s64 = ctx.r8.s64 + -17816;
	// stw r11,20396(r10)
	REX_STORE_U32(ctx.r10.u32 + 20396, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8215D768:
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8215D774;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d790
	if (!ctx.cr6.eq) goto loc_8215D790;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// b 0x8215d794
	goto loc_8215D794;
loc_8215D790:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8215D794:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d7a8
	if (!ctx.cr6.eq) goto loc_8215D7A8;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8215D7A8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x8215D7B4;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d7e4
	if (ctx.cr6.eq) goto loc_8215D7E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d7e0
	if (ctx.cr6.eq) goto loc_8215D7E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215D7E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215D7E0:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8215D7E4:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// ld r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,15980
	ctx.r30.s64 = ctx.r11.s64 + 15980;
	// lwz r11,16268(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16268);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8215d824
	if (!ctx.cr6.eq) goto loc_8215D824;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17656
	ctx.r9.s64 = ctx.r9.s64 + -17656;
	// addi r8,r8,-17632
	ctx.r8.s64 = ctx.r8.s64 + -17632;
	// stw r11,16268(r10)
	REX_STORE_U32(ctx.r10.u32 + 16268, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_8215D824:
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x8215D830;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d84c
	if (!ctx.cr6.eq) goto loc_8215D84C;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// b 0x8215d850
	goto loc_8215D850;
loc_8215D84C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8215D850:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d864
	if (!ctx.cr6.eq) goto loc_8215D864;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8215D864:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x8215D870;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d8a0
	if (ctx.cr6.eq) goto loc_8215D8A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215d89c
	if (ctx.cr6.eq) goto loc_8215D89C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215D89C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215D89C:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8215D8A0:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-20588
	ctx.r4.s64 = ctx.r11.s64 + -20588;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x8215D8B4;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8215D8BC;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82169E78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82169E80;
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
	// li r4,1
	ctx.r4.s64 = 1;
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
	ctx.lr = 0x82169EC0;
	sub_82172518(ctx, base);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-16536
	ctx.r9.s64 = ctx.r10.s64 + -16536;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82172600
	ctx.lr = 0x82169ED8;
	sub_82172600(ctx, base);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r30,r11,16716
	ctx.r30.s64 = ctx.r11.s64 + 16716;
	// stw r8,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// lwz r11,17804(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17804);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82169f20
	if (!ctx.cr6.eq) goto loc_82169F20;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24864
	ctx.r9.s64 = ctx.r9.s64 + 24864;
	// addi r8,r8,24888
	ctx.r8.s64 = ctx.r8.s64 + 24888;
	// stw r11,17804(r10)
	REX_STORE_U32(ctx.r10.u32 + 17804, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82169F20:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82169F2C;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169f48
	if (!ctx.cr6.eq) goto loc_82169F48;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// b 0x82169f4c
	goto loc_82169F4C;
loc_82169F48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82169F4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169f60
	if (!ctx.cr6.eq) goto loc_82169F60;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82169F60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d3f98
	ctx.lr = 0x82169F6C;
	sub_821D3F98(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169f9c
	if (ctx.cr6.eq) goto loc_82169F9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82169f98
	if (ctx.cr6.eq) goto loc_82169F98;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82169F98:
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82169F9C:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// addi r30,r11,12860
	ctx.r30.s64 = ctx.r11.s64 + 12860;
	// lwz r11,13576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 13576);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82169fdc
	if (!ctx.cr6.eq) goto loc_82169FDC;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25048
	ctx.r9.s64 = ctx.r9.s64 + 25048;
	// addi r8,r8,25072
	ctx.r8.s64 = ctx.r8.s64 + 25072;
	// stw r11,13576(r10)
	REX_STORE_U32(ctx.r10.u32 + 13576, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82169FDC:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823974d8
	ctx.lr = 0x82169FE8;
	sub_823974D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a004
	if (!ctx.cr6.eq) goto loc_8216A004;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// b 0x8216a008
	goto loc_8216A008;
loc_8216A004:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8216A008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a01c
	if (!ctx.cr6.eq) goto loc_8216A01C;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8216A01C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x821d3f98
	ctx.lr = 0x8216A028;
	sub_821D3F98(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a058
	if (ctx.cr6.eq) goto loc_8216A058;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8216a054
	if (ctx.cr6.eq) goto loc_8216A054;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216A054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8216A054:
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
loc_8216A058:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-25988
	ctx.r4.s64 = ctx.r11.s64 + -25988;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82201f08
	ctx.lr = 0x8216A06C;
	sub_82201F08(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821d4310
	ctx.lr = 0x8216A074;
	sub_821D4310(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82173350) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x825d0430
	ctx.lr = 0x82173368;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217338c
	if (ctx.cr6.eq) goto loc_8217338C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8217338C:
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

DEFINE_REX_FUNC(sub_82174088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82174090;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821740b4
	if (!ctx.cr6.eq) goto loc_821740B4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x821740c0
	goto loc_821740C0;
loc_821740B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_821740C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821740d0
	if (!ctx.cr6.eq) goto loc_821740D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821740dc
	goto loc_821740DC;
loc_821740D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
loc_821740DC:
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x821740fc
	if (!ctx.cr6.lt) goto loc_821740FC;
	// bl 0x821d5e70
	ctx.lr = 0x821740F4;
	sub_821D5E70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_821740FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217410c
	if (!ctx.cr6.eq) goto loc_8217410C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82174118
	goto loc_82174118;
loc_8217410C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
loc_82174118:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82174234
	if (!ctx.cr6.lt) goto loc_82174234;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8217413c
	if (ctx.cr6.lt) goto loc_8217413C;
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8217413C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217414c
	if (!ctx.cr6.eq) goto loc_8217414C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82174158
	goto loc_82174158;
loc_8217414C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_82174158:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82174184
	if (!ctx.cr6.lt) goto loc_82174184;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82174174
	if (!ctx.cr6.eq) goto loc_82174174;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82174180
	goto loc_82174180;
loc_82174174:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
loc_82174180:
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82174184:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d4220
	ctx.lr = 0x82174190;
	sub_821D4220(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,172(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r5,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r5.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r30
	ctx.r28.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq 0x821741b8
	if (ctx.cr0.eq) goto loc_821741B8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x825d13c8
	ctx.lr = 0x821741B8;
	sub_825D13C8(ctx, base);
loc_821741B8:
	// stw r26,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821741e0
	if (ctx.cr0.eq) goto loc_821741E0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x825d13c8
	ctx.lr = 0x821741E0;
	sub_825D13C8(ctx, base);
loc_821741E0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821741f4
	if (!ctx.cr6.eq) goto loc_821741F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82174200
	goto loc_82174200;
loc_821741F4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
loc_82174200:
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82174210
	if (ctx.cr6.eq) goto loc_82174210;
	// bl 0x825d0418
	ctx.lr = 0x82174210;
	sub_825D0418(ctx, base);
loc_82174210:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_82174234:
	// lwz r29,172(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r29,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r29.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x821742c4
	if (!ctx.cr6.lt) goto loc_821742C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82174268
	if (ctx.cr6.eq) goto loc_82174268;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x825d13c8
	ctx.lr = 0x82174268;
	sub_825D13C8(ctx, base);
loc_82174268:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// subfic r10,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82174290
	if (ctx.cr6.eq) goto loc_82174290;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82174284:
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82174284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82174284;
loc_82174290:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82174334
	if (ctx.cr6.eq) goto loc_82174334;
loc_821742AC:
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821742ac
	if (!ctx.cr6.eq) goto loc_821742AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_821742C4:
	// addi r28,r30,-4
	ctx.r28.s64 = ctx.r30.s64 + -4;
	// subf r11,r28,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r28.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r6,r30
	ctx.r27.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq 0x821742ec
	if (ctx.cr0.eq) goto loc_821742EC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d13c8
	ctx.lr = 0x821742EC;
	sub_825D13C8(ctx, base);
loc_821742EC:
	// subf r11,r29,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r29.u64;
	// stw r27,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82174314
	if (!ctx.cr0.gt) goto loc_82174314;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bl 0x825d13c8
	ctx.lr = 0x82174314;
	sub_825D13C8(ctx, base);
loc_82174314:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82174334
	if (ctx.cr6.eq) goto loc_82174334;
loc_82174324:
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82174324
	if (!ctx.cr6.eq) goto loc_82174324;
loc_82174334:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82186518) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821acf60
	sub_821ACF60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82186E90) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ad410
	sub_821AD410(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82187638) {
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
	// beq cr6,0x821876b0
	if (ctx.cr6.eq) goto loc_821876B0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82187678
	if (!ctx.cr6.eq) goto loc_82187678;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821876bc
	if (ctx.cr6.eq) goto loc_821876BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821876bc
	goto loc_821876BC;
loc_82187678:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821876bc
	if (ctx.cr6.eq) goto loc_821876BC;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// bl 0x825cf2a0
	ctx.lr = 0x82187690;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821876a4
	if (ctx.cr6.eq) goto loc_821876A4;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821876bc
	goto loc_821876BC;
loc_821876A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821876bc
	goto loc_821876BC;
loc_821876B0:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,216
	ctx.r10.s64 = ctx.r11.s64 + 216;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821876BC:
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

DEFINE_REX_FUNC(sub_8218AF00) {
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
	// beq cr6,0x8218af78
	if (ctx.cr6.eq) goto loc_8218AF78;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8218af40
	if (!ctx.cr6.eq) goto loc_8218AF40;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218af84
	if (ctx.cr6.eq) goto loc_8218AF84;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218af84
	goto loc_8218AF84;
loc_8218AF40:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8218af84
	if (ctx.cr6.eq) goto loc_8218AF84;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,6960
	ctx.r4.s64 = ctx.r11.s64 + 6960;
	// bl 0x825cf2a0
	ctx.lr = 0x8218AF58;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218af6c
	if (ctx.cr6.eq) goto loc_8218AF6C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8218af84
	goto loc_8218AF84;
loc_8218AF6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218af84
	goto loc_8218AF84;
loc_8218AF78:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,6960
	ctx.r10.s64 = ctx.r11.s64 + 6960;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8218AF84:
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

DEFINE_REX_FUNC(sub_8218EA60) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821b1730
	sub_821B1730(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218F2C0) {
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
	// beq cr6,0x8218f338
	if (ctx.cr6.eq) goto loc_8218F338;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8218f300
	if (!ctx.cr6.eq) goto loc_8218F300;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8218f344
	if (ctx.cr6.eq) goto loc_8218F344;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218f344
	goto loc_8218F344;
loc_8218F300:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8218f344
	if (ctx.cr6.eq) goto loc_8218F344;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,15656
	ctx.r4.s64 = ctx.r11.s64 + 15656;
	// bl 0x825cf2a0
	ctx.lr = 0x8218F318;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218f32c
	if (ctx.cr6.eq) goto loc_8218F32C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8218f344
	goto loc_8218F344;
loc_8218F32C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8218f344
	goto loc_8218F344;
loc_8218F338:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,15656
	ctx.r10.s64 = ctx.r11.s64 + 15656;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8218F344:
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

DEFINE_REX_FUNC(sub_82192E80) {
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
	// beq cr6,0x82192ef8
	if (ctx.cr6.eq) goto loc_82192EF8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82192ec0
	if (!ctx.cr6.eq) goto loc_82192EC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82192f04
	if (ctx.cr6.eq) goto loc_82192F04;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82192f04
	goto loc_82192F04;
loc_82192EC0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82192f04
	if (ctx.cr6.eq) goto loc_82192F04;
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,23976
	ctx.r4.s64 = ctx.r11.s64 + 23976;
	// bl 0x825cf2a0
	ctx.lr = 0x82192ED8;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82192eec
	if (ctx.cr6.eq) goto loc_82192EEC;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82192f04
	goto loc_82192F04;
loc_82192EEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82192f04
	goto loc_82192F04;
loc_82192EF8:
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// addi r10,r11,23976
	ctx.r10.s64 = ctx.r11.s64 + 23976;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82192F04:
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

DEFINE_REX_FUNC(sub_82196AD8) {
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
	// beq cr6,0x82196b50
	if (ctx.cr6.eq) goto loc_82196B50;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82196b18
	if (!ctx.cr6.eq) goto loc_82196B18;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82196b5c
	if (ctx.cr6.eq) goto loc_82196B5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82196b5c
	goto loc_82196B5C;
loc_82196B18:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82196b5c
	if (ctx.cr6.eq) goto loc_82196B5C;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-32760
	ctx.r4.s64 = ctx.r11.s64 + -32760;
	// bl 0x825cf2a0
	ctx.lr = 0x82196B30;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82196b44
	if (ctx.cr6.eq) goto loc_82196B44;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82196b5c
	goto loc_82196B5C;
loc_82196B44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82196b5c
	goto loc_82196B5C;
loc_82196B50:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-32760
	ctx.r10.s64 = ctx.r11.s64 + -32760;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82196B5C:
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

DEFINE_REX_FUNC(sub_8219A7B0) {
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
	// beq cr6,0x8219a828
	if (ctx.cr6.eq) goto loc_8219A828;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8219a7f0
	if (!ctx.cr6.eq) goto loc_8219A7F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219a834
	if (ctx.cr6.eq) goto loc_8219A834;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x8219a834
	goto loc_8219A834;
loc_8219A7F0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8219a834
	if (ctx.cr6.eq) goto loc_8219A834;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-24048
	ctx.r4.s64 = ctx.r11.s64 + -24048;
	// bl 0x825cf2a0
	ctx.lr = 0x8219A808;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219a81c
	if (ctx.cr6.eq) goto loc_8219A81C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8219a834
	goto loc_8219A834;
loc_8219A81C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219a834
	goto loc_8219A834;
loc_8219A828:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-24048
	ctx.r10.s64 = ctx.r11.s64 + -24048;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8219A834:
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

DEFINE_REX_FUNC(sub_8219E468) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821beb30
	sub_821BEB30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219EAE0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ccba8
	sub_821CCBA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219F5A0) {
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
	// beq cr6,0x8219f618
	if (ctx.cr6.eq) goto loc_8219F618;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8219f5e0
	if (!ctx.cr6.eq) goto loc_8219F5E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8219f624
	if (ctx.cr6.eq) goto loc_8219F624;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219f624
	goto loc_8219F624;
loc_8219F5E0:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8219f624
	if (ctx.cr6.eq) goto loc_8219F624;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-13008
	ctx.r4.s64 = ctx.r11.s64 + -13008;
	// bl 0x825cf2a0
	ctx.lr = 0x8219F5F8;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f60c
	if (ctx.cr6.eq) goto loc_8219F60C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x8219f624
	goto loc_8219F624;
loc_8219F60C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8219f624
	goto loc_8219F624;
loc_8219F618:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,-13008
	ctx.r10.s64 = ctx.r11.s64 + -13008;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8219F624:
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

DEFINE_REX_FUNC(sub_821A2F90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821A2F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r5,12008(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 12008);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r31,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 4;
	// bl 0x8217d190
	ctx.lr = 0x821A2FD0;
	sub_8217D190(ctx, base);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821A2FD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r5,r3,32
	ctx.r5.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f13.u64);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r9,r3,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r3.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// subf r31,r31,r8
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// beq cr6,0x821a302c
	if (ctx.cr6.eq) goto loc_821A302C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821A302C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A302C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A74D0) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821c40f8
	sub_821C40F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7A98) {
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
	// beq cr6,0x821a7b10
	if (ctx.cr6.eq) goto loc_821A7B10;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821a7ad8
	if (!ctx.cr6.eq) goto loc_821A7AD8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a7b1c
	if (ctx.cr6.eq) goto loc_821A7B1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a7b1c
	goto loc_821A7B1C;
loc_821A7AD8:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821a7b1c
	if (ctx.cr6.eq) goto loc_821A7B1C;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4024
	ctx.r4.s64 = ctx.r11.s64 + 4024;
	// bl 0x825cf2a0
	ctx.lr = 0x821A7AF0;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a7b04
	if (ctx.cr6.eq) goto loc_821A7B04;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821a7b1c
	goto loc_821A7B1C;
loc_821A7B04:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821a7b1c
	goto loc_821A7B1C;
loc_821A7B10:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,4024
	ctx.r10.s64 = ctx.r11.s64 + 4024;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821A7B1C:
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

DEFINE_REX_FUNC(sub_821AB8C0) {
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
	// beq cr6,0x821ab938
	if (ctx.cr6.eq) goto loc_821AB938;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821ab900
	if (!ctx.cr6.eq) goto loc_821AB900;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ab944
	if (ctx.cr6.eq) goto loc_821AB944;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821ab944
	goto loc_821AB944;
loc_821AB900:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x821ab944
	if (ctx.cr6.eq) goto loc_821AB944;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,12952
	ctx.r4.s64 = ctx.r11.s64 + 12952;
	// bl 0x825cf2a0
	ctx.lr = 0x821AB918;
	sub_825CF2A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ab92c
	if (ctx.cr6.eq) goto loc_821AB92C;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x821ab944
	goto loc_821AB944;
loc_821AB92C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x821ab944
	goto loc_821AB944;
loc_821AB938:
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r10,r11,12952
	ctx.r10.s64 = ctx.r11.s64 + 12952;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_821AB944:
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

DEFINE_REX_FUNC(sub_821B1730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821B1738;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
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
	// bge cr6,0x821b177c
	if (!ctx.cr6.lt) goto loc_821B177C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821B177C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b17a4
	if (ctx.cr6.eq) goto loc_821B17A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821f6a80
	ctx.lr = 0x821B1790;
	sub_821F6A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b17a4
	if (!ctx.cr6.eq) goto loc_821B17A4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x821b17a8
	goto loc_821B17A8;
loc_821B17A4:
	// lfd f31,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_821B17A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821b17d4
	if (!ctx.cr6.lt) goto loc_821B17D4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821b17d4
	if (ctx.cr6.eq) goto loc_821B17D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b17d4
	if (!ctx.cr6.eq) goto loc_821B17D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b1814
	goto loc_821B1814;
loc_821B17D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821B17E0;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821B17FC;
	sub_8220AB90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b1814
	if (!ctx.cr6.eq) goto loc_821B1814;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_821B1814:
	// frsp f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64));
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821B1820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// subf r31,r28,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r28.u64;
	// beq cr6,0x821b184c
	if (ctx.cr6.eq) goto loc_821B184C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B184C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B184C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B9688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821B9690;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
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
	// bge cr6,0x821b96d8
	if (!ctx.cr6.lt) goto loc_821B96D8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,8496
	ctx.r9.s64 = ctx.r10.s64 + 8496;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821b96d8
	if (ctx.cr6.eq) goto loc_821B96D8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9718
	if (ctx.cr6.eq) goto loc_821B9718;
loc_821B96D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821B96E4;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-32064
	ctx.r4.s64 = ctx.r10.s64 + -32064;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821B9700;
	sub_8220AB90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821b9718
	if (!ctx.cr6.eq) goto loc_821B9718;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r11,-1352
	ctx.r10.s64 = ctx.r11.s64 + -1352;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_821B9718:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821B9720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// li r9,3
	ctx.r9.s64 = 3;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.f13.u64);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// subf r31,r29,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r29.u64;
	// beq cr6,0x821b9774
	if (ctx.cr6.eq) goto loc_821B9774;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821B9774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821B9774:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BECA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x821BECA8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r9,8496
	ctx.r27.s64 = ctx.r9.s64 + 8496;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r30,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// srawi r25,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r25.s64 = ctx.r7.s32 >> 4;
	// bge cr6,0x821becf8
	if (!ctx.cr6.lt) goto loc_821BECF8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821BECF8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821bed20
	if (ctx.cr6.eq) goto loc_821BED20;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x821f6a80
	ctx.lr = 0x821BED0C;
	sub_821F6A80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821bed20
	if (!ctx.cr6.eq) goto loc_821BED20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
	// b 0x821bed24
	goto loc_821BED24;
loc_821BED20:
	// lfd f31,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
loc_821BED24:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8217da88
	ctx.lr = 0x821BED40;
	sub_8217DA88(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821bed74
	if (!ctx.cr6.lt) goto loc_821BED74;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821bed74
	if (ctx.cr6.eq) goto loc_821BED74;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bed74
	if (!ctx.cr6.eq) goto loc_821BED74;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x821bedb8
	goto loc_821BEDB8;
loc_821BED74:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821BED80;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17708
	ctx.r4.s64 = ctx.r10.s64 + -17708;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821BED9C;
	sub_8220AB90(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bedb4
	if (!ctx.cr6.eq) goto loc_821BEDB4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_821BEDB4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821BEDB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821beddc
	if (!ctx.cr6.lt) goto loc_821BEDDC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821beddc
	if (ctx.cr6.eq) goto loc_821BEDDC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821bee20
	if (ctx.cr6.eq) goto loc_821BEE20;
loc_821BEDDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed688
	ctx.lr = 0x821BEDE8;
	sub_821ED688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,-17680
	ctx.r4.s64 = ctx.r10.s64 + -17680;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8220ab90
	ctx.lr = 0x821BEE04;
	sub_8220AB90(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821bee1c
	if (!ctx.cr6.eq) goto loc_821BEE1C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,-9520
	ctx.r10.s64 = ctx.r11.s64 + -9520;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
loc_821BEE1C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821BEE20:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// frsp f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r5,12002(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 12002);
	// bl 0x8217da88
	ctx.lr = 0x821BEE3C;
	sub_8217DA88(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x821BEE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// li r8,3
	ctx.r8.s64 = 3;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.f13.u64);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// srawi r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	// subf r31,r25,r5
	ctx.r31.u64 = ctx.r5.u64 - ctx.r25.u64;
	// beq cr6,0x821beeac
	if (ctx.cr6.eq) goto loc_821BEEAC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821BEEAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BEEAC:
	// lwz r11,272(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821beec4
	if (ctx.cr6.eq) goto loc_821BEEC4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BEEC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BEEC4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821beedc
	if (ctx.cr6.eq) goto loc_821BEEDC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BEEDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BEEDC:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821beef4
	if (ctx.cr6.eq) goto loc_821BEEF4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BEEF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BEEF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CBC58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821CBC60;
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
	ctx.lr = 0x821CBC70;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,8496
	ctx.r30.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cbc8c
	if (ctx.cr6.eq) goto loc_821CBC8C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cbcc8
	if (ctx.cr6.eq) goto loc_821CBCC8;
loc_821CBC8C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821CBC98;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cbcb4
	if (ctx.cr6.eq) goto loc_821CBCB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cbcb4
	if (!ctx.cr6.eq) goto loc_821CBCB4;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821cbcc0
	goto loc_821CBCC0;
loc_821CBCB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d3080
	ctx.lr = 0x821CBCBC;
	sub_821D3080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821CBCC0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x821cbcd4
	if (!ctx.cr6.lt) goto loc_821CBCD4;
loc_821CBCC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_821CBCD4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821CBCE0;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cbcf4
	if (ctx.cr6.eq) goto loc_821CBCF4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cbd0c
	if (ctx.cr6.eq) goto loc_821CBD0C;
loc_821CBCF4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d0998
	ctx.lr = 0x821CBD00;
	sub_821D0998(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821cbcc8
	if (ctx.cr6.lt) goto loc_821CBCC8;
loc_821CBD0C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821CBD1C;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cbcc8
	if (ctx.cr6.eq) goto loc_821CBCC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821cbcc8
	if (!ctx.cr6.eq) goto loc_821CBCC8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eceb0
	ctx.lr = 0x821CBD3C;
	sub_821ECEB0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821cbcc8
	if (ctx.cr6.eq) goto loc_821CBCC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821cbcc8
	if (!ctx.cr6.eq) goto loc_821CBCC8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1D50) {
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
	ctx.lr = 0x821D1D68;
	sub_821ECEB0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,8496
	ctx.r10.s64 = ctx.r11.s64 + 8496;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821d1d98
	if (ctx.cr6.eq) goto loc_821D1D98;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d1d98
	if (!ctx.cr6.eq) goto loc_821D1D98;
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
loc_821D1D98:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x821816d0
	ctx.lr = 0x821D1DA4;
	sub_821816D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D4548) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r11,-13512
	ctx.r10.s64 = ctx.r11.s64 + -13512;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821d45d8
	sub_821D45D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D4900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821D4908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,18144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18144);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821d4964
	if (!ctx.cr6.lt) goto loc_821D4964;
	// lwz r3,18140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 18140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d493c
	if (ctx.cr6.eq) goto loc_821D493C;
	// bl 0x825d0418
	ctx.lr = 0x821D4934;
	sub_825D0418(ctx, base);
	// stw r29,18140(r31)
	REX_STORE_U32(ctx.r31.u32 + 18140, ctx.r29.u32);
	// stw r29,18144(r31)
	REX_STORE_U32(ctx.r31.u32 + 18144, ctx.r29.u32);
loc_821D493C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266098
	ctx.lr = 0x821D4944;
	sub_82266098(ctx, base);
	// stw r3,18140(r31)
	REX_STORE_U32(ctx.r31.u32 + 18140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821d4960
	if (!ctx.cr6.eq) goto loc_821D4960;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_821D4960:
	// stw r30,18144(r31)
	REX_STORE_U32(ctx.r31.u32 + 18144, ctx.r30.u32);
loc_821D4964:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D5BA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r3,9104(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 9104);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D5CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// addi r3,r11,30680
	ctx.r3.s64 = ctx.r11.s64 + 30680;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D6918) {
	REX_FUNC_PROLOGUE();
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,380
	ctx.r10.s64 = ctx.r3.s64 + 380;
	// stw r3,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r3.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r9,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r3,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r3.u32);
	// stw r9,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// bne cr6,0x821d6944
	if (!ctx.cr6.eq) goto loc_821D6944;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821D6944:
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,9108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// addis r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 983040;
	// addi r11,r11,-24612
	ctx.r11.s64 = ctx.r11.s64 + -24612;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,728(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 728);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r9,728(r11)
	REX_STORE_U32(ctx.r11.u32 + 728, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DB278) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821db2a0
	if (ctx.cr6.lt) goto loc_821DB2A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821db2a0
	if (!ctx.cr6.lt) goto loc_821DB2A0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821db2a4
	goto loc_821DB2A4;
loc_821DB2A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821DB2A4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821db2d4
	if (ctx.cr6.lt) goto loc_821DB2D4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821db2d4
	if (!ctx.cr6.lt) goto loc_821DB2D4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821db2d8
	goto loc_821DB2D8;
loc_821DB2D4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821DB2D8:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821db308
	if (ctx.cr6.lt) goto loc_821DB308;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821db308
	if (!ctx.cr6.lt) goto loc_821DB308;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821db30c
	goto loc_821DB30C;
loc_821DB308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DB30C:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x821da778
	sub_821DA778(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E1BF8) {
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
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// bne cr6,0x821e1c1c
	if (!ctx.cr6.eq) goto loc_821E1C1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E1C1C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,13048
	ctx.r8.s64 = ctx.r10.s64 + 13048;
	// addi r7,r9,12868
	ctx.r7.s64 = ctx.r9.s64 + 12868;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821e1c4c
	if (ctx.cr6.eq) goto loc_821E1C4C;
	// bl 0x825d0418
	ctx.lr = 0x821E1C48;
	sub_825D0418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821E1C4C:
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

DEFINE_REX_FUNC(sub_821E3720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ee660
	ctx.lr = 0x821E373C;
	sub_821EE660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e378c
	if (ctx.cr6.eq) goto loc_821E378C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-10444
	ctx.r4.s64 = ctx.r11.s64 + -10444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eeab8
	ctx.lr = 0x821E3758;
	sub_821EEAB8(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x821e378c
	if (!ctx.cr6.gt) goto loc_821E378C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-10440
	ctx.r4.s64 = ctx.r11.s64 + -10440;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed758
	ctx.lr = 0x821E3778;
	sub_821ED758(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821E378C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,21312
	ctx.r4.s64 = ctx.r11.s64 + 21312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ed6f0
	ctx.lr = 0x821E37A0;
	sub_821ED6F0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5E78) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e39c8
	ctx.lr = 0x821E5E9C;
	sub_821E39C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e4618
	ctx.lr = 0x821E5EA8;
	sub_821E4618(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e5ec8
	if (!ctx.cr6.eq) goto loc_821E5EC8;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_821E5EC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x821ed158
	ctx.lr = 0x821E5EEC;
	sub_821ED158(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
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

DEFINE_REX_FUNC(sub_821E9640) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d3e80
	ctx.lr = 0x821E9664;
	sub_825D3E80(ctx, base);
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgt cr6,0x821e97e0
	if (ctx.cr6.gt) goto loc_821E97E0;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-27000
	ctx.r12.s64 = ctx.r12.s64 + -27000;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821E96F0;
	case 1:
		goto loc_821E97E0;
	case 2:
		goto loc_821E9708;
	case 3:
		goto loc_821E971C;
	case 4:
		goto loc_821E97E0;
	case 5:
		goto loc_821E97E0;
	case 6:
		goto loc_821E97E0;
	case 7:
		goto loc_821E97E0;
	case 8:
		goto loc_821E97E0;
	case 9:
		goto loc_821E97E0;
	case 10:
		goto loc_821E97E0;
	case 11:
		goto loc_821E9730;
	case 12:
		goto loc_821E97E0;
	case 13:
		goto loc_821E97E0;
	case 14:
		goto loc_821E97E0;
	case 15:
		goto loc_821E9744;
	case 16:
		goto loc_821E97E0;
	case 17:
		goto loc_821E97E0;
	case 18:
		goto loc_821E9758;
	case 19:
		goto loc_821E97E0;
	case 20:
		goto loc_821E976C;
	case 21:
		goto loc_821E97E0;
	case 22:
		goto loc_821E9780;
	case 23:
		goto loc_821E9798;
	case 24:
		goto loc_821E97E0;
	case 25:
		goto loc_821E97AC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821E96F0:
	// bl 0x825d3b00
	ctx.lr = 0x821E96F4;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,30,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF03;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9708:
	// bl 0x825d3b00
	ctx.lr = 0x821E970C;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E971C:
	// bl 0x825d3b00
	ctx.lr = 0x821E9720;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9730:
	// bl 0x825d3b00
	ctx.lr = 0x821E9734;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9744:
	// bl 0x825d3b00
	ctx.lr = 0x821E9748;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9758:
	// bl 0x825d3b00
	ctx.lr = 0x821E975C;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,28,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E976C:
	// bl 0x825d3b00
	ctx.lr = 0x821E9770;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9780:
	// bl 0x825d3b00
	ctx.lr = 0x821E9784;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r31,r10,23
	ctx.r31.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r31,r31,0,29,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E9798:
	// bl 0x825d3b00
	ctx.lr = 0x821E979C;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r31,r10,0,24,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// b 0x821e97b4
	goto loc_821E97B4;
loc_821E97AC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821E97B4:
	// bl 0x825d3b00
	ctx.lr = 0x821E97B8;
	sub_825D3B00(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e97d4
	if (ctx.cr6.eq) goto loc_821E97D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821e97ec
	goto loc_821E97EC;
loc_821E97D4:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x821e97ec
	goto loc_821E97EC;
loc_821E97E0:
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_821E97EC:
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

DEFINE_REX_FUNC(sub_821F5220) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x821F5228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r31,5
	ctx.r11.s64 = ctx.r31.s64 + 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821f5118
	ctx.lr = 0x821F5250;
	sub_821F5118(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,6
	ctx.r8.s64 = 6;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r6,28(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lbz r5,20(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 20);
	// clrlwi r4,r5,30
	ctx.r4.u64 = ctx.r5.u32 & 0x3;
	// stw r3,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r3.u32);
	// stb r4,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// stb r8,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stb r10,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stb r31,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r31.u8);
	// beq cr6,0x821f52a0
	if (ctx.cr6.eq) goto loc_821F52A0;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_821F5290:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x821f5290
	if (!ctx.cr0.eq) goto loc_821F5290;
loc_821F52A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F9680) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x821F9688;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821f90e8
	ctx.lr = 0x821F9698;
	sub_821F90E8(ctx, base);
	// lwz r30,48(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f9538
	ctx.lr = 0x821F96B4;
	sub_821F9538(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x821f96dc
	if (!ctx.cr6.eq) goto loc_821F96DC;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fe6d0
	ctx.lr = 0x821F96D8;
	sub_821FE6D0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_821F96DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FCB50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x821FCB58;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r31,48(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x821fca98
	ctx.lr = 0x821FCB74;
	sub_821FCA98(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,261
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 261, ctx.xer);
	// bne cr6,0x821fcbfc
	if (!ctx.cr6.eq) goto loc_821FCBFC;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_821FCB88:
	// lwz r25,0(r29)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// stw r27,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r4,r4,32790
	ctx.r4.u64 = ctx.r4.u64 | 32790;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x821ffe88
	ctx.lr = 0x821FCBA8;
	sub_821FFE88(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe628
	ctx.lr = 0x821FCBBC;
	sub_821FE628(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821fe628
	ctx.lr = 0x821FCBCC;
	sub_821FE628(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// bl 0x821fe628
	ctx.lr = 0x821FCBE4;
	sub_821FE628(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fca98
	ctx.lr = 0x821FCBEC;
	sub_821FCA98(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,261
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 261, ctx.xer);
	// beq cr6,0x821fcb88
	if (ctx.cr6.eq) goto loc_821FCB88;
loc_821FCBFC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,260
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 260, ctx.xer);
	// bne cr6,0x821fcc4c
	if (!ctx.cr6.eq) goto loc_821FCC4C;
	// bl 0x821fe2e8
	ctx.lr = 0x821FCC10;
	sub_821FE2E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fe628
	ctx.lr = 0x821FCC20;
	sub_821FE628(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x821fe628
	ctx.lr = 0x821FCC38;
	sub_821FE628(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4fe8
	ctx.lr = 0x821FCC40;
	sub_821F4FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fbcf8
	ctx.lr = 0x821FCC48;
	sub_821FBCF8(ctx, base);
	// b 0x821fcc58
	goto loc_821FCC58;
loc_821FCC4C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe628
	ctx.lr = 0x821FCC58;
	sub_821FE628(ctx, base);
loc_821FCC58:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x821fe628
	ctx.lr = 0x821FCC70;
	sub_821FE628(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,266
	ctx.r5.s64 = 266;
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f9038
	ctx.lr = 0x821FCC84;
	sub_821F9038(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82202750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82202758;
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
	// beq cr6,0x8220278c
	if (ctx.cr6.eq) goto loc_8220278C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,48
	ctx.r9.s64 = 48;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82202794
	if (!ctx.cr0.eq) goto loc_82202794;
loc_8220278C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822027c4
	goto loc_822027C4;
loc_82202794:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822027a0
	if (!ctx.cr6.gt) goto loc_822027A0;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_822027A0:
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822027b4
	if (ctx.cr6.eq) goto loc_822027B4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822027b8
	if (ctx.cr6.eq) goto loc_822027B8;
loc_822027B4:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_822027B8:
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r30,r8,r9
	ctx.r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
loc_822027C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203518
	ctx.lr = 0x822027D0;
	sub_82203518(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822027e4
	if (!ctx.cr6.gt) goto loc_822027E4;
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_822027E4:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
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
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8220281c
	if (ctx.cr6.gt) goto loc_8220281C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82202820
	if (!ctx.cr6.lt) goto loc_82202820;
loc_8220281C:
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82202820:
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

DEFINE_REX_FUNC(sub_82208398) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x822083A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r11,14460
	ctx.r9.s64 = ctx.r11.s64 + 14460;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r26,r31,88
	ctx.r26.s64 = ctx.r31.s64 + 88;
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r31,96
	ctx.r28.s64 = ctx.r31.s64 + 96;
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r27,r31,104
	ctx.r27.s64 = ctx.r31.s64 + 104;
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r5,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r30,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// bl 0x825d0430
	ctx.lr = 0x82208444;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208450
	if (ctx.cr6.eq) goto loc_82208450;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82208450:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220845c
	if (ctx.cr0.eq) goto loc_8220845C;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_8220845C:
	// stw r3,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x82203eb0
	ctx.lr = 0x8220846C;
	sub_82203EB0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82203eb0
	ctx.lr = 0x82208474;
	sub_82203EB0(ctx, base);
	// addi r11,r31,156
	ctx.r11.s64 = ctx.r31.s64 + 156;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82208480:
	// stw r30,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bge 0x82208480
	if (!ctx.cr0.lt) goto loc_82208480;
	// stw r30,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// stw r30,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// bl 0x822046b8
	ctx.lr = 0x822084A8;
	sub_822046B8(ctx, base);
	// stw r30,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ed998
	ctx.lr = 0x822084BC;
	sub_821ED998(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82208098
	ctx.lr = 0x822084CC;
	sub_82208098(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82208508
	if (ctx.cr6.eq) goto loc_82208508;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x82208508
	if (ctx.cr6.eq) goto loc_82208508;
	// bl 0x82207358
	ctx.lr = 0x82208508;
	sub_82207358(ctx, base);
loc_82208508:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ed998
	ctx.lr = 0x82208518;
	sub_821ED998(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82208098
	ctx.lr = 0x82208528;
	sub_82208098(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,4(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82208564
	if (ctx.cr6.eq) goto loc_82208564;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// beq cr6,0x82208564
	if (ctx.cr6.eq) goto loc_82208564;
	// bl 0x82207358
	ctx.lr = 0x82208564;
	sub_82207358(ctx, base);
loc_82208564:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x82206798
	ctx.lr = 0x82208578;
	sub_82206798(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x821f2d18
	ctx.lr = 0x8220858C;
	sub_821F2D18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// stw r6,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// bl 0x821edcd8
	ctx.lr = 0x822085BC;
	sub_821EDCD8(ctx, base);
	// lwz r5,8(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,-16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + -16);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// lwz r10,-8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + -8);
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// bl 0x82207108
	ctx.lr = 0x822085E8;
	sub_82207108(ctx, base);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82219908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82219910;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82219994
	if (ctx.cr6.eq) goto loc_82219994;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82219934:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82219994
	if (ctx.cr6.eq) goto loc_82219994;
	// lwz r11,9920(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 9920);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82219970
	if (ctx.cr6.eq) goto loc_82219970;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82219960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r10,r28,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r28.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82219974
	goto loc_82219974;
loc_82219970:
	// bl 0x822295c8
	ctx.lr = 0x82219974;
	sub_822295C8(ctx, base);
loc_82219974:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822199b0
	if (!ctx.cr6.eq) goto loc_822199B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82222c00
	ctx.lr = 0x82219988;
	sub_82222C00(ctx, base);
	// addic. r31,r31,32
	ctx.xer.ca = ctx.r31.u32 > 4294967263;
	ctx.r31.s64 = ctx.r31.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// bne 0x82219934
	if (!ctx.cr0.eq) goto loc_82219934;
loc_82219994:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822199a4
	if (ctx.cr6.eq) goto loc_822199A4;
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// stw r28,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
loc_822199A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_822199B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822199c0
	if (ctx.cr6.eq) goto loc_822199C0;
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// stw r27,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
loc_822199C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221E538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1176);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8221e5a0
	if (!ctx.cr6.gt) goto loc_8221E5A0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8221E54C:
	// lwz r11,1180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1180);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,116
	ctx.r10.s64 = ctx.r10.s64 + 116;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,48(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r7,52(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,1176(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1176);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8221e54c
	if (ctx.cr6.lt) goto loc_8221E54C;
loc_8221E5A0:
	// lbz r11,1148(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221e5b0
	if (ctx.cr6.eq) goto loc_8221E5B0;
	// b 0x8221d188
	sub_8221D188(ctx, base);
	return;
loc_8221E5B0:
	// b 0x8221d2c0
	sub_8221D2C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82220568) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82220960) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f4,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lfs f3,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f1,-8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82220478
	ctx.lr = 0x822209A0;
	sub_82220478(ctx, base);
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,-8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f10.f64)));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f7.f64)));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_82222FA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82222FB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82222fd4
	if (!ctx.cr6.eq) goto loc_82222FD4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82223124
	if (!ctx.cr6.eq) goto loc_82223124;
loc_82222FD4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82222fe8
	if (!ctx.cr6.eq) goto loc_82222FE8;
loc_82222FDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_82222FE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82223124
	if (ctx.cr6.eq) goto loc_82223124;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82223124
	if (ctx.cr6.eq) goto loc_82223124;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222303c
	if (ctx.cr6.eq) goto loc_8222303C;
loc_82223004:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8222301c
	if (!ctx.cr6.eq) goto loc_8222301C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82222fdc
	if (ctx.cr6.eq) goto loc_82222FDC;
loc_8222301C:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82223030
	if (!ctx.cr6.eq) goto loc_82223030;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82222fdc
	if (ctx.cr6.eq) goto loc_82222FDC;
loc_82223030:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82223004
	if (!ctx.cr6.eq) goto loc_82223004;
loc_8222303C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// beq cr6,0x82223104
	if (ctx.cr6.eq) goto loc_82223104;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r28,r10,1384
	ctx.r28.s64 = ctx.r10.s64 + 1384;
loc_82223060:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82223104
	if (ctx.cr6.eq) goto loc_82223104;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82223100
	if (!ctx.cr6.eq) goto loc_82223100;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82223100
	if (!ctx.cr6.eq) goto loc_82223100;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822230a4
	if (ctx.cr6.eq) goto loc_822230A4;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8222309C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82223100
	if (!ctx.cr6.eq) goto loc_82223100;
loc_822230A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822230c4
	if (!ctx.cr6.eq) goto loc_822230C4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822282e8
	ctx.lr = 0x822230C0;
	sub_822282E8(ctx, base);
	// b 0x822230e8
	goto loc_822230E8;
loc_822230C4:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82222fa8
	ctx.lr = 0x822230DC;
	sub_82222FA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82223100
	if (ctx.cr6.eq) goto loc_82223100;
loc_822230E8:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82223060
	if (!ctx.cr6.eq) goto loc_82223060;
	// b 0x82223104
	goto loc_82223104;
loc_82223100:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82223104:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82223118
	if (ctx.cr6.eq) goto loc_82223118;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82223118:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_82223124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222B690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8222B698;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,4368
	ctx.r30.s64 = ctx.r11.s64 + 4368;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r9,20600(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20600);
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8222B6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222b750
	if (ctx.cr6.eq) goto loc_8222B750;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// addi r3,r8,-19152
	ctx.r3.s64 = ctx.r8.s64 + -19152;
	// addi r5,r10,-19504
	ctx.r5.s64 = ctx.r10.s64 + -19504;
	// addi r4,r9,-19392
	ctx.r4.s64 = ctx.r9.s64 + -19392;
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r10,r7,-18856
	ctx.r10.s64 = ctx.r7.s64 + -18856;
	// stw r4,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// addi r9,r6,-18832
	ctx.r9.s64 = ctx.r6.s64 + -18832;
	// stb r11,28(r31)
	REX_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stb r11,36(r31)
	REX_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r8,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_8222B750:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,4552
	ctx.r5.s64 = ctx.r11.s64 + 4552;
	// li r7,269
	ctx.r7.s64 = 269;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822282e8
	ctx.lr = 0x8222B76C;
	sub_822282E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82231BE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82231C04:
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82231c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231C04;
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfs f0,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f10.f64)));
	// lfs f9,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f4,f6,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f8.f64)));
	// lfs f5,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f3,f6,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f7.f64)));
	// lfs f3,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,60(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// fmadds f2,f2,f6,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f1,f1,f0,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f0,f12,f0,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f4.f64)));
	// fadds f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// stfs f13,48(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 48, temp.u32);
	// fadds f12,f1,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f12,52(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f11,56(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 56, temp.u32);
	// b 0x822317a8
	sub_822317A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82239F68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x82239F70;
	__savegprlr_14(ctx, base);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// stw r8,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// stw r17,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r17.u32);
	// mullw r6,r17,r10
	ctx.r6.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r10.s32);
	// rlwinm r18,r7,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r20,r6,r5
	ctx.r20.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stw r18,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r18.u32);
	// add r16,r9,r10
	ctx.r16.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// stw r20,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r20.u32);
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r16,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r16.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223a858
	if (ctx.cr6.eq) goto loc_8223A858;
	// subfic r10,r7,-6
	ctx.xer.ca = ctx.r7.u32 <= 4294967290;
	ctx.r10.u64 = static_cast<uint64_t>(-6) - ctx.r7.u64;
	// add r11,r20,r7
	ctx.r11.u64 = ctx.r20.u64 + ctx.r7.u64;
	// subfic r9,r7,-4
	ctx.xer.ca = ctx.r7.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r7.u64;
	// stw r10,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// subfic r8,r7,-2
	ctx.xer.ca = ctx.r7.u32 <= 4294967294;
	ctx.r8.u64 = static_cast<uint64_t>(-2) - ctx.r7.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r9,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r9.u32);
	// subfic r6,r7,2
	ctx.xer.ca = ctx.r7.u32 <= 2;
	ctx.r6.u64 = static_cast<uint64_t>(2) - ctx.r7.u64;
	// stw r8,-244(r1)
	REX_STORE_U32(ctx.r1.u32 + -244, ctx.r8.u32);
	// subfic r5,r7,4
	ctx.xer.ca = ctx.r7.u32 <= 4;
	ctx.r5.u64 = static_cast<uint64_t>(4) - ctx.r7.u64;
	// stw r4,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r4.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r6,-232(r1)
	REX_STORE_U32(ctx.r1.u32 + -232, ctx.r6.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r5,-228(r1)
	REX_STORE_U32(ctx.r1.u32 + -228, ctx.r5.u32);
	// ori r11,r11,51674
	ctx.r11.u64 = ctx.r11.u64 | 51674;
	// ori r31,r10,55882
	ctx.r31.u64 = ctx.r10.u64 | 55882;
loc_82239FFC:
	// lwz r10,-8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r10,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r10.u32);
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// li r24,2
	ctx.r24.s64 = 2;
	// lwz r7,-240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r26,r4,4
	ctx.r26.s64 = ctx.r4.s64 + 4;
	// lwz r10,-236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplwi cr6,r18,8
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 8, ctx.xer);
	// lwz r28,-4(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// lhz r3,8(r20)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r20.u32 + 8);
	// lhzx r30,r8,r4
	ctx.r30.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// lhz r14,0(r4)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r6,2(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lwz r27,-232(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r25,-228(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// lhzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// lhzx r7,r10,r4
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// add r10,r25,r4
	ctx.r10.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r28,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lhz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// lhzx r25,r27,r4
	ctx.r25.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r4.u32);
	// stw r19,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r19.u32);
	// stw r24,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r24.u32);
	// sth r30,-184(r1)
	REX_STORE_U16(ctx.r1.u32 + -184, ctx.r30.u16);
	// sth r3,-182(r1)
	REX_STORE_U16(ctx.r1.u32 + -182, ctx.r3.u16);
	// lhz r21,-170(r1)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r1.u32 + -170);
	// lhz r22,-172(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -172);
	// sth r14,-164(r1)
	REX_STORE_U16(ctx.r1.u32 + -164, ctx.r14.u16);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// sth r6,-162(r1)
	REX_STORE_U16(ctx.r1.u32 + -162, ctx.r6.u16);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// bge cr6,0x8223a090
	if (!ctx.cr6.lt) goto loc_8223A090;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8223a098
	goto loc_8223A098;
loc_8223A090:
	// addi r27,r18,-8
	ctx.r27.s64 = ctx.r18.s64 + -8;
	// rlwinm r27,r27,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
loc_8223A098:
	// lwz r15,60(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// stw r27,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// cmplw cr6,r16,r15
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r15.u32, ctx.xer);
	// ble cr6,0x8223a330
	if (!ctx.cr6.gt) goto loc_8223A330;
	// lbz r15,0(r16)
	ctx.r15.u64 = REX_LOAD_U8(ctx.r16.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x8223a330
	if (!ctx.cr6.eq) goto loc_8223A330;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223a264
	if (ctx.cr6.eq) goto loc_8223A264;
loc_8223A0BC:
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// lwz r26,-184(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r5,r29
	ctx.r5.s64 = ctx.r29.s16;
	// add r6,r28,r8
	ctx.r6.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r29,r7,r5
	ctx.r29.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r6,r6,27400
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(27400));
	// mulli r29,r29,4230
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(4230));
	// subf r29,r29,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r29.u64;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// xori r6,r6,32767
	ctx.r6.u64 = ctx.r6.u64 ^ 32767;
	// mulli r5,r5,2667
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(2667));
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// mullw r29,r28,r11
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// subf r29,r5,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r5.u64;
	// addze r23,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r6,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 31;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// xori r6,r6,32767
	ctx.r6.u64 = ctx.r6.u64 ^ 32767;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r22,r5,r28
	ctx.r22.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// mulli r30,r30,27400
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(27400));
	// mulli r29,r22,4230
	ctx.r29.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(4230));
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// subf r30,r29,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r29.u64;
	// addze r29,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r6,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 31;
	// add r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 + ctx.r28.u64;
	// xori r6,r6,32767
	ctx.r6.u64 = ctx.r6.u64 ^ 32767;
	// mullw r22,r8,r11
	ctx.r22.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// mulli r30,r28,2667
	ctx.r30.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2667));
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// subf r30,r30,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r30.u64;
	// addze r28,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r28.s64 = temp.s64;
	// srawi r6,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 31;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// xori r6,r6,32767
	ctx.r6.u64 = ctx.r6.u64 ^ 32767;
	// add r21,r3,r8
	ctx.r21.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r22,r5,r7
	ctx.r22.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// mulli r30,r21,4230
	ctx.r30.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(4230));
	// mulli r22,r22,27400
	ctx.r22.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(27400));
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// subf r30,r30,r22
	ctx.r30.u64 = ctx.r22.u64 - ctx.r30.u64;
	// addze r22,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r22.s64 = temp.s64;
	// srawi r6,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 31;
	// add r21,r5,r8
	ctx.r21.u64 = ctx.r5.u64 + ctx.r8.u64;
	// xori r8,r6,32767
	ctx.r8.u64 = ctx.r6.u64 ^ 32767;
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// mulli r30,r21,2667
	ctx.r30.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(2667));
	// srawi r21,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 16;
	// subf r8,r30,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r30.u64;
	// addze r30,r21
	temp.s64 = ctx.r21.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r21.u32;
	ctx.r30.s64 = temp.s64;
	// extsh r6,r25
	ctx.r6.s64 = ctx.r25.s16;
	// srawi r21,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 31;
	// add r15,r3,r7
	ctx.r15.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// xori r7,r21,32767
	ctx.r7.u64 = ctx.r21.u64 ^ 32767;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r7,r6,4230
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(4230));
	// mulli r6,r3,27400
	ctx.r6.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(27400));
	// srawi r3,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 16;
	// mulli r8,r15,2667
	ctx.r8.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(2667));
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// rlwimi r23,r29,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r28,r22,16,0,15
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r28.u64 & 0xFFFFFFFF0000FFFF);
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stw r23,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// subf r5,r8,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stw r28,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// srawi r8,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 31;
	// rlwimi r30,r3,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// xori r6,r8,32767
	ctx.r6.u64 = ctx.r8.u64 ^ 32767;
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r26,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r26.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r29,-192(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -192);
	// srawi r6,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 16;
	// addze r3,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// xori r7,r7,32767
	ctx.r7.u64 = ctx.r7.u64 ^ 32767;
	// add r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 + ctx.r5.u64;
	// srawi r5,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// addze r7,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r7.s64 = temp.s64;
	// lhz r5,-190(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -190);
	// rlwimi r3,r7,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// stw r3,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lhz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sth r3,-182(r1)
	REX_STORE_U16(ctx.r1.u32 + -182, ctx.r3.u16);
	// sth r30,-184(r1)
	REX_STORE_U16(ctx.r1.u32 + -184, ctx.r30.u16);
	// bne 0x8223a0bc
	if (!ctx.cr0.eq) goto loc_8223A0BC;
loc_8223A264:
	// cmplwi cr6,r18,8
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 8, ctx.xer);
	// bge cr6,0x8223a274
	if (!ctx.cr6.lt) goto loc_8223A274;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// b 0x8223a27c
	goto loc_8223A27C;
loc_8223A274:
	// clrlwi r6,r18,30
	ctx.r6.u64 = ctx.r18.u32 & 0x3;
	// addi r26,r6,8
	ctx.r26.s64 = ctx.r6.s64 + 8;
loc_8223A27C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8223a828
	if (ctx.cr6.eq) goto loc_8223A828;
loc_8223A284:
	// addi r6,r4,-8
	ctx.r6.s64 = ctx.r4.s64 + -8;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8223a29c
	if (!ctx.cr6.eq) goto loc_8223A29C;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r24,-2
	ctx.r24.s64 = -2;
loc_8223A29C:
	// extsh r28,r29
	ctx.r28.s64 = ctx.r29.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// extsh r27,r7
	ctx.r27.s64 = ctx.r7.s16;
	// add r23,r29,r6
	ctx.r23.u64 = ctx.r29.u64 + ctx.r6.u64;
	// add r27,r27,r28
	ctx.r27.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r23,r23,27400
	ctx.r23.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(27400));
	// mulli r27,r27,4230
	ctx.r27.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(4230));
	// subf r27,r27,r23
	ctx.r27.u64 = ctx.r23.u64 - ctx.r27.u64;
	// add r28,r6,r28
	ctx.r28.u64 = ctx.r6.u64 + ctx.r28.u64;
	// srawi r6,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 31;
	// mulli r28,r28,2667
	ctx.r28.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(2667));
	// xori r6,r6,32767
	ctx.r6.u64 = ctx.r6.u64 ^ 32767;
	// mullw r29,r29,r11
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// add r27,r6,r27
	ctx.r27.u64 = ctx.r6.u64 + ctx.r27.u64;
	// subf r6,r28,r29
	ctx.r6.u64 = ctx.r29.u64 - ctx.r28.u64;
	// srawi r28,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addze r27,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r28,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// xori r28,r28,32767
	ctx.r28.u64 = ctx.r28.u64 ^ 32767;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 + ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwimi r27,r6,16,0,15
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r27,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r25,0(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// bne cr6,0x8223a284
	if (!ctx.cr6.eq) goto loc_8223A284;
	// b 0x8223a828
	goto loc_8223A828;
loc_8223A330:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223a6bc
	if (ctx.cr6.eq) goto loc_8223A6BC;
loc_8223A338:
	// lhz r4,-166(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + -166);
	// extsh r24,r28
	ctx.r24.s64 = ctx.r28.s16;
	// extsh r27,r30
	ctx.r27.s64 = ctx.r30.s16;
	// std r26,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r26.u64);
	// extsh r28,r4
	ctx.r28.s64 = ctx.r4.s16;
	// lhz r20,-164(r1)
	ctx.r20.u64 = REX_LOAD_U16(ctx.r1.u32 + -164);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// lhz r5,-168(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -168);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// std r10,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r10.u64);
	// extsh r4,r23
	ctx.r4.s64 = ctx.r23.s16;
	// stw r6,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// extsh r23,r29
	ctx.r23.s64 = ctx.r29.s16;
	// lhz r8,-182(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + -182);
	// extsh r29,r22
	ctx.r29.s64 = ctx.r22.s16;
	// add r22,r6,r30
	ctx.r22.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r19,r28,r24
	ctx.r19.u64 = ctx.r28.u64 + ctx.r24.u64;
	// add r18,r27,r6
	ctx.r18.u64 = ctx.r27.u64 + ctx.r6.u64;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// extsh r7,r21
	ctx.r7.s64 = ctx.r21.s16;
	// mulli r22,r22,27400
	ctx.r22.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(27400));
	// stw r22,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r22.u32);
	// mulli r21,r19,2479
	ctx.r21.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(2479));
	// mulli r19,r18,-4230
	ctx.r19.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(-4230));
	// subf r22,r21,r19
	ctx.r22.u64 = ctx.r19.u64 - ctx.r21.u64;
	// add r17,r3,r30
	ctx.r17.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r22,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r22.u32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// mulli r21,r17,27400
	ctx.r21.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(27400));
	// stw r21,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r21.u32);
	// lwz r21,-224(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// rotlwi r18,r6,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r16,r5,r24
	ctx.r16.u64 = ctx.r5.u64 + ctx.r24.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r15,r29,r24
	ctx.r15.u64 = ctx.r29.u64 + ctx.r24.u64;
	// mulli r6,r6,-2667
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-2667));
	// lwz r19,-220(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// add r24,r24,r7
	ctx.r24.u64 = ctx.r24.u64 + ctx.r7.u64;
	// mulli r22,r16,1563
	ctx.r22.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(1563));
	// lwz r17,-216(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// subf r6,r22,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r22.u64;
	// mulli r24,r24,7250
	ctx.r24.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(7250));
	// stw r6,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r6.u32);
	// stw r24,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r24.u32);
	// add r24,r5,r4
	ctx.r24.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r6,r3,r23
	ctx.r6.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mulli r24,r24,2479
	ctx.r24.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(2479));
	// mulli r6,r6,-4230
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-4230));
	// lwz r14,-224(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r22,r30,r23
	ctx.r22.u64 = ctx.r30.u64 + ctx.r23.u64;
	// subf r23,r24,r6
	ctx.r23.u64 = ctx.r6.u64 - ctx.r24.u64;
	// mulli r16,r15,24733
	ctx.r16.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(24733));
	// lwz r15,-220(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// stw r16,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r16.u32);
	// add r24,r27,r30
	ctx.r24.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r6,r28,r29
	ctx.r6.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r24,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r24.u32);
	// add r24,r23,r21
	ctx.r24.u64 = ctx.r23.u64 + ctx.r21.u64;
	// mulli r23,r6,1563
	ctx.r23.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1563));
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mulli r22,r22,-2667
	ctx.r22.s64 = static_cast<int64_t>(ctx.r22.u64 * static_cast<uint64_t>(-2667));
	// mulli r4,r4,1563
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1563));
	// lwz r6,-216(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// mulli r21,r6,-2667
	ctx.r21.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-2667));
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r26,r29,r7
	ctx.r26.u64 = ctx.r29.u64 + ctx.r7.u64;
	// stw r6,-216(r1)
	REX_STORE_U32(ctx.r1.u32 + -216, ctx.r6.u32);
	// subf r4,r4,r22
	ctx.r4.u64 = ctx.r22.u64 - ctx.r4.u64;
	// mulli r22,r26,24733
	ctx.r22.s64 = static_cast<int64_t>(ctx.r26.u64 * static_cast<uint64_t>(24733));
	// stw r22,-220(r1)
	REX_STORE_U32(ctx.r1.u32 + -220, ctx.r22.u32);
	// add r22,r19,r17
	ctx.r22.u64 = ctx.r19.u64 + ctx.r17.u64;
	// add r10,r5,r29
	ctx.r10.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stw r22,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, ctx.r22.u32);
	// subf r22,r23,r21
	ctx.r22.u64 = ctx.r21.u64 - ctx.r23.u64;
	// extsh r6,r20
	ctx.r6.s64 = ctx.r20.s16;
	// mulli r20,r10,7250
	ctx.r20.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7250));
	// stw r20,-212(r1)
	REX_STORE_U32(ctx.r1.u32 + -212, ctx.r20.u32);
	// lwz r23,-216(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// mulli r21,r23,24733
	ctx.r21.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(24733));
	// add r4,r4,r16
	ctx.r4.u64 = ctx.r4.u64 + ctx.r16.u64;
	// lwz r20,-272(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r19,r6,r29
	ctx.r19.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lhz r10,-162(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + -162);
	// mullw r23,r18,r11
	ctx.r23.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r11.s32);
	// lwz r18,-224(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// add r24,r24,r15
	ctx.r24.u64 = ctx.r24.u64 + ctx.r15.u64;
	// lwz r15,-212(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// mullw r29,r29,r31
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// add r4,r4,r23
	ctx.r4.u64 = ctx.r4.u64 + ctx.r23.u64;
	// subf r23,r29,r24
	ctx.r23.u64 = ctx.r24.u64 - ctx.r29.u64;
	// lwz r24,-220(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// srawi r16,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r16.s64 = ctx.r23.s32 >> 31;
	// add r29,r22,r21
	ctx.r29.u64 = ctx.r22.u64 + ctx.r21.u64;
	// stw r20,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r20.u32);
	// xori r21,r16,32767
	ctx.r21.u64 = ctx.r16.u64 ^ 32767;
	// add r17,r8,r30
	ctx.r17.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 + ctx.r23.u64;
	// mulli r21,r19,2479
	ctx.r21.s64 = static_cast<int64_t>(ctx.r19.u64 * static_cast<uint64_t>(2479));
	// srawi r23,r23,16
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 16;
	// mulli r19,r17,-4230
	ctx.r19.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(-4230));
	// mullw r22,r3,r11
	ctx.r22.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r17,r27,r3
	ctx.r17.u64 = ctx.r27.u64 + ctx.r3.u64;
	// addze r16,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r16.s64 = temp.s64;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// subf r22,r21,r19
	ctx.r22.u64 = ctx.r19.u64 - ctx.r21.u64;
	// mulli r23,r17,27400
	ctx.r23.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(27400));
	// srawi r21,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r21.s64 = ctx.r4.s32 >> 31;
	// add r22,r22,r23
	ctx.r22.u64 = ctx.r22.u64 + ctx.r23.u64;
	// xori r23,r21,32767
	ctx.r23.u64 = ctx.r21.u64 ^ 32767;
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// add r4,r23,r4
	ctx.r4.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r24,r14,r24
	ctx.r24.u64 = ctx.r14.u64 + ctx.r24.u64;
	// add r23,r18,r15
	ctx.r23.u64 = ctx.r18.u64 + ctx.r15.u64;
	// mullw r21,r7,r31
	ctx.r21.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// subf r24,r21,r23
	ctx.r24.u64 = ctx.r23.u64 - ctx.r21.u64;
	// addze r19,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r19.s64 = temp.s64;
	// srawi r4,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r24.s32 >> 31;
	// add r21,r28,r7
	ctx.r21.u64 = ctx.r28.u64 + ctx.r7.u64;
	// xori r23,r4,32767
	ctx.r23.u64 = ctx.r4.u64 ^ 32767;
	// mulli r21,r21,7250
	ctx.r21.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(7250));
	// add r4,r23,r24
	ctx.r4.u64 = ctx.r23.u64 + ctx.r24.u64;
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// add r18,r24,r7
	ctx.r18.u64 = ctx.r24.u64 + ctx.r7.u64;
	// addze r17,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r17.s64 = temp.s64;
	// srawi r4,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 31;
	// add r23,r22,r21
	ctx.r23.u64 = ctx.r22.u64 + ctx.r21.u64;
	// xori r24,r4,32767
	ctx.r24.u64 = ctx.r4.u64 ^ 32767;
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// subf r4,r4,r23
	ctx.r4.u64 = ctx.r23.u64 - ctx.r4.u64;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// extsh r23,r25
	ctx.r23.s64 = ctx.r25.s16;
	// addze r22,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r22.s64 = temp.s64;
	// srawi r30,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r4.s32 >> 31;
	// add r23,r23,r3
	ctx.r23.u64 = ctx.r23.u64 + ctx.r3.u64;
	// xori r24,r30,32767
	ctx.r24.u64 = ctx.r30.u64 ^ 32767;
	// mulli r30,r18,2479
	ctx.r30.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(2479));
	// add r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 + ctx.r4.u64;
	// mulli r24,r23,-4230
	ctx.r24.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(-4230));
	// add r23,r8,r27
	ctx.r23.u64 = ctx.r8.u64 + ctx.r27.u64;
	// srawi r21,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r21.s64 = ctx.r4.s32 >> 16;
	// mulli r4,r23,27400
	ctx.r4.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(27400));
	// subf r30,r30,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r30.u64;
	// addze r23,r21
	temp.s64 = ctx.r21.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r21.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r24,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r24.s64 = ctx.r29.s32 >> 31;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// add r21,r6,r5
	ctx.r21.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xori r4,r24,32767
	ctx.r4.u64 = ctx.r24.u64 ^ 32767;
	// mulli r24,r21,7250
	ctx.r24.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(7250));
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// mullw r29,r28,r31
	ctx.r29.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// srawi r24,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r4.s32 >> 16;
	// subf r4,r29,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r29.u64;
	// addze r30,r24
	temp.s64 = ctx.r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r24.u32;
	ctx.r30.s64 = temp.s64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// ld r10,-208(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// mulli r8,r7,1563
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1563));
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// stfd f0,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f0.u64);
	// ld r26,-200(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// mulli r29,r6,-2667
	ctx.r29.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(-2667));
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lwz r5,-184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// srawi r3,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// mulli r7,r7,24733
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(24733));
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// lhz r21,-170(r1)
	ctx.r21.u64 = REX_LOAD_U16(ctx.r1.u32 + -170);
	// lhz r28,-174(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + -174);
	// xori r6,r3,32767
	ctx.r6.u64 = ctx.r3.u64 ^ 32767;
	// subf r8,r8,r29
	ctx.r8.u64 = ctx.r29.u64 - ctx.r8.u64;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r7,r27,r11
	ctx.r7.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lhz r29,-192(r1)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r1.u32 + -192);
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r5,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// rlwimi r23,r30,16,0,15
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000) | (ctx.r23.u64 & 0xFFFFFFFF0000FFFF);
	// xori r7,r5,32767
	ctx.r7.u64 = ctx.r5.u64 ^ 32767;
	// rlwimi r17,r22,16,0,15
	ctx.r17.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 16) & 0xFFFF0000) | (ctx.r17.u64 & 0xFFFFFFFF0000FFFF);
	// stw r23,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r23.u32);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lhz r22,-172(r1)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r1.u32 + -172);
	// rlwimi r16,r19,16,0,15
	ctx.r16.u64 = (__builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 16) & 0xFFFF0000) | (ctx.r16.u64 & 0xFFFFFFFF0000FFFF);
	// stw r17,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r17.u32);
	// srawi r3,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 16;
	// lhz r23,-176(r1)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r1.u32 + -176);
	// stw r16,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r16.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lhz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lwz r5,0(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// lhz r30,2(r10)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r25,6(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r5,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lhz r5,-190(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + -190);
	// sth r30,-184(r1)
	REX_STORE_U16(ctx.r1.u32 + -184, ctx.r30.u16);
	// sth r3,-182(r1)
	REX_STORE_U16(ctx.r1.u32 + -182, ctx.r3.u16);
	// stw r6,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r6.u32);
	// bne 0x8223a338
	if (!ctx.cr0.eq) goto loc_8223A338;
	// lhz r6,-162(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + -162);
	// lhz r14,-164(r1)
	ctx.r14.u64 = REX_LOAD_U16(ctx.r1.u32 + -164);
	// lwz r17,44(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r16,68(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r18,-252(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r20,-260(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r19,-256(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r24,-264(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r4,-268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
loc_8223A6BC:
	// cmplwi cr6,r18,8
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 8, ctx.xer);
	// bge cr6,0x8223a6cc
	if (!ctx.cr6.lt) goto loc_8223A6CC;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// b 0x8223a6d4
	goto loc_8223A6D4;
loc_8223A6CC:
	// clrlwi r27,r18,30
	ctx.r27.u64 = ctx.r18.u32 & 0x3;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
loc_8223A6D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8223a828
	if (ctx.cr6.eq) goto loc_8223A828;
	// lhz r16,-168(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -168);
loc_8223A6E0:
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// stw r27,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, ctx.r27.u32);
	// bne cr6,0x8223a708
	if (!ctx.cr6.eq) goto loc_8223A708;
	// rlwinm r4,r24,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r27,r24
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r24.u64);
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subf r26,r4,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r4.u64;
	// stw r27,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r27.u32);
loc_8223A708:
	// extsh r18,r29
	ctx.r18.s64 = ctx.r29.s16;
	// extsh r17,r23
	ctx.r17.s64 = ctx.r23.s16;
	// extsh r27,r16
	ctx.r27.s64 = ctx.r16.s16;
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// add r4,r27,r17
	ctx.r4.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// extsh r19,r8
	ctx.r19.s64 = ctx.r8.s16;
	// extsh r20,r5
	ctx.r20.s64 = ctx.r5.s16;
	// mulli r4,r4,2479
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(2479));
	// mulli r29,r29,-4230
	ctx.r29.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(-4230));
	// add r27,r20,r19
	ctx.r27.u64 = ctx.r20.u64 + ctx.r19.u64;
	// extsh r24,r28
	ctx.r24.s64 = ctx.r28.s16;
	// extsh r23,r21
	ctx.r23.s64 = ctx.r21.s16;
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// mulli r15,r27,27400
	ctx.r15.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(27400));
	// add r4,r24,r23
	ctx.r4.u64 = ctx.r24.u64 + ctx.r23.u64;
	// add r29,r29,r15
	ctx.r29.u64 = ctx.r29.u64 + ctx.r15.u64;
	// mulli r15,r4,7250
	ctx.r15.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(7250));
	// extsh r27,r22
	ctx.r27.s64 = ctx.r22.s16;
	// add r29,r29,r15
	ctx.r29.u64 = ctx.r29.u64 + ctx.r15.u64;
	// mullw r4,r27,r31
	ctx.r4.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// subf r29,r4,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r4.u64;
	// add r23,r23,r17
	ctx.r23.u64 = ctx.r23.u64 + ctx.r17.u64;
	// add r4,r19,r18
	ctx.r4.u64 = ctx.r19.u64 + ctx.r18.u64;
	// add r24,r27,r24
	ctx.r24.u64 = ctx.r27.u64 + ctx.r24.u64;
	// srawi r19,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r19.s64 = ctx.r29.s32 >> 31;
	// mulli r4,r4,-2667
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(-2667));
	// mulli r27,r23,1563
	ctx.r27.s64 = static_cast<int64_t>(ctx.r23.u64 * static_cast<uint64_t>(1563));
	// xori r23,r19,32767
	ctx.r23.u64 = ctx.r19.u64 ^ 32767;
	// subf r27,r27,r4
	ctx.r27.u64 = ctx.r4.u64 - ctx.r27.u64;
	// mulli r24,r24,24733
	ctx.r24.s64 = static_cast<int64_t>(ctx.r24.u64 * static_cast<uint64_t>(24733));
	// add r4,r23,r29
	ctx.r4.u64 = ctx.r23.u64 + ctx.r29.u64;
	// add r29,r27,r24
	ctx.r29.u64 = ctx.r27.u64 + ctx.r24.u64;
	// lwz r24,-264(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// mullw r27,r20,r11
	ctx.r27.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r11.s32);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r29,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 31;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// xori r28,r29,32767
	ctx.r28.u64 = ctx.r29.u64 ^ 32767;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r5,r28,r27
	ctx.r5.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r27,-272(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// srawi r22,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r22.s64 = ctx.r5.s32 >> 16;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// addze r8,r22
	temp.s64 = ctx.r22.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r22.u32;
	ctx.r8.s64 = temp.s64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// lhz r16,-166(r1)
	ctx.r16.u64 = REX_LOAD_U16(ctx.r1.u32 + -166);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// sth r14,-166(r1)
	REX_STORE_U16(ctx.r1.u32 + -166, ctx.r14.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r25,0(r10)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// lhz r6,0(r26)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// lwz r4,-268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r26,r26,r24
	ctx.r26.u64 = ctx.r26.u64 + ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8223a6e0
	if (!ctx.cr6.eq) goto loc_8223A6E0;
	// lwz r17,44(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r16,68(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// lwz r19,-256(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r20,-260(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -260);
	// lwz r18,-252(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
loc_8223A828:
	// lwz r10,-248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// add r20,r20,r17
	ctx.r20.u64 = ctx.r20.u64 + ctx.r17.u64;
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// add r4,r4,r17
	ctx.r4.u64 = ctx.r4.u64 + ctx.r17.u64;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r20,-260(r1)
	REX_STORE_U32(ctx.r1.u32 + -260, ctx.r20.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, ctx.r4.u32);
	// stw r16,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r16.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r3,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r3.u32);
	// bne cr6,0x82239ffc
	if (!ctx.cr6.eq) goto loc_82239FFC;
loc_8223A858:
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82270B48) {
	REX_FUNC_PROLOGUE();
	// lbz r11,11956(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,11952(r3)
	REX_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// stb r11,11956(r3)
	REX_STORE_U8(ctx.r3.u32 + 11956, ctx.r11.u8);
	// bgtlr 
	if (ctx.cr0.gt) return;
	// lwz r8,11016(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r10,11012(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82270bc4
	if (!ctx.cr6.lt) goto loc_82270BC4;
	// lbz r6,11956(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r11,11012(r3)
	REX_STORE_U32(ctx.r3.u32 + 11012, ctx.r11.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stb r10,11956(r3)
	REX_STORE_U8(ctx.r3.u32 + 11956, ctx.r10.u8);
	// stw r9,11952(r3)
	REX_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// bgtlr 
	if (ctx.cr0.gt) return;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82270bd0
	if (ctx.cr6.lt) goto loc_82270BD0;
loc_82270BC4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11959(r3)
	REX_STORE_U8(ctx.r3.u32 + 11959, ctx.r11.u8);
	// blr 
	return;
loc_82270BD0:
	// lbz r8,11956(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r6,11952(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r9,11012(r3)
	REX_STORE_U32(ctx.r3.u32 + 11012, ctx.r9.u32);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stb r11,11956(r3)
	REX_STORE_U8(ctx.r3.u32 + 11956, ctx.r11.u8);
	// stw r10,11952(r3)
	REX_STORE_U32(ctx.r3.u32 + 11952, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274A58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274B28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274BF0) {
	REX_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274C78) {
	REX_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	REX_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274FB8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 11884);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822751A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822754F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12028(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822757A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82275DE0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82276E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82276ba0
	sub_82276BA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82279630) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82279190
	sub_82279190(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227A630) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8227a674
	if (ctx.cr6.gt) goto loc_8227A674;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227a688
	if (ctx.cr6.eq) goto loc_8227A688;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x825d6e10
	ctx.lr = 0x8227A670;
	sub_825D6E10(ctx, base);
	// b 0x8227a688
	goto loc_8227A688;
loc_8227A674:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227a688
	if (ctx.cr6.eq) goto loc_8227A688;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8227A688:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8227a69c
	if (!ctx.cr6.gt) goto loc_8227A69C;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8227A69C:
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

DEFINE_REX_FUNC(sub_8227C4F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// b 0x8227c524
	goto loc_8227C524;
loc_8227C518:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
loc_8227C524:
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x8227c518
	if (!ctx.cr6.eq) goto loc_8227C518;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x8226a7f8
	ctx.lr = 0x8227C53C;
	sub_8226A7F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8227c54c
	if (!ctx.cr0.eq) goto loc_8227C54C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227c55c
	goto loc_8227C55C;
loc_8227C54C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227c400
	ctx.lr = 0x8227C558;
	sub_8227C400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8227C55C:
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

DEFINE_REX_FUNC(sub_8227EC98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x8227e638
	sub_8227E638(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227F740) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x8227F748;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r3,19900(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 19900);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8227f91c
	if (ctx.cr6.lt) goto loc_8227F91C;
	// lwz r11,19904(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227f778
	if (!ctx.cr6.eq) goto loc_8227F778;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8227f91c
	goto loc_8227F91C;
loc_8227F778:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,19892(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 19892);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r25,24(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lis r8,4138
	ctx.r8.s64 = 271187968;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// ori r8,r8,4352
	ctx.r8.u64 = ctx.r8.u64 | 4352;
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// std r29,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// rlwimi r8,r10,31,26,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// std r29,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r31,r26,20
	ctx.r31.s64 = ctx.r26.s64 + 20;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// andi. r10,r10,222
	ctx.r10.u64 = ctx.r10.u64 & 222;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8227a630
	ctx.lr = 0x8227F7DC;
	sub_8227A630(ctx, base);
	// lwz r11,19924(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19924);
	// rlwinm. r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8227f800
	if (ctx.cr0.eq) goto loc_8227F800;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19920(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 19920);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8227a630
	ctx.lr = 0x8227F800;
	sub_8227A630(ctx, base);
loc_8227F800:
	// lwz r11,19912(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19912);
	// rlwinm. r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8227f83c
	if (ctx.cr0.eq) goto loc_8227F83C;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8227a630
	ctx.lr = 0x8227F82C;
	sub_8227A630(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19908(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 19908);
	// bl 0x8227a630
	ctx.lr = 0x8227F83C;
	sub_8227A630(ctx, base);
loc_8227F83C:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r28,r1,116
	ctx.r28.s64 = ctx.r1.s64 + 116;
	// addi r29,r30,368
	ctx.r29.s64 = ctx.r30.s64 + 368;
loc_8227F848:
	// lwz r11,9564(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 9564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227f874
	if (!ctx.cr6.eq) goto loc_8227F874;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8227dba0
	ctx.lr = 0x8227F868;
	sub_8227DBA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8227f874
	if (!ctx.cr0.lt) goto loc_8227F874;
	// stw r3,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r3.u32);
loc_8227F874:
	// lwz r11,-240(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227f8ac
	if (ctx.cr6.eq) goto loc_8227F8AC;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r29,-352
	ctx.r3.s64 = ctx.r29.s64 + -352;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// stw r10,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// bl 0x8227ed30
	ctx.lr = 0x8227F8A0;
	sub_8227ED30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8227f8ac
	if (!ctx.cr0.lt) goto loc_8227F8AC;
	// stw r3,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r3.u32);
loc_8227F8AC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,9936
	ctx.r29.s64 = ctx.r29.s64 + 9936;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x8227f848
	if (ctx.cr6.lt) goto loc_8227F848;
	// lwz r11,19952(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19952);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x8227a630
	ctx.lr = 0x8227F8F8;
	sub_8227A630(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8227f914
	if (ctx.cr6.lt) goto loc_8227F914;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8227f918
	if (!ctx.cr6.lt) goto loc_8227F918;
loc_8227F914:
	// stw r11,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r11.u32);
loc_8227F918:
	// lwz r3,19900(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 19900);
loc_8227F91C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228B8A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8228B8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r29,13532(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 13532);
	// bl 0x82289fc8
	ctx.lr = 0x8228B8C8;
	sub_82289FC8(ctx, base);
	// lbz r11,10941(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 10941);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b8e0
	if (ctx.cr0.eq) goto loc_8228B8E0;
	// lwz r31,16728(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16728);
	// b 0x8228b93c
	goto loc_8228B93C;
loc_8228B8E0:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13532(r30)
	REX_STORE_U32(ctx.r30.u32 + 13532, ctx.r31.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// bne cr6,0x8228b918
	if (!ctx.cr6.eq) goto loc_8228B918;
	// lwz r11,13516(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 13516);
	// stw r3,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// b 0x8228b930
	goto loc_8228B930;
loc_8228B918:
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13536(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 13536);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8228B930:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8228e158
	ctx.lr = 0x8228B93C;
	sub_8228E158(ctx, base);
loc_8228B93C:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stw r3,13536(r30)
	REX_STORE_U32(ctx.r30.u32 + 13536, ctx.r3.u32);
	// stw r11,13540(r30)
	REX_STORE_U32(ctx.r30.u32 + 13540, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228F5E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x8228F5F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-17477
	ctx.r3.s64 = -1145372672;
	// ori r3,r3,48059
	ctx.r3.u64 = ctx.r3.u64 | 48059;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8228e5f0
	ctx.lr = 0x8228F608;
	sub_8228E5F0(ctx, base);
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// b 0x8228f628
	goto loc_8228F628;
loc_8228F610:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228f634
	if (!ctx.cr0.eq) goto loc_8228F634;
	// db16cyc 
loc_8228F628:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228f610
	if (!ctx.cr6.eq) goto loc_8228F610;
loc_8228F634:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8228F63C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8228f660
	if (!ctx.cr6.eq) goto loc_8228F660;
	// stwcx. r28,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8228f63c
	if (!ctx.cr0.eq) goto loc_8228F63C;
	// b 0x8228f668
	goto loc_8228F668;
loc_8228F660:
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8228F668:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228f63c
	if (!ctx.cr6.eq) goto loc_8228F63C;
	// lwsync 
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lis r3,-17477
	ctx.r3.s64 = -1145372672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228f6a4
	if (!ctx.cr6.eq) goto loc_8228F6A4;
	// ori r3,r3,48060
	ctx.r3.u64 = ctx.r3.u64 | 48060;
	// bl 0x8228e5f0
	ctx.lr = 0x8228F694;
	sub_8228E5F0(ctx, base);
	// lwsync 
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8228F69C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_8228F6A4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// ori r3,r3,48061
	ctx.r3.u64 = ctx.r3.u64 | 48061;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r11,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// bl 0x8228e5f0
	ctx.lr = 0x8228F6D4;
	sub_8228E5F0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8228e5f0
	ctx.lr = 0x8228F6DC;
	sub_8228E5F0(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8228e5f0
	ctx.lr = 0x8228F6E4;
	sub_8228E5F0(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8228e5f0
	ctx.lr = 0x8228F6F8;
	sub_8228E5F0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8228f70c
	if (!ctx.cr6.gt) goto loc_8228F70C;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x8228f738
	goto loc_8228F738;
loc_8228F70C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228f730
	if (ctx.cr6.eq) goto loc_8228F730;
	// stw r29,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// b 0x8228f738
	goto loc_8228F738;
loc_8228F730:
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// stw r4,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r4.u32);
loc_8228F738:
	// lis r27,-16384
	ctx.r27.s64 = -1073741824;
loc_8228F73C:
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8228f764
	if (!ctx.cr6.lt) goto loc_8228F764;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwsync 
	// b 0x8228f7b4
	goto loc_8228F7B4;
loc_8228F764:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228f7d0
	if (!ctx.cr0.eq) goto loc_8228F7D0;
	// lwz r9,360(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r8,356(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r10,r11,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228f790
	if (!ctx.cr0.eq) goto loc_8228F790;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x8228f73c
	goto loc_8228F73C;
loc_8228F790:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r5,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwsync 
	// li r6,0
	ctx.r6.s64 = 0;
loc_8228F7B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F7C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x8228f73c
	goto loc_8228F73C;
loc_8228F7D0:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228f7ec
	if (!ctx.cr6.eq) goto loc_8228F7EC;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stw r11,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// b 0x8228f73c
	goto loc_8228F73C;
loc_8228F7EC:
	// lis r10,-29696
	ctx.r10.s64 = -1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228f810
	if (!ctx.cr6.eq) goto loc_8228F810;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8228f73c
	goto loc_8228F73C;
loc_8228F810:
	// rlwinm r10,r11,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8228f844
	if (!ctx.cr6.eq) goto loc_8228F844;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8228f83c
	if (!ctx.cr6.eq) goto loc_8228F83C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228ebb8
	ctx.lr = 0x8228F830;
	sub_8228EBB8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8228f73c
	if (!ctx.cr0.eq) goto loc_8228F73C;
	// b 0x8228f69c
	goto loc_8228F69C;
loc_8228F83C:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8228f73c
	goto loc_8228F73C;
loc_8228F844:
	// lis r3,-12288
	ctx.r3.s64 = -805306368;
	// bl 0x8228e5f0
	ctx.lr = 0x8228F84C;
	sub_8228E5F0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// stw r28,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8228f8cc
	if (ctx.cr6.eq) goto loc_8228F8CC;
	// stw r5,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lwsync 
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x8228f87c
	goto loc_8228F87C;
loc_8228F878:
	// db16cyc 
loc_8228F87C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228f878
	if (!ctx.cr6.eq) goto loc_8228F878;
loc_8228F888:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x8228f8ac
	if (!ctx.cr6.eq) goto loc_8228F8AC;
	// stwcx. r28,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8228f888
	if (!ctx.cr0.eq) goto loc_8228F888;
	// b 0x8228f8b4
	goto loc_8228F8B4;
loc_8228F8AC:
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8228F8B4:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8228f888
	if (!ctx.cr6.eq) goto loc_8228F888;
	// lwsync 
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// b 0x8228f8e0
	goto loc_8228F8E0;
loc_8228F8CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8228f2a8
	ctx.lr = 0x8228F8D8;
	sub_8228F2A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r29,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
loc_8228F8E0:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lis r3,-12288
	ctx.r3.s64 = -805306368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x8228e5f0
	ctx.lr = 0x8228F8F8;
	sub_8228E5F0(ctx, base);
	// b 0x8228f73c
	goto loc_8228F73C;
}

DEFINE_REX_FUNC(sub_822A4518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x822A4520;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822a4668
	if (!ctx.cr6.lt) goto loc_822A4668;
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// bl 0x825d7cf0
	ctx.lr = 0x822A4554;
	sub_825D7CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x825d7cf0
	ctx.lr = 0x822A4564;
	sub_825D7CF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822a4668
	if (!ctx.cr6.lt) goto loc_822A4668;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x822a4668
	if (!ctx.cr6.eq) goto loc_822A4668;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a4228
	ctx.lr = 0x822A459C;
	sub_822A4228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x822a4668
	if (ctx.cr6.gt) goto loc_822A4668;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822a4668
	if (!ctx.cr6.lt) goto loc_822A4668;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x822a4668
	if (!ctx.cr6.eq) goto loc_822A4668;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a4228
	ctx.lr = 0x822A45E0;
	sub_822A4228(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822a4608
	if (!ctx.cr0.eq) goto loc_822A4608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a30a0
	ctx.lr = 0x822A45F8;
	sub_822A30A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822a460c
	goto loc_822A460C;
loc_822A4608:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822A460C:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x822a4668
	if (ctx.cr6.gt) goto loc_822A4668;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r31,r29,r11
	ctx.r31.u64 = ctx.r11.u64 - ctx.r29.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bge cr6,0x822a4668
	if (!ctx.cr6.lt) goto loc_822A4668;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825d6e10
	ctx.lr = 0x822A4634;
	sub_825D6E10(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stbx r10,r31,r11
	REX_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82298fa8
	ctx.lr = 0x822A4650;
	sub_82298FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822a4668
	if (ctx.cr0.lt) goto loc_822A4668;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x822a466c
	goto loc_822A466C;
loc_822A4668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A466C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AE0E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x822AE0F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r23,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r23,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822ae12c
	if (!ctx.cr6.eq) goto loc_822AE12C;
	// addi r28,r1,168
	ctx.r28.s64 = ctx.r1.s64 + 168;
loc_822AE12C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ae3d0
	if (ctx.cr6.eq) goto loc_822AE3D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822ae350
	if (ctx.cr6.eq) goto loc_822AE350;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x822ae320
	if (ctx.cr6.eq) goto loc_822AE320;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x822ae24c
	if (ctx.cr6.eq) goto loc_822AE24C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x822ae1bc
	if (ctx.cr6.eq) goto loc_822AE1BC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x822ae17c
	if (ctx.cr6.eq) goto loc_822AE17C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-5076
	ctx.r6.s64 = ctx.r11.s64 + -5076;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad238
	ctx.lr = 0x822AE178;
	sub_822AD238(ctx, base);
	// b 0x822ae3d0
	goto loc_822AE3D0;
loc_822AE17C:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b0f50
	ctx.lr = 0x822AE1B8;
	sub_822B0F50(ctx, base);
	// b 0x822ae240
	goto loc_822AE240;
loc_822AE1BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822ae210
	if (!ctx.cr6.eq) goto loc_822AE210;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822ae1f4
	if (!ctx.cr6.eq) goto loc_822AE1F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,-22356
	ctx.r4.s64 = ctx.r11.s64 + -22356;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x82310578
	ctx.lr = 0x822AE1EC;
	sub_82310578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822ae210
	goto loc_822AE210;
loc_822AE1F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822AE210:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822aaf10
	ctx.lr = 0x822AE240;
	sub_822AAF10(ctx, base);
loc_822AE240:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822ae3d0
	if (!ctx.cr0.lt) goto loc_822AE3D0;
	// b 0x822ae3e8
	goto loc_822AE3E8;
loc_822AE24C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822ae2b4
	if (!ctx.cr6.eq) goto loc_822AE2B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822AE258:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x822ae270
	if (!ctx.cr6.eq) goto loc_822AE270;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ae258
	if (!ctx.cr6.eq) goto loc_822AE258;
loc_822AE270:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae2b4
	if (ctx.cr6.eq) goto loc_822AE2B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822ae2b4
	if (!ctx.cr6.eq) goto loc_822AE2B4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822ae2b4
	if (!ctx.cr6.eq) goto loc_822AE2B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,-22356
	ctx.r4.s64 = ctx.r11.s64 + -22356;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,721
	ctx.r5.s64 = 721;
	// bl 0x82310578
	ctx.lr = 0x822AE2AC;
	sub_82310578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
loc_822AE2B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822ae3d0
	if (!ctx.cr6.gt) goto loc_822AE3D0;
loc_822AE2C0:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ae0e8
	ctx.lr = 0x822AE2F4;
	sub_822AE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ae3e8
	if (ctx.cr0.lt) goto loc_822AE3E8;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// blt cr6,0x822ae2c0
	if (ctx.cr6.lt) goto loc_822AE2C0;
	// b 0x822ae3d0
	goto loc_822AE3D0;
loc_822AE320:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ae0e8
	ctx.lr = 0x822AE34C;
	sub_822AE0E8(ctx, base);
	// b 0x822ae240
	goto loc_822AE240;
loc_822AE350:
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ae0e8
	ctx.lr = 0x822AE37C;
	sub_822AE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ae3e8
	if (ctx.cr0.lt) goto loc_822AE3E8;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ae0e8
	ctx.lr = 0x822AE3B8;
	sub_822AE0E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822ae3e8
	if (ctx.cr0.lt) goto loc_822AE3E8;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_822AE3D0:
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae3e4
	if (ctx.cr6.eq) goto loc_822AE3E4;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822AE3E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AE3E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CC3A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d0
	ctx.lr = 0x822CC3B0;
	__savegprlr_18(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// bl 0x822c6568
	ctx.lr = 0x822CC3CC;
	sub_822C6568(ctx, base);
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// bgt cr6,0x822cc7a4
	if (ctx.cr6.gt) goto loc_822CC7A4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,-2728
	ctx.r12.s64 = ctx.r12.s64 + -2728;
	// lbzx r0,r12,r20
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r20.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32211
	ctx.r12.s64 = -2110980096;
	// addi r12,r12,-15364
	ctx.r12.s64 = ctx.r12.s64 + -15364;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r20.u32) {
	case 0:
		goto loc_822CC3FC;
	case 1:
		goto loc_822CC418;
	case 2:
		goto loc_822CC7A4;
	case 3:
		goto loc_822CC418;
	case 4:
		goto loc_822CC408;
	case 5:
		goto loc_822CC7A4;
	case 6:
		goto loc_822CC3FC;
	case 7:
		goto loc_822CC428;
	case 8:
		goto loc_822CC428;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_822CC3FC:
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r31,r11,6856
	ctx.r31.s64 = ctx.r11.s64 + 6856;
	// b 0x822cc434
	goto loc_822CC434;
loc_822CC408:
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// addi r31,r11,80
	ctx.r31.s64 = ctx.r11.s64 + 80;
	// b 0x822cc434
	goto loc_822CC434;
loc_822CC418:
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// b 0x822cc434
	goto loc_822CC434;
loc_822CC428:
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r11,r11,6856
	ctx.r11.s64 = ctx.r11.s64 + 6856;
	// addi r31,r11,72
	ctx.r31.s64 = ctx.r11.s64 + 72;
loc_822CC434:
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82299cc8
	ctx.lr = 0x822CC43C;
	sub_82299CC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82299dc8
	ctx.lr = 0x822CC44C;
	sub_82299DC8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x822cc470
	if (!ctx.cr6.eq) goto loc_822CC470;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2156
	ctx.r31.u64 = ctx.r31.u64 | 2156;
loc_822CC460:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7098
	ctx.lr = 0x822CC468;
	sub_822C7098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822cc7b4
	goto loc_822CC7B4;
loc_822CC470:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// xor r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// rlwinm. r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cc62c
	if (ctx.cr0.eq) goto loc_822CC62C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822ccac0
	ctx.lr = 0x822CC488;
	sub_822CCAC0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82299cc8
	ctx.lr = 0x822CC490;
	sub_82299CC8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// rlwinm r23,r11,29,3,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822CC4A4:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822cc618
	if (ctx.cr6.eq) goto loc_822CC618;
loc_822CC4B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x8226a7f8
	ctx.lr = 0x822CC4D0;
	sub_8226A7F8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x822cc64c
	if (ctx.cr0.eq) goto loc_822CC64C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// bl 0x825d6e10
	ctx.lr = 0x822CC510;
	sub_825D6E10(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825d6e10
	ctx.lr = 0x822CC520;
	sub_825D6E10(ctx, base);
	// stw r24,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// stw r30,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r30,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x825d6e10
	ctx.lr = 0x822CC58C;
	sub_825D6E10(ctx, base);
	// stw r24,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r30,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cffc8
	ctx.lr = 0x822CC5B4;
	sub_822CFFC8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x822cc660
	if (ctx.cr0.lt) goto loc_822CC660;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc5e0
	if (ctx.cr6.eq) goto loc_822CC5E0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cc5e0
	if (ctx.cr6.eq) goto loc_822CC5E0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x8226a890
	ctx.lr = 0x822CC5DC;
	sub_8226A890(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_822CC5E0:
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d6e10
	ctx.lr = 0x822CC5F8;
	sub_825D6E10(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r24,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r24.u32);
	// lwz r31,76(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bne cr6,0x822cc4b0
	if (!ctx.cr6.eq) goto loc_822CC4B0;
loc_822CC618:
	// lwz r22,80(r22)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x822cc4a4
	if (!ctx.cr6.eq) goto loc_822CC4A4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cd2d0
	ctx.lr = 0x822CC62C;
	sub_822CD2D0(ctx, base);
loc_822CC62C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7100
	ctx.lr = 0x822CC63C;
	sub_822C7100(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822cc67c
	if (!ctx.cr0.lt) goto loc_822CC67C;
loc_822CC644:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822cc460
	goto loc_822CC460;
loc_822CC64C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cd2d0
	ctx.lr = 0x822CC654;
	sub_822CD2D0(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x822cc460
	goto loc_822CC460;
loc_822CC660:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226a890
	ctx.lr = 0x822CC66C;
	sub_8226A890(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822cd2d0
	ctx.lr = 0x822CC674;
	sub_822CD2D0(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x822cc460
	goto loc_822CC460;
loc_822CC67C:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// blt cr6,0x822cc714
	if (ctx.cr6.lt) goto loc_822CC714;
	// beq cr6,0x822cc704
	if (ctx.cr6.eq) goto loc_822CC704;
	// cmplwi cr6,r20,3
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 3, ctx.xer);
	// beq cr6,0x822cc6f4
	if (ctx.cr6.eq) goto loc_822CC6F4;
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// beq cr6,0x822cc6e4
	if (ctx.cr6.eq) goto loc_822CC6E4;
	// cmplwi cr6,r20,6
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 6, ctx.xer);
	// beq cr6,0x822cc6dc
	if (ctx.cr6.eq) goto loc_822CC6DC;
	// cmplwi cr6,r20,7
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 7, ctx.xer);
	// beq cr6,0x822cc6cc
	if (ctx.cr6.eq) goto loc_822CC6CC;
	// cmplwi cr6,r20,8
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 8, ctx.xer);
	// beq cr6,0x822cc6bc
	if (ctx.cr6.eq) goto loc_822CC6BC;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16385
	ctx.r31.u64 = ctx.r31.u64 | 16385;
	// b 0x822cc728
	goto loc_822CC728;
loc_822CC6BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822cb7e8
	ctx.lr = 0x822CC6C8;
	sub_822CB7E8(ctx, base);
	// b 0x822cc724
	goto loc_822CC724;
loc_822CC6CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822cb9a8
	ctx.lr = 0x822CC6D8;
	sub_822CB9A8(ctx, base);
	// b 0x822cc724
	goto loc_822CC724;
loc_822CC6DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822cc718
	goto loc_822CC718;
loc_822CC6E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822cb320
	ctx.lr = 0x822CC6F0;
	sub_822CB320(ctx, base);
	// b 0x822cc724
	goto loc_822CC724;
loc_822CC6F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822ca410
	ctx.lr = 0x822CC700;
	sub_822CA410(ctx, base);
	// b 0x822cc724
	goto loc_822CC724;
loc_822CC704:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822c97a0
	ctx.lr = 0x822CC710;
	sub_822C97A0(ctx, base);
	// b 0x822cc724
	goto loc_822CC724;
loc_822CC714:
	// li r5,1
	ctx.r5.s64 = 1;
loc_822CC718:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822c8f08
	ctx.lr = 0x822CC724;
	sub_822C8F08(ctx, base);
loc_822CC724:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822CC728:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c67d0
	ctx.lr = 0x822CC730;
	sub_822C67D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822cc460
	if (ctx.cr6.lt) goto loc_822CC460;
	// cmplwi cr6,r18,2
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 2, ctx.xer);
	// bne cr6,0x822cc794
	if (!ctx.cr6.eq) goto loc_822CC794;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x822a2a20
	ctx.lr = 0x822CC74C;
	sub_822A2A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cc644
	if (ctx.cr0.lt) goto loc_822CC644;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,108(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,0(r19)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CC770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CC788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x825d6e10
	ctx.lr = 0x822CC794;
	sub_825D6E10(ctx, base);
loc_822CC794:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7098
	ctx.lr = 0x822CC79C;
	sub_822C7098(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822cc7b4
	goto loc_822CC7B4;
loc_822CC7A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c7098
	ctx.lr = 0x822CC7AC;
	sub_822C7098(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_822CC7B4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x825d6120
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D9C50) {
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
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d9cbc
	if (!ctx.cr6.lt) goto loc_822D9CBC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5840(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5840);
	ctx.f0.f64 = double(temp.f32);
loc_822D9C94:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// blt cr6,0x822d9c94
	if (ctx.cr6.lt) goto loc_822D9C94;
loc_822D9CBC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d9cd8
	if (ctx.cr6.eq) goto loc_822D9CD8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822d1258
	ctx.lr = 0x822D9CD8;
	sub_822D1258(ctx, base);
loc_822D9CD8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822d9cf4
	if (ctx.cr6.eq) goto loc_822D9CF4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x822d1630
	ctx.lr = 0x822D9CF4;
	sub_822D1630(ctx, base);
loc_822D9CF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DD2B0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r10,r10,436
	ctx.r10.s64 = ctx.r10.s64 + 436;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DDD10) {
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
	// beq cr6,0x822dddc4
	if (ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822dddc4
	if (!ctx.cr6.eq) goto loc_822DDDC4;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ddda8
	if (ctx.cr6.eq) goto loc_822DDDA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DDDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822dddb4
	goto loc_822DDDB4;
loc_822DDDA8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822DDDB4:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x822dddc8
	goto loc_822DDDC8;
loc_822DDDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DDDC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E1468) {
	REX_FUNC_PROLOGUE();
	// b 0x822e1378
	sub_822E1378(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E15A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822a18e0
	ctx.lr = 0x822E15C0;
	sub_822A18E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822e15dc
	if (ctx.cr0.lt) goto loc_822E15DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822e15dc
	if (!ctx.cr6.eq) goto loc_822E15DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822E15DC:
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

DEFINE_REX_FUNC(sub_822E3060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x822E3068;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822dc2d0
	ctx.lr = 0x822E3080;
	sub_822DC2D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822e30b0
	if (ctx.cr0.eq) goto loc_822E30B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dc310
	ctx.lr = 0x822E3090;
	sub_822DC310(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,11828
	ctx.r10.s64 = ctx.r10.s64 + 11828;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822e30b4
	goto loc_822E30B4;
loc_822E30B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E30B4:
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// lwz r11,328(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r3,328(r30)
	REX_STORE_U32(ctx.r30.u32 + 328, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E8360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x822E8368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e8398
	if (!ctx.cr6.eq) goto loc_822E8398;
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// bl 0x822e7b40
	ctx.lr = 0x822E838C;
	sub_822E7B40(ctx, base);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x82280be8
	ctx.lr = 0x822E8398;
	sub_82280BE8(ctx, base);
loc_822E8398:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822e8408
	if (ctx.cr6.eq) goto loc_822E8408;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e83e0
	if (ctx.cr6.eq) goto loc_822E83E0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822e8408
	if (!ctx.cr6.eq) goto loc_822E8408;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwimi r4,r30,0,29,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07) | (ctx.r4.u64 & 0xF8);
	// bl 0x8227aed0
	ctx.lr = 0x822E83CC;
	sub_8227AED0(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8408
	if (ctx.cr6.eq) goto loc_822E8408;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822e8404
	goto loc_822E8404;
loc_822E83E0:
	// stw r30,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r4,r11,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF8;
	// bl 0x8227aed0
	ctx.lr = 0x822E83F4;
	sub_8227AED0(ctx, base);
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e8408
	if (ctx.cr6.eq) goto loc_822E8408;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822E8404:
	// bl 0x82391ad8
	ctx.lr = 0x822E8408;
	sub_82391AD8(ctx, base);
loc_822E8408:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822EDC98) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822EDCB8;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822edd14
	if (ctx.cr0.lt) goto loc_822EDD14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24236
	ctx.r4.s64 = ctx.r11.s64 + 24236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822EDCD4;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822edd14
	if (ctx.cr0.lt) goto loc_822EDD14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EDCF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822edd14
	if (ctx.cr0.lt) goto loc_822EDD14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,24160
	ctx.r4.s64 = ctx.r11.s64 + 24160;
	// bl 0x822ecf00
	ctx.lr = 0x822EDD08;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822edd14
	if (ctx.cr0.lt) goto loc_822EDD14;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EDD14:
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

DEFINE_REX_FUNC(sub_822F1A18) {
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
	// addi r4,r10,26148
	ctx.r4.s64 = ctx.r10.s64 + 26148;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F1A3C;
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

DEFINE_REX_FUNC(sub_822F1DF8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,24884
	ctx.r4.s64 = ctx.r11.s64 + 24884;
	// bl 0x822ecf00
	ctx.lr = 0x822F1E14;
	sub_822ECF00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F3468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x822F3470;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,0
	ctx.r17.s64 = 0;
	// stw r4,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r9,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r9.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r10,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// stw r20,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r20.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// beq cr6,0x822f3544
	if (ctx.cr6.eq) goto loc_822F3544;
loc_822F34B0:
	// lwz r8,788(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x822f34c0
	if (ctx.cr6.eq) goto loc_822F34C0;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_822F34C0:
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// li r7,32
	ctx.r7.s64 = 32;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r31,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// rlwinm r4,r11,0,8,3
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// bl 0x822f3348
	ctx.lr = 0x822F34EC;
	sub_822F3348(ctx, base);
	// lwzx r11,r31,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x822f3538
	if (!ctx.cr6.eq) goto loc_822F3538;
	// lwzx r11,r31,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f3538
	if (!ctx.cr0.eq) goto loc_822F3538;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8229ff20
	ctx.lr = 0x822F3528;
	sub_8229FF20(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e2160
	ctx.lr = 0x822F3538;
	sub_822E2160(ctx, base);
loc_822F3538:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x822f34b0
	if (ctx.cr6.lt) goto loc_822F34B0;
loc_822F3544:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r17,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r30,r15,-1
	ctx.r30.s64 = ctx.r15.s64 + -1;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r19,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// lis r18,228
	ctx.r18.s64 = 14942208;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_822F3568:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f3680
	if (ctx.cr6.eq) goto loc_822F3680;
	// addi r27,r1,200
	ctx.r27.s64 = ctx.r1.s64 + 200;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwzx r25,r29,r27
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// lwzx r24,r29,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// subf r26,r16,r20
	ctx.r26.u64 = ctx.r20.u64 - ctx.r16.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_822F359C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f35b0
	if (!ctx.cr6.eq) goto loc_822F35B0;
	// lwzx r11,r7,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822f35c4
	if (!ctx.cr6.eq) goto loc_822F35C4;
loc_822F35B0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x822f3658
	if (!ctx.cr6.eq) goto loc_822F3658;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3658
	if (ctx.cr0.eq) goto loc_822F3658;
loc_822F35C4:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x822f3658
	if (!ctx.cr6.lt) goto loc_822F3658;
	// addi r4,r6,32
	ctx.r4.s64 = ctx.r6.s64 + 32;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// subf r31,r5,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r5.u64;
loc_822F35D8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f35f0
	if (!ctx.cr6.eq) goto loc_822F35F0;
	// lwzx r11,r3,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r20.u32);
	// lwzx r10,r26,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f360c
	if (ctx.cr6.eq) goto loc_822F360C;
loc_822F35F0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x822f3644
	if (!ctx.cr6.eq) goto loc_822F3644;
	// lwzx r11,r3,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r16.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f3644
	if (!ctx.cr0.eq) goto loc_822F3644;
loc_822F360C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822F3614:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r18,0(r10)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r18,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r18.u64;
	// beq 0x822f3638
	if (ctx.cr0.eq) goto loc_822F3638;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f3614
	if (ctx.cr6.eq) goto loc_822F3614;
loc_822F3638:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f3644
	if (!ctx.cr0.eq) goto loc_822F3644;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_822F3644:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x822f35d8
	if (!ctx.cr0.eq) goto loc_822F35D8;
	// lis r18,228
	ctx.r18.s64 = 14942208;
loc_822F3658:
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x822f3664
	if (!ctx.cr6.gt) goto loc_822F3664;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_822F3664:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x822f359c
	if (!ctx.cr0.eq) goto loc_822F359C;
	// stwx r25,r29,r27
	REX_STORE_U32(ctx.r29.u32 + ctx.r27.u32, ctx.r25.u32);
loc_822F3680:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x822f3568
	if (ctx.cr6.lt) goto loc_822F3568;
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,200(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822f36a4
	if (!ctx.cr6.gt) goto loc_822F36A4;
	// stw r19,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r19.u32);
	// stw r17,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
loc_822F36A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// addi r29,r11,24160
	ctx.r29.s64 = ctx.r11.s64 + 24160;
	// stw r29,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// beq cr6,0x822f37f4
	if (ctx.cr6.eq) goto loc_822F37F4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_822F36C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822f36f4
	if (ctx.cr6.eq) goto loc_822F36F4;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822f36f4
	if (ctx.cr6.eq) goto loc_822F36F4;
	// lis r8,2816
	ctx.r8.s64 = 184549376;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f36f8
	if (!ctx.cr6.eq) goto loc_822F36F8;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// b 0x822f36f8
	goto loc_822F36F8;
loc_822F36F4:
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
loc_822F36F8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822f36c0
	if (!ctx.cr0.eq) goto loc_822F36C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r11,24492
	ctx.r31.s64 = ctx.r11.s64 + 24492;
	// beq cr6,0x822f3780
	if (ctx.cr6.eq) goto loc_822F3780;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F371C;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,24420
	ctx.r4.s64 = ctx.r11.s64 + 24420;
	// bl 0x822ecf00
	ctx.lr = 0x822F3734;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F3764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F3778;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
loc_822F3780:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x822f37f4
	if (ctx.cr6.eq) goto loc_822F37F4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F3790;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r4,r11,24460
	ctx.r4.s64 = ctx.r11.s64 + 24460;
	// bl 0x822ecf00
	ctx.lr = 0x822F37A8;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F37D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F37EC;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
loc_822F37F4:
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stw r17,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r17.u32);
	// li r24,2
	ctx.r24.s64 = 2;
	// stw r17,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r25,r1,192
	ctx.r25.s64 = ctx.r1.s64 + 192;
	// stw r19,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r19.u32);
	// stw r24,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
loc_822F3818:
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r17,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r17.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// beq cr6,0x822f392c
	if (ctx.cr6.eq) goto loc_822F392C;
	// lwz r26,0(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// subf r27,r16,r20
	ctx.r27.u64 = ctx.r20.u64 - ctx.r16.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_822F384C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822f3860
	if (!ctx.cr6.eq) goto loc_822F3860;
	// lwzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822f3874
	if (!ctx.cr6.eq) goto loc_822F3874;
loc_822F3860:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x822f3914
	if (!ctx.cr6.eq) goto loc_822F3914;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3914
	if (ctx.cr0.eq) goto loc_822F3914;
loc_822F3874:
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x822f3914
	if (!ctx.cr6.lt) goto loc_822F3914;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r3,r6,32
	ctx.r3.s64 = ctx.r6.s64 + 32;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// subf r29,r16,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r16.u64;
	// subf r31,r5,r15
	ctx.r31.u64 = ctx.r15.u64 - ctx.r5.u64;
loc_822F3890:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x822f38a8
	if (!ctx.cr6.eq) goto loc_822F38A8;
	// lwzx r10,r4,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r20.u32);
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f38c4
	if (ctx.cr6.eq) goto loc_822F38C4;
loc_822F38A8:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x822f3904
	if (!ctx.cr6.eq) goto loc_822F3904;
	// lwzx r10,r4,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f3904
	if (!ctx.cr0.eq) goto loc_822F3904;
loc_822F38C4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_822F38CC:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r23,0(r9)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r23,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r23.u64;
	// beq 0x822f38f0
	if (ctx.cr0.eq) goto loc_822F38F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822f38cc
	if (ctx.cr6.eq) goto loc_822F38CC;
loc_822F38F0:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f3904
	if (!ctx.cr0.eq) goto loc_822F3904;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stwx r19,r4,r10
	REX_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.r19.u32);
	// stwx r19,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r19.u32);
loc_822F3904:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822f3890
	if (!ctx.cr0.eq) goto loc_822F3890;
loc_822F3914:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// bne 0x822f384c
	if (!ctx.cr0.eq) goto loc_822F384C;
loc_822F392C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x822f39a0
	if (ctx.cr6.eq) goto loc_822F39A0;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r6,0(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// subf r5,r16,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r16.u64;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// subf r7,r16,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r16.u64;
	// subf r10,r16,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r16.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
loc_822F3954:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x822f3968
	if (!ctx.cr6.eq) goto loc_822F3968;
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822f397c
	if (!ctx.cr6.eq) goto loc_822F397C;
loc_822F3968:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x822f3994
	if (!ctx.cr6.eq) goto loc_822F3994;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822f3994
	if (ctx.cr0.eq) goto loc_822F3994;
loc_822F397C:
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f3994
	if (!ctx.cr6.eq) goto loc_822F3994;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_822F3994:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822f3954
	if (!ctx.cr0.eq) goto loc_822F3954;
loc_822F39A0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x822f3818
	if (!ctx.cr0.eq) goto loc_822F3818;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f3a2c
	if (ctx.cr6.eq) goto loc_822F3A2C;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// subfic r31,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r31.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
loc_822F39C4:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// bge cr6,0x822f3a1c
	if (!ctx.cr6.lt) goto loc_822F3A1C;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// subf r3,r4,r15
	ctx.r3.u64 = ctx.r15.u64 - ctx.r4.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r9
	ctx.r11.u64 = ctx.r31.u64 + ctx.r9.u64;
loc_822F39DC:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822f3a10
	if (!ctx.cr6.lt) goto loc_822F3A10;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stwx r6,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r5,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
loc_822F3A10:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x822f39dc
	if (!ctx.cr0.eq) goto loc_822F39DC;
loc_822F3A1C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x822f39c4
	if (!ctx.cr0.eq) goto loc_822F39C4;
loc_822F3A2C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x822f3a44
	if (ctx.cr6.eq) goto loc_822F3A44;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r5,r15,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x825d7298
	ctx.lr = 0x822F3A44;
	sub_825D7298(ctx, base);
loc_822F3A44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r18,r1,192
	ctx.r18.s64 = ctx.r1.s64 + 192;
	// addi r19,r11,24452
	ctx.r19.s64 = ctx.r11.s64 + 24452;
	// addi r22,r10,24412
	ctx.r22.s64 = ctx.r10.s64 + 24412;
	// addi r23,r9,24236
	ctx.r23.s64 = ctx.r9.s64 + 24236;
	// addi r21,r8,28356
	ctx.r21.s64 = ctx.r8.s64 + 28356;
	// addi r20,r7,28344
	ctx.r20.s64 = ctx.r7.s64 + 28344;
loc_822F3A70:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x822f3e8c
	if (ctx.cr6.eq) goto loc_822F3E8C;
	// lwz r24,0(r18)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r1,208
	ctx.r26.s64 = ctx.r1.s64 + 208;
loc_822F3A84:
	// lwz r29,732(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f3aa8
	if (!ctx.cr6.eq) goto loc_822F3AA8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f3ac4
	if (ctx.cr6.eq) goto loc_822F3AC4;
loc_822F3AA8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x822f3ae4
	if (!ctx.cr6.eq) goto loc_822F3AE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm. r10,r10,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f3ae4
	if (!ctx.cr0.eq) goto loc_822F3AE4;
loc_822F3AC4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e2160
	ctx.lr = 0x822F3AE0;
	sub_822E2160(ctx, base);
	// b 0x822f3e34
	goto loc_822F3E34;
loc_822F3AE4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822f3bfc
	if (ctx.cr6.eq) goto loc_822F3BFC;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_822F3AF4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f3b1c
	if (!ctx.cr6.eq) goto loc_822F3B1C;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r8,r8,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f3b48
	if (ctx.cr6.eq) goto loc_822F3B48;
loc_822F3B1C:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x822f3b8c
	if (!ctx.cr6.eq) goto loc_822F3B8C;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r16
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// lwzx r8,r8,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwinm. r9,r9,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f3b8c
	if (!ctx.cr0.eq) goto loc_822F3B8C;
loc_822F3B48:
	// rlwinm r8,r11,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_822F3B60:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822f3b84
	if (ctx.cr0.eq) goto loc_822F3B84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f3b60
	if (ctx.cr6.eq) goto loc_822F3B60;
loc_822F3B84:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822f3ba0
	if (ctx.cr0.eq) goto loc_822F3BA0;
loc_822F3B8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822f3af4
	if (ctx.cr6.lt) goto loc_822F3AF4;
	// b 0x822f3bf4
	goto loc_822F3BF4;
loc_822F3BA0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e2160
	ctx.lr = 0x822F3BD0;
	sub_822E2160(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stwx r8,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
loc_822F3BF4:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822f3e34
	if (ctx.cr6.lt) goto loc_822F3E34;
loc_822F3BFC:
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// beq cr6,0x822f3cd8
	if (ctx.cr6.eq) goto loc_822F3CD8;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x822f3c24
	if (!ctx.cr6.eq) goto loc_822F3C24;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f3cd8
	if (ctx.cr6.eq) goto loc_822F3CD8;
loc_822F3C24:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f3c40
	if (!ctx.cr6.eq) goto loc_822F3C40;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3cd8
	if (ctx.cr0.eq) goto loc_822F3CD8;
loc_822F3C40:
	// li r27,0
	ctx.r27.s64 = 0;
loc_822F3C44:
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r9,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x822f3c74
	if (!ctx.cr6.eq) goto loc_822F3C74;
	// lwzx r11,r11,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f3c78
	if (ctx.cr0.eq) goto loc_822F3C78;
loc_822F3C74:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_822F3C78:
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229ff20
	ctx.lr = 0x822F3C94;
	sub_8229FF20(ctx, base);
loc_822F3C94:
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x822f3d08
	if (!ctx.cr6.eq) goto loc_822F3D08;
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f3d08
	if (!ctx.cr0.eq) goto loc_822F3D08;
	// lwz r11,700(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f3cd0
	if (ctx.cr6.eq) goto loc_822F3CD0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x822f3d08
	if (!ctx.cr6.eq) goto loc_822F3D08;
loc_822F3CD0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x822f3d0c
	goto loc_822F3D0C;
loc_822F3CD8:
	// lwz r5,700(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 700);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f3c44
	if (ctx.cr6.eq) goto loc_822F3C44;
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e2160
	ctx.lr = 0x822F3D04;
	sub_822E2160(ctx, base);
	// b 0x822f3c94
	goto loc_822F3C94;
loc_822F3D08:
	// lwz r27,1816(r14)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r14.u32 + 1816);
loc_822F3D0C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822f3e34
	if (ctx.cr6.eq) goto loc_822F3E34;
loc_822F3D18:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecfd0
	ctx.lr = 0x822F3D20;
	sub_822ECFD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8229ff20
	ctx.lr = 0x822F3D44;
	sub_8229FF20(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8229ff20
	ctx.lr = 0x822F3D5C;
	sub_8229FF20(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822ecf00
	ctx.lr = 0x822F3D6C;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822f3db8
	if (!ctx.cr6.eq) goto loc_822F3DB8;
	// lwz r11,732(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 732);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r10,388(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 388);
	// rlwinm r8,r11,10,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// rlwinm r7,r11,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// rlwinm r6,r11,14,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// rlwinm r5,r11,16,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F3DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// b 0x822f3e14
	goto loc_822F3E14;
loc_822F3DB8:
	// lwzx r11,r28,r16
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f3dd8
	if (!ctx.cr6.eq) goto loc_822F3DD8;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// b 0x822f3df8
	goto loc_822F3DF8;
loc_822F3DD8:
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// bne cr6,0x822f3df4
	if (!ctx.cr6.eq) goto loc_822F3DF4;
	// lwz r11,456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x822f3dfc
	goto loc_822F3DFC;
loc_822F3DF4:
	// lwz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
loc_822F3DF8:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_822F3DFC:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F3E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f3f00
	if (ctx.cr6.lt) goto loc_822F3F00;
loc_822F3E14:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x822ecf00
	ctx.lr = 0x822F3E20;
	sub_822ECF00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822f3f00
	if (ctx.cr0.lt) goto loc_822F3F00;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822f3d18
	if (ctx.cr6.lt) goto loc_822F3D18;
loc_822F3E34:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r15
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x822f3a84
	if (ctx.cr6.lt) goto loc_822F3A84;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_822F3E4C:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e2160
	ctx.lr = 0x822F3E74;
	sub_822E2160(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne 0x822f3e4c
	if (!ctx.cr0.eq) goto loc_822F3E4C;
loc_822F3E8C:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// blt cr6,0x822f3a70
	if (ctx.cr6.lt) goto loc_822F3A70;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r4,748(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 748);
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822f3ebc
	if (ctx.cr6.gt) goto loc_822F3EBC;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,740(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 740);
	// bl 0x822e2160
	ctx.lr = 0x822F3EBC;
	sub_822E2160(ctx, base);
loc_822F3EBC:
	// cmplwi cr6,r15,1
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 1, ctx.xer);
	// ble cr6,0x822f3edc
	if (!ctx.cr6.gt) goto loc_822F3EDC;
	// lwz r4,764(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 764);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822f3edc
	if (ctx.cr6.gt) goto loc_822F3EDC;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lwz r3,756(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 756);
	// bl 0x822e2160
	ctx.lr = 0x822F3EDC;
	sub_822E2160(ctx, base);
loc_822F3EDC:
	// cmplwi cr6,r15,2
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 2, ctx.xer);
	// ble cr6,0x822f3efc
	if (!ctx.cr6.gt) goto loc_822F3EFC;
	// lwz r4,780(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 780);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x822f3efc
	if (ctx.cr6.gt) goto loc_822F3EFC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r3,772(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 772);
	// bl 0x822e2160
	ctx.lr = 0x822F3EFC;
	sub_822E2160(ctx, base);
loc_822F3EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F3F00:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823429E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,24656
	ctx.r11.s64 = 1615855616;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342a34
	if (ctx.cr6.eq) goto loc_82342A34;
	// lis r11,24736
	ctx.r11.s64 = 1621098496;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342a34
	if (ctx.cr6.eq) goto loc_82342A34;
	// lis r11,24576
	ctx.r11.s64 = 1610612736;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342a34
	if (ctx.cr6.eq) goto loc_82342A34;
	// lis r11,29408
	ctx.r11.s64 = 1927282688;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342a34
	if (ctx.cr6.eq) goto loc_82342A34;
	// lis r11,24688
	ctx.r11.s64 = 1617952768;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342a34
	if (ctx.cr6.eq) goto loc_82342A34;
	// lis r11,24816
	ctx.r11.s64 = 1626341376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82342A34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343B78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82343B80;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// lwz r26,12(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8230f988
	ctx.lr = 0x82343B98;
	sub_8230F988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82343bac
	if (ctx.cr0.eq) goto loc_82343BAC;
	// bl 0x8230f290
	ctx.lr = 0x82343BA4;
	sub_8230F290(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82343bb0
	goto loc_82343BB0;
loc_82343BAC:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82343BB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82343bc4
	if (!ctx.cr6.eq) goto loc_82343BC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82343dc0
	goto loc_82343DC0;
loc_82343BC4:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,4
	ctx.r4.u64 = ctx.r4.u64 | 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230fa20
	ctx.lr = 0x82343BE0;
	sub_8230FA20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82343c04
	if (!ctx.cr0.lt) goto loc_82343C04;
loc_82343BE8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82343BEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ddad0
	ctx.lr = 0x82343BF4;
	sub_822DDAD0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8230f9e0
	ctx.lr = 0x82343BFC;
	sub_8230F9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82343dc0
	goto loc_82343DC0;
loc_82343C04:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82343c8c
	if (!ctx.cr6.gt) goto loc_82343C8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82343C20:
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82343c78
	if (!ctx.cr6.eq) goto loc_82343C78;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r28,108(r8)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
loc_82343C78:
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82343c20
	if (ctx.cr6.lt) goto loc_82343C20;
loc_82343C8C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f31,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
loc_82343C9C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82310618
	ctx.lr = 0x82343CB4;
	sub_82310618(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82343dcc
	if (ctx.cr6.eq) goto loc_82343DCC;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r28,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r28.u32);
	// blt cr6,0x82343c9c
	if (ctx.cr6.lt) goto loc_82343C9C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823104a8
	ctx.lr = 0x82343D08;
	sub_823104A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82343be8
	if (ctx.cr0.lt) goto loc_82343BE8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82343dbc
	if (ctx.cr6.eq) goto loc_82343DBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82343D20:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r7,r11,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82343db0
	if (ctx.cr6.eq) goto loc_82343DB0;
	// lwz r6,12(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82343db0
	if (ctx.cr6.eq) goto loc_82343DB0;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,132(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82343db0
	if (!ctx.cr6.eq) goto loc_82343DB0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82343db0
	if (ctx.cr0.eq) goto loc_82343DB0;
loc_82343D6C:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82343D74:
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwzx r31,r10,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82343d98
	if (!ctx.cr6.eq) goto loc_82343D98;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// stwx r3,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
loc_82343D98:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82343d74
	if (ctx.cr6.lt) goto loc_82343D74;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82343d6c
	if (ctx.cr6.lt) goto loc_82343D6C;
loc_82343DB0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82343d20
	if (!ctx.cr0.eq) goto loc_82343D20;
loc_82343DBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82343DC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_82343DCC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82343bec
	goto loc_82343BEC;
}

DEFINE_REX_FUNC(sub_82352608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82352610;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235263C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8235266c
	if (ctx.cr6.eq) goto loc_8235266C;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8235266C:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x82352690
	if (!ctx.cr6.eq) goto loc_82352690;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82352744
	if (!ctx.cr6.eq) goto loc_82352744;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8235273c
	goto loc_8235273C;
loc_82352690:
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bne cr6,0x823526c4
	if (!ctx.cr6.eq) goto loc_823526C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352744
	if (!ctx.cr6.eq) goto loc_82352744;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8235273c
	if (ctx.cr6.eq) goto loc_8235273C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823526f0
	goto loc_823526F0;
loc_823526C4:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bne cr6,0x823526f8
	if (!ctx.cr6.eq) goto loc_823526F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82352744
	if (!ctx.cr6.eq) goto loc_82352744;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8235273c
	if (ctx.cr6.eq) goto loc_8235273C;
loc_823526F0:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8235273c
	goto loc_8235273C;
loc_823526F8:
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 11, ctx.xer);
	// bne cr6,0x82352714
	if (!ctx.cr6.eq) goto loc_82352714;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82352744
	if (!ctx.cr6.lt) goto loc_82352744;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82352738
	goto loc_82352738;
loc_82352714:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bne cr6,0x82352730
	if (!ctx.cr6.eq) goto loc_82352730;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82352744
	if (!ctx.cr6.lt) goto loc_82352744;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82352738
	goto loc_82352738;
loc_82352730:
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// bne cr6,0x82352744
	if (!ctx.cr6.eq) goto loc_82352744;
loc_82352738:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8235273C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8235274c
	goto loc_8235274C;
loc_82352744:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8235274C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823590C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x823590C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// blt cr6,0x82359198
	if (ctx.cr6.lt) goto loc_82359198;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x82359198
	if (!ctx.cr6.eq) goto loc_82359198;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// bne cr6,0x82359198
	if (!ctx.cr6.eq) goto loc_82359198;
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// bne cr6,0x82359198
	if (!ctx.cr6.eq) goto loc_82359198;
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,98
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 98, ctx.xer);
	// bne cr6,0x82359198
	if (!ctx.cr6.eq) goto loc_82359198;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,101
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 101, ctx.xer);
	// bne cr6,0x82359198
	if (!ctx.cr6.eq) goto loc_82359198;
	// lbz r8,9(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// li r30,76
	ctx.r30.s64 = 76;
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// li r4,1
	ctx.r4.s64 = 1;
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r29,11(r11)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r29,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r29.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r30.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82359184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r29,300(r31)
	REX_STORE_U8(ctx.r31.u32 + 300, ctx.r29.u8);
	// stw r4,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_82359198:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,78
	ctx.r10.s64 = 78;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823591C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235B800) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8235B808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1492(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,1472(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1472);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8235b8c8
	if (!ctx.cr6.lt) goto loc_8235B8C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r29,r31,1380
	ctx.r29.s64 = ctx.r31.s64 + 1380;
	// addi r30,r11,20744
	ctx.r30.s64 = ctx.r11.s64 + 20744;
loc_8235B82C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368290
	ctx.lr = 0x8235B838;
	sub_82368290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8235b858
	if (ctx.cr0.eq) goto loc_8235B858;
	// lwz r4,1404(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8235b854
	if (!ctx.cr6.eq) goto loc_8235B854;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8235B854:
	// bl 0x82357038
	ctx.lr = 0x8235B858;
	sub_82357038(ctx, base);
loc_8235B858:
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235b888
	if (!ctx.cr6.eq) goto loc_8235B888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1440(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r4,1436(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x823672b0
	ctx.lr = 0x8235B874;
	sub_823672B0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// b 0x8235b82c
	goto loc_8235B82C;
loc_8235B888:
	// lwz r11,1396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r10,1440(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235b8b8
	if (ctx.cr6.eq) goto loc_8235B8B8;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823672b0
	ctx.lr = 0x8235B8A8;
	sub_823672B0(ctx, base);
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r10,1440(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,1392(r31)
	REX_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r10,1396(r31)
	REX_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
loc_8235B8B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1576(r31)
	REX_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// bl 0x8235be20
	ctx.lr = 0x8235B8C8;
	sub_8235BE20(ctx, base);
loc_8235B8C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823600E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x8235fe08
	ctx.lr = 0x82360104;
	sub_8235FE08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823601a0
	if (ctx.cr0.lt) goto loc_823601A0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-288(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -288);
	ctx.f0.f64 = double(temp.f32);
loc_8236012C:
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x8236012c
	if (!ctx.cr0.eq) goto loc_8236012C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,140
	ctx.r9.s64 = ctx.r31.s64 + 140;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82360170:
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82360170
	if (!ctx.cr0.eq) goto loc_82360170;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823601A0:
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

DEFINE_REX_FUNC(sub_82363408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82363410;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823634d8
	if (!ctx.cr6.gt) goto loc_823634D8;
	// addi r28,r31,336
	ctx.r28.s64 = ctx.r31.s64 + 336;
	// li r26,52
	ctx.r26.s64 = 52;
loc_82363430:
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823634c4
	if (!ctx.cr6.eq) goto loc_823634C4;
	// lwz r30,16(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82363468
	if (ctx.cr6.lt) goto loc_82363468;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x82363468
	if (!ctx.cr6.lt) goto loc_82363468;
	// addi r11,r30,42
	ctx.r11.s64 = ctx.r30.s64 + 42;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8236348c
	if (!ctx.cr6.eq) goto loc_8236348C;
loc_82363468:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r26.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236348C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236348C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823634A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,42
	ctx.r9.s64 = ctx.r30.s64 + 42;
	// li r5,132
	ctx.r5.s64 = 132;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x825d6e10
	ctx.lr = 0x823634C0;
	sub_825D6E10(ctx, base);
	// stw r30,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r30.u32);
loc_823634C4:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 332);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82363430
	if (ctx.cr6.lt) goto loc_82363430;
loc_823634D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823665E0) {
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
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82365428
	ctx.lr = 0x823665FC;
	sub_82365428(ctx, base);
	// li r4,217
	ctx.r4.s64 = 217;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365428
	ctx.lr = 0x82366608;
	sub_82365428(ctx, base);
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

DEFINE_REX_FUNC(sub_82367640) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x82367648;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r23,4(r4)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// ori r19,r10,65535
	ctx.r19.u64 = ctx.r10.u64 | 65535;
	// lis r8,63
	ctx.r8.s64 = 4128768;
	// lbz r9,1557(r25)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r25.u32 + 1557);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// lwz r31,1500(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 1500);
	// ori r22,r8,65472
	ctx.r22.u64 = ctx.r8.u64 | 65472;
	// lwz r30,1496(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 1496);
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r20,1665(r25)
	ctx.r20.u64 = REX_LOAD_U8(ctx.r25.u32 + 1665);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// addze r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r29.s64 = temp.s64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// beq 0x82367764
	if (ctx.cr0.eq) goto loc_82367764;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// beq cr6,0x82367764
	if (ctx.cr6.eq) goto loc_82367764;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823676d4
	if (ctx.cr6.eq) goto loc_823676D4;
loc_823676B4:
	// lbzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// blt cr6,0x823676c4
	if (ctx.cr6.lt) goto loc_823676C4;
	// subfic r9,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
loc_823676C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823676b4
	if (ctx.cr6.lt) goto loc_823676B4;
loc_823676D4:
	// lbz r10,1664(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82367760
	if (!ctx.cr6.eq) goto loc_82367760;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367730
	if (!ctx.cr6.gt) goto loc_82367730;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823676FC:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82367720
	if (!ctx.cr0.eq) goto loc_82367720;
	// lwz r6,1672(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367720:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x823676fc
	if (ctx.cr6.lt) goto loc_823676FC;
loc_82367730:
	// lwz r11,1680(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367750
	if (!ctx.cr6.gt) goto loc_82367750;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82367760
	goto loc_82367760;
loc_82367750:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82367760:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82367764:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bne cr6,0x823677dc
	if (!ctx.cr6.eq) goto loc_823677DC;
	// lwz r10,1504(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1504);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x823677a8
	if (ctx.cr6.eq) goto loc_823677A8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82367790:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82367790
	if (!ctx.cr0.eq) goto loc_82367790;
loc_823677A8:
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823679ac
	if (!ctx.cr6.lt) goto loc_823679AC;
	// subf r9,r9,r23
	ctx.r9.u64 = ctx.r23.u64 - ctx.r9.u64;
loc_823677B4:
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x823677b4
	if (!ctx.cr0.eq) goto loc_823677B4;
	// b 0x823679ac
	goto loc_823679AC;
loc_823677DC:
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823679b0
	if (ctx.cr0.eq) goto loc_823679B0;
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367878
	if (!ctx.cr6.eq) goto loc_82367878;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367848
	if (!ctx.cr6.gt) goto loc_82367848;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367814:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82367838
	if (!ctx.cr6.eq) goto loc_82367838;
	// lwz r6,1676(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367838:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367814
	if (ctx.cr6.lt) goto loc_82367814;
loc_82367848:
	// lwz r11,1684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367868
	if (!ctx.cr6.gt) goto loc_82367868;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x82367878
	goto loc_82367878;
loc_82367868:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82367878:
	// lwz r11,1504(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1504);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82367908
	if (ctx.cr6.eq) goto loc_82367908;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8236789C:
	// lbz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// stb r27,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// blt cr6,0x823678b4
	if (ctx.cr6.lt) goto loc_823678B4;
	// subfic r7,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r7.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
loc_823678B4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x8236789c
	if (!ctx.cr0.eq) goto loc_8236789C;
	// b 0x82367908
	goto loc_82367908;
loc_823678CC:
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x823678ec
	if (ctx.cr6.lt) goto loc_823678EC;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_823678EC:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82367914
	if (ctx.cr6.gt) goto loc_82367914;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82367908:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823678cc
	if (ctx.cr6.lt) goto loc_823678CC;
loc_82367914:
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823679a0
	if (!ctx.cr6.eq) goto loc_823679A0;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r5,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367970
	if (!ctx.cr6.gt) goto loc_82367970;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236793C:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82367960
	if (!ctx.cr6.eq) goto loc_82367960;
	// lwz r6,1676(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367960:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x8236793c
	if (ctx.cr6.lt) goto loc_8236793C;
loc_82367970:
	// lwz r11,1684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367990
	if (!ctx.cr6.gt) goto loc_82367990;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x823679a0
	goto loc_823679A0;
loc_82367990:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823679A0:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x823679b0
	if (!ctx.cr6.lt) goto loc_823679B0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_823679AC:
	// lwz r21,1504(r25)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 1504);
loc_823679B0:
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// bne cr6,0x82367a00
	if (!ctx.cr6.eq) goto loc_82367A00;
	// lwz r10,1508(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1508);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82367b98
	if (ctx.cr6.eq) goto loc_82367B98;
	// subf r10,r31,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r31.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_823679D8:
	// lbzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// stb r7,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// blt cr6,0x823679d8
	if (ctx.cr6.lt) goto loc_823679D8;
	// b 0x82367b98
	goto loc_82367B98;
loc_82367A00:
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367b9c
	if (ctx.cr0.eq) goto loc_82367B9C;
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367a9c
	if (!ctx.cr6.eq) goto loc_82367A9C;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367a6c
	if (!ctx.cr6.gt) goto loc_82367A6C;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367A38:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82367a5c
	if (!ctx.cr6.eq) goto loc_82367A5C;
	// lwz r6,1676(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367A5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367a38
	if (ctx.cr6.lt) goto loc_82367A38;
loc_82367A6C:
	// lwz r11,1684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367a8c
	if (!ctx.cr6.gt) goto loc_82367A8C;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// b 0x82367a9c
	goto loc_82367A9C;
loc_82367A8C:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82367A9C:
	// lwz r10,1508(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1508);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82367b00
	if (ctx.cr6.eq) goto loc_82367B00;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_82367AC0:
	// lbzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82367ae8
	if (ctx.cr6.lt) goto loc_82367AE8;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_82367AE8:
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82367b00
	if (ctx.cr6.gt) goto loc_82367B00;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82367ac0
	if (ctx.cr6.lt) goto loc_82367AC0;
loc_82367B00:
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367b8c
	if (!ctx.cr6.eq) goto loc_82367B8C;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r10,r5,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367b5c
	if (!ctx.cr6.gt) goto loc_82367B5C;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367B28:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82367b4c
	if (!ctx.cr6.eq) goto loc_82367B4C;
	// lwz r6,1672(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367B4C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367b28
	if (ctx.cr6.lt) goto loc_82367B28;
loc_82367B5C:
	// lwz r11,1680(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367b7c
	if (!ctx.cr6.gt) goto loc_82367B7C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// b 0x82367b8c
	goto loc_82367B8C;
loc_82367B7C:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r10,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82367B8C:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82367b9c
	if (!ctx.cr6.lt) goto loc_82367B9C;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_82367B98:
	// lwz r21,1508(r25)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 1508);
loc_82367B9C:
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// bne cr6,0x82367c3c
	if (!ctx.cr6.eq) goto loc_82367C3C;
	// lwz r9,1512(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 1512);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// beq cr6,0x82367bf4
	if (ctx.cr6.eq) goto loc_82367BF4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82367BCC:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82367bcc
	if (!ctx.cr0.eq) goto loc_82367BCC;
loc_82367BF4:
	// cmplw cr6,r8,r23
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82367e30
	if (!ctx.cr6.lt) goto loc_82367E30;
	// subf r8,r8,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r8.u64;
loc_82367C00:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// srawi r6,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stb r6,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r6.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82367c00
	if (!ctx.cr0.eq) goto loc_82367C00;
	// b 0x82367e30
	goto loc_82367E30;
loc_82367C3C:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82367e34
	if (ctx.cr0.eq) goto loc_82367E34;
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367cd8
	if (!ctx.cr6.eq) goto loc_82367CD8;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367ca8
	if (!ctx.cr6.gt) goto loc_82367CA8;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367C74:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x82367c98
	if (!ctx.cr6.eq) goto loc_82367C98;
	// lwz r6,1676(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367C98:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367c74
	if (ctx.cr6.lt) goto loc_82367C74;
loc_82367CA8:
	// lwz r11,1684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367cc8
	if (!ctx.cr6.gt) goto loc_82367CC8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// b 0x82367cd8
	goto loc_82367CD8;
loc_82367CC8:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82367CD8:
	// lwz r11,1512(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1512);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x82367d90
	if (ctx.cr6.eq) goto loc_82367D90;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82367D00:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r27,0(r9)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// stb r27,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r27.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82367d30
	if (ctx.cr6.lt) goto loc_82367D30;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_82367D30:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne 0x82367d00
	if (!ctx.cr0.eq) goto loc_82367D00;
	// b 0x82367d90
	goto loc_82367D90;
loc_82367D40:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r27,0(r9)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82367d80
	if (ctx.cr6.lt) goto loc_82367D80;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_82367D80:
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82367d98
	if (ctx.cr6.gt) goto loc_82367D98;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82367D90:
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82367d40
	if (ctx.cr6.lt) goto loc_82367D40;
loc_82367D98:
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367e24
	if (!ctx.cr6.eq) goto loc_82367E24;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r10,r4,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367df4
	if (!ctx.cr6.gt) goto loc_82367DF4;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367DC0:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82367de4
	if (!ctx.cr0.eq) goto loc_82367DE4;
	// lwz r6,1672(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367DE4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367dc0
	if (ctx.cr6.lt) goto loc_82367DC0;
loc_82367DF4:
	// lwz r11,1680(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,6(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367e14
	if (!ctx.cr6.gt) goto loc_82367E14;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x82367e24
	goto loc_82367E24;
loc_82367E14:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82367E24:
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82367e34
	if (!ctx.cr6.lt) goto loc_82367E34;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
loc_82367E30:
	// lwz r21,1512(r25)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 1512);
loc_82367E34:
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// bne cr6,0x82367f2c
	if (!ctx.cr6.eq) goto loc_82367F2C;
	// lwz r10,1516(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1516);
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r10,1
	ctx.r30.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82367e8c
	if (ctx.cr6.eq) goto loc_82367E8C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82367E68:
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// stb r6,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82367e68
	if (!ctx.cr0.eq) goto loc_82367E68;
loc_82367E8C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82368178
	if (!ctx.cr6.lt) goto loc_82368178;
	// subf r28,r11,r8
	ctx.r28.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r29,r9,r23
	ctx.r29.u64 = ctx.r23.u64 - ctx.r9.u64;
loc_82367EA0:
	// lbzx r9,r28,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r5.u32);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf. r11,r9,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r9,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r9.u64;
	// neg r4,r11
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt 0x82367ec8
	if (ctx.cr0.lt) goto loc_82367EC8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82367EC8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// blt cr6,0x82367ed8
	if (ctx.cr6.lt) goto loc_82367ED8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82367ED8:
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82367ee4
	if (!ctx.cr0.lt) goto loc_82367EE4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82367EE4:
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82367efc
	if (ctx.cr6.gt) goto loc_82367EFC;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82367efc
	if (ctx.cr6.gt) goto loc_82367EFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82367f0c
	goto loc_82367F0C;
loc_82367EFC:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ble cr6,0x82367f0c
	if (!ctx.cr6.gt) goto loc_82367F0C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82367F0C:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82367ea0
	if (!ctx.cr0.eq) goto loc_82367EA0;
	// b 0x82368178
	goto loc_82368178;
loc_82367F2C:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236817c
	if (ctx.cr0.eq) goto loc_8236817C;
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82367fc8
	if (!ctx.cr6.eq) goto loc_82367FC8;
	// clrlwi r8,r24,16
	ctx.r8.u64 = ctx.r24.u32 & 0xFFFF;
	// rlwinm r10,r24,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82367f98
	if (!ctx.cr6.gt) goto loc_82367F98;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367F64:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82367f88
	if (!ctx.cr6.eq) goto loc_82367F88;
	// lwz r6,1676(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1676);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82367F88:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82367f64
	if (ctx.cr6.lt) goto loc_82367F64;
loc_82367F98:
	// lwz r11,1684(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1684);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82367fb8
	if (!ctx.cr6.gt) goto loc_82367FB8;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// b 0x82367fc8
	goto loc_82367FC8;
loc_82367FB8:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82367FC8:
	// lwz r11,1516(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1516);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// beq cr6,0x8236802c
	if (ctx.cr6.eq) goto loc_8236802C;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82367FF4:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82368020
	if (ctx.cr6.lt) goto loc_82368020;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_82368020:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bne 0x82367ff4
	if (!ctx.cr0.eq) goto loc_82367FF4;
loc_8236802C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x823680e4
	if (!ctx.cr6.lt) goto loc_823680E4;
	// subf r29,r10,r9
	ctx.r29.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8236803C:
	// lbzx r9,r29,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r3.u32);
	// lbz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf. r11,r9,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// blt 0x82368064
	if (ctx.cr0.lt) goto loc_82368064;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82368064:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// blt cr6,0x82368074
	if (ctx.cr6.lt) goto loc_82368074;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82368074:
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82368080
	if (!ctx.cr0.lt) goto loc_82368080;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_82368080:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82368098
	if (ctx.cr6.gt) goto loc_82368098;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82368098
	if (ctx.cr6.gt) goto loc_82368098;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x823680a8
	goto loc_823680A8;
loc_82368098:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// ble cr6,0x823680a8
	if (!ctx.cr6.gt) goto loc_823680A8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823680A8:
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x823680cc
	if (ctx.cr6.lt) goto loc_823680CC;
	// subfic r11,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r11.u64 = static_cast<uint64_t>(256) - ctx.r11.u64;
loc_823680CC:
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x823680e4
	if (ctx.cr6.gt) goto loc_823680E4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8236803c
	if (ctx.cr6.lt) goto loc_8236803C;
loc_823680E4:
	// lbz r11,1664(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1664);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82368170
	if (!ctx.cr6.eq) goto loc_82368170;
	// clrlwi r8,r26,16
	ctx.r8.u64 = ctx.r26.u32 & 0xFFFF;
	// rlwinm r10,r26,22,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 22) & 0x3FFFC0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82368140
	if (!ctx.cr6.gt) goto loc_82368140;
	// lwz r7,1668(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236810C:
	// lbzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x82368130
	if (!ctx.cr6.eq) goto loc_82368130;
	// lwz r6,1672(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 1672);
	// lhzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
loc_82368130:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x8236810c
	if (ctx.cr6.lt) goto loc_8236810C;
loc_82368140:
	// lwz r11,1680(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 1680);
	// lhz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x82368160
	if (!ctx.cr6.gt) goto loc_82368160;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x82368170
	goto loc_82368170;
loc_82368160:
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82368170:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8236817c
	if (!ctx.cr6.lt) goto loc_8236817C;
loc_82368178:
	// lwz r21,1516(r25)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r25.u32 + 1516);
loc_8236817C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82367560
	ctx.lr = 0x82368188;
	sub_82367560(ctx, base);
	// lbz r11,1665(r25)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r25.u32 + 1665);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823681c8
	if (ctx.cr0.eq) goto loc_823681C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// ble cr6,0x823681bc
	if (!ctx.cr6.gt) goto loc_823681BC;
loc_823681A0:
	// lwz r10,1668(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blt cr6,0x823681a0
	if (ctx.cr6.lt) goto loc_823681A0;
loc_823681BC:
	// lwz r10,1668(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 1668);
	// lbz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_823681C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823AE840) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x823AE848;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ae868
	if (!ctx.cr6.lt) goto loc_823AE868;
	// bl 0x825e6398
	ctx.lr = 0x823AE868;
	sub_825E6398(ctx, base);
loc_823AE868:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r31,r26,21
	ctx.r31.u64 = ctx.r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823ae890
	if (ctx.cr6.lt) goto loc_823AE890;
	// bl 0x825e6398
	ctx.lr = 0x823AE88C;
	sub_825E6398(ctx, base);
	// li r31,15
	ctx.r31.s64 = 15;
loc_823AE890:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x823ae8a8
	if (ctx.cr6.eq) goto loc_823AE8A8;
	// bl 0x825e6398
	ctx.lr = 0x823AE8A8;
	sub_825E6398(ctx, base);
loc_823AE8A8:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r9,28
	ctx.r9.s64 = 28;
	// rlwimi r31,r10,17,0,15
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B31D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x823B31D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823b32ac
	if (ctx.cr6.eq) goto loc_823B32AC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-10336
	ctx.r31.s64 = ctx.r11.s64 + -10336;
	// addi r30,r10,9792
	ctx.r30.s64 = ctx.r10.s64 + 9792;
	// bne cr6,0x823b3220
	if (!ctx.cr6.eq) goto loc_823B3220;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9984
	ctx.r5.s64 = ctx.r11.s64 + 9984;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B3220;
	sub_823AFBD8(ctx, base);
loc_823B3220:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b3248
	if (!ctx.cr6.eq) goto loc_823B3248;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9964
	ctx.r5.s64 = ctx.r11.s64 + 9964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B3248;
	sub_823AFBD8(ctx, base);
loc_823B3248:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3270
	if (ctx.cr6.eq) goto loc_823B3270;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9904
	ctx.r5.s64 = ctx.r11.s64 + 9904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B3270;
	sub_823AFBD8(ctx, base);
loc_823B3270:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b3298
	if (ctx.cr6.eq) goto loc_823B3298;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,9876
	ctx.r5.s64 = ctx.r11.s64 + 9876;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B3298;
	sub_823AFBD8(ctx, base);
loc_823B3298:
	// stw r29,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_823B32AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B4CB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x823B4CC0;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-10336
	ctx.r30.s64 = ctx.r11.s64 + -10336;
	// addi r29,r10,9792
	ctx.r29.s64 = ctx.r10.s64 + 9792;
	// bne cr6,0x823b4d00
	if (!ctx.cr6.eq) goto loc_823B4D00;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,10388
	ctx.r5.s64 = ctx.r11.s64 + 10388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B4D00;
	sub_823AFBD8(ctx, base);
loc_823B4D00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823b4d24
	if (!ctx.cr6.eq) goto loc_823B4D24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,10028
	ctx.r5.s64 = ctx.r11.s64 + 10028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B4D24;
	sub_823AFBD8(ctx, base);
loc_823B4D24:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823b4d4c
	if (!ctx.cr6.eq) goto loc_823B4D4C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,10400
	ctx.r5.s64 = ctx.r11.s64 + 10400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B4D4C;
	sub_823AFBD8(ctx, base);
loc_823B4D4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b32b8
	ctx.lr = 0x823B4D54;
	sub_823B32B8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B6E10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x823B6E18;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x823b6e30
	if (ctx.cr6.eq) goto loc_823B6E30;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x823b73e4
	if (!ctx.cr6.eq) goto loc_823B73E4;
loc_823B6E30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823b73e4
	if (ctx.cr6.eq) goto loc_823B73E4;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b73e4
	if (ctx.cr6.eq) goto loc_823B73E4;
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823afea8
	ctx.lr = 0x823B6E64;
	sub_823AFEA8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r27,r11,-10336
	ctx.r27.s64 = ctx.r11.s64 + -10336;
	// addi r26,r10,11768
	ctx.r26.s64 = ctx.r10.s64 + 11768;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b6e9c
	if (!ctx.cr6.eq) goto loc_823B6E9C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12408
	ctx.r5.s64 = ctx.r11.s64 + 12408;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,291
	ctx.r7.s64 = 291;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B6E9C;
	sub_823AFBD8(ctx, base);
loc_823B6E9C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b6f18
	if (ctx.cr6.eq) goto loc_823B6F18;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r11,18688
	ctx.r11.s64 = ctx.r11.s64 + 18688;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,12272
	ctx.r28.s64 = ctx.r11.s64 + 12272;
loc_823B6EC0:
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823b6f0c
	if (ctx.cr6.eq) goto loc_823B6F0C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823b6f0c
	if (ctx.cr6.eq) goto loc_823B6F0C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b6f0c
	if (ctx.cr6.eq) goto loc_823B6F0C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B6F0C;
	sub_823AFBD8(ctx, base);
loc_823B6F0C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x823b6ec0
	if (!ctx.cr0.eq) goto loc_823B6EC0;
loc_823B6F18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x823b6f40
	if (ctx.cr6.eq) goto loc_823B6F40;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12224
	ctx.r5.s64 = ctx.r11.s64 + 12224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B6F40;
	sub_823AFBD8(ctx, base);
loc_823B6F40:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b6f68
	if (!ctx.cr6.eq) goto loc_823B6F68;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12188
	ctx.r5.s64 = ctx.r11.s64 + 12188;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B6F68;
	sub_823AFBD8(ctx, base);
loc_823B6F68:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b6f90
	if (!ctx.cr6.eq) goto loc_823B6F90;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12156
	ctx.r5.s64 = ctx.r11.s64 + 12156;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,317
	ctx.r7.s64 = 317;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B6F90;
	sub_823AFBD8(ctx, base);
loc_823B6F90:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b73e4
	if (ctx.cr6.eq) goto loc_823B73E4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b73e4
	if (ctx.cr6.eq) goto loc_823B73E4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,312
	ctx.r4.s64 = 312;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6FB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823b73e4
	if (ctx.cr0.eq) goto loc_823B73E4;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// addi r10,r30,204
	ctx.r10.s64 = ctx.r30.s64 + 204;
	// addi r6,r11,20504
	ctx.r6.s64 = ctx.r11.s64 + 20504;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_823B6FD0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823B6FE0:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823b6fe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B6FE0;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r9,r6,100
	ctx.r9.s64 = ctx.r6.s64 + 100;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b6fd0
	if (ctx.cr6.lt) goto loc_823B6FD0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,304(r30)
	REX_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,308(r30)
	REX_STORE_U32(ctx.r30.u32 + 308, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6e10
	ctx.lr = 0x823B702C;
	sub_825D6E10(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246eeb8
	ctx.lr = 0x823B7044;
	sub_8246EEB8(ctx, base);
	// stw r3,112(r30)
	REX_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246f050
	ctx.lr = 0x823B7060;
	sub_8246F050(ctx, base);
	// stw r3,116(r30)
	REX_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246f1e8
	ctx.lr = 0x823B707C;
	sub_8246F1E8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// stw r3,120(r30)
	REX_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b70a8
	if (!ctx.cr6.eq) goto loc_823B70A8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12132
	ctx.r5.s64 = ctx.r11.s64 + 12132;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,382
	ctx.r7.s64 = 382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B70A8;
	sub_823AFBD8(ctx, base);
loc_823B70A8:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b70d0
	if (!ctx.cr6.eq) goto loc_823B70D0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12104
	ctx.r5.s64 = ctx.r11.s64 + 12104;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B70D0;
	sub_823AFBD8(ctx, base);
loc_823B70D0:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b70f8
	if (!ctx.cr6.eq) goto loc_823B70F8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12076
	ctx.r5.s64 = ctx.r11.s64 + 12076;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B70F8;
	sub_823AFBD8(ctx, base);
loc_823B70F8:
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246cd18
	ctx.lr = 0x823B710C;
	sub_8246CD18(ctx, base);
	// stw r3,92(r30)
	REX_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x823b6d88
	ctx.lr = 0x823B7118;
	sub_823B6D88(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823b3360
	ctx.lr = 0x823B712C;
	sub_823B3360(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x824713f8
	ctx.lr = 0x823B7170;
	sub_824713F8(ctx, base);
	// stw r3,200(r30)
	REX_STORE_U32(ctx.r30.u32 + 200, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,7584
	ctx.r11.s64 = ctx.r11.s64 + 7584;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,304(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 304);
	// lwz r28,120(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r25,116(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x82471060
	ctx.lr = 0x823B71C0;
	sub_82471060(ctx, base);
	// stw r3,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r6,112(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x823b80b8
	ctx.lr = 0x823B71DC;
	sub_823B80B8(ctx, base);
	// stw r3,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,200(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246e060
	ctx.lr = 0x823B7204;
	sub_8246E060(ctx, base);
	// stw r3,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,84(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x824700d0
	ctx.lr = 0x823B7220;
	sub_824700D0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,104(r30)
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,200(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,84(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,80(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823b8ac0
	ctx.lr = 0x823B7254;
	sub_823B8AC0(ctx, base);
	// stw r3,96(r30)
	REX_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,88(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246e190
	ctx.lr = 0x823B727C;
	sub_8246E190(ctx, base);
	// stw r3,100(r30)
	REX_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246c850
	ctx.lr = 0x823B7298;
	sub_8246C850(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// stw r3,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b72c4
	if (!ctx.cr6.eq) goto loc_823B72C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12056
	ctx.r5.s64 = ctx.r11.s64 + 12056;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,487
	ctx.r7.s64 = 487;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B72C4;
	sub_823AFBD8(ctx, base);
loc_823B72C4:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b72ec
	if (!ctx.cr6.eq) goto loc_823B72EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12036
	ctx.r5.s64 = ctx.r11.s64 + 12036;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,488
	ctx.r7.s64 = 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B72EC;
	sub_823AFBD8(ctx, base);
loc_823B72EC:
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b7314
	if (!ctx.cr6.eq) goto loc_823B7314;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12012
	ctx.r5.s64 = ctx.r11.s64 + 12012;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B7314;
	sub_823AFBD8(ctx, base);
loc_823B7314:
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b733c
	if (!ctx.cr6.eq) goto loc_823B733C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,11988
	ctx.r5.s64 = ctx.r11.s64 + 11988;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B733C;
	sub_823AFBD8(ctx, base);
loc_823B733C:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b7364
	if (!ctx.cr6.eq) goto loc_823B7364;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,11964
	ctx.r5.s64 = ctx.r11.s64 + 11964;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B7364;
	sub_823AFBD8(ctx, base);
loc_823B7364:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b738c
	if (!ctx.cr6.eq) goto loc_823B738C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,11940
	ctx.r5.s64 = ctx.r11.s64 + 11940;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,492
	ctx.r7.s64 = 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B738C;
	sub_823AFBD8(ctx, base);
loc_823B738C:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b73b4
	if (!ctx.cr6.eq) goto loc_823B73B4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,11916
	ctx.r5.s64 = ctx.r11.s64 + 11916;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B73B4;
	sub_823AFBD8(ctx, base);
loc_823B73B4:
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823b73dc
	if (!ctx.cr6.eq) goto loc_823B73DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,11896
	ctx.r5.s64 = ctx.r11.s64 + 11896;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x823B73DC;
	sub_823AFBD8(ctx, base);
loc_823B73DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x823b73e8
	goto loc_823B73E8;
loc_823B73E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B73E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823E3608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x823E3610;
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
loc_823E3620:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x823e3638
	if (!ctx.cr6.gt) goto loc_823E3638;
	// bl 0x823ce4d8
	ctx.lr = 0x823E3634;
	sub_823CE4D8(ctx, base);
	// b 0x823e363c
	goto loc_823E363C;
loc_823E3638:
	// bl 0x823e2f80
	ctx.lr = 0x823E363C;
	sub_823E2F80(ctx, base);
loc_823E363C:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823e368c
	if (ctx.cr6.eq) goto loc_823E368C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x823e3698
	if (ctx.cr6.eq) goto loc_823E3698;
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
	// bge cr6,0x823e36a4
	if (!ctx.cr6.lt) goto loc_823E36A4;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// ble cr6,0x823e3620
	if (!ctx.cr6.gt) goto loc_823E3620;
loc_823E368C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823E3690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_823E3698:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// b 0x823e3690
	goto loc_823E3690;
loc_823E36A4:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x823e3690
	goto loc_823E3690;
}

DEFINE_REX_FUNC(sub_823E72F8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_823E72FC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e736c
	if (ctx.cr6.eq) goto loc_823E736C;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e7364
	if (ctx.cr6.eq) goto loc_823E7364;
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823e7364
	if (!ctx.cr0.eq) goto loc_823E7364;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823e7364
	if (ctx.cr6.eq) goto loc_823E7364;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e7358
	if (ctx.cr6.eq) goto loc_823E7358;
	// lwz r8,28(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823e7350
	if (!ctx.cr6.eq) goto loc_823E7350;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x823e7358
	if (!ctx.cr6.eq) goto loc_823E7358;
loc_823E7350:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823e735c
	goto loc_823E735C;
loc_823E7358:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823E735C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823e736c
	if (!ctx.cr0.eq) goto loc_823E736C;
loc_823E7364:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// b 0x823e72fc
	goto loc_823E72FC;
loc_823E736C:
	// addi r11,r9,0
	ctx.r11.s64 = ctx.r9.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EAE18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x823EAE20;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
loc_823EAE30:
	// lwz r31,0(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// b 0x823eb034
	goto loc_823EB034;
loc_823EAE54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823c6e98
	ctx.lr = 0x823EAE60;
	sub_823C6E98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eb02c
	if (ctx.cr0.eq) goto loc_823EB02C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x823eaf78
	if (ctx.cr6.eq) goto loc_823EAF78;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823eae8c
	if (ctx.cr6.lt) goto loc_823EAE8C;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823eae90
	if (!ctx.cr6.gt) goto loc_823EAE90;
loc_823EAE8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EAE90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eb02c
	if (ctx.cr0.eq) goto loc_823EB02C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823eaebc
	if (ctx.cr6.lt) goto loc_823EAEBC;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x823eaec0
	if (!ctx.cr6.gt) goto loc_823EAEC0;
loc_823EAEBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823EAEC0:
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823eaedc
	if (ctx.cr6.lt) goto loc_823EAEDC;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823eaee0
	if (!ctx.cr6.gt) goto loc_823EAEE0;
loc_823EAEDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EAEE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823eb02c
	if (ctx.cr6.eq) goto loc_823EB02C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r3,56(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823e7380
	ctx.lr = 0x823EAF00;
	sub_823E7380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eb02c
	if (ctx.cr0.eq) goto loc_823EB02C;
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823eaf64
	if (ctx.cr6.eq) goto loc_823EAF64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eaf40
	if (ctx.cr0.eq) goto loc_823EAF40;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// ble cr6,0x823eaf38
	if (!ctx.cr6.gt) goto loc_823EAF38;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// ble cr6,0x823eaf40
	if (!ctx.cr6.gt) goto loc_823EAF40;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bgt cr6,0x823eaf40
	if (ctx.cr6.gt) goto loc_823EAF40;
loc_823EAF38:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823eaf44
	goto loc_823EAF44;
loc_823EAF40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EAF44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eaf64
	if (ctx.cr0.eq) goto loc_823EAF64;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823eaf64
	if (!ctx.cr0.eq) goto loc_823EAF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823e84b8
	ctx.lr = 0x823EAF5C;
	sub_823E84B8(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x823eb02c
	if (!ctx.cr6.gt) goto loc_823EB02C;
loc_823EAF64:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_823EAF6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823EAF70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
loc_823EAF78:
	// rlwinm r29,r11,25,25,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r29,96
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 96, ctx.xer);
	// bne cr6,0x823eafa0
	if (!ctx.cr6.eq) goto loc_823EAFA0;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eafa0
	if (ctx.cr0.eq) goto loc_823EAFA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823e7d48
	ctx.lr = 0x823EAF98;
	sub_823E7D48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eafd4
	if (ctx.cr0.eq) goto loc_823EAFD4;
loc_823EAFA0:
	// lwz r30,40(r20)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + 40);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x823eaf64
	if (ctx.cr6.eq) goto loc_823EAF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c6b28
	ctx.lr = 0x823EAFB4;
	sub_823C6B28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823eaf64
	if (ctx.cr0.eq) goto loc_823EAF64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x823eaf64
	if (ctx.cr6.eq) goto loc_823EAF64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x823eafd4
	if (!ctx.cr6.eq) goto loc_823EAFD4;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
loc_823EAFD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823eafe4
	if (!ctx.cr6.eq) goto loc_823EAFE4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_823EAFE4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823eb02c
	if (!ctx.cr6.eq) goto loc_823EB02C;
	// cmplwi cr6,r29,91
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 91, ctx.xer);
	// blt cr6,0x823eb000
	if (ctx.cr6.lt) goto loc_823EB000;
	// cmplwi cr6,r29,94
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823eb004
	if (!ctx.cr6.gt) goto loc_823EB004;
loc_823EB000:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823EB004:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823eb018
	if (!ctx.cr0.eq) goto loc_823EB018;
	// cmplwi cr6,r29,123
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823eb01c
	if (!ctx.cr6.eq) goto loc_823EB01C;
loc_823EB018:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823EB01C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eb02c
	if (ctx.cr0.eq) goto loc_823EB02C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_823EB02C:
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_823EB034:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823eae54
	if (!ctx.cr6.eq) goto loc_823EAE54;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x823eb24c
	if (!ctx.cr6.eq) goto loc_823EB24C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823eb254
	if (!ctx.cr6.eq) goto loc_823EB254;
	// li r28,0
	ctx.r28.s64 = 0;
loc_823EB050:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bge cr6,0x823eb2b4
	if (!ctx.cr6.lt) goto loc_823EB2B4;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r20
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823eb1d4
	if (ctx.cr6.eq) goto loc_823EB1D4;
	// lwz r3,56(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 56);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x823eb0c4
	if (ctx.cr6.lt) goto loc_823EB0C4;
	// beq cr6,0x823eb0b0
	if (ctx.cr6.eq) goto loc_823EB0B0;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x823eb09c
	if (ctx.cr6.lt) goto loc_823EB09C;
	// bne cr6,0x823eb2a4
	if (!ctx.cr6.eq) goto loc_823EB2A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e9800
	ctx.lr = 0x823EB098;
	sub_823E9800(ctx, base);
	// b 0x823eb120
	goto loc_823EB120;
loc_823EB09C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e9758
	ctx.lr = 0x823EB0AC;
	sub_823E9758(ctx, base);
	// b 0x823eb120
	goto loc_823EB120;
loc_823EB0B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e96b0
	ctx.lr = 0x823EB0C0;
	sub_823E96B0(ctx, base);
	// b 0x823eb120
	goto loc_823EB120;
loc_823EB0C4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bne cr6,0x823eb0ec
	if (!ctx.cr6.eq) goto loc_823EB0EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,48(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e9158
	ctx.lr = 0x823EB0E8;
	sub_823E9158(ctx, base);
	// b 0x823eb120
	goto loc_823EB120;
loc_823EB0EC:
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bne cr6,0x823eb108
	if (!ctx.cr6.eq) goto loc_823EB108;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e92d8
	ctx.lr = 0x823EB104;
	sub_823E92D8(ctx, base);
	// b 0x823eb120
	goto loc_823EB120;
loc_823EB108:
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x823eb2ac
	if (!ctx.cr6.eq) goto loc_823EB2AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x823e9380
	ctx.lr = 0x823EB120;
	sub_823E9380(ctx, base);
loc_823EB120:
	// lwz r29,0(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823EB128:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823eb150
	if (ctx.cr6.eq) goto loc_823EB150;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823eb148
	if (!ctx.cr0.eq) goto loc_823EB148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x823EB148;
	sub_823CFE80(ctx, base);
loc_823EB148:
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x823eb128
	goto loc_823EB128;
loc_823EB150:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_823EB158:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eb1cc
	if (ctx.cr6.eq) goto loc_823EB1CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823eb1b8
	if (ctx.cr6.eq) goto loc_823EB1B8;
	// lbz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823eb1b8
	if (!ctx.cr0.eq) goto loc_823EB1B8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x823eb194
	goto loc_823EB194;
loc_823EB18C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_823EB194:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823eb18c
	if (!ctx.cr6.eq) goto loc_823EB18C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_823EB1B8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823eb158
	if (!ctx.cr6.eq) goto loc_823EB158;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x823eb158
	goto loc_823EB158;
loc_823EB1CC:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823eb1dc
	if (!ctx.cr0.eq) goto loc_823EB1DC;
loc_823EB1D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x823eb050
	goto loc_823EB050;
loc_823EB1DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc950
	ctx.lr = 0x823EB1E4;
	sub_823BC950(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823eb204
	if (ctx.cr0.eq) goto loc_823EB204;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248e4d8
	ctx.lr = 0x823EB200;
	sub_8248E4D8(ctx, base);
	// b 0x823eb23c
	goto loc_823EB23C;
loc_823EB204:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r11,r10,0,19,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC001FFF) | (ctx.r11.u64 & 0x3FFE000);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// rlwimi r9,r11,21,8,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xE00000) | (ctx.r9.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x823d0030
	ctx.lr = 0x823EB230;
	sub_823D0030(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823EB23C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823e98a8
	ctx.lr = 0x823EB248;
	sub_823E98A8(ctx, base);
	// b 0x823eae30
	goto loc_823EAE30;
loc_823EB24C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823eaf70
	goto loc_823EAF70;
loc_823EB254:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823eb27c
	if (ctx.cr6.eq) goto loc_823EB27C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c6b28
	ctx.lr = 0x823EB264;
	sub_823C6B28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823eb27c
	if (ctx.cr6.eq) goto loc_823EB27C;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// b 0x823eaf6c
	goto loc_823EAF6C;
loc_823EB27C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823eb294
	if (ctx.cr6.eq) goto loc_823EB294;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x823eaf6c
	goto loc_823EAF6C;
loc_823EB294:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x823eaf6c
	goto loc_823EAF6C;
loc_823EB2A4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x823a0e88
	ctx.lr = 0x823EB2AC;
	sub_823A0E88(ctx, base);
loc_823EB2AC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x823a0e88
	ctx.lr = 0x823EB2B4;
	sub_823A0E88(ctx, base);
loc_823EB2B4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,56(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 56);
	// bl 0x823a0e88
	ctx.lr = 0x823EB2C0;
	sub_823A0E88(ctx, base);
}

DEFINE_REX_FUNC(sub_82416318) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82416320;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824163e8
	if (!ctx.cr0.eq) goto loc_824163E8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824163e8
	if (ctx.cr0.eq) goto loc_824163E8;
loc_82416348:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x824163d0
	if (!ctx.cr6.eq) goto loc_824163D0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8243e230
	ctx.lr = 0x82416370;
	sub_8243E230(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x824163d0
	if (ctx.cr0.eq) goto loc_824163D0;
	// lwz r28,8(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
loc_8241637C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824163c0
	if (ctx.cr6.eq) goto loc_824163C0;
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x824163b0
	if (ctx.cr6.eq) goto loc_824163B0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8243e230
	ctx.lr = 0x824163A8;
	sub_8243E230(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x824163b8
	if (ctx.cr6.eq) goto loc_824163B8;
loc_824163B0:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8241637c
	goto loc_8241637C;
loc_824163B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824163d0
	if (!ctx.cr6.eq) goto loc_824163D0;
loc_824163C0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d05a0
	ctx.lr = 0x824163D0;
	sub_823D05A0(ctx, base);
loc_824163D0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824163e8
	if (!ctx.cr0.eq) goto loc_824163E8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82416348
	if (!ctx.cr6.eq) goto loc_82416348;
loc_824163E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824199C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x824199C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82487a60
	ctx.lr = 0x824199F8;
	sub_82487A60(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823cfcb0
	ctx.lr = 0x82419A08;
	sub_823CFCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82419A14;
	sub_823CFE80(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823cfcb0
	ctx.lr = 0x82419A24;
	sub_823CFCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82419A30;
	sub_823CFE80(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// stw r3,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// bl 0x823c4cb8
	ctx.lr = 0x82419A60;
	sub_823C4CB8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82421320) {
	REX_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242133c
	if (ctx.cr0.eq) goto loc_8242133C;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82421340
	if (!ctx.cr0.eq) goto loc_82421340;
loc_8242133C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82421340:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
loc_82421354:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// li r7,-1
	ctx.r7.s64 = -1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// srw. r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824213a0
	if (ctx.cr0.eq) goto loc_824213A0;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// srw. r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824213a4
	if (!ctx.cr0.eq) goto loc_824213A4;
loc_824213A0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_824213A4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824213b4
	if (ctx.cr6.eq) goto loc_824213B4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824213b8
	if (!ctx.cr6.eq) goto loc_824213B8;
loc_824213B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824213B8:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x82421354
	if (!ctx.cr0.eq) goto loc_82421354;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82427E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d8
	ctx.lr = 0x82427E98;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
loc_82427EB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82427ecc
	if (ctx.cr6.eq) goto loc_82427ECC;
	// lwz r21,0(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r21,r24
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82427ed0
	if (!ctx.cr6.eq) goto loc_82427ED0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82427eb0
	goto loc_82427EB0;
loc_82427ECC:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82427ED0:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r22,92(r26)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r26.u32 + 92);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// ori r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 | 1;
	// ori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 | 1;
	// stw r25,108(r26)
	REX_STORE_U32(ctx.r26.u32 + 108, ctx.r25.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82427EFC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c4d48
	ctx.lr = 0x82427F04;
	sub_823C4D48(ctx, base);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r25,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// beq cr6,0x82427f68
	if (ctx.cr6.eq) goto loc_82427F68;
loc_82427F40:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82427f58
	if (ctx.cr0.eq) goto loc_82427F58;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82427f40
	if (!ctx.cr6.eq) goto loc_82427F40;
loc_82427F58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82427f68
	if (ctx.cr6.eq) goto loc_82427F68;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82427efc
	goto loc_82427EFC;
loc_82427F68:
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82427f98
	if (ctx.cr6.eq) goto loc_82427F98;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82427f84
	if (!ctx.cr6.eq) goto loc_82427F84;
	// lwz r31,52(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82427f68
	goto loc_82427F68;
loc_82427F84:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm. r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82427f68
	if (!ctx.cr0.eq) goto loc_82427F68;
	// b 0x82427efc
	goto loc_82427EFC;
loc_82427F98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82420b28
	ctx.lr = 0x82427FAC;
	sub_82420B28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824184d0
	ctx.lr = 0x82427FB8;
	sub_824184D0(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824280c0
	if (!ctx.cr0.eq) goto loc_824280C0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824280c0
	if (ctx.cr0.eq) goto loc_824280C0;
loc_82427FD0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x824280a4
	if (!ctx.cr6.eq) goto loc_824280A4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8243e230
	ctx.lr = 0x82427FF8;
	sub_8243E230(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x824280a4
	if (ctx.cr0.eq) goto loc_824280A4;
	// lwz r28,32(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82428008:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8242804c
	if (ctx.cr6.eq) goto loc_8242804C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc2a8
	ctx.lr = 0x82428020;
	sub_823BC2A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82428038
	if (!ctx.cr0.eq) goto loc_82428038;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d05a0
	ctx.lr = 0x82428038;
	sub_823D05A0(ctx, base);
loc_82428038:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82428008
	if (!ctx.cr6.eq) goto loc_82428008;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// b 0x82428008
	goto loc_82428008;
loc_8242804C:
	// lwz r30,8(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
loc_82428050:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82428094
	if (ctx.cr6.eq) goto loc_82428094;
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82428084
	if (ctx.cr6.eq) goto loc_82428084;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8243e230
	ctx.lr = 0x8242807C;
	sub_8243E230(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8242808c
	if (ctx.cr6.eq) goto loc_8242808C;
loc_82428084:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82428050
	goto loc_82428050;
loc_8242808C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824280a4
	if (!ctx.cr6.eq) goto loc_824280A4;
loc_82428094:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d05a0
	ctx.lr = 0x824280A4;
	sub_823D05A0(ctx, base);
loc_824280A4:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824280c0
	if (!ctx.cr0.eq) goto loc_824280C0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82427fd0
	if (!ctx.cr6.eq) goto loc_82427FD0;
loc_824280C0:
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8242814c
	if (!ctx.cr0.eq) goto loc_8242814C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8242814c
	if (ctx.cr0.eq) goto loc_8242814C;
loc_824280D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82428130
	if (!ctx.cr6.eq) goto loc_82428130;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_824280EC:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428130
	if (ctx.cr6.eq) goto loc_82428130;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8242811c
	if (!ctx.cr6.eq) goto loc_8242811C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d05a0
	ctx.lr = 0x8242811C;
	sub_823D05A0(ctx, base);
loc_8242811C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824280ec
	if (!ctx.cr6.eq) goto loc_824280EC;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// b 0x824280ec
	goto loc_824280EC;
loc_82428130:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8242814c
	if (!ctx.cr0.eq) goto loc_8242814C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824280d8
	if (!ctx.cr6.eq) goto loc_824280D8;
loc_8242814C:
	// lwz r28,8(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
loc_82428150:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82428224
	if (ctx.cr6.eq) goto loc_82428224;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8242821c
	if (ctx.cr6.eq) goto loc_8242821C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_82428168:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82428188
	if (ctx.cr6.eq) goto loc_82428188;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8242818c
	if (!ctx.cr0.eq) goto loc_8242818C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82428168
	goto loc_82428168;
loc_82428188:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8242818C:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8242821c
	if (!ctx.cr0.eq) goto loc_8242821C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8242821c
	if (ctx.cr0.eq) goto loc_8242821C;
loc_824281A4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82428200
	if (!ctx.cr6.eq) goto loc_82428200;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_824281B8:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82428200
	if (ctx.cr6.eq) goto loc_82428200;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x824281ec
	if (ctx.cr6.lt) goto loc_824281EC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d05a0
	ctx.lr = 0x824281EC;
	sub_823D05A0(ctx, base);
loc_824281EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x824281b8
	if (!ctx.cr6.eq) goto loc_824281B8;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// b 0x824281b8
	goto loc_824281B8;
loc_82428200:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8242821c
	if (!ctx.cr0.eq) goto loc_8242821C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824281a4
	if (!ctx.cr6.eq) goto loc_824281A4;
loc_8242821C:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x82428150
	goto loc_82428150;
loc_82428224:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82424fd8
	ctx.lr = 0x82428240;
	sub_82424FD8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x825d6128
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82445420) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82445428;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,102
	ctx.r6.s64 = 102;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82487a60
	ctx.lr = 0x8244544C;
	sub_82487A60(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82445470
	if (ctx.cr6.eq) goto loc_82445470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x8244546C;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82445470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82445478;
	sub_823CFE80(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824477B8) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bgt cr6,0x824477e0
	if (ctx.cr6.gt) goto loc_824477E0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_824477E0:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(24));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bcf68
	ctx.lr = 0x824477F0;
	sub_823BCF68(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = ctx.r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_824499C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824499C8;
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
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// bl 0x82487a60
	ctx.lr = 0x824499F0;
	sub_82487A60(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82449a14
	if (ctx.cr6.eq) goto loc_82449A14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x82449A10;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82449A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82449A1C;
	sub_823CFE80(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82447fe0
	ctx.lr = 0x82449A2C;
	sub_82447FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x82449A38;
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

DEFINE_REX_FUNC(sub_8244E5F8) {
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
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// rlwimi r11,r6,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// rlwinm r11,r11,0,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8244c980
	ctx.lr = 0x8244E628;
	sub_8244C980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824505E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x824505E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mulli r31,r4,40
	ctx.r31.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450620
	if (ctx.cr0.eq) goto loc_82450620;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x823a0e88
	ctx.lr = 0x82450620;
	sub_823A0E88(ctx, base);
loc_82450620:
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82450640
	if (ctx.cr0.eq) goto loc_82450640;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,17044
	ctx.r5.s64 = ctx.r11.s64 + 17044;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0e88
	ctx.lr = 0x82450640;
	sub_823A0E88(ctx, base);
loc_82450640:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16383
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16383, ctx.xer);
	// ble cr6,0x82450658
	if (!ctx.cr6.gt) goto loc_82450658;
	// li r4,3519
	ctx.r4.s64 = 3519;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823a0e88
	ctx.lr = 0x82450658;
	sub_823A0E88(ctx, base);
loc_82450658:
	// lwz r6,72(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82450674
	if (ctx.cr6.eq) goto loc_82450674;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8244f3c8
	ctx.lr = 0x82450674;
	sub_8244F3C8(ctx, base);
loc_82450674:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwimi r9,r10,3,15,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1FFF8) | (ctx.r9.u64 & 0xFFFFFFFFFFFE0007);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r26,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// oris r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 458752;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r28,19,10,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x380000) | (ctx.r10.u64 & 0xFFFFFFFFFFC7FFFF);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,112
	ctx.r10.u64 = ctx.r10.u64 | 112;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,48(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82450744
	if (ctx.cr6.eq) goto loc_82450744;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,44(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82450340
	ctx.lr = 0x82450744;
	sub_82450340(ctx, base);
loc_82450744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824681A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x824681A8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824681d8
	if (ctx.cr6.eq) goto loc_824681D8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82461610
	ctx.lr = 0x824681D4;
	sub_82461610(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_824681D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824681f4
	if (ctx.cr6.eq) goto loc_824681F4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82462308
	ctx.lr = 0x824681F0;
	sub_82462308(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_824681F4:
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
	// mullw r10,r3,r29
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,5272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5272);
	ctx.f31.f64 = double(temp.f32);
	// add r27,r9,r5
	ctx.r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x82468258
	if (!ctx.cr0.eq) goto loc_82468258;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82468260
	goto loc_82468260;
loc_82468258:
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82468260:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824682b8
	if (ctx.cr6.eq) goto loc_824682B8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lfs f12,-26812(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -26812);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-26804(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -26804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26808(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -26808);
	ctx.f0.f64 = double(temp.f32);
loc_82468288:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82468288
	if (ctx.cr6.lt) goto loc_82468288;
loc_824682B8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824682d0
	if (ctx.cr6.eq) goto loc_824682D0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d18b0
	ctx.lr = 0x824682D0;
	sub_822D18B0(ctx, base);
loc_824682D0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82468420
	if (!ctx.cr6.gt) goto loc_82468420;
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r10,r30,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r30.u64;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r3,r30,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f9,-312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + -312);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lfs f12,-324(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -324);
	ctx.f12.f64 = double(temp.f32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f10,9872(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9872);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-320(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -320);
	ctx.f11.f64 = double(temp.f32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// lfs f13,9728(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 9728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,9724(r25)
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 9724);
	ctx.f8.f64 = double(temp.f32);
loc_82468334:
	// lfsx f0,r9,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r5,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfsx f7,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fctiwz f7,f7
	ctx.f7.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x824683d0
	if (ctx.cr6.eq) goto loc_824683D0;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f31,f6
	ctx.f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_824683D0:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// blt cr6,0x824683e0
	if (ctx.cr6.lt) goto loc_824683E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_824683E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824683f8
	if (!ctx.cr6.gt) goto loc_824683F8;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x824683fc
	if (ctx.cr6.lt) goto loc_824683FC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x824683fc
	goto loc_824683FC;
loc_824683F8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824683FC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sth r10,0(r28)
	REX_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82468334
	if (ctx.cr6.lt) goto loc_82468334;
loc_82468420:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8246E400) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8246e434
	if (!ctx.cr6.eq) goto loc_8246E434;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,22904
	ctx.r6.s64 = ctx.r11.s64 + 22904;
	// addi r5,r10,20964
	ctx.r5.s64 = ctx.r10.s64 + 20964;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,412
	ctx.r7.s64 = 412;
	// bl 0x823afbd8
	ctx.lr = 0x8246E434;
	sub_823AFBD8(ctx, base);
loc_8246E434:
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

DEFINE_REX_FUNC(sub_8246ED20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8246ED28;
	__savegprlr_28(ctx, base);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-10336
	ctx.r30.s64 = ctx.r11.s64 + -10336;
	// addi r29,r10,23128
	ctx.r29.s64 = ctx.r10.s64 + 23128;
	// bne cr6,0x8246ed64
	if (!ctx.cr6.eq) goto loc_8246ED64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,22892
	ctx.r5.s64 = ctx.r11.s64 + 22892;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,632
	ctx.r7.s64 = 632;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246ED64;
	sub_823AFBD8(ctx, base);
loc_8246ED64:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8246e680
	ctx.lr = 0x8246ED6C;
	sub_8246E680(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x8246ed94
	if (!ctx.cr0.eq) goto loc_8246ED94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,10056
	ctx.r5.s64 = ctx.r11.s64 + 10056;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,638
	ctx.r7.s64 = 638;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8246ED90;
	sub_823AFBD8(ctx, base);
	// b 0x8246edac
	goto loc_8246EDAC;
loc_8246ED94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x823b4530
	ctx.lr = 0x8246EDAC;
	sub_823B4530(ctx, base);
loc_8246EDAC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82470E90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x82470E98;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r27,28
	ctx.r29.s64 = ctx.r27.s64 + 28;
	// addi r23,r27,92
	ctx.r23.s64 = ctx.r27.s64 + 92;
	// li r21,8
	ctx.r21.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r8,25076
	ctx.r24.s64 = ctx.r8.s64 + 25076;
	// addi r26,r9,-10336
	ctx.r26.s64 = ctx.r9.s64 + -10336;
	// addi r22,r10,25384
	ctx.r22.s64 = ctx.r10.s64 + 25384;
	// addi r25,r11,24984
	ctx.r25.s64 = ctx.r11.s64 + 24984;
	// b 0x82470f34
	goto loc_82470F34;
loc_82470ED4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b4e10
	ctx.lr = 0x82470EDC;
	sub_823B4E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82470f04
	if (!ctx.cr6.eq) goto loc_82470F04;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,339
	ctx.r7.s64 = 339;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82470F04;
	sub_823AFBD8(ctx, base);
loc_82470F04:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470F18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// bl 0x823b4dd8
	ctx.lr = 0x82470F34;
	sub_823B4DD8(ctx, base);
loc_82470F34:
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x823b4b08
	ctx.lr = 0x82470F3C;
	sub_823B4B08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82470ed4
	if (!ctx.cr0.eq) goto loc_82470ED4;
	// lwz r11,224(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82470fdc
	if (ctx.cr6.eq) goto loc_82470FDC;
	// stw r28,224(r29)
	REX_STORE_U32(ctx.r29.u32 + 224, ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82470fdc
	goto loc_82470FDC;
loc_82470F6C:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470fa8
	if (ctx.cr6.eq) goto loc_82470FA8;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470F88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82470fa8
	if (ctx.cr0.eq) goto loc_82470FA8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82470FA8;
	sub_823AFBD8(ctx, base);
loc_82470FA8:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82470fdc
	if (ctx.cr0.eq) goto loc_82470FDC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,389
	ctx.r7.s64 = 389;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82470FDC;
	sub_823AFBD8(ctx, base);
loc_82470FDC:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82471f40
	ctx.lr = 0x82470FE4;
	sub_82471F40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82470f6c
	if (!ctx.cr0.eq) goto loc_82470F6C;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82471c30
	ctx.lr = 0x82470FF4;
	sub_82471C30(ctx, base);
	// stw r28,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x823b4650
	ctx.lr = 0x82471000;
	sub_823B4650(ctx, base);
	// stw r28,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r28.u32);
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r23,r23,20
	ctx.r23.s64 = ctx.r23.s64 + 20;
	// bne 0x82470f34
	if (!ctx.cr0.eq) goto loc_82470F34;
	// lwz r3,316(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 316);
	// bl 0x8246e610
	ctx.lr = 0x8247101C;
	sub_8246E610(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82471050
	if (ctx.cr0.eq) goto loc_82471050;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,408
	ctx.r7.s64 = 408;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x82471050;
	sub_823AFBD8(ctx, base);
loc_82471050:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8247E4F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8247E500;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lwz r31,28(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 28);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// addi r10,r31,16800
	ctx.r10.s64 = ctx.r31.s64 + 16800;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,6400
	ctx.r11.s64 = 6400;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8247E540:
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8247e540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8247E540;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r23,4096
	ctx.r23.s64 = 4096;
	// lis r21,1
	ctx.r21.s64 = 65536;
	// addi r24,r11,8056
	ctx.r24.s64 = ctx.r11.s64 + 8056;
	// addi r17,r10,-10336
	ctx.r17.s64 = ctx.r10.s64 + -10336;
	// addi r22,r9,28696
	ctx.r22.s64 = ctx.r9.s64 + 28696;
	// addi r16,r8,26072
	ctx.r16.s64 = ctx.r8.s64 + 26072;
loc_8247E574:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addi r8,r24,456
	ctx.r8.s64 = ctx.r24.s64 + 456;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// lwzx r25,r9,r8
	ctx.r25.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// beq cr6,0x8247e9fc
	if (ctx.cr6.eq) goto loc_8247E9FC;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x8247e5ac
	if (!ctx.cr6.eq) goto loc_8247E5AC;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e5ac
	if (ctx.cr0.eq) goto loc_8247E5AC;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E5AC:
	// lwzx r11,r9,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247e6b4
	if (ctx.cr6.eq) goto loc_8247E6B4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r11,r9,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFC0;
	// rlwinm r9,r9,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8247e604
	if (!ctx.cr6.eq) goto loc_8247E604;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8247e604
	if (ctx.cr6.eq) goto loc_8247E604;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8247e604
	if (ctx.cr6.eq) goto loc_8247E604;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8247e604
	if (ctx.cr6.eq) goto loc_8247E604;
	// stwx r18,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r18.u32);
loc_8247E604:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// bne 0x8247e650
	if (!ctx.cr0.eq) goto loc_8247E650;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// b 0x8247e65c
	goto loc_8247E65C;
loc_8247E650:
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8247e660
	if (ctx.cr6.eq) goto loc_8247E660;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
loc_8247E65C:
	// bne cr6,0x8247e674
	if (!ctx.cr6.eq) goto loc_8247E674;
loc_8247E660:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E674:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e6a4
	if (ctx.cr0.eq) goto loc_8247E6A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,19,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e6a0
	if (ctx.cr0.eq) goto loc_8247E6A0;
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E6A0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E6A4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e6b4
	if (ctx.cr0.eq) goto loc_8247E6B4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E6B4:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8247e9b8
	if (ctx.cr6.eq) goto loc_8247E9B8;
loc_8247E6C0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r10,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFC0;
	// rlwinm r10,r10,16,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8247e764
	if (!ctx.cr6.eq) goto loc_8247E764;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247e764
	if (ctx.cr6.eq) goto loc_8247E764;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8247e764
	if (ctx.cr6.eq) goto loc_8247E764;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8247e764
	if (ctx.cr6.eq) goto loc_8247E764;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x8247e728
	if (ctx.cr6.eq) goto loc_8247E728;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x8247e728
	if (ctx.cr6.eq) goto loc_8247E728;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x8247e728
	if (ctx.cr6.eq) goto loc_8247E728;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x8247e760
	if (!ctx.cr6.eq) goto loc_8247E760;
loc_8247E728:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x8247e748
	if (!ctx.cr6.gt) goto loc_8247E748;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,15541
	ctx.r7.s64 = 15541;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8247E748;
	sub_823AFBD8(ctx, base);
loc_8247E748:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r10,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFC0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8247E760:
	// stwx r18,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r18.u32);
loc_8247E764:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8247e7ac
	if (!ctx.cr6.eq) goto loc_8247E7AC;
	// lhz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// beq cr6,0x8247e798
	if (ctx.cr6.eq) goto loc_8247E798;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// beq cr6,0x8247e798
	if (ctx.cr6.eq) goto loc_8247E798;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8247e798
	if (ctx.cr6.eq) goto loc_8247E798;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// bne cr6,0x8247e7ac
	if (!ctx.cr6.eq) goto loc_8247E7AC;
loc_8247E798:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E7AC:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// bne 0x8247e7f8
	if (!ctx.cr0.eq) goto loc_8247E7F8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// b 0x8247e804
	goto loc_8247E804;
loc_8247E7F8:
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x8247e808
	if (ctx.cr6.eq) goto loc_8247E808;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
loc_8247E804:
	// bne cr6,0x8247e820
	if (!ctx.cr6.eq) goto loc_8247E820;
loc_8247E808:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// slw r10,r23,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r28.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E820:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e96c
	if (ctx.cr0.eq) goto loc_8247E96C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// rlwinm r8,r11,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// rlwinm r10,r11,24,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8247e880
	if (ctx.cr6.eq) goto loc_8247E880;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8247e894
	if (!ctx.cr6.eq) goto loc_8247E894;
loc_8247E880:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E894:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r11,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247e8c0
	if (!ctx.cr6.eq) goto loc_8247E8C0;
	// rlwinm r9,r11,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247e8c0
	if (!ctx.cr6.eq) goto loc_8247E8C0;
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8247e8d4
	if (ctx.cr6.eq) goto loc_8247E8D4;
loc_8247E8C0:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E8D4:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8247e90c
	if (!ctx.cr6.eq) goto loc_8247E90C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247e90c
	if (!ctx.cr6.eq) goto loc_8247E90C;
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E90C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8247e954
	if (ctx.cr6.eq) goto loc_8247E954;
	// rlwinm. r11,r11,0,8,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247e968
	if (ctx.cr0.eq) goto loc_8247E968;
loc_8247E954:
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E968:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E96C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247e9ac
	if (ctx.cr0.eq) goto loc_8247E9AC;
	// rlwinm r10,r11,0,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F0000;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8247e9ac
	if (!ctx.cr6.eq) goto loc_8247E9AC;
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8247e9ac
	if (!ctx.cr0.eq) goto loc_8247E9AC;
	// addi r11,r27,3292
	ctx.r11.s64 = ctx.r27.s64 + 3292;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8247E9AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8247e6c0
	if (ctx.cr6.lt) goto loc_8247E6C0;
loc_8247E9B8:
	// lhz r11,2(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x8247e9cc
	if (!ctx.cr6.eq) goto loc_8247E9CC;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// b 0x8247e9d8
	goto loc_8247E9D8;
loc_8247E9CC:
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x8247e9d8
	if (!ctx.cr6.eq) goto loc_8247E9D8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E9D8:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8247e9f0
	if (ctx.cr6.eq) goto loc_8247E9F0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8247e9f0
	if (ctx.cr6.eq) goto loc_8247E9F0;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bne cr6,0x8247e9f4
	if (!ctx.cr6.eq) goto loc_8247E9F4;
loc_8247E9F0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8247E9F4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8247ea00
	goto loc_8247EA00;
loc_8247E9FC:
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
loc_8247EA00:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8247e574
	if (ctx.cr6.eq) goto loc_8247E574;
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8247ecb8
	if (!ctx.cr0.eq) goto loc_8247ECB8;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r31,18080
	ctx.r11.s64 = ctx.r31.s64 + 18080;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r9.u32);
loc_8247EA24:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247ea44
	if (ctx.cr6.eq) goto loc_8247EA44;
	// lwz r9,23200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,23200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r9.u32);
loc_8247EA44:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247ea24
	if (!ctx.cr0.eq) goto loc_8247EA24;
	// lwz r11,17632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 17632);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ea70
	if (ctx.cr6.eq) goto loc_8247EA70;
	// lwz r11,23200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// stw r11,17632(r31)
	REX_STORE_U32(ctx.r31.u32 + 17632, ctx.r11.u32);
	// lwz r11,23200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r11.u32);
loc_8247EA70:
	// lwz r11,18336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18336);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eab4
	if (ctx.cr6.eq) goto loc_8247EAB4;
	// lwz r29,20(r14)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r14.u32 + 20);
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5548
	ctx.lr = 0x8247EA90;
	sub_823B5548(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8247eaac
	if (ctx.cr0.eq) goto loc_8247EAAC;
	// li r4,974
	ctx.r4.s64 = 974;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5548
	ctx.lr = 0x8247EAA4;
	sub_823B5548(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x8247eab0
	if (!ctx.cr6.eq) goto loc_8247EAB0;
loc_8247EAAC:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8247EAB0:
	// stw r30,18336(r31)
	REX_STORE_U32(ctx.r31.u32 + 18336, ctx.r30.u32);
loc_8247EAB4:
	// lwz r11,18848(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18848);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eac4
	if (ctx.cr6.eq) goto loc_8247EAC4;
	// stw r18,18848(r31)
	REX_STORE_U32(ctx.r31.u32 + 18848, ctx.r18.u32);
loc_8247EAC4:
	// lwz r11,19104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19104);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ead4
	if (ctx.cr6.eq) goto loc_8247EAD4;
	// stw r15,19104(r31)
	REX_STORE_U32(ctx.r31.u32 + 19104, ctx.r15.u32);
loc_8247EAD4:
	// lwz r11,19360(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 19360);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eae4
	if (ctx.cr6.eq) goto loc_8247EAE4;
	// stw r15,19360(r31)
	REX_STORE_U32(ctx.r31.u32 + 19360, ctx.r15.u32);
loc_8247EAE4:
	// lwz r11,18592(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18592);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eaf8
	if (ctx.cr6.eq) goto loc_8247EAF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,18592(r31)
	REX_STORE_U32(ctx.r31.u32 + 18592, ctx.r11.u32);
loc_8247EAF8:
	// addi r11,r31,17824
	ctx.r11.s64 = ctx.r31.s64 + 17824;
	// li r9,64
	ctx.r9.s64 = 64;
loc_8247EB00:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247eb20
	if (ctx.cr6.eq) goto loc_8247EB20;
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247EB20:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247eb00
	if (!ctx.cr0.eq) goto loc_8247EB00;
	// lwz r11,20384(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20384);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eb44
	if (ctx.cr6.eq) goto loc_8247EB44;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// stw r11,20384(r31)
	REX_STORE_U32(ctx.r31.u32 + 20384, ctx.r11.u32);
loc_8247EB44:
	// addi r11,r31,21408
	ctx.r11.s64 = ctx.r31.s64 + 21408;
	// addi r10,r14,1184
	ctx.r10.s64 = ctx.r14.s64 + 1184;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8247EB50:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247eb7c
	if (ctx.cr6.eq) goto loc_8247EB7C;
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r9.u32);
loc_8247EB7C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247eb50
	if (!ctx.cr0.eq) goto loc_8247EB50;
	// addi r11,r31,21664
	ctx.r11.s64 = ctx.r31.s64 + 21664;
	// addi r10,r14,1248
	ctx.r10.s64 = ctx.r14.s64 + 1248;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8247EB98:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247ebc4
	if (ctx.cr6.eq) goto loc_8247EBC4;
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r9.u32);
loc_8247EBC4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247eb98
	if (!ctx.cr0.eq) goto loc_8247EB98;
	// addi r11,r31,21152
	ctx.r11.s64 = ctx.r31.s64 + 21152;
	// addi r10,r14,1120
	ctx.r10.s64 = ctx.r14.s64 + 1120;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8247EBE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247ec0c
	if (ctx.cr6.eq) goto loc_8247EC0C;
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r9.u32);
loc_8247EC0C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247ebe0
	if (!ctx.cr0.eq) goto loc_8247EBE0;
	// addi r11,r31,20640
	ctx.r11.s64 = ctx.r31.s64 + 20640;
	// addi r10,r14,992
	ctx.r10.s64 = ctx.r14.s64 + 992;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8247EC28:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247ec54
	if (ctx.cr6.eq) goto loc_8247EC54;
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,23204(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r9.u32);
loc_8247EC54:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247ec28
	if (!ctx.cr0.eq) goto loc_8247EC28;
	// lwz r11,20896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20896);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ec8c
	if (ctx.cr6.eq) goto loc_8247EC8C;
	// lwz r11,23204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// stw r11,1056(r14)
	REX_STORE_U32(ctx.r14.u32 + 1056, ctx.r11.u32);
	// lwz r11,23204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r10.u32);
	// stw r11,20896(r31)
	REX_STORE_U32(ctx.r31.u32 + 20896, ctx.r11.u32);
loc_8247EC8C:
	// lwz r11,20128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20128);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ecac
	if (ctx.cr6.eq) goto loc_8247ECAC;
	// lwz r11,23204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r10.u32);
	// stw r11,20128(r31)
	REX_STORE_U32(ctx.r31.u32 + 20128, ctx.r11.u32);
loc_8247ECAC:
	// lwz r11,23204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r11,1632(r14)
	REX_STORE_U32(ctx.r14.u32 + 1632, ctx.r11.u32);
	// b 0x8247ef54
	goto loc_8247EF54;
loc_8247ECB8:
	// lis r10,-4370
	ctx.r10.s64 = -286392320;
	// addi r9,r14,1184
	ctx.r9.s64 = ctx.r14.s64 + 1184;
	// addi r11,r31,21408
	ctx.r11.s64 = ctx.r31.s64 + 21408;
	// li r8,2
	ctx.r8.s64 = 2;
	// ori r7,r10,61166
	ctx.r7.u64 = ctx.r10.u64 | 61166;
loc_8247ECCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x8247ecf4
	if (ctx.cr6.eq) goto loc_8247ECF4;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ecec
	if (ctx.cr6.eq) goto loc_8247ECEC;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247ecfc
	goto loc_8247ECFC;
loc_8247ECEC:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8247ed08
	goto loc_8247ED08;
loc_8247ECF4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ed08
	if (ctx.cr6.eq) goto loc_8247ED08;
loc_8247ECFC:
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247ED08:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8247eccc
	if (!ctx.cr0.eq) goto loc_8247ECCC;
	// addi r9,r14,1248
	ctx.r9.s64 = ctx.r14.s64 + 1248;
	// addi r11,r31,21664
	ctx.r11.s64 = ctx.r31.s64 + 21664;
	// li r8,2
	ctx.r8.s64 = 2;
loc_8247ED24:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x8247ed4c
	if (ctx.cr6.eq) goto loc_8247ED4C;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ed44
	if (ctx.cr6.eq) goto loc_8247ED44;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247ed54
	goto loc_8247ED54;
loc_8247ED44:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8247ed60
	goto loc_8247ED60;
loc_8247ED4C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ed60
	if (ctx.cr6.eq) goto loc_8247ED60;
loc_8247ED54:
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247ED60:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8247ed24
	if (!ctx.cr0.eq) goto loc_8247ED24;
	// addi r9,r14,1120
	ctx.r9.s64 = ctx.r14.s64 + 1120;
	// addi r11,r31,21152
	ctx.r11.s64 = ctx.r31.s64 + 21152;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8247ED7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x8247eda4
	if (ctx.cr6.eq) goto loc_8247EDA4;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ed9c
	if (ctx.cr6.eq) goto loc_8247ED9C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247edac
	goto loc_8247EDAC;
loc_8247ED9C:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8247edb8
	goto loc_8247EDB8;
loc_8247EDA4:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247edb8
	if (ctx.cr6.eq) goto loc_8247EDB8;
loc_8247EDAC:
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247EDB8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8247ed7c
	if (!ctx.cr0.eq) goto loc_8247ED7C;
	// addi r9,r14,992
	ctx.r9.s64 = ctx.r14.s64 + 992;
	// addi r11,r31,20640
	ctx.r11.s64 = ctx.r31.s64 + 20640;
	// li r8,16
	ctx.r8.s64 = 16;
loc_8247EDD4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x8247edfc
	if (ctx.cr6.eq) goto loc_8247EDFC;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247edf4
	if (ctx.cr6.eq) goto loc_8247EDF4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8247ee04
	goto loc_8247EE04;
loc_8247EDF4:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x8247ee10
	goto loc_8247EE10;
loc_8247EDFC:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ee10
	if (ctx.cr6.eq) goto loc_8247EE10;
loc_8247EE04:
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247EE10:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8247edd4
	if (!ctx.cr0.eq) goto loc_8247EDD4;
	// lwz r11,20896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20896);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r11,1056(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 1056);
	// beq cr6,0x8247ee40
	if (ctx.cr6.eq) goto loc_8247EE40;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8247ee48
	if (!ctx.cr6.eq) goto loc_8247EE48;
	// stw r7,20896(r31)
	REX_STORE_U32(ctx.r31.u32 + 20896, ctx.r7.u32);
	// b 0x8247ee58
	goto loc_8247EE58;
loc_8247EE40:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ee58
	if (ctx.cr6.eq) goto loc_8247EE58;
loc_8247EE48:
	// stw r11,20896(r31)
	REX_STORE_U32(ctx.r31.u32 + 20896, ctx.r11.u32);
	// lwz r11,23200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r11.u32);
loc_8247EE58:
	// lwz r10,21920(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21920);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// addi r30,r11,6392
	ctx.r30.s64 = ctx.r11.s64 + 6392;
	// bne cr6,0x8247ee78
	if (!ctx.cr6.eq) goto loc_8247EE78;
	// lwz r11,22176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22176);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ee90
	if (ctx.cr6.eq) goto loc_8247EE90;
loc_8247EE78:
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,15999
	ctx.r7.s64 = 15999;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8247EE90;
	sub_823AFBD8(ctx, base);
loc_8247EE90:
	// lwz r11,22432(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22432);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eeb4
	if (ctx.cr6.eq) goto loc_8247EEB4;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,16005
	ctx.r7.s64 = 16005;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8247EEB4;
	sub_823AFBD8(ctx, base);
loc_8247EEB4:
	// lwz r11,18592(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 18592);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247eed8
	if (ctx.cr6.eq) goto loc_8247EED8;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r7,16012
	ctx.r7.s64 = 16012;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x8247EED8;
	sub_823AFBD8(ctx, base);
loc_8247EED8:
	// addi r11,r31,17824
	ctx.r11.s64 = ctx.r31.s64 + 17824;
	// li r9,64
	ctx.r9.s64 = 64;
loc_8247EEE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ef00
	if (ctx.cr6.eq) goto loc_8247EF00;
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,23200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23200);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23200(r31)
	REX_STORE_U32(ctx.r31.u32 + 23200, ctx.r10.u32);
loc_8247EF00:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247eee0
	if (!ctx.cr0.eq) goto loc_8247EEE0;
	// addi r11,r31,22688
	ctx.r11.s64 = ctx.r31.s64 + 22688;
	// li r9,4
	ctx.r9.s64 = 4;
loc_8247EF14:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8247ef34
	if (ctx.cr6.eq) goto loc_8247EF34;
	// lwz r10,23204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,23204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 23204);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,23204(r31)
	REX_STORE_U32(ctx.r31.u32 + 23204, ctx.r10.u32);
loc_8247EF34:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8247ef14
	if (!ctx.cr0.eq) goto loc_8247EF14;
	// lwz r11,22944(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22944);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8247ef54
	if (ctx.cr6.eq) goto loc_8247EF54;
	// li r11,63
	ctx.r11.s64 = 63;
	// stw r11,22944(r31)
	REX_STORE_U32(ctx.r31.u32 + 22944, ctx.r11.u32);
loc_8247EF54:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,23368(r31)
	REX_STORE_U32(ctx.r31.u32 + 23368, ctx.r11.u32);
	// stw r10,23372(r31)
	REX_STORE_U32(ctx.r31.u32 + 23372, ctx.r10.u32);
	// bl 0x822ddad0
	ctx.lr = 0x8247EF6C;
	sub_822DDAD0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B6D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x824B6D60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r9,1873(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 1873);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r29,r11,-10336
	ctx.r29.s64 = ctx.r11.s64 + -10336;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r10,-15296
	ctx.r28.s64 = ctx.r10.s64 + -15296;
	// beq 0x824b6dac
	if (ctx.cr0.eq) goto loc_824B6DAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-15132
	ctx.r5.s64 = ctx.r11.s64 + -15132;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824B6DAC;
	sub_823AFBD8(ctx, base);
loc_824B6DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,912
	ctx.r11.s64 = ctx.r31.s64 + 912;
loc_824B6DB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b6df8
	if (ctx.cr6.eq) goto loc_824B6DF8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x824b6db4
	if (ctx.cr6.lt) goto loc_824B6DB4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-9372
	ctx.r5.s64 = ctx.r11.s64 + -9372;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,499
	ctx.r7.s64 = 499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824B6DEC;
	sub_823AFBD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B6DF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_824B6DF8:
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// addi r9,r3,228
	ctx.r9.s64 = ctx.r3.s64 + 228;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 33, ctx.xer);
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r27.u32);
	// stwx r26,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u32);
	// beq cr6,0x824b6df0
	if (ctx.cr6.eq) goto loc_824B6DF0;
	// addi r11,r3,69
	ctx.r11.s64 = ctx.r3.s64 + 69;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x824b6df0
	goto loc_824B6DF0;
}

DEFINE_REX_FUNC(sub_824B9330) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8249b248
	ctx.lr = 0x824B9354;
	sub_8249B248(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b93a4
	if (ctx.cr0.eq) goto loc_824B93A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_824B9360:
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824b9390
	if (!ctx.cr0.eq) goto loc_824B9390;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824B9390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824B9390:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x824b9360
	if (ctx.cr6.lt) goto loc_824B9360;
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// b 0x824b93a8
	goto loc_824B93A8;
loc_824B93A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_824B93A8:
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

DEFINE_REX_FUNC(sub_824BAAB8) {
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
	// bl 0x824b94d8
	ctx.lr = 0x824BAAD8;
	sub_824B94D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-4960
	ctx.r11.s64 = ctx.r11.s64 + -4960;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824BB4E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x824BB4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// std r6,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r8,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// std r9,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r10,-4696
	ctx.r10.s64 = ctx.r10.s64 + -4696;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r31,-3408(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -3408);
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_824BB558:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x824bb5e0
	if (ctx.cr6.lt) goto loc_824BB5E0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
loc_824BB568:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x824bb5bc
	if (ctx.cr6.eq) goto loc_824BB5BC;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824bb59c
	if (!ctx.cr6.eq) goto loc_824BB59C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824bb5a0
	if (ctx.cr6.eq) goto loc_824BB5A0;
loc_824BB59C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BB5A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824bb5d8
	if (!ctx.cr0.eq) goto loc_824BB5D8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x824bb568
	if (!ctx.cr6.gt) goto loc_824BB568;
	// b 0x824bb5e0
	goto loc_824BB5E0;
loc_824BB5BC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x824bb5e0
	goto loc_824BB5E0;
loc_824BB5D8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
loc_824BB5E0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x824bb558
	if (ctx.cr6.lt) goto loc_824BB558;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824bb684
	if (!ctx.cr6.gt) goto loc_824BB684;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_824BB604:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x824bb678
	if (!ctx.cr6.gt) goto loc_824BB678;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_824BB614:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824bb634
	if (!ctx.cr6.eq) goto loc_824BB634;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824BB634:
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824bb668
	if (ctx.cr0.eq) goto loc_824BB668;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbx r7,r5,r8
	REX_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u8);
loc_824BB668:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x824bb614
	if (ctx.cr6.lt) goto loc_824BB614;
loc_824BB678:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bne 0x824bb604
	if (!ctx.cr0.eq) goto loc_824BB604;
loc_824BB684:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x824bb6b0
	if (!ctx.cr6.gt) goto loc_824BB6B0;
loc_824BB690:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// blt cr6,0x824bb690
	if (ctx.cr6.lt) goto loc_824BB690;
loc_824BB6B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824BB6B4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x824bb6b4
	if (ctx.cr6.lt) goto loc_824BB6B4;
	// lwz r11,952(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 952);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824bb7c8
	if (ctx.cr0.eq) goto loc_824BB7C8;
	// beq cr6,0x824bb7a0
	if (ctx.cr6.eq) goto loc_824BB7A0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x824bb784
	if (ctx.cr6.eq) goto loc_824BB784;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x824bb760
	if (ctx.cr6.eq) goto loc_824BB760;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x824bb734
	if (ctx.cr6.eq) goto loc_824BB734;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-3384
	ctx.r6.s64 = ctx.r11.s64 + -3384;
	// addi r5,r10,-9372
	ctx.r5.s64 = ctx.r10.s64 + -9372;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824BB730;
	sub_823AFBD8(ctx, base);
	// b 0x824bb7b4
	goto loc_824BB7B4;
loc_824BB734:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x824ab0a8
	ctx.lr = 0x824BB75C;
	sub_824AB0A8(ctx, base);
	// b 0x824bb7b0
	goto loc_824BB7B0;
loc_824BB760:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x824ab088
	ctx.lr = 0x824BB780;
	sub_824AB088(ctx, base);
	// b 0x824bb7b0
	goto loc_824BB7B0;
loc_824BB784:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x824ab068
	ctx.lr = 0x824BB79C;
	sub_824AB068(ctx, base);
	// b 0x824bb7b0
	goto loc_824BB7B0;
loc_824BB7A0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x824ab048
	ctx.lr = 0x824BB7B0;
	sub_824AB048(ctx, base);
loc_824BB7B0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824BB7B4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249b520
	ctx.lr = 0x824BB7C4;
	sub_8249B520(ctx, base);
	// b 0x824bb89c
	goto loc_824BB89C;
loc_824BB7C8:
	// beq cr6,0x824bb878
	if (ctx.cr6.eq) goto loc_824BB878;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x824bb85c
	if (ctx.cr6.eq) goto loc_824BB85C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x824bb838
	if (ctx.cr6.eq) goto loc_824BB838;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x824bb80c
	if (ctx.cr6.eq) goto loc_824BB80C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-3384
	ctx.r6.s64 = ctx.r11.s64 + -3384;
	// addi r5,r10,-9372
	ctx.r5.s64 = ctx.r10.s64 + -9372;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,410
	ctx.r7.s64 = 410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824BB808;
	sub_823AFBD8(ctx, base);
	// b 0x824bb88c
	goto loc_824BB88C;
loc_824BB80C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x824ac9e8
	ctx.lr = 0x824BB834;
	sub_824AC9E8(ctx, base);
	// b 0x824bb888
	goto loc_824BB888;
loc_824BB838:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x824ac9c8
	ctx.lr = 0x824BB858;
	sub_824AC9C8(ctx, base);
	// b 0x824bb888
	goto loc_824BB888;
loc_824BB85C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x824ac9a8
	ctx.lr = 0x824BB874;
	sub_824AC9A8(ctx, base);
	// b 0x824bb888
	goto loc_824BB888;
loc_824BB878:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x824ac988
	ctx.lr = 0x824BB888;
	sub_824AC988(ctx, base);
loc_824BB888:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_824BB88C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824bb468
	ctx.lr = 0x824BB89C;
	sub_824BB468(ctx, base);
loc_824BB89C:
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3A80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x824D3A88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r11,196
	ctx.r29.s64 = ctx.r11.s64 + 196;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x824D3AAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 316);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// rotlwi r5,r11,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r27,r5,8
	ctx.r27.s64 = ctx.r5.s64 + 8;
	// beq cr6,0x824d3ad8
	if (ctx.cr6.eq) goto loc_824D3AD8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x824d3ad8
	if (ctx.cr6.eq) goto loc_824D3AD8;
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x825d6e10
	ctx.lr = 0x824D3AD8;
	sub_825D6E10(ctx, base);
loc_824D3AD8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x824d3ae4
	if (ctx.cr6.eq) goto loc_824D3AE4;
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_824D3AE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x824D3AEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D6580) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r11,20568
	ctx.r6.s64 = ctx.r11.s64 + 20568;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r8,20564
	ctx.r3.s64 = ctx.r8.s64 + 20564;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r10,20384
	ctx.r5.s64 = ctx.r10.s64 + 20384;
	// addi r4,r9,20560
	ctx.r4.s64 = ctx.r9.s64 + 20560;
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r11,r7,20544
	ctx.r11.s64 = ctx.r7.s64 + 20544;
	// stw r5,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stw r4,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x824d48c0
	ctx.lr = 0x824D65E0;
	sub_824D48C0(ctx, base);
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824d6600
	if (ctx.cr6.eq) goto loc_824D6600;
	// lis r4,8324
	ctx.r4.s64 = 545521664;
	// ori r4,r4,32777
	ctx.r4.u64 = ctx.r4.u64 | 32777;
	// bl 0x824cf458
	ctx.lr = 0x824D65FC;
	sub_824CF458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_824D6600:
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

DEFINE_REX_FUNC(sub_824D82E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x824D82F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r11,196
	ctx.r28.s64 = ctx.r11.s64 + 196;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8261c0d4
	ctx.lr = 0x824D830C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824D8324;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824d83d4
	if (ctx.cr6.eq) goto loc_824D83D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824D8344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824d83d4
	if (ctx.cr6.eq) goto loc_824D83D4;
loc_824D834C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824D8364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_824D8368:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// beq cr6,0x824d838c
	if (ctx.cr6.eq) goto loc_824D838C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824d8368
	if (ctx.cr6.eq) goto loc_824D8368;
loc_824D838C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824d83d0
	if (ctx.cr6.eq) goto loc_824D83D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r8,56(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824D83B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x824d834c
	if (ctx.cr6.lt) goto loc_824D834C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x824D83C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_824D83D0:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_824D83D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8261c0e4
	ctx.lr = 0x824D83DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD370) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824dd3c0
	if (ctx.cr6.eq) goto loc_824DD3C0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824dd3b0
	if (ctx.cr6.eq) goto loc_824DD3B0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824DD3B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824DD3B0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
loc_824DD3C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DF6C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x824df6fc
	if (ctx.cr6.lt) goto loc_824DF6FC;
	// stfs f1,40(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x824df700
	goto loc_824DF700;
loc_824DF6FC:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 40, temp.u32);
loc_824DF700:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824df72c
	if (ctx.cr6.eq) goto loc_824DF72C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x824ddd00
	ctx.lr = 0x824DF71C;
	sub_824DDD00(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x824dc330
	ctx.lr = 0x824DF72C;
	sub_824DC330(ctx, base);
loc_824DF72C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E2B00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x824E2B08;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824E2B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x824e2b44
	if (!ctx.cr6.eq) goto loc_824E2B44;
	// lwz r28,80(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824e2b58
	if (!ctx.cr6.eq) goto loc_824E2B58;
loc_824E2B44:
	// lhz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 76);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824e2b5c
	if (ctx.cr6.eq) goto loc_824E2B5C;
loc_824E2B58:
	// li r31,1
	ctx.r31.s64 = 1;
loc_824E2B5C:
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r29,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x825d6870
	ctx.lr = 0x824E2B70;
	sub_825D6870(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824e2c1c
	if (ctx.cr6.eq) goto loc_824E2C1C;
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e2bbc
	if (ctx.cr6.eq) goto loc_824E2BBC;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r11,52(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r10,304(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824e2c1c
	if (ctx.cr6.eq) goto loc_824E2C1C;
	// lhz r8,312(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 312);
	// stw r11,101(r1)
	REX_STORE_U32(ctx.r1.u32 + 101, ctx.r11.u32);
	// stw r10,97(r1)
	REX_STORE_U32(ctx.r1.u32 + 97, ctx.r10.u32);
	// sth r8,95(r1)
	REX_STORE_U16(ctx.r1.u32 + 95, ctx.r8.u16);
	// b 0x824e2bc8
	goto loc_824E2BC8;
loc_824E2BBC:
	// stw r29,101(r1)
	REX_STORE_U32(ctx.r1.u32 + 101, ctx.r29.u32);
	// stw r29,97(r1)
	REX_STORE_U32(ctx.r1.u32 + 97, ctx.r29.u32);
	// sth r9,95(r1)
	REX_STORE_U16(ctx.r1.u32 + 95, ctx.r9.u16);
loc_824E2BC8:
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824e2bdc
	if (!ctx.cr6.eq) goto loc_824E2BDC;
	// sth r9,93(r1)
	REX_STORE_U16(ctx.r1.u32 + 93, ctx.r9.u16);
	// b 0x824e2be8
	goto loc_824E2BE8;
loc_824E2BDC:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x824d9c18
	ctx.lr = 0x824E2BE4;
	sub_824D9C18(ctx, base);
	// sth r3,93(r1)
	REX_STORE_U16(ctx.r1.u32 + 93, ctx.r3.u16);
loc_824E2BE8:
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r28,89(r1)
	REX_STORE_U32(ctx.r1.u32 + 89, ctx.r28.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,105(r1)
	REX_STORE_U32(ctx.r1.u32 + 105, ctx.r11.u32);
	// lbz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r9,8,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r7,24,39
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 24) & 0xFFFFFFFFFF000000;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x824ce9a8
	ctx.lr = 0x824E2C1C;
	sub_824CE9A8(ctx, base);
loc_824E2C1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824E9590) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824E95BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e95f0
	if (ctx.cr6.eq) goto loc_824E95F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824E95D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824E95F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824E95F0:
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

DEFINE_REX_FUNC(sub_824ED470) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x824ED478;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x8226d430
	ctx.lr = 0x824ED49C;
	sub_8226D430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ed4cc
	if (!ctx.cr0.eq) goto loc_824ED4CC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c784
	ctx.lr = 0x824ED4CC;
	__imp__XamUserReadProfileSettings(ctx, base);
loc_824ED4CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824EF128) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f9,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f12,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addi r11,r11,5272
	ctx.r11.s64 = ctx.r11.s64 + 5272;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fdivs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x824ef1b0
	if (!ctx.cr6.gt) goto loc_824EF1B0;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,5476(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5476);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fdivs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f10,f12,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// b 0x824ef1d4
	goto loc_824EF1D4;
loc_824EF1B0:
	// fmuls f8,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,5476(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
loc_824EF1D4:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r9,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// lfs f13,5840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 5840);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// stfs f1,164(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f1,224(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r8,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,148(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f11,168(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f10,188(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f10,208(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// bl 0x824eed30
	ctx.lr = 0x824EF2D0;
	sub_824EED30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FB0C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824FB870) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x824FB878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FB89C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x824fb8f4
	if (ctx.cr6.gt) goto loc_824FB8F4;
	// lis r12,-32176
	ctx.r12.s64 = -2108686336;
	// addi r12,r12,-18240
	ctx.r12.s64 = ctx.r12.s64 + -18240;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824FB8DC;
	case 1:
		goto loc_824FB8E8;
	case 2:
		goto loc_824FB8F4;
	case 3:
		goto loc_824FB8D0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_824FB8D0:
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r29,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// b 0x824fb8fc
	goto loc_824FB8FC;
loc_824FB8DC:
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r29,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
	// b 0x824fb8fc
	goto loc_824FB8FC;
loc_824FB8E8:
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r29,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// b 0x824fb8fc
	goto loc_824FB8FC;
loc_824FB8F4:
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r29,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_824FB8FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FB910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824FFBA0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// blt cr6,0x824ffc34
	if (ctx.cr6.lt) goto loc_824FFC34;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// bge cr6,0x824ffc34
	if (!ctx.cr6.lt) goto loc_824FFC34;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824ffc0c
	if (!ctx.cr6.eq) goto loc_824FFC0C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,182
	ctx.r3.u64 = ctx.r3.u64 | 182;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824FFC0C:
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FFC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_824FFC34:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d0
	ctx.lr = 0x82503AE8;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// ld r29,0(r24)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r24.u32 + 0);
	// lwz r10,208(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,-24
	ctx.r22.s64 = ctx.r11.s64 + -24;
	// bne cr6,0x82503f98
	if (!ctx.cr6.eq) goto loc_82503F98;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,8
	ctx.r3.s64 = 8;
	// ori r19,r11,32768
	ctx.r19.u64 = ctx.r11.u64 | 32768;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8226a7f8
	ctx.lr = 0x82503B2C;
	sub_8226A7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,208(r24)
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82503b44
	if (!ctx.cr6.eq) goto loc_82503B44;
loc_82503B3C:
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x82503f24
	goto loc_82503F24;
loc_82503B44:
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// stw r18,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r18.u32);
	// stw r18,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// ble cr6,0x82503b60
	if (!ctx.cr6.gt) goto loc_82503B60;
loc_82503B58:
	// li r23,6
	ctx.r23.s64 = 6;
	// b 0x82503f24
	goto loc_82503F24;
loc_82503B60:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f2800
	ctx.lr = 0x82503B74;
	sub_824F2800(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82503f20
	if (!ctx.cr6.eq) goto loc_82503F20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// rlwinm r31,r11,4,12,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226a7f8
	ctx.lr = 0x82503BB8;
	sub_8226A7F8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82503bcc
	if (!ctx.cr6.eq) goto loc_82503BCC;
	// li r23,5
	ctx.r23.s64 = 5;
	// b 0x82503f24
	goto loc_82503F24;
loc_82503BCC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d6870
	ctx.lr = 0x82503BD8;
	sub_825D6870(ctx, base);
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82503f98
	if (ctx.cr6.eq) goto loc_82503F98;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82503BE8:
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x82503b58
	if (ctx.cr6.gt) goto loc_82503B58;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f2800
	ctx.lr = 0x82503C08;
	sub_824F2800(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82503f20
	if (!ctx.cr6.eq) goto loc_82503F20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthx r7,r9,r28
	REX_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r7.u16);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r7,r6,4
	ctx.r7.s64 = ctx.r6.s64 + 4;
	// bl 0x82502210
	ctx.lr = 0x82503C58;
	sub_82502210(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82503f24
	if (!ctx.cr6.eq) goto loc_82503F24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82503c9c
	if (ctx.cr6.eq) goto loc_82503C9C;
loc_82503C80:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82503c80
	if (!ctx.cr0.eq) goto loc_82503C80;
loc_82503C9C:
	// ld r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmpld cr6,r31,r22
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x82503b58
	if (ctx.cr6.gt) goto loc_82503B58;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f2800
	ctx.lr = 0x82503CBC;
	sub_824F2800(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x82503f20
	if (!ctx.cr6.eq) goto loc_82503F20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// std r25,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r25.u64);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r7,8(r9)
	REX_STORE_U16(ctx.r9.u32 + 8, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r28
	ctx.r4.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,10(r4)
	REX_STORE_U16(ctx.r4.u32 + 10, ctx.r11.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82503db4
	if (!ctx.cr6.eq) goto loc_82503DB4;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,10
	ctx.r6.s64 = ctx.r11.s64 + 10;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82502210
	ctx.lr = 0x82503D4C;
	sub_82502210(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82503f24
	if (!ctx.cr6.eq) goto loc_82503F24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82503d90
	if (ctx.cr6.eq) goto loc_82503D90;
loc_82503D74:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82503d74
	if (!ctx.cr0.eq) goto loc_82503D74;
loc_82503D90:
	// ld r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_82503D94:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82503be8
	if (ctx.cr6.lt) goto loc_82503BE8;
	// std r22,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6120
	__restgprlr_18(ctx, base);
	return;
loc_82503DB4:
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + ctx.r25.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpld cr6,r8,r22
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r22.u64, ctx.xer);
	// bgt cr6,0x82503b58
	if (ctx.cr6.gt) goto loc_82503B58;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8226a7f8
	ctx.lr = 0x82503DD4;
	sub_8226A7F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82503b3c
	if (ctx.cr6.eq) goto loc_82503B3C;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82503e5c
	if (ctx.cr6.eq) goto loc_82503E5C;
loc_82503E00:
	// subf r27,r31,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r31.u64;
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// ble cr6,0x82503e10
	if (!ctx.cr6.gt) goto loc_82503E10;
	// li r27,128
	ctx.r27.s64 = 128;
loc_82503E10:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824f2800
	ctx.lr = 0x82503E28;
	sub_824F2800(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82503f20
	if (!ctx.cr6.eq) goto loc_82503F20;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825d6e10
	ctx.lr = 0x82503E50;
	sub_825D6E10(ctx, base);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82503e00
	if (ctx.cr6.lt) goto loc_82503E00;
loc_82503E5C:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82503f20
	if (!ctx.cr6.eq) goto loc_82503F20;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrldi r10,r31,32
	ctx.r10.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82503d94
	if (ctx.cr6.gt) goto loc_82503D94;
	// lis r12,-32176
	ctx.r12.s64 = -2108686336;
	// addi r12,r12,16028
	ctx.r12.s64 = ctx.r12.s64 + 16028;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82503EAC;
	case 1:
		goto loc_82503EAC;
	case 2:
		goto loc_82503ED4;
	case 3:
		goto loc_82503F08;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82503EAC:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// b 0x82503d94
	goto loc_82503D94;
loc_82503ED4:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
loc_82503EE0:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// blt cr6,0x82503ee0
	if (ctx.cr6.lt) goto loc_82503EE0;
	// b 0x82503d94
	goto loc_82503D94;
loc_82503F08:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x82503d94
	goto loc_82503D94;
loc_82503F20:
	// li r23,3
	ctx.r23.s64 = 3;
loc_82503F24:
	// lwz r30,208(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82503f98
	if (ctx.cr6.eq) goto loc_82503F98;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82503f88
	if (ctx.cr6.eq) goto loc_82503F88;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82503f78
	if (ctx.cr6.eq) goto loc_82503F78;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82503F50:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8226a890
	ctx.lr = 0x82503F64;
	sub_8226A890(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82503f50
	if (ctx.cr6.lt) goto loc_82503F50;
loc_82503F78:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8226a890
	ctx.lr = 0x82503F84;
	sub_8226A890(ctx, base);
	// stw r18,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
loc_82503F88:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r3,208(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 208);
	// bl 0x8226a890
	ctx.lr = 0x82503F94;
	sub_8226A890(ctx, base);
	// stw r18,208(r24)
	REX_STORE_U32(ctx.r24.u32 + 208, ctx.r18.u32);
loc_82503F98:
	// std r22,0(r24)
	REX_STORE_U64(ctx.r24.u32 + 0, ctx.r22.u64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6120
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8251E410) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,94
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 94, ctx.xer);
	// bgt cr6,0x8251e61c
	if (ctx.cr6.gt) goto loc_8251E61C;
	// lis r12,-32174
	ctx.r12.s64 = -2108555264;
	// addi r12,r12,-7120
	ctx.r12.s64 = ctx.r12.s64 + -7120;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8251E600;
	case 1:
		goto loc_8251E61C;
	case 2:
		goto loc_8251E61C;
	case 3:
		goto loc_8251E61C;
	case 4:
		goto loc_8251E61C;
	case 5:
		goto loc_8251E61C;
	case 6:
		goto loc_8251E61C;
	case 7:
		goto loc_8251E61C;
	case 8:
		goto loc_8251E61C;
	case 9:
		goto loc_8251E61C;
	case 10:
		goto loc_8251E61C;
	case 11:
		goto loc_8251E61C;
	case 12:
		goto loc_8251E61C;
	case 13:
		goto loc_8251E61C;
	case 14:
		goto loc_8251E61C;
	case 15:
		goto loc_8251E61C;
	case 16:
		goto loc_8251E61C;
	case 17:
		goto loc_8251E61C;
	case 18:
		goto loc_8251E61C;
	case 19:
		goto loc_8251E61C;
	case 20:
		goto loc_8251E61C;
	case 21:
		goto loc_8251E61C;
	case 22:
		goto loc_8251E61C;
	case 23:
		goto loc_8251E61C;
	case 24:
		goto loc_8251E61C;
	case 25:
		goto loc_8251E61C;
	case 26:
		goto loc_8251E61C;
	case 27:
		goto loc_8251E61C;
	case 28:
		goto loc_8251E61C;
	case 29:
		goto loc_8251E61C;
	case 30:
		goto loc_8251E61C;
	case 31:
		goto loc_8251E61C;
	case 32:
		goto loc_8251E61C;
	case 33:
		goto loc_8251E61C;
	case 34:
		goto loc_8251E61C;
	case 35:
		goto loc_8251E61C;
	case 36:
		goto loc_8251E61C;
	case 37:
		goto loc_8251E61C;
	case 38:
		goto loc_8251E61C;
	case 39:
		goto loc_8251E61C;
	case 40:
		goto loc_8251E61C;
	case 41:
		goto loc_8251E61C;
	case 42:
		goto loc_8251E61C;
	case 43:
		goto loc_8251E61C;
	case 44:
		goto loc_8251E61C;
	case 45:
		goto loc_8251E61C;
	case 46:
		goto loc_8251E61C;
	case 47:
		goto loc_8251E61C;
	case 48:
		goto loc_8251E61C;
	case 49:
		goto loc_8251E61C;
	case 50:
		goto loc_8251E61C;
	case 51:
		goto loc_8251E61C;
	case 52:
		goto loc_8251E61C;
	case 53:
		goto loc_8251E61C;
	case 54:
		goto loc_8251E61C;
	case 55:
		goto loc_8251E61C;
	case 56:
		goto loc_8251E61C;
	case 57:
		goto loc_8251E61C;
	case 58:
		goto loc_8251E61C;
	case 59:
		goto loc_8251E61C;
	case 60:
		goto loc_8251E61C;
	case 61:
		goto loc_8251E5E4;
	case 62:
		goto loc_8251E61C;
	case 63:
		goto loc_8251E61C;
	case 64:
		goto loc_8251E61C;
	case 65:
		goto loc_8251E61C;
	case 66:
		goto loc_8251E61C;
	case 67:
		goto loc_8251E61C;
	case 68:
		goto loc_8251E61C;
	case 69:
		goto loc_8251E61C;
	case 70:
		goto loc_8251E61C;
	case 71:
		goto loc_8251E61C;
	case 72:
		goto loc_8251E61C;
	case 73:
		goto loc_8251E61C;
	case 74:
		goto loc_8251E61C;
	case 75:
		goto loc_8251E61C;
	case 76:
		goto loc_8251E61C;
	case 77:
		goto loc_8251E61C;
	case 78:
		goto loc_8251E5C8;
	case 79:
		goto loc_8251E61C;
	case 80:
		goto loc_8251E61C;
	case 81:
		goto loc_8251E61C;
	case 82:
		goto loc_8251E61C;
	case 83:
		goto loc_8251E61C;
	case 84:
		goto loc_8251E61C;
	case 85:
		goto loc_8251E61C;
	case 86:
		goto loc_8251E61C;
	case 87:
		goto loc_8251E61C;
	case 88:
		goto loc_8251E61C;
	case 89:
		goto loc_8251E61C;
	case 90:
		goto loc_8251E61C;
	case 91:
		goto loc_8251E61C;
	case 92:
		goto loc_8251E61C;
	case 93:
		goto loc_8251E61C;
	case 94:
		goto loc_8251E5AC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8251E5AC:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r11,-9552
	ctx.r9.s64 = ctx.r11.s64 + -9552;
	// addi r8,r10,-9720
	ctx.r8.s64 = ctx.r10.s64 + -9720;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8251E5C8:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r11,-9512
	ctx.r9.s64 = ctx.r11.s64 + -9512;
	// addi r8,r10,-9696
	ctx.r8.s64 = ctx.r10.s64 + -9696;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8251E5E4:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r11,-9568
	ctx.r9.s64 = ctx.r11.s64 + -9568;
	// addi r8,r10,-9736
	ctx.r8.s64 = ctx.r10.s64 + -9736;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8251E600:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r11,-9472
	ctx.r9.s64 = ctx.r11.s64 + -9472;
	// addi r8,r10,-9400
	ctx.r8.s64 = ctx.r10.s64 + -9400;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8251E61C:
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r9,r11,-9656
	ctx.r9.s64 = ctx.r11.s64 + -9656;
	// addi r8,r10,-10328
	ctx.r8.s64 = ctx.r10.s64 + -10328;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82529928) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82529938:
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82529938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82529938;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8252BD40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x8252BD48;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,0(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8252bd78
	if (ctx.cr6.eq) goto loc_8252BD78;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8252befc
	if (ctx.cr6.eq) goto loc_8252BEFC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
loc_8252BD78:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252beec
	if (!ctx.cr6.lt) goto loc_8252BEEC;
	// addi r25,r31,224
	ctx.r25.s64 = ctx.r31.s64 + 224;
loc_8252BD90:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,304(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 304);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,400(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 400);
	// lwz r10,320(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8252e860
	ctx.lr = 0x8252BDB8;
	sub_8252E860(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8252c03c
	if (ctx.cr6.lt) goto loc_8252C03C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252bec0
	if (ctx.cr6.eq) goto loc_8252BEC0;
	// lwz r26,12(r28)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// stb r24,0(r26)
	REX_STORE_U8(ctx.r26.u32 + 0, ctx.r24.u8);
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 404);
	// lwz r10,264(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 264);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r9.u32);
loc_8252BDE4:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r9,308(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 308);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 404);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8252be10
	if (ctx.cr6.gt) goto loc_8252BE10;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8252BE10:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8252bea4
	if (!ctx.cr6.lt) goto loc_8252BEA4;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252be30
	if (ctx.cr6.lt) goto loc_8252BE30;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8252BE30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82521d20
	ctx.lr = 0x8252BE40;
	sub_82521D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8252c03c
	if (ctx.cr6.lt) goto loc_8252C03C;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stbx r10,r9,r26
	REX_STORE_U8(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u8);
	// lhz r7,152(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lbzx r5,r6,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r26.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8252be7c
	if (ctx.cr6.eq) goto loc_8252BE7C;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r26)
	REX_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x8252be8c
	goto loc_8252BE8C;
loc_8252BE7C:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r10.u32);
loc_8252BE8C:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r9.u16);
	// b 0x8252bde4
	goto loc_8252BDE4;
loc_8252BEA4:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r10,304(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 304);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252bec4
	if (!ctx.cr6.lt) goto loc_8252BEC4;
	// stbx r24,r11,r26
	REX_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r24.u8);
	// b 0x8252bec4
	goto loc_8252BEC4;
loc_8252BEC0:
	// stw r24,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r24.u32);
loc_8252BEC4:
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 400);
	// sth r11,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r11.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,150(r31)
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lhz r6,34(r27)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8252bd90
	if (ctx.cr6.lt) goto loc_8252BD90;
loc_8252BEEC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// sth r24,150(r31)
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r24.u16);
	// sth r24,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r24.u16);
loc_8252BEFC:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252c03c
	if (!ctx.cr6.lt) goto loc_8252C03C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r26,r11,-24128
	ctx.r26.s64 = ctx.r11.s64 + -24128;
loc_8252BF18:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// lwz r10,320(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 320);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8252c018
	if (ctx.cr6.eq) goto loc_8252C018;
	// lwz r29,12(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,20(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c018
	if (ctx.cr6.eq) goto loc_8252C018;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252bf88
	if (!ctx.cr6.eq) goto loc_8252BF88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82521d20
	ctx.lr = 0x8252BF68;
	sub_82521D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8252c03c
	if (ctx.cr6.lt) goto loc_8252C03C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-19
	ctx.r10.s64 = ctx.r11.s64 + -19;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r8.u16);
loc_8252BF88:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8252c018
	if (!ctx.cr6.lt) goto loc_8252C018;
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
loc_8252BFA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8252f110
	ctx.lr = 0x8252BFB8;
	sub_8252F110(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8252c03c
	if (ctx.cr6.lt) goto loc_8252C03C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82522010
	ctx.lr = 0x8252BFCC;
	sub_82522010(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8252c03c
	if (ctx.cr6.lt) goto loc_8252C03C;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-18
	ctx.r9.s64 = ctx.r10.s64 + -18;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 152);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r7.u16);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8252bfa0
	if (ctx.cr6.lt) goto loc_8252BFA0;
loc_8252C018:
	// sth r24,152(r31)
	REX_STORE_U16(ctx.r31.u32 + 152, ctx.r24.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,150(r31)
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r10.u16);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r27)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r27.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8252bf18
	if (ctx.cr6.lt) goto loc_8252BF18;
loc_8252C03C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82540458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x82540460;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r28,28(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r31,8(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// ori r23,r10,128
	ctx.r23.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,183
	ctx.r22.u64 = ctx.r9.u64 | 183;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825404e0
	if (ctx.cr6.eq) goto loc_825404E0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825404e0
	if (ctx.cr6.eq) goto loc_825404E0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ffba0
	ctx.lr = 0x825404C8;
	sub_824FFBA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82540528
	if (!ctx.cr6.lt) goto loc_82540528;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x825406ac
	if (!ctx.cr6.eq) goto loc_825406AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_825404E0:
	// extsb r26,r27
	ctx.r26.s64 = ctx.r27.s8;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82540528
	if (!ctx.cr6.gt) goto loc_82540528;
loc_825404F0:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824ffba0
	ctx.lr = 0x82540508;
	sub_824FFBA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82540528
	if (!ctx.cr6.lt) goto loc_82540528;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x825406ac
	if (!ctx.cr6.eq) goto loc_825406AC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x825404f0
	if (ctx.cr6.lt) goto loc_825404F0;
loc_82540528:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x825406a4
	if (ctx.cr6.gt) goto loc_825406A4;
	// lis r12,-32172
	ctx.r12.s64 = -2108424192;
	// addi r12,r12,1356
	ctx.r12.s64 = ctx.r12.s64 + 1356;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825405D0;
	case 1:
		goto loc_825405EC;
	case 2:
		goto loc_82540608;
	case 3:
		goto loc_82540624;
	case 4:
		goto loc_82540638;
	case 5:
		goto loc_8254064C;
	case 6:
		goto loc_8254067C;
	case 7:
		goto loc_82540690;
	case 8:
		goto loc_82540598;
	case 9:
		goto loc_825405B4;
	case 10:
		goto loc_82540664;
	case 11:
		goto loc_8254057C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8254057C:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540598:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22857
	ctx.r9.u64 = ctx.r11.u64 | 22857;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_825405B4:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,13385
	ctx.r9.u64 = ctx.r11.u64 | 13385;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_825405D0:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,21849
	ctx.r9.u64 = ctx.r11.u64 | 21849;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_825405EC:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22869
	ctx.r9.u64 = ctx.r11.u64 | 22869;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540608:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540624:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r21,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540638:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r21,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_8254064C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540664:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_8254067C:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r21,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_82540690:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
loc_825406A4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
loc_825406AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825582D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825582D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,180(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r8,20984(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20984);
	// stw r9,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r9.u32);
	// stw r11,20624(r31)
	REX_STORE_U32(ctx.r31.u32 + 20624, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,20628(r31)
	REX_STORE_U32(ctx.r31.u32 + 20628, ctx.r10.u32);
	// stw r7,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r7.u32);
	// stw r6,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// beq cr6,0x8255834c
	if (ctx.cr6.eq) goto loc_8255834C;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// stw r8,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r8.u32);
	// stw r5,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r5.u32);
loc_8255834C:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r5,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// stw r4,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r4.u32);
	// bne cr6,0x82558380
	if (!ctx.cr6.eq) goto loc_82558380;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82558384
	if (ctx.cr6.eq) goto loc_82558384;
loc_82558380:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82558384:
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// stw r8,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// lwz r4,3756(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3756);
	// addi r10,r7,47
	ctx.r10.s64 = ctx.r7.s64 + 47;
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3784);
	// srawi r7,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 4;
	// stw r9,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r30,22112(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 22112);
	// mullw r28,r7,r9
	ctx.r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// stw r11,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r7,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r7.u32);
	// stw r28,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r28.u32);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r8,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// addi r28,r9,-1
	ctx.r28.s64 = ctx.r9.s64 + -1;
	// stw r10,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// addi r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 1;
	// stw r4,3780(r31)
	REX_STORE_U32(ctx.r31.u32 + 3780, ctx.r4.u32);
	// addi r9,r6,64
	ctx.r9.s64 = ctx.r6.s64 + 64;
	// stw r28,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r28.u32);
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r9,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// rlwinm r3,r29,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,3796(r31)
	REX_STORE_U32(ctx.r31.u32 + 3796, ctx.r8.u32);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r3.u32);
	// stw r5,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r5.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r4,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r4.u32);
	// bne cr6,0x82558430
	if (!ctx.cr6.eq) goto loc_82558430;
	// lwz r8,14804(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 14804);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82558430
	if (!ctx.cr6.gt) goto loc_82558430;
	// ld r8,3600(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 3600);
	// cmpdi cr6,r8,1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 1, ctx.xer);
	// bgt cr6,0x82558450
	if (ctx.cr6.gt) goto loc_82558450;
loc_82558430:
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r6,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r8,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r5,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r5.u32);
loc_82558450:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3380);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8255847c
	if (!ctx.cr6.eq) goto loc_8255847C;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bge cr6,0x82558494
	if (!ctx.cr6.lt) goto loc_82558494;
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r9,3380(r31)
	REX_STORE_U32(ctx.r31.u32 + 3380, ctx.r9.u32);
	// b 0x82558494
	goto loc_82558494;
loc_8255847C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82558494
	if (!ctx.cr6.eq) goto loc_82558494;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82558494
	if (!ctx.cr6.eq) goto loc_82558494;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3380(r31)
	REX_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
loc_82558494:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,2288(r31)
	REX_STORE_U32(ctx.r31.u32 + 2288, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,2292(r31)
	REX_STORE_U32(ctx.r31.u32 + 2292, ctx.r10.u32);
	// stw r9,2296(r31)
	REX_STORE_U32(ctx.r31.u32 + 2296, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,2300(r31)
	REX_STORE_U32(ctx.r31.u32 + 2300, ctx.r8.u32);
	// bl 0x8255d0a8
	ctx.lr = 0x825584BC;
	sub_8255D0A8(ctx, base);
	// lwz r7,188(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,22204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22204);
	// srawi r10,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,22204(r31)
	REX_STORE_U32(ctx.r31.u32 + 22204, ctx.r10.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82558520
	if (!ctx.cr6.lt) goto loc_82558520;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,22168(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 22168);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x825d6870
	ctx.lr = 0x825584F8;
	sub_825D6870(ctx, base);
	// lwz r11,22180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22180);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825d6870
	ctx.lr = 0x8255850C;
	sub_825D6870(ctx, base);
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22196);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825d6870
	ctx.lr = 0x82558520;
	sub_825D6870(ctx, base);
loc_82558520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82562788) {
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
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// li r9,-16
	ctx.r9.s64 = -16;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// beq cr6,0x825627dc
	if (ctx.cr6.eq) goto loc_825627DC;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// bl 0x82562408
	ctx.lr = 0x825627D8;
	sub_82562408(ctx, base);
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_825627DC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82562828
	if (ctx.cr6.gt) goto loc_82562828;
loc_825627E8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bgt cr6,0x82562828
	if (ctx.cr6.gt) goto loc_82562828;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// subfic r7,r11,40
	ctx.xer.ca = ctx.r11.u32 <= 40;
	ctx.r7.u64 = static_cast<uint64_t>(40) - ctx.r11.u64;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// sld r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r5,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825627e8
	if (!ctx.cr6.gt) goto loc_825627E8;
loc_82562828:
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
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

DEFINE_REX_FUNC(sub_82568280) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// sth r7,-16(r1)
	REX_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// srawi. r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r8,r6,28
	ctx.r8.u64 = ctx.r6.u32 & 0xF;
	// vslb v13,v13,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xF0E))));
	// ble 0x825682f0
	if (!ctx.cr0.gt) goto loc_825682F0;
	// vsubuhm v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
loc_825682AC:
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v10,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vmrghb v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vmrghb v7,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v6,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v5,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v4,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v3,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vpkshus128 v63,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bne 0x825682ac
	if (!ctx.cr0.eq) goto loc_825682AC;
loc_825682F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r6,r5,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r5,r5,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r5.u64;
loc_82568304:
	// lbzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addic. r10,r10,-128
	ctx.xer.ca = ctx.r10.u32 > 127;
	ctx.r10.s64 = ctx.r10.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82568324
	if (!ctx.cr0.lt) goto loc_82568324;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82568330
	goto loc_82568330;
loc_82568324:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82568330
	if (!ctx.cr6.gt) goto loc_82568330;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82568330:
	// stbx r10,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u8);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82568304
	if (!ctx.cr0.eq) goto loc_82568304;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82571368) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82571370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r11,1244(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 1244);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82571414
	if (ctx.cr6.lt) goto loc_82571414;
	// lwz r11,1308(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82571398
	if (ctx.cr6.eq) goto loc_82571398;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x825713a4
	if (!ctx.cr6.eq) goto loc_825713A4;
loc_82571398:
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x825713b0
	if (!ctx.cr6.eq) goto loc_825713B0;
loc_825713A4:
	// lbz r11,27(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82571414
	if (!ctx.cr6.eq) goto loc_82571414;
loc_825713B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825713B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82571400
	if (!ctx.cr6.eq) goto loc_82571400;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x825713e8
	if (!ctx.cr0.lt) goto loc_825713E8;
	// bl 0x82562a68
	ctx.lr = 0x825713E8;
	sub_82562A68(ctx, base);
loc_825713E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x825713b8
	if (ctx.cr6.lt) goto loc_825713B8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82571408
	if (ctx.cr6.eq) goto loc_82571408;
loc_82571400:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// b 0x825715c4
	goto loc_825715C4;
loc_82571408:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,1247(r28)
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
	// b 0x825715c8
	goto loc_825715C8;
loc_82571414:
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82571488
	if (!ctx.cr6.lt) goto loc_82571488;
loc_82571430:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571488
	if (ctx.cr6.eq) goto loc_82571488;
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
	// bge 0x82571478
	if (!ctx.cr0.lt) goto loc_82571478;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82571478;
	sub_82562A68(ctx, base);
loc_82571478:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82571430
	if (ctx.cr6.gt) goto loc_82571430;
loc_82571488:
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
	// bge 0x825714c4
	if (!ctx.cr0.lt) goto loc_825714C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x825714C4;
	sub_82562A68(ctx, base);
loc_825714C4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,1247(r28)
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
	// bne cr6,0x825715c8
	if (!ctx.cr6.eq) goto loc_825715C8;
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 1168);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82571598
	if (ctx.cr6.lt) goto loc_82571598;
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
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
	// bge cr6,0x82571554
	if (!ctx.cr6.lt) goto loc_82571554;
loc_825714FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571554
	if (ctx.cr6.eq) goto loc_82571554;
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
	// bge 0x82571544
	if (!ctx.cr0.lt) goto loc_82571544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82571544;
	sub_82562A68(ctx, base);
loc_82571544:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825714fc
	if (ctx.cr6.gt) goto loc_825714FC;
loc_82571554:
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
	// bge 0x82571590
	if (!ctx.cr0.lt) goto loc_82571590;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82571590;
	sub_82562A68(ctx, base);
loc_82571590:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// b 0x825715c4
	goto loc_825715C4;
loc_82571598:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x825715c0
	if (!ctx.cr0.lt) goto loc_825715C0;
	// bl 0x82562a68
	ctx.lr = 0x825715C0;
	sub_82562A68(ctx, base);
loc_825715C0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_825715C4:
	// stb r11,1247(r28)
	REX_STORE_U8(ctx.r28.u32 + 1247, ctx.r11.u8);
loc_825715C8:
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
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
	// bge cr6,0x8257163c
	if (!ctx.cr6.lt) goto loc_8257163C;
loc_825715E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257163c
	if (ctx.cr6.eq) goto loc_8257163C;
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
	// bge 0x8257162c
	if (!ctx.cr0.lt) goto loc_8257162C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x8257162C;
	sub_82562A68(ctx, base);
loc_8257162C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825715e4
	if (ctx.cr6.gt) goto loc_825715E4;
loc_8257163C:
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
	// bge 0x82571678
	if (!ctx.cr0.lt) goto loc_82571678;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82571678;
	sub_82562A68(ctx, base);
loc_82571678:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// stb r11,1248(r28)
	REX_STORE_U8(ctx.r28.u32 + 1248, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825806D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisb v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0xF)));
	// srawi. r11,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// ble 0x82580750
	if (!ctx.cr0.gt) goto loc_82580750;
loc_825806E8:
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// vxor128 v13,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsbs v10,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v12,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v11,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v59,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vaddsbs v8,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vaddsbs v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.s8), simde_mm_load_si128((simde__m128i*)ctx.v11.s8)));
	// stvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// vxor128 v58,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v57,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v56,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bgt 0x825806e8
	if (ctx.cr0.gt) goto loc_825806E8;
loc_82580750:
	// srawi. r11,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
loc_82580758:
	// lvx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v13,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v12,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddsbs v13,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.s8), simde_mm_load_si128((simde__m128i*)ctx.v13.s8)));
	// vaddsbs v12,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s8, simde_mm_adds_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.s8), simde_mm_load_si128((simde__m128i*)ctx.v12.s8)));
	// vxor128 v53,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vxor128 v52,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v53,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bgt 0x82580758
	if (ctx.cr0.gt) goto loc_82580758;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82588378) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x82588380;
	__savegprlr_14(ctx, base);
	// lis r25,-32141
	ctx.r25.s64 = -2106392576;
	// stw r9,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// add r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 + ctx.r7.u64;
	// lwz r27,100(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r7,-26756(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + -26756);
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// clrlwi r22,r9,29
	ctx.r22.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r29,r7,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r31,r10
	ctx.r30.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subf r20,r7,r31
	ctx.r20.u64 = ctx.r31.u64 - ctx.r7.u64;
	// add r31,r29,r22
	ctx.r31.u64 = ctx.r29.u64 + ctx.r22.u64;
	// subf r21,r7,r11
	ctx.r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// subfic r31,r27,0
	ctx.xer.ca = ctx.r27.u32 <= 0;
	ctx.r31.u64 = static_cast<uint64_t>(0) - ctx.r27.u64;
	// stw r9,-156(r1)
	REX_STORE_U32(ctx.r1.u32 + -156, ctx.r9.u32);
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// rlwinm r31,r31,0,28,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xE;
	// subf r19,r7,r10
	ctx.r19.u64 = ctx.r10.u64 - ctx.r7.u64;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// addi r27,r31,10
	ctx.r27.s64 = ctx.r31.s64 + 10;
	// stw r27,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r27.u32);
	// bge cr6,0x82588518
	if (!ctx.cr6.lt) goto loc_82588518;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// subf r16,r4,r3
	ctx.r16.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r15,r21,r20
	ctx.r15.u64 = ctx.r20.u64 - ctx.r21.u64;
	// subf r17,r5,r6
	ctx.r17.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_8258840C:
	// lbzx r11,r16,r24
	ctx.r11.u64 = REX_LOAD_U8(ctx.r16.u32 + ctx.r24.u32);
	// add r3,r19,r23
	ctx.r3.u64 = ctx.r19.u64 + ctx.r23.u64;
	// lbz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lbz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// rldicr r4,r11,8,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// rldicr r26,r31,8,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r29,r10,8,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r27,r5,8,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// or r4,r26,r31
	ctx.r4.u64 = ctx.r26.u64 | ctx.r31.u64;
	// or r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 | ctx.r10.u64;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// rldicr r26,r4,16,47
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r31,r11,16,47
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r29,r10,16,47
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r27,r5,16,47
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// or r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 | ctx.r10.u64;
	// or r5,r27,r5
	ctx.r5.u64 = ctx.r27.u64 | ctx.r5.u64;
	// rldicr r26,r4,32,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r31,r11,32,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r29,r10,32,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r27,r5,32,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// or r26,r26,r4
	ctx.r26.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 | ctx.r11.u64;
	// or r29,r29,r10
	ctx.r29.u64 = ctx.r29.u64 | ctx.r10.u64;
	// or r27,r27,r5
	ctx.r27.u64 = ctx.r27.u64 | ctx.r5.u64;
	// add r4,r15,r3
	ctx.r4.u64 = ctx.r15.u64 + ctx.r3.u64;
	// ble cr6,0x825884b8
	if (!ctx.cr6.gt) goto loc_825884B8;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// subf r7,r28,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r28.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82588498:
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stbx r5,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u8);
	// lbz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82588498
	if (!ctx.cr0.eq) goto loc_82588498;
	// lwz r7,-26756(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + -26756);
loc_825884B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x825884f8
	if (!ctx.cr6.gt) goto loc_825884F8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// subf r5,r23,r18
	ctx.r5.u64 = ctx.r18.u64 - ctx.r23.u64;
	// subf r4,r23,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r23.u64;
	// subf r3,r23,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r23.u64;
loc_825884D4:
	// stdx r31,r5,r11
	REX_STORE_U64(ctx.r5.u32 + ctx.r11.u32, ctx.r31.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// stdx r27,r4,r11
	REX_STORE_U64(ctx.r4.u32 + ctx.r11.u32, ctx.r27.u64);
	// stdx r26,r3,r11
	REX_STORE_U64(ctx.r3.u32 + ctx.r11.u32, ctx.r26.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,-26756(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + -26756);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x825884d4
	if (ctx.cr6.lt) goto loc_825884D4;
loc_825884F8:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// add r18,r18,r14
	ctx.r18.u64 = ctx.r18.u64 + ctx.r14.u64;
	// add r23,r23,r14
	ctx.r23.u64 = ctx.r23.u64 + ctx.r14.u64;
	// add r24,r24,r14
	ctx.r24.u64 = ctx.r24.u64 + ctx.r14.u64;
	// add r30,r30,r14
	ctx.r30.u64 = ctx.r30.u64 + ctx.r14.u64;
	// add r28,r28,r14
	ctx.r28.u64 = ctx.r28.u64 + ctx.r14.u64;
	// bne 0x8258840c
	if (!ctx.cr0.eq) goto loc_8258840C;
	// lwz r27,-160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
loc_82588518:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82588590
	if (ctx.cr6.eq) goto loc_82588590;
	// mullw r11,r27,r14
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r14.s32);
	// subf r7,r11,r20
	ctx.r7.u64 = ctx.r20.u64 - ctx.r11.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82588590
	if (!ctx.cr6.gt) goto loc_82588590;
	// subf r11,r20,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r20.u64;
	// neg r29,r14
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r8,r7,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r7.u64;
	// subf r30,r21,r20
	ctx.r30.u64 = ctx.r20.u64 - ctx.r21.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82588548:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258857c
	if (!ctx.cr6.gt) goto loc_8258857C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r5,r8,r30
	ctx.r5.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r4,r7,r3
	ctx.r4.u64 = ctx.r3.u64 - ctx.r7.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82588560:
	// lwzx r28,r11,r5
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwzx r28,r8,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r28,r4,r11
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82588560
	if (!ctx.cr0.eq) goto loc_82588560;
loc_8258857C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r7,r7,r14
	ctx.r7.u64 = ctx.r7.u64 + ctx.r14.u64;
	// add r3,r3,r14
	ctx.r3.u64 = ctx.r3.u64 + ctx.r14.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// bne 0x82588548
	if (!ctx.cr0.eq) goto loc_82588548;
loc_82588590:
	// lwz r11,68(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82588624
	if (ctx.cr6.eq) goto loc_82588624;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r14,r18
	ctx.r8.u64 = ctx.r18.u64 - ctx.r14.u64;
	// subf r10,r14,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// beq cr6,0x825885bc
	if (ctx.cr6.eq) goto loc_825885BC;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x825885c0
	goto loc_825885C0;
loc_825885BC:
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
loc_825885C0:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82588624
	if (!ctx.cr6.gt) goto loc_82588624;
	// neg r4,r14
	ctx.r4.s64 = static_cast<int64_t>(-ctx.r14.u64);
	// subf r9,r18,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r18.u64;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_825885DC:
	// lwz r10,-156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82588610
	if (!ctx.cr6.gt) goto loc_82588610;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// add r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r7,r18,r23
	ctx.r7.u64 = ctx.r23.u64 - ctx.r18.u64;
loc_825885F4:
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r3,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x825885f4
	if (!ctx.cr0.eq) goto loc_825885F4;
loc_82588610:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r18,r18,r14
	ctx.r18.u64 = ctx.r18.u64 + ctx.r14.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r23,r23,r14
	ctx.r23.u64 = ctx.r23.u64 + ctx.r14.u64;
	// bne 0x825885dc
	if (!ctx.cr0.eq) goto loc_825885DC;
loc_82588624:
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82596AF0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82596b88
	if (!ctx.cr6.eq) goto loc_82596B88;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r9,-32141
	ctx.r9.s64 = -2106392576;
	// lis r8,-32141
	ctx.r8.s64 = -2106392576;
	// beq cr6,0x82596b1c
	if (ctx.cr6.eq) goto loc_82596B1C;
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r11,r11,12440
	ctx.r11.s64 = ctx.r11.s64 + 12440;
	// addi r10,r10,18104
	ctx.r10.s64 = ctx.r10.s64 + 18104;
	// b 0x82596b2c
	goto loc_82596B2C;
loc_82596B1C:
	// lis r11,-32164
	ctx.r11.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r11,r11,2224
	ctx.r11.s64 = ctx.r11.s64 + 2224;
	// addi r10,r10,9152
	ctx.r10.s64 = ctx.r10.s64 + 9152;
loc_82596B2C:
	// stw r11,-26736(r9)
	REX_STORE_U32(ctx.r9.u32 + -26736, ctx.r11.u32);
	// lis r7,-32141
	ctx.r7.s64 = -2106392576;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// stw r10,-26740(r8)
	REX_STORE_U32(ctx.r8.u32 + -26740, ctx.r10.u32);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// addi r11,r11,20064
	ctx.r11.s64 = ctx.r11.s64 + 20064;
	// lis r6,-32141
	ctx.r6.s64 = -2106392576;
	// addi r10,r10,19992
	ctx.r10.s64 = ctx.r10.s64 + 19992;
	// stw r11,-26744(r7)
	REX_STORE_U32(ctx.r7.u32 + -26744, ctx.r11.u32);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// lis r5,-32141
	ctx.r5.s64 = -2106392576;
	// stw r10,-26748(r6)
	REX_STORE_U32(ctx.r6.u32 + -26748, ctx.r10.u32);
	// lis r4,-32141
	ctx.r4.s64 = -2106392576;
	// lis r3,-32141
	ctx.r3.s64 = -2106392576;
	// addi r9,r9,856
	ctx.r9.s64 = ctx.r9.s64 + 856;
	// addi r11,r8,19704
	ctx.r11.s64 = ctx.r8.s64 + 19704;
	// addi r10,r7,26800
	ctx.r10.s64 = ctx.r7.s64 + 26800;
	// stw r9,-26764(r5)
	REX_STORE_U32(ctx.r5.u32 + -26764, ctx.r9.u32);
	// stw r11,-26768(r4)
	REX_STORE_U32(ctx.r4.u32 + -26768, ctx.r11.u32);
	// stw r10,-26772(r3)
	REX_STORE_U32(ctx.r3.u32 + -26772, ctx.r10.u32);
	// blr 
	return;
loc_82596B88:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// beq cr6,0x82596ba4
	if (ctx.cr6.eq) goto loc_82596BA4;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,24400
	ctx.r11.s64 = ctx.r11.s64 + 24400;
	// stw r11,-26760(r10)
	REX_STORE_U32(ctx.r10.u32 + -26760, ctx.r11.u32);
	// blr 
	return;
loc_82596BA4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,20408
	ctx.r11.s64 = ctx.r11.s64 + 20408;
	// stw r11,-26760(r10)
	REX_STORE_U32(ctx.r10.u32 + -26760, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82599258) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x82599260;
	__savegprlr_14(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// subf r8,r5,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r5.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r19,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r19.u32);
	// lwz r29,52(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r17,r7,r10
	ctx.r17.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r16,56(r31)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r15,60(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r3,r29,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,48(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r22,r16,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r15,r16
	ctx.r4.u64 = ctx.r15.u64 + ctx.r16.u64;
	// stw r8,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r8.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r6,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// rlwinm r25,r28,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// add r24,r29,r28
	ctx.r24.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r14,r15,r4
	ctx.r14.u64 = ctx.r4.u64 - ctx.r15.u64;
	// subf r10,r15,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r15.u64;
	// subf r8,r16,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r16.u64;
loc_825992C4:
	// lwz r5,-164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// add r27,r5,r23
	ctx.r27.u64 = ctx.r5.u64 + ctx.r23.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r5,r27,r15
	ctx.r5.u64 = ctx.r27.u64 + ctx.r15.u64;
	// subf r20,r27,r23
	ctx.r20.u64 = ctx.r23.u64 - ctx.r27.u64;
	// subf r18,r23,r27
	ctx.r18.u64 = ctx.r27.u64 - ctx.r23.u64;
	// add r3,r16,r23
	ctx.r3.u64 = ctx.r16.u64 + ctx.r23.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r4,r17,1
	ctx.r4.s64 = ctx.r17.s64 + 1;
	// subf r21,r17,r7
	ctx.r21.u64 = ctx.r7.u64 - ctx.r17.u64;
	// subf r19,r9,r19
	ctx.r19.u64 = ctx.r19.u64 - ctx.r9.u64;
	// li r27,8
	ctx.r27.s64 = 8;
loc_825992FC:
	// lbz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r26.u32 + 0);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stb r7,-176(r1)
	REX_STORE_U8(ctx.r1.u32 + -176, ctx.r7.u8);
	// add r7,r6,r25
	ctx.r7.u64 = ctx.r6.u64 + ctx.r25.u64;
	// lbz r9,-176(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -176);
	// stbx r9,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u8);
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,-1(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + -1);
	// stbx r9,r6,r24
	REX_STORE_U8(ctx.r6.u32 + ctx.r24.u32, ctx.r9.u8);
	// stbx r9,r6,r29
	REX_STORE_U8(ctx.r6.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r9,r6,r28
	REX_STORE_U8(ctx.r6.u32 + ctx.r28.u32, ctx.r9.u8);
	// stb r9,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lbzx r9,r21,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + ctx.r4.u32);
	// stbx r9,r11,r24
	REX_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r9.u8);
	// stbx r9,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r9.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stbx r9,r7,r24
	REX_STORE_U8(ctx.r7.u32 + ctx.r24.u32, ctx.r9.u8);
	// stbx r9,r7,r29
	REX_STORE_U8(ctx.r7.u32 + ctx.r29.u32, ctx.r9.u8);
	// stbx r9,r7,r28
	REX_STORE_U8(ctx.r7.u32 + ctx.r28.u32, ctx.r9.u8);
	// stbx r9,r6,r25
	REX_STORE_U8(ctx.r6.u32 + ctx.r25.u32, ctx.r9.u8);
	// add r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 + ctx.r25.u64;
	// lbzx r7,r19,r31
	ctx.r7.u64 = REX_LOAD_U8(ctx.r19.u32 + ctx.r31.u32);
	// stbx r7,r8,r3
	REX_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u8);
	// stbx r7,r20,r5
	REX_STORE_U8(ctx.r20.u32 + ctx.r5.u32, ctx.r7.u8);
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + ctx.r22.u64;
	// stb r7,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stbx r7,r14,r5
	REX_STORE_U8(ctx.r14.u32 + ctx.r5.u32, ctx.r7.u8);
	// stb r7,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// stbx r7,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// add r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 + ctx.r22.u64;
	// stbx r7,r18,r30
	REX_STORE_U8(ctx.r18.u32 + ctx.r30.u32, ctx.r7.u8);
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// ld r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// bne 0x825992fc
	if (!ctx.cr0.eq) goto loc_825992FC;
	// lwz r4,76(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// add r7,r17,r4
	ctx.r7.u64 = ctx.r17.u64 + ctx.r4.u64;
	// lwz r5,-168(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r31,60(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// add r17,r7,r4
	ctx.r17.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r19,r31,r4
	ctx.r19.u64 = ctx.r31.u64 + ctx.r4.u64;
	// stw r3,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r3.u32);
	// rlwinm r6,r15,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r19,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, ctx.r19.u32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 + ctx.r23.u64;
	// bne 0x825992c4
	if (!ctx.cr0.eq) goto loc_825992C4;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259E958) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x8259E960;
	__savegprlr_24(ctx, base);
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r27,r4,5,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r5,5,0,26
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8259ebb0
	if (!ctx.cr6.eq) goto loc_8259EBB0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8259e9a0
	if (ctx.cr6.eq) goto loc_8259E9A0;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r31,r9
	ctx.r30.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r31
	ctx.r28.s64 = ctx.r31.s16;
	// b 0x8259ea00
	goto loc_8259EA00;
loc_8259E9A0:
	// lwz r31,136(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x8259e9f8
	if (!ctx.cr6.eq) goto loc_8259E9F8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8259e9f8
	if (!ctx.cr6.gt) goto loc_8259E9F8;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8259E9BC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_8259E9D0:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8259ebc0
	if (!ctx.cr6.eq) goto loc_8259EBC0;
loc_8259E9D8:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
loc_8259E9F8:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8259EA00:
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r31,r9
	ctx.r29.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// lhzx r25,r31,r10
	ctx.r25.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// extsh r29,r25
	ctx.r29.s64 = ctx.r25.s16;
	// blt cr6,0x8259ea7c
	if (ctx.cr6.lt) goto loc_8259EA7C;
	// beq cr6,0x8259ea54
	if (ctx.cr6.eq) goto loc_8259EA54;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bge cr6,0x8259eac0
	if (!ctx.cr6.lt) goto loc_8259EAC0;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x8259ea44
	if (ctx.cr6.lt) goto loc_8259EA44;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8259EA44:
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8259eac0
	goto loc_8259EAC0;
loc_8259EA54:
	// addi r5,r7,-2
	ctx.r5.s64 = ctx.r7.s64 + -2;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x8259ea68
	if (ctx.cr6.lt) goto loc_8259EA68;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8259EA68:
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8259eac0
	goto loc_8259EAC0;
loc_8259EA7C:
	// lwz r3,3388(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3388);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8259ea90
	if (!ctx.cr6.eq) goto loc_8259EA90;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8259eabc
	if (ctx.cr6.eq) goto loc_8259EABC;
loc_8259EA90:
	// xor r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8259eab0
	if (ctx.cr6.eq) goto loc_8259EAB0;
	// addi r5,r7,-1
	ctx.r5.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// blt cr6,0x8259eab4
	if (ctx.cr6.lt) goto loc_8259EAB4;
loc_8259EAB0:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8259EAB4:
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
loc_8259EABC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8259EAC0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r31,-16384
	ctx.r5.s64 = ctx.r31.s64 + -16384;
	// addi r4,r30,-16384
	ctx.r4.s64 = ctx.r30.s64 + -16384;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lhzx r25,r11,r9
	ctx.r25.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lhzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// extsh r11,r25
	ctx.r11.s64 = ctx.r25.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r5,r11,-16384
	ctx.r5.s64 = ctx.r11.s64 + -16384;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r5,r3,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x8259e9d8
	if (ctx.cr6.gt) goto loc_8259E9D8;
	// bne cr6,0x8259eb44
	if (!ctx.cr6.eq) goto loc_8259EB44;
	// cmpwi cr6,r31,16384
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16384, ctx.xer);
	// bne cr6,0x8259eb20
	if (!ctx.cr6.eq) goto loc_8259EB20;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8259eb44
	goto loc_8259EB44;
loc_8259EB20:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x8259eb34
	if (!ctx.cr6.eq) goto loc_8259EB34;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8259eb44
	goto loc_8259EB44;
loc_8259EB34:
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// bne cr6,0x8259eb44
	if (!ctx.cr6.eq) goto loc_8259EB44;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8259EB44:
	// subf r9,r31,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r31.u64;
	// subf r5,r30,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r4,r31,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r31.u64;
	// subf r3,r29,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r29.u64;
	// subf r25,r28,r10
	ctx.r25.u64 = ctx.r10.u64 - ctx.r28.u64;
	// xor r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// subf r24,r29,r28
	ctx.r24.u64 = ctx.r28.u64 - ctx.r29.u64;
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// xor r25,r25,r3
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r3.u64;
	// srawi r9,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 31;
	// xor r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 ^ ctx.r3.u64;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// srawi r4,r25,31
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r25.s32 >> 31;
	// srawi r3,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// or r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// or r24,r4,r3
	ctx.r24.u64 = ctx.r4.u64 | ctx.r3.u64;
	// andc r9,r30,r25
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r25.u64;
	// and r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 & ctx.r10.u64;
	// andc r4,r28,r24
	ctx.r4.u64 = ctx.r28.u64 & ~ctx.r24.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 & ctx.r31.u64;
	// or r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 | ctx.r10.u64;
	// and r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 & ctx.r29.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// b 0x8259e9d0
	goto loc_8259E9D0;
loc_8259EBB0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8259e9bc
	if (ctx.cr6.gt) goto loc_8259E9BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8259EBC0:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r26
	ctx.r5.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r6,-60
	ctx.r6.s64 = -60;
	// beq cr6,0x8259ebd8
	if (ctx.cr6.eq) goto loc_8259EBD8;
	// li r6,-28
	ctx.r6.s64 = -28;
loc_8259EBD8:
	// rlwinm r7,r7,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8259ebf8
	if (!ctx.cr6.lt) goto loc_8259EBF8;
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// b 0x8259ec04
	goto loc_8259EC04;
loc_8259EBF8:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8259ec08
	if (!ctx.cr6.gt) goto loc_8259EC08;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
loc_8259EC04:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8259EC08:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8259ec18
	if (!ctx.cr6.lt) goto loc_8259EC18;
	// subf r9,r5,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r5.u64;
	// b 0x8259ec24
	goto loc_8259EC24;
loc_8259EC18:
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8259ec28
	if (!ctx.cr6.gt) goto loc_8259EC28;
	// subf r9,r5,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r5.u64;
loc_8259EC24:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8259EC28:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825AC5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825AC5E8;
	__savegprlr_28(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,-128
	ctx.r11.s64 = ctx.r1.s64 + -128;
	// rlwimi r10,r4,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// li r10,10
	ctx.r10.s64 = 10;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825AC60C:
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x825ac60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825AC60C;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r29,-128(r1)
	REX_STORE_U32(ctx.r1.u32 + -128, ctx.r29.u32);
	// ble cr6,0x825ac72c
	if (!ctx.cr6.gt) goto loc_825AC72C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825AC62C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// clrlwi r7,r11,26
	ctx.r7.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r7,20
	ctx.xer.ca = ctx.r7.u32 <= 20;
	ctx.r11.u64 = static_cast<uint64_t>(20) - ctx.r7.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// sraw r9,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	// rlwinm r3,r9,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// and r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	// or r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 | ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// beq cr6,0x825ac674
	if (ctx.cr6.eq) goto loc_825AC674;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// b 0x825ac678
	goto loc_825AC678;
loc_825AC674:
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_825AC678:
	// stw r3,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x825ac688
	if (!ctx.cr6.eq) goto loc_825AC688;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_825AC688:
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x825ac6ec
	if (!ctx.cr6.gt) goto loc_825AC6EC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-128
	ctx.r10.s64 = ctx.r1.s64 + -128;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825AC6A0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x825ac6ec
	if (!ctx.cr6.eq) goto loc_825AC6EC;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825ac6c4
	if (ctx.cr6.eq) goto loc_825AC6C4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x825ac6c8
	goto loc_825AC6C8;
loc_825AC6C4:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_825AC6C8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x825ac6dc
	if (!ctx.cr6.eq) goto loc_825AC6DC;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
loc_825AC6DC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x825ac6a0
	if (ctx.cr6.gt) goto loc_825AC6A0;
loc_825AC6EC:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bge cr6,0x825ac724
	if (!ctx.cr6.lt) goto loc_825AC724;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_825AC704:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x825ac724
	if (!ctx.cr6.eq) goto loc_825AC724;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x825ac704
	if (ctx.cr6.lt) goto loc_825AC704;
loc_825AC724:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x825ac62c
	if (!ctx.cr0.eq) goto loc_825AC62C;
loc_825AC72C:
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825B9890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x825B9898;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d7408
	ctx.lr = 0x825B98A0;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f31,-21784(r9)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -21784);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	ctx.f27.f64 = ctx.f10.f64 * ctx.f31.f64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// srawi r16,r22,1
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1) != 0);
	ctx.r16.s64 = ctx.r22.s32 >> 1;
	// std r3,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	ctx.f30.f64 = double(ctx.f13.s64);
	// srawi r18,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r4.s32 >> 1;
	// fsub f26,f11,f27
	ctx.f26.f64 = ctx.f11.f64 - ctx.f27.f64;
	// lfd f0,-21776(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -21776);
	// fmul f9,f30,f0
	ctx.f9.f64 = ctx.f30.f64 * ctx.f0.f64;
	// fsub f8,f26,f27
	ctx.f8.f64 = ctx.f26.f64 - ctx.f27.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r14,132(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x825b995c
	if (!ctx.cr6.lt) goto loc_825B995C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_825B995C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x825b9968
	if (!ctx.cr6.lt) goto loc_825B9968;
	// addi r14,r14,-1
	ctx.r14.s64 = ctx.r14.s64 + -1;
loc_825B9968:
	// lwz r24,452(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825b9a14
	if (!ctx.cr6.gt) goto loc_825B9A14;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// subf r28,r14,r22
	ctx.r28.u64 = ctx.r22.u64 - ctx.r14.u64;
	// subf r25,r24,r5
	ctx.r25.u64 = ctx.r5.u64 - ctx.r24.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_825B9994:
	// cmpw cr6,r22,r29
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r29.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// blt cr6,0x825b99a4
	if (ctx.cr6.lt) goto loc_825B99A4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_825B99A4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825b99b8
	if (!ctx.cr6.gt) goto loc_825B99B8;
	// add r4,r25,r30
	ctx.r4.u64 = ctx.r25.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B99B8;
	sub_825D6E10(ctx, base);
loc_825B99B8:
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r28.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// blt cr6,0x825b99c8
	if (ctx.cr6.lt) goto loc_825B99C8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_825B99C8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x825b99f0
	if (!ctx.cr6.gt) goto loc_825B99F0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bgt cr6,0x825b99e0
	if (ctx.cr6.gt) goto loc_825B99E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825B99E0:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B99F0;
	sub_825D6E10(ctx, base);
loc_825B99F0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r31,r31,r22
	ctx.r31.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r30,r30,r22
	ctx.r30.u64 = ctx.r30.u64 + ctx.r22.u64;
	// bne 0x825b9994
	if (!ctx.cr0.eq) goto loc_825B9994;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r5,404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_825B9A14:
	// lwz r17,460(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x825b9af8
	if (!ctx.cr6.gt) goto loc_825B9AF8;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// subf r27,r14,r11
	ctx.r27.u64 = ctx.r11.u64 - ctx.r14.u64;
loc_825B9A30:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x825b9a48
	if (ctx.cr6.lt) goto loc_825B9A48;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_825B9A48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825b9a80
	if (!ctx.cr6.gt) goto loc_825B9A80;
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r31,r11,r16
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B9A6C;
	sub_825D6E10(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r19
	ctx.r4.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B9A80;
	sub_825D6E10(ctx, base);
loc_825B9A80:
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// subf r30,r10,r16
	ctx.r30.u64 = ctx.r16.u64 - ctx.r10.u64;
	// cmpw cr6,r30,r16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x825b9a94
	if (ctx.cr6.lt) goto loc_825B9A94;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
loc_825B9A94:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x825b9ae0
	if (!ctx.cr6.gt) goto loc_825B9AE0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x825b9aa8
	if (ctx.cr6.gt) goto loc_825B9AA8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825B9AA8:
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r31,r9
	ctx.r4.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B9AC8;
	sub_825D6E10(ctx, base);
	// lwz r8,444(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r7,468(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r8
	ctx.r4.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825B9AE0;
	sub_825D6E10(ctx, base);
loc_825B9AE0:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825b9a30
	if (ctx.cr6.lt) goto loc_825B9A30;
	// lwz r5,404(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_825B9AF8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r15,r16,1
	ctx.r15.s64 = ctx.r16.s64 + 1;
	// addic. r25,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r25.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x825b9b0c
	if (!ctx.cr0.lt) goto loc_825B9B0C;
	// li r25,0
	ctx.r25.s64 = 0;
loc_825B9B0C:
	// subf r11,r5,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r5.u64;
	// subf r10,r5,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r5.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// add r21,r25,r5
	ctx.r21.u64 = ctx.r25.u64 + ctx.r5.u64;
	// subf r20,r25,r22
	ctx.r20.u64 = ctx.r22.u64 - ctx.r25.u64;
	// lfd f25,-21792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -21792);
	// lfd f28,9464(r10)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 9464);
loc_825B9B34:
	// cmpw cr6,r14,r22
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r22.s32, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// blt cr6,0x825b9b44
	if (ctx.cr6.lt) goto loc_825B9B44;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_825B9B44:
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b9cf8
	if (!ctx.cr6.lt) goto loc_825B9CF8;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 - ctx.f26.f64;
	// fadd f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 + ctx.f27.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x825d1068
	ctx.lr = 0x825B9B70;
	sub_825D1068(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f25.f64 - ctx.f1.f64;
	// subfic r11,r22,1
	ctx.xer.ca = ctx.r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r22.u64;
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// lwz r9,404(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r8,396(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r20,r8
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r8.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f5.u64);
	// lwz r30,148(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f4.u64);
	// lwz r29,148(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x825b9bd0
	if (ctx.cr6.lt) goto loc_825B9BD0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825B9BD0:
	// subf r10,r29,r22
	ctx.r10.u64 = ctx.r22.u64 - ctx.r29.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r30,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r30.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r6,r25,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r11,r25,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r25.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// add r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 + ctx.r21.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r3,r3,r21
	ctx.r3.u64 = ctx.r3.u64 + ctx.r21.u64;
	// bl 0x825b8e18
	ctx.lr = 0x825B9C14;
	sub_825B8E18(ctx, base);
	// clrlwi r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825b9ce8
	if (!ctx.cr6.eq) goto loc_825B9CE8;
	// srawi r31,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r25.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r30,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 1;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// subfic r11,r16,1
	ctx.xer.ca = ctx.r16.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r16.u64;
	// subf r28,r31,r16
	ctx.r28.u64 = ctx.r16.u64 - ctx.r31.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r27,r10,r31
	ctx.r27.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r5,r26,r11
	ctx.r5.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r3,r31,r17
	ctx.r3.u64 = ctx.r31.u64 + ctx.r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// blt cr6,0x825b9c70
	if (ctx.cr6.lt) goto loc_825B9C70;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_825B9C70:
	// subf r10,r29,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r9,r30,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r30.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// subf r24,r31,r10
	ctx.r24.u64 = ctx.r10.u64 - ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// subf r23,r31,r9
	ctx.r23.u64 = ctx.r9.u64 - ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x825b8e18
	ctx.lr = 0x825B9CA0;
	sub_825B8E18(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r27,r19
	ctx.r4.u64 = ctx.r27.u64 + ctx.r19.u64;
	// add r3,r31,r8
	ctx.r3.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r5,r26,r19
	ctx.r5.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r6,r31,r19
	ctx.r6.u64 = ctx.r31.u64 + ctx.r19.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmpw cr6,r28,r18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x825b9cc8
	if (ctx.cr6.lt) goto loc_825B9CC8;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_825B9CC8:
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x825b8e18
	ctx.lr = 0x825B9CE8;
	sub_825B8E18(ctx, base);
loc_825B9CE8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// b 0x825b9b34
	goto loc_825B9B34;
loc_825B9CF8:
	// subfic r28,r14,1
	ctx.xer.ca = ctx.r14.u32 <= 1;
	ctx.r28.u64 = static_cast<uint64_t>(1) - ctx.r14.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bgt cr6,0x825b9d08
	if (ctx.cr6.gt) goto loc_825B9D08;
	// li r28,1
	ctx.r28.s64 = 1;
loc_825B9D08:
	// lwz r8,404(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r28,r22
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r22.s32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// add r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// neg r20,r10
	ctx.r20.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// subf r21,r28,r9
	ctx.r21.u64 = ctx.r9.u64 - ctx.r28.u64;
	// lfd f24,9568(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 9568);
loc_825B9D30:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b9d40
	if (!ctx.cr6.lt) goto loc_825B9D40;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_825B9D40:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825b9f4c
	if (!ctx.cr6.lt) goto loc_825B9F4C;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 + ctx.f26.f64;
	// fsub f11,f27,f12
	ctx.f11.f64 = ctx.f27.f64 - ctx.f12.f64;
	// fmul f29,f11,f31
	ctx.f29.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = ctx.f29.f64 / ctx.f30.f64;
	// bl 0x825d1068
	ctx.lr = 0x825B9D6C;
	sub_825D1068(ctx, base);
	// fsub f9,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f25.f64 - ctx.f1.f64;
	// lwz r10,404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// fmsub f10,f1,f30,f29
	ctx.f10.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64);
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// fmsub f7,f9,f30,f29
	ctx.f7.f64 = std::fma(ctx.f9.f64, ctx.f30.f64, -ctx.f29.f64);
	// fmadd f8,f10,f31,f28
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f31.f64, ctx.f28.f64);
	// fmadd f5,f7,f31,f28
	ctx.f5.f64 = std::fma(ctx.f7.f64, ctx.f31.f64, ctx.f28.f64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f6.u64);
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// neg r29,r31
	ctx.r29.s64 = static_cast<int64_t>(-ctx.r31.u64);
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r22.s32);
	// fctiwz f4,f5
	ctx.f4.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f4.u64);
	// lwz r30,140(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// neg r27,r30
	ctx.r27.s64 = static_cast<int64_t>(-ctx.r30.u64);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r22.s32);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// blt cr6,0x825b9dd4
	if (ctx.cr6.lt) goto loc_825B9DD4;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_825B9DD4:
	// add r9,r27,r22
	ctx.r9.u64 = ctx.r27.u64 + ctx.r22.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r7,r28,r30
	ctx.r7.u64 = ctx.r30.u64 - ctx.r28.u64;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// add r6,r29,r22
	ctx.r6.u64 = ctx.r29.u64 + ctx.r22.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r8,r22,1
	ctx.r8.s64 = ctx.r22.s64 + 1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// subf r10,r28,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r28.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r7,r24,r11
	ctx.r7.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// add r3,r24,r3
	ctx.r3.u64 = ctx.r24.u64 + ctx.r3.u64;
	// bl 0x825b8e18
	ctx.lr = 0x825B9E14;
	sub_825B8E18(ctx, base);
	// clrlwi r5,r28,31
	ctx.r5.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x825b9f38
	if (!ctx.cr6.eq) goto loc_825B9F38;
	// srawi r11,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 1;
	// subfic r10,r16,1
	ctx.xer.ca = ctx.r16.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r16.u64;
	// srawi r8,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 1;
	// srawi r7,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r30.s32 >> 1;
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x825b9f38
	if (!ctx.cr6.gt) goto loc_825B9F38;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r25,r29,r27
	ctx.r25.u64 = ctx.r27.u64 - ctx.r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r8,r10,r19
	ctx.r8.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lwz r18,444(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r5,r29,r28
	ctx.r5.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r14,468(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r29,r31,r30
	ctx.r29.u64 = ctx.r30.u64 - ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// subf r27,r31,r28
	ctx.r27.u64 = ctx.r28.u64 - ctx.r31.u64;
	// subf r4,r19,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r19.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// subf r31,r19,r6
	ctx.r31.u64 = ctx.r6.u64 - ctx.r19.u64;
	// subf r3,r17,r19
	ctx.r3.u64 = ctx.r19.u64 - ctx.r17.u64;
	// subf r30,r17,r18
	ctx.r30.u64 = ctx.r18.u64 - ctx.r17.u64;
	// subf r7,r17,r14
	ctx.r7.u64 = ctx.r14.u64 - ctx.r17.u64;
loc_825B9E94:
	// lwz r6,396(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// add r18,r27,r10
	ctx.r18.u64 = ctx.r27.u64 + ctx.r10.u64;
	// cmpw cr6,r18,r6
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x825b9f38
	if (!ctx.cr6.lt) goto loc_825B9F38;
	// add r6,r29,r10
	ctx.r6.u64 = ctx.r29.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x825b9ec8
	if (!ctx.cr6.lt) goto loc_825B9EC8;
	// add. r6,r25,r5
	ctx.r6.u64 = ctx.r25.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x825b9ec8
	if (ctx.cr0.lt) goto loc_825B9EC8;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x825b9f14
	goto loc_825B9F14;
loc_825B9EC8:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x825b9f04
	if (!ctx.cr6.lt) goto loc_825B9F04;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x825b9f04
	if (ctx.cr6.lt) goto loc_825B9F04;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f24.f64);
	// blt cr6,0x825b9ef0
	if (ctx.cr6.lt) goto loc_825B9EF0;
	// lbzx r6,r4,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x825b9f14
	goto loc_825B9F14;
loc_825B9EF0:
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x825b9f14
	goto loc_825B9F14;
loc_825B9F04:
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
loc_825B9F14:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// add r8,r8,r15
	ctx.r8.u64 = ctx.r8.u64 + ctx.r15.u64;
	// add r9,r9,r15
	ctx.r9.u64 = ctx.r9.u64 + ctx.r15.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x825b9e94
	if (ctx.cr6.lt) goto loc_825B9E94;
loc_825B9F38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r23,r23,r22
	ctx.r23.u64 = ctx.r23.u64 + ctx.r22.u64;
	// add r24,r24,r22
	ctx.r24.u64 = ctx.r24.u64 + ctx.r22.u64;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// b 0x825b9d30
	goto loc_825B9D30;
loc_825B9F4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x825d7454
	ctx.lr = 0x825B9F58;
	__restfpr_24(ctx, base);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825D3A58) {
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
	// bl 0x825d6a68
	ctx.lr = 0x825D3A68;
	sub_825D6A68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825d3a7c
	if (!ctx.cr0.eq) goto loc_825D3A7C;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r11,-7772
	ctx.r3.s64 = ctx.r11.s64 + -7772;
	// b 0x825d3a80
	goto loc_825D3A80;
loc_825D3A7C:
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
loc_825D3A80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D4F08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
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
	// lwz r28,164(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x825d4f40
	goto loc_825D4F40;
loc_825D4F40:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x825d4f50
	if (ctx.cr6.eq) goto loc_825D4F50;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x825de078
	ctx.lr = 0x825D4F50;
	sub_825DE078(ctx, base);
loc_825D4F50:
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

DEFINE_REX_FUNC(sub_825D5C14) {
	REX_FUNC_PROLOGUE();
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825dd8d0
	ctx.lr = 0x825D5C1C;
	sub_825DD8D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825d8578
	ctx.lr = 0x825D5C34;
	sub_825D8578(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825dd9a8
	ctx.lr = 0x825D5C44;
	sub_825DD9A8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x825d5c90
	ctx.lr = 0x825D5C50;
	sub_825D5C90(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_17) {
	REX_FUNC_PROLOGUE();
	// std r17,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
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

DEFINE_REX_FUNC(__restgprlr_14) {
	REX_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
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

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_31) {
	REX_FUNC_PROLOGUE();
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_29) {
	REX_FUNC_PROLOGUE();
	// lfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_15) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__savevmx_109) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_126) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_22) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_93) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_825DCE6C) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825de078
	ctx.lr = 0x825DCE80;
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

DEFINE_REX_FUNC(sub_825DDC18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825DDC20;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// bne cr6,0x825ddc5c
	if (!ctx.cr6.eq) goto loc_825DDC5C;
	// bl 0x825d3a58
	ctx.lr = 0x825DDC3C;
	sub_825D3A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x825d3a20
	ctx.lr = 0x825DDC48;
	sub_825D3A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x825ddd28
	goto loc_825DDD28;
loc_825DDC5C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x825ddc74
	if (ctx.cr6.lt) goto loc_825DDC74;
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r11,-25564(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -25564);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825ddcac
	if (ctx.cr6.lt) goto loc_825DDCAC;
loc_825DDC74:
	// bl 0x825d3a58
	ctx.lr = 0x825DDC78;
	sub_825D3A58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x825d3a20
	ctx.lr = 0x825DDC84;
	sub_825D3A20(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
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
	ctx.lr = 0x825DDCA4;
	sub_825D9610(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825ddd28
	goto loc_825DDD28;
loc_825DDCAC:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-25536
	ctx.r28.s64 = ctx.r10.s64 + -25536;
	// rlwinm r29,r30,6,21,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0x7C0;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ddc74
	if (ctx.cr0.eq) goto loc_825DDC74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825e4370
	ctx.lr = 0x825DDCDC;
	sub_825E4370(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ddd04
	if (ctx.cr0.eq) goto loc_825DDD04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ddb38
	ctx.lr = 0x825DDCFC;
	sub_825DDB38(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// b 0x825ddd18
	sub_825DDD18(ctx, base);
	return;
loc_825DDD04:
	// bl 0x825d3a20
	ctx.lr = 0x825DDD08;
	sub_825D3A20(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_825DDD18:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x825ddd50
	ctx.lr = 0x825DDD24;
	sub_825DDD50(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
loc_825DDD28:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E2BF0) {
	REX_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x825e2630
	ctx.lr = 0x825E2C0C;
	sub_825E2630(ctx, base);
	// stw r3,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x825e2c6c
	ctx.lr = 0x825E2C1C;
	sub_825E2C6C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825e2c34
	if (ctx.cr6.eq) goto loc_825E2C34;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_825E2C34:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

DEFINE_REX_FUNC(sub_825E4710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r7
	ctx.r7.u64 = ctx.lr;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stw r7,-88(r1)
	REX_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x825de240
	ctx.lr = 0x825E4730;
	sub_825DE240(ctx, base);
	// mr r12,r4
	ctx.r12.u64 = ctx.r4.u64;
	// stw r30,4(r1)
	REX_STORE_U32(ctx.r1.u32 + 4, ctx.r30.u32);
	// mtlr r3
	ctx.lr = ctx.r3.u64;
	// blrl 
	{ auto old_lr = ctx.lr;
	ctx.lr = 0x825E4740;
	REX_CALL_INDIRECT_FUNC(uint32_t(old_lr)); }
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplwi r31,256
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// bne 0x825e4750
	if (!ctx.cr0.eq) goto loc_825E4750;
	// li r5,2
	ctx.r5.s64 = 2;
loc_825E4750:
	// bl 0x825de240
	ctx.lr = 0x825E4754;
	sub_825DE240(ctx, base);
	// lwz r7,8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r7
	ctx.lr = ctx.r7.u64;
	// ld r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r31,88(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6448) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8261c444
	ctx.lr = 0x825E645C;
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825e6470
	if (!ctx.cr0.lt) goto loc_825E6470;
	// bl 0x8226b440
	ctx.lr = 0x825E6468;
	sub_8226B440(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x825e6474
	goto loc_825E6474;
loc_825E6470:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825E6474:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6F78) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r11,8232(r3)
	REX_STORE_U8(ctx.r3.u32 + 8232, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825e6e78
	ctx.lr = 0x825E6FB8;
	sub_825E6E78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EA868) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EB260) {
	REX_FUNC_PROLOGUE();
	// lwz r3,896(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 896);
	// b 0x825eb2c0
	goto loc_825EB2C0;
loc_825EB268:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825eb280
	if (!ctx.cr6.eq) goto loc_825EB280;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x825eb2bc
	goto loc_825EB2BC;
loc_825EB280:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825eb2bc
	if (ctx.cr6.eq) goto loc_825EB2BC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_825EB290:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x825eb2b4
	if (ctx.cr0.eq) goto loc_825EB2B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825eb290
	if (ctx.cr6.eq) goto loc_825EB290;
loc_825EB2B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_825EB2BC:
	// lwz r3,40(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
loc_825EB2C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825eb268
	if (!ctx.cr6.eq) goto loc_825EB268;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825ECFD0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x825ecfe0
	if (ctx.cr6.eq) goto loc_825ECFE0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825ed04c
	if (ctx.cr6.eq) goto loc_825ED04C;
loc_825ECFE0:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825ed04c
	if (!ctx.cr6.eq) goto loc_825ED04C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,876(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825ed04c
	if (ctx.cr6.gt) goto loc_825ED04C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825ed04c
	if (ctx.cr6.eq) goto loc_825ED04C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x825ed04c
	if (!ctx.cr6.eq) goto loc_825ED04C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x825ed044
	if (ctx.cr6.eq) goto loc_825ED044;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825ed04c
	if (!ctx.cr6.eq) goto loc_825ED04C;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x825ebe20
	sub_825EBE20(ctx, base);
	return;
loc_825ED044:
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x825ebc10
	sub_825EBC10(ctx, base);
	return;
loc_825ED04C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EE4B8) {
	REX_FUNC_PROLOGUE();
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EE8C0) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x825ee728
	ctx.lr = 0x825EE8DC;
	sub_825EE728(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825ee8f0
	if (ctx.cr0.lt) goto loc_825EE8F0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_825EE8F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825ee8fc
	if (ctx.cr6.eq) goto loc_825EE8FC;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825EE8FC:
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

DEFINE_REX_FUNC(sub_825F0D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825F0D20;
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
	// beq 0x825f0d7c
	if (ctx.cr0.eq) goto loc_825F0D7C;
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x825f0d60
	if (ctx.cr0.lt) goto loc_825F0D60;
loc_825F0D4C:
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f0cb0
	ctx.lr = 0x825F0D58;
	sub_825F0CB0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x825f0d4c
	if (!ctx.cr0.lt) goto loc_825F0D4C;
loc_825F0D60:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0d74
	if (ctx.cr0.eq) goto loc_825F0D74;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F0D74;
	sub_8226A890(ctx, base);
loc_825F0D74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x825f0d9c
	goto loc_825F0D9C;
loc_825F0D7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f0cb0
	ctx.lr = 0x825F0D84;
	sub_825F0CB0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f0d98
	if (ctx.cr0.eq) goto loc_825F0D98;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226a890
	ctx.lr = 0x825F0D98;
	sub_8226A890(ctx, base);
loc_825F0D98:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825F0D9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F5D48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825F5D50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,64(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lhz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 16);
	// addi r31,r11,18
	ctx.r31.s64 = ctx.r11.s64 + 18;
	// beq cr6,0x825f5da8
	if (ctx.cr6.eq) goto loc_825F5DA8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825f5da8
	if (ctx.cr6.eq) goto loc_825F5DA8;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x825f5d88
	if (ctx.cr6.lt) goto loc_825F5D88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_825F5D88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825d6e10
	ctx.lr = 0x825F5D90;
	sub_825D6E10(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x825f5da8
	if (!ctx.cr6.gt) goto loc_825F5DA8;
	// subf r5,r31,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x825d6870
	ctx.lr = 0x825F5DA8;
	sub_825D6870(ctx, base);
loc_825F5DA8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x825f5db8
	if (ctx.cr6.eq) goto loc_825F5DB8;
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_825F5DB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F7768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x825F7770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-1220
	ctx.r31.s64 = ctx.r11.s64 + -1220;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8261c0d4
	ctx.lr = 0x825F778C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825F77A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8261c0e4
	ctx.lr = 0x825F77B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825F8760) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825F8768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8261c834
	ctx.lr = 0x825F8774;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,30172
	ctx.r31.s64 = ctx.r11.s64 + 30172;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f879c
	if (ctx.cr6.eq) goto loc_825F879C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825f87b0
	if (ctx.cr6.eq) goto loc_825F87B0;
loc_825F879C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c4e4
	ctx.lr = 0x825F87A4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_825F87B0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// stw r9,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f8814
	if (ctx.cr6.eq) goto loc_825F8814;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825f8814
	if (!ctx.cr6.eq) goto loc_825F8814;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x825f8814
	if (!ctx.cr0.eq) goto loc_825F8814;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x8261c4d4
	ctx.lr = 0x825F880C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261c844
	ctx.lr = 0x825F8814;
	__imp__KfLowerIrql(ctx, base);
loc_825F8814:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825FACE0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x825facf0
	if (!ctx.cr6.eq) goto loc_825FACF0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FACF0:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB0E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,-12456
	ctx.r9.s64 = ctx.r11.s64 + -12456;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fb148
	if (ctx.cr6.eq) goto loc_825FB148;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825FB128:
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fb13c
	if (!ctx.cr6.gt) goto loc_825FB13C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825FB13C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// bne 0x825fb128
	if (!ctx.cr0.eq) goto loc_825FB128;
loc_825FB148:
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fb170
	if (ctx.cr6.eq) goto loc_825FB170;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825FB16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_825FB170:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fb1d8
	if (ctx.cr6.eq) goto loc_825FB1D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FB188:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r10,r7,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// stwx r6,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825fb188
	if (ctx.cr6.lt) goto loc_825FB188;
loc_825FB1D8:
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

DEFINE_REX_FUNC(sub_825FF7D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x825FF7D8;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r21,r3,20
	ctx.r21.s64 = ctx.r3.s64 + 20;
	// subf r25,r8,r9
	ctx.r25.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x825ff810
	if (ctx.cr6.gt) goto loc_825FF810;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x825ff814
	if (!ctx.cr6.gt) goto loc_825FF814;
loc_825FF810:
	// li r6,1
	ctx.r6.s64 = 1;
loc_825FF814:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r23,r3,4
	ctx.r23.s64 = ctx.r3.s64 + 4;
	// addi r22,r3,24
	ctx.r22.s64 = ctx.r3.s64 + 24;
	// lfs f0,9952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f13.u64);
	// lwz r7,-156(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -156);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x825ffc2c
	if (!ctx.cr6.lt) goto loc_825FFC2C;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32246
	ctx.r31.s64 = -2113273856;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// lfs f11,5840(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5840);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-11560(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + -11560);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x825ff98c
	if (ctx.cr6.lt) goto loc_825FF98C;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// subf r29,r9,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// rlwinm r27,r7,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	ctx.r26.u64 = ctx.r4.u64 - ctx.r5.u64;
	// rlwinm r28,r7,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_825FF8A4:
	// fsubs f10,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// add r24,r29,r25
	ctx.r24.u64 = ctx.r29.u64 + ctx.r25.u64;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// rlwinm r18,r29,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFC;
	// lfs f8,-8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// lfs f7,-4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lfsx f5,r26,r9
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r17,r6,1
	ctx.r17.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r18,r11
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r19,r19,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFC;
	// lfsx f3,r24,r11
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r16,r6,2,16,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// rlwinm r18,r31,2,16,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// fsubs f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfsx f8,r20,r11
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// rlwinm r24,r17,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r20,r31,1
	ctx.r20.s64 = ctx.r31.s64 + 1;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfsx f13,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f7,-4(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f7,r16,r11
	temp.u32 = REX_LOAD_U32(ctx.r16.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f2
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// lfsx f30,r18,r11
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	ctx.f30.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmadds f4,f3,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f4.f64)));
	// lfsx f7,r24,r11
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// rlwinm r24,r20,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// fmadds f2,f30,f1,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f30.f64, ctx.f1.f64, ctx.f2.f64)));
	// fmadds f3,f13,f9,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f10.f64)));
	// stfs f4,-8(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// stfs f3,-4(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fsubs f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f1,r24,r11
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f31.f64, ctx.f6.f64)));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x825ff8a4
	if (!ctx.cr0.eq) goto loc_825FF8A4;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_825FF98C:
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x825ffa18
	if (ctx.cr6.gt) goto loc_825FFA18;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,8(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r27.u64;
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r6,r5
	ctx.r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r28.u64;
	// addi r6,r29,-4
	ctx.r6.s64 = ctx.r29.s64 + -4;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r29,r27,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825FF9CC:
	// rlwinm r28,r8,2,16,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f10,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r27,r29,r8
	ctx.r27.u64 = ctx.r29.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r27,2,16,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r28,r11
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// fmadds f6,f7,f12,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x825ff9cc
	if (!ctx.cr0.eq) goto loc_825FF9CC;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_825FFA18:
	// lwz r26,16(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825ffa30
	if (ctx.cr6.eq) goto loc_825FFA30;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x825ffa38
	goto loc_825FFA38;
loc_825FFA30:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,5272(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 5272);
	ctx.f12.f64 = double(temp.f32);
loc_825FFA38:
	// subfic r8,r7,256
	ctx.xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r7.u64;
	// stfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x825ffb98
	if (ctx.cr6.lt) goto loc_825FFB98;
	// subfic r9,r7,252
	ctx.xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.u64 = static_cast<uint64_t>(252) - ctx.r7.u64;
	// lwz r20,12(r3)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
	// addi r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 2;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r20,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r20.u64;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r26,r10
	ctx.r28.u64 = ctx.r10.u64 - ctx.r26.u64;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r8,r25,r11
	ctx.r8.u64 = ctx.r25.u64 + ctx.r11.u64;
	// add r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 + ctx.r10.u64;
	// addi r31,r28,2
	ctx.r31.s64 = ctx.r28.s64 + 2;
	// add r9,r24,r5
	ctx.r9.u64 = ctx.r24.u64 + ctx.r5.u64;
	// subf r25,r5,r4
	ctx.r25.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r26,r20,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r20.u64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
loc_825FFAB0:
	// add r7,r26,r28
	ctx.r7.u64 = ctx.r26.u64 + ctx.r28.u64;
	// lfs f10,-12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r31,-1
	ctx.r24.s64 = ctx.r31.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r6,-1
	ctx.r20.s64 = ctx.r6.s64 + -1;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// rlwinm r19,r28,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFC;
	// lfsx f7,r9,r25
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFC;
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFC;
	// addi r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 1;
	// lfsx f4,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r6,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// lfsx f5,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r19,r31,2,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfsx f2,r20,r11
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r20,r18,2,16,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFC;
	// lfsx f1,r24,r11
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfsx f31,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfsx f5,r19,r11
	temp.u32 = REX_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f7,f5,f3
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lfsx f11,r20,r11
	temp.u32 = REX_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f5,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// fmadds f3,f2,f8,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f1.f64)));
	// fmadds f4,f4,f12,f13
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f4,-4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmadds f2,f31,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f31.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfsx f1,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f1,f30,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f30.f64, ctx.f5.f64)));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stfs f6,4(r8)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x825ffab0
	if (!ctx.cr0.eq) goto loc_825FFAB0;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_825FFB98:
	// cmplwi cr6,r27,256
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 256, ctx.xer);
	// bge cr6,0x825ffc20
	if (!ctx.cr6.lt) goto loc_825FFC20;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r27,256
	ctx.xer.ca = ctx.r27.u32 <= 256;
	ctx.r9.u64 = static_cast<uint64_t>(256) - ctx.r27.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r31,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r31.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subf r3,r30,r31
	ctx.r3.u64 = ctx.r31.u64 - ctx.r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_825FFBD4:
	// rlwinm r31,r8,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r30,r3,r8
	ctx.r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r30,r30,2,16,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f10,r31,r11
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f8,r30,r11
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x825ffbd4
	if (!ctx.cr0.eq) goto loc_825FFBD4;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_825FFC20:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x825ffe00
	goto loc_825FFE00;
loc_825FFC2C:
	// addi r31,r10,256
	ctx.r31.s64 = ctx.r10.s64 + 256;
	// cmplwi cr6,r31,16384
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16384, ctx.xer);
	// bge cr6,0x825ffd80
	if (!ctx.cr6.lt) goto loc_825FFD80;
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r11,r7,256
	ctx.r11.s64 = ctx.r7.s64 + 256;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bge cr6,0x825ffd80
	if (!ctx.cr6.lt) goto loc_825FFD80;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r30,r11,256
	ctx.r30.s64 = ctx.r11.s64 + 256;
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16384, ctx.xer);
	// bge cr6,0x825ffd80
	if (!ctx.cr6.lt) goto loc_825FFD80;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x825ffd80
	if (ctx.cr6.lt) goto loc_825FFD80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x825ffd80
	if (ctx.cr6.lt) goto loc_825FFD80;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x825ffcf8
	if (!ctx.cr6.eq) goto loc_825FFCF8;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r7,65
	ctx.r7.s64 = 65;
	// li r8,16
	ctx.r8.s64 = 16;
loc_825FFC90:
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvrx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvlx128 v61,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v59,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vor128 v58,v61,v59
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// stvlx128 v60,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r11,r8
	ea = ctx.r11.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v58,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvrx128 v58,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x825ffc90
	if (!ctx.cr0.eq) goto loc_825FFC90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r31,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,-11564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11564);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
loc_825FFCF8:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// lfs f13,5840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 5840);
	ctx.f13.f64 = double(temp.f32);
	// subf r7,r3,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r3.u64;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// li r9,256
	ctx.r9.s64 = 256;
	// lfs f12,-11560(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -11560);
	ctx.f12.f64 = double(temp.f32);
loc_825FFD28:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f9,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f7,f9,f0,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x825ffd28
	if (!ctx.cr0.eq) goto loc_825FFD28;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stw r31,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// lfs f0,1024(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
loc_825FFD80:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lfs f13,5840(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 5840);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// lfs f12,-11560(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -11560);
	ctx.f12.f64 = double(temp.f32);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_825FFDB4:
	// rlwinm r3,r11,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r31,r31,2,16,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f10,r3,r6
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f8,r31,r6
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x825ffdb4
	if (!ctx.cr0.eq) goto loc_825FFDB4;
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r23.u32 + 0, temp.u32);
loc_825FFE00:
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1024);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lfd f30,-152(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82639660) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x82639668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// subf r9,r8,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// lvx128 v11,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v31,5
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_set1_epi16(short(0x5)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// bne cr6,0x82639818
	if (!ctx.cr6.eq) goto loc_82639818;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lvx128 v61,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v60,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v63,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x826399fc
	if (!ctx.cr6.gt) goto loc_826399FC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82639730:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v30,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v11,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v6,v57,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vslh v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v28,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v21,v9,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vadduhm v19,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v15,v22,v10
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vadduhm v26,v21,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v24,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vadduhm v23,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vslh v22,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v20,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vadduhm v19,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vsubshs v18,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v27.s16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vsubshs v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v15,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v14,v19,v4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v30,v17,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v29,v20,v16
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v28,v18,v15
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v27,v14,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v26,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vsrah v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v26,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v25,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x82639730
	if (ctx.cr6.lt) goto loc_82639730;
	// b 0x826399fc
	goto loc_826399FC;
loc_82639818:
	// li r3,32
	ctx.r3.s64 = 32;
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v52,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v10,v53,v52
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v55,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor128 v9,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v29,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v7,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v6,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v28,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v9,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v30,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x826399fc
	if (!ctx.cr6.gt) goto loc_826399FC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
	// li r30,-32
	ctx.r30.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
loc_826398A4:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v26,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v11,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v29,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v25,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v18,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v19,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vadduhm v14,v23,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v24,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v18,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v30,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vadduhm v17,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vor v28,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vadduhm v16,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vslh v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vslh v22,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v17,v26,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vslh v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v26,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vsubshs v20,v27,v20
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v27,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v22.s16)));
	// vsubshs v22,v0,v21
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vadduhm v21,v18,v4
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v19,v16,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vslh v18,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v14,v20,v23
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v27,v17,v22
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsubshs v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vsubshs v23,v25,v16
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vadduhm v20,v26,v15
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vadduhm v22,v21,v14
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// vadduhm v21,v19,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v19,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v16,v20,v4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v15,v16,v19
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// stvx128 v18,r10,r30
	ea = (ctx.r10.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r31
	ea = (ctx.r10.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v14,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// blt cr6,0x826398a4
	if (ctx.cr6.lt) goto loc_826398A4;
loc_826399FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826384a0
	ctx.lr = 0x82639A0C;
	sub_826384A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

