#include "themaw_funcs.82.h"

DEFINE_REX_FUNC(sub_820D3AE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D6B78) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,15
	ctx.r3.s64 = ctx.r3.s64 + 983040;
	// addi r3,r3,-24612
	ctx.r3.s64 = ctx.r3.s64 + -24612;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D6C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60d4
	ctx.lr = 0x820D6C58;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-32142
	ctx.r19.s64 = -2106458112;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// lwz r11,9108(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 9108);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// addi r28,r30,44
	ctx.r28.s64 = ctx.r30.s64 + 44;
	// addis r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 983040;
	// stw r10,120(r30)
	REX_STORE_U32(ctx.r30.u32 + 120, ctx.r10.u32);
	// stw r10,144(r30)
	REX_STORE_U32(ctx.r30.u32 + 144, ctx.r10.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r7,r7,-32000
	ctx.r7.s64 = ctx.r7.s64 + -32000;
	// stw r9,128(r30)
	REX_STORE_U32(ctx.r30.u32 + 128, ctx.r9.u32);
	// stw r8,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r8.u32);
	// lis r9,606
	ctx.r9.s64 = 39714816;
	// stw r7,152(r30)
	REX_STORE_U32(ctx.r30.u32 + 152, ctx.r7.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,1820
	ctx.r8.s64 = 119275520;
	// lfs f31,9868(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f31.f64 = double(temp.f32);
	// li r22,3
	ctx.r22.s64 = 3;
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r5,r6,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0xFFFF8000;
	// stw r5,124(r30)
	REX_STORE_U32(ctx.r30.u32 + 124, ctx.r5.u32);
	// ori r20,r9,53399
	ctx.r20.u64 = ctx.r9.u64 | 53399;
	// li r21,-5
	ctx.r21.s64 = -5;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,11
	ctx.r26.s64 = 11;
	// ori r23,r8,29127
	ctx.r23.u64 = ctx.r8.u64 | 29127;
	// addi r27,r11,20464
	ctx.r27.s64 = ctx.r11.s64 + 20464;
loc_820D6CE0:
	// lwz r29,144(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x820d6cfc
	if (ctx.cr6.gt) goto loc_820D6CFC;
	// mulli r11,r29,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(108));
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x820d6d00
	if (!ctx.cr6.gt) goto loc_820D6D00;
loc_820D6CFC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_820D6D00:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x820D6D08;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d6d6c
	if (ctx.cr6.eq) goto loc_820D6D6C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addic. r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x820d6d64
	if (ctx.cr0.lt) goto loc_820D6D64;
loc_820D6D24:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r31,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r31.u32);
	// sth r31,96(r11)
	REX_STORE_U16(ctx.r11.u32 + 96, ctx.r31.u16);
	// sth r31,98(r11)
	REX_STORE_U16(ctx.r11.u32 + 98, ctx.r31.u16);
	// sth r31,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r31.u16);
	// sth r31,102(r11)
	REX_STORE_U16(ctx.r11.u32 + 102, ctx.r31.u16);
	// sth r31,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r31.u16);
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bge 0x820d6d24
	if (!ctx.cr0.lt) goto loc_820D6D24;
loc_820D6D64:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x820d6d70
	goto loc_820D6D70;
loc_820D6D6C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_820D6D70:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,144(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820d6da8
	if (!ctx.cr6.gt) goto loc_820D6DA8;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_820D6D88:
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// stw r26,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r26.u32);
	// lwz r8,144(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820d6d88
	if (ctx.cr6.lt) goto loc_820D6D88;
loc_820D6DA8:
	// stw r31,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x820d6dc8
	if (ctx.cr6.gt) goto loc_820D6DC8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820d6dcc
	goto loc_820D6DCC;
loc_820D6DC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_820D6DCC:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x820D6DD4;
	sub_825D0430(ctx, base);
	// stw r3,-4(r28)
	REX_STORE_U32(ctx.r28.u32 + -4, ctx.r3.u32);
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// bl 0x82266750
	ctx.lr = 0x820D6DEC;
	sub_82266750(ctx, base);
	// stw r3,-8(r28)
	REX_STORE_U32(ctx.r28.u32 + -8, ctx.r3.u32);
	// stw r3,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bne 0x820d6ce0
	if (!ctx.cr0.eq) goto loc_820D6CE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d6ee8
	ctx.lr = 0x820D6E08;
	sub_820D6EE8(ctx, base);
	// stw r30,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r30.u32);
	// lwz r10,9108(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 9108);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r9,488(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 488);
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r11,488(r10)
	REX_STORE_U32(ctx.r10.u32 + 488, ctx.r11.u32);
	// stw r31,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x825d6124
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E2D00) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x820e2d10
	sub_820E2D10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E3120) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x825d0430
	ctx.lr = 0x820E3144;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3160
	if (ctx.cr6.eq) goto loc_820E3160;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82250d98
	ctx.lr = 0x820E315C;
	sub_82250D98(ctx, base);
	// b 0x820e3164
	goto loc_820E3164;
loc_820E3160:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E3164:
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r3,r3,6836
	ctx.r3.u64 = ctx.r3.u64 | 6836;
	// bl 0x825d0430
	ctx.lr = 0x820E3178;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e318c
	if (ctx.cr6.eq) goto loc_820E318C;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820e4a38
	ctx.lr = 0x820E3188;
	sub_820E4A38(ctx, base);
	// b 0x820e3190
	goto loc_820E3190;
loc_820E318C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E3190:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,17776
	ctx.r9.s64 = ctx.r11.s64 + 17776;
	// addi r8,r10,9868
	ctx.r8.s64 = ctx.r10.s64 + 9868;
	// stw r9,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r9.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,96
	ctx.r3.s64 = 96;
	// lfs f12,9868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,68(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9928(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 9928);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x825d0430
	ctx.lr = 0x820E31E4;
	sub_825D0430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e3220
	if (ctx.cr6.eq) goto loc_820E3220;
	// li r8,680
	ctx.r8.s64 = 680;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-2
	ctx.r6.s64 = -2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822517a8
	ctx.lr = 0x820E320C;
	sub_822517A8(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,7808
	ctx.r9.s64 = ctx.r10.s64 + 7808;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x820e3224
	goto loc_820E3224;
loc_820E3220:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E3224:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x825d0430
	ctx.lr = 0x820E3234;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e324c
	if (ctx.cr6.eq) goto loc_820E324C;
	// li r4,680
	ctx.r4.s64 = 680;
	// bl 0x822468c8
	ctx.lr = 0x820E3244;
	sub_822468C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820e3250
	goto loc_820E3250;
loc_820E324C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E3250:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x825d0430
	ctx.lr = 0x820E3260;
	sub_825D0430(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e3298
	if (ctx.cr6.eq) goto loc_820E3298;
	// li r8,680
	ctx.r8.s64 = 680;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242990
	ctx.lr = 0x820E3284;
	sub_82242990(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r10,22164
	ctx.r9.s64 = ctx.r10.s64 + 22164;
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x820e329c
	goto loc_820E329C;
loc_820E3298:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E329C:
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,14
	ctx.r10.s64 = 917504;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// ori r8,r10,63516
	ctx.r8.u64 = ctx.r10.u64 | 63516;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,9108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9108);
	// addi r4,r9,22084
	ctx.r4.s64 = ctx.r9.s64 + 22084;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r30,r11,r8
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ea198
	ctx.lr = 0x820E32CC;
	sub_820EA198(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,22100
	ctx.r4.s64 = ctx.r6.s64 + 22100;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x820ea198
	ctx.lr = 0x820E32F0;
	sub_820EA198(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,22116
	ctx.r4.s64 = ctx.r10.s64 + 22116;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x820ea198
	ctx.lr = 0x820E3314;
	sub_820EA198(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e4460
	ctx.lr = 0x820E332C;
	sub_820E4460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_820F2B78) {
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
	// lwz r10,316(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820f2c1c
	if (ctx.cr6.lt) goto loc_820F2C1C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f2c68
	if (ctx.cr6.eq) goto loc_820F2C68;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2be8
	if (ctx.cr6.eq) goto loc_820F2BE8;
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r9,15
	ctx.r9.s64 = ctx.r9.s64 + 15;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x820f2bd8
	if (!ctx.cr6.lt) goto loc_820F2BD8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_820F2BD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x825d6e10
	ctx.lr = 0x820F2BE4;
	sub_825D6E10(ctx, base);
	// b 0x820f2bf0
	goto loc_820F2BF0;
loc_820F2BE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f2740
	ctx.lr = 0x820F2BF0;
	sub_820F2740(ctx, base);
loc_820F2BF0:
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
loc_820F2C1C:
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f2c60
	if (ctx.cr6.eq) goto loc_820F2C60;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f2c68
	if (ctx.cr6.eq) goto loc_820F2C68;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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
loc_820F2C60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820f2c80
	ctx.lr = 0x820F2C68;
	sub_820F2C80(ctx, base);
loc_820F2C68:
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

DEFINE_REX_FUNC(sub_820F93F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f1,f11
	ctx.f1.f64 = double(float(sqrt(ctx.f11.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F9520) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8492);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f7,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FB9B8) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r11,-32660
	ctx.r8.s64 = ctx.r11.s64 + -32660;
	// addi r7,r10,13004
	ctx.r7.s64 = ctx.r10.s64 + 13004;
	// addi r6,r9,12868
	ctx.r6.s64 = ctx.r9.s64 + 12868;
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820fba08
	if (ctx.cr6.eq) goto loc_820FBA08;
	// bl 0x825d0418
	ctx.lr = 0x820FBA04;
	sub_825D0418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FBA08:
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

DEFINE_REX_FUNC(sub_820FDED8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fdef0
	if (ctx.cr6.eq) goto loc_820FDEF0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820FDEF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FED00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x820FED08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820fed28
	if (!ctx.cr6.eq) goto loc_820FED28;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_820FED28:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820fed3c
	if (!ctx.cr6.eq) goto loc_820FED3C;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_820FED3C:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fed70
	if (ctx.cr6.eq) goto loc_820FED70;
	// lwz r3,9108(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 9108);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FED6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
loc_820FED70:
	// lwz r26,9108(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 9108);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// addis r10,r26,15
	ctx.r10.s64 = ctx.r26.s64 + 983040;
	// stw r27,316(r28)
	REX_STORE_U32(ctx.r28.u32 + 316, ctx.r27.u32);
	// addi r10,r10,-24244
	ctx.r10.s64 = ctx.r10.s64 + -24244;
	// stw r10,56(r28)
	REX_STORE_U32(ctx.r28.u32 + 56, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820fedb4
	if (!ctx.cr6.lt) goto loc_820FEDB4;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820feee0
	if (ctx.cr6.eq) goto loc_820FEEE0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820feee0
	if (ctx.cr6.lt) goto loc_820FEEE0;
loc_820FEDB4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820feee0
	if (!ctx.cr6.gt) goto loc_820FEEE0;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820fede0
	if (ctx.cr6.gt) goto loc_820FEDE0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x820fede4
	goto loc_820FEDE4;
loc_820FEDE0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_820FEDE4:
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x825d0430
	ctx.lr = 0x820FEDEC;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fee38
	if (ctx.cr6.eq) goto loc_820FEE38;
	// addic. r10,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r10.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x820fee30
	if (ctx.cr0.lt) goto loc_820FEE30;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r8,r9,-32384
	ctx.r8.s64 = ctx.r9.s64 + -32384;
loc_820FEE08:
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r8,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x820fee08
	if (!ctx.cr0.lt) goto loc_820FEE08;
loc_820FEE30:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x820fee3c
	goto loc_820FEE3C;
loc_820FEE38:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820FEE3C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,320(r28)
	REX_STORE_U32(ctx.r28.u32 + 320, ctx.r11.u32);
	// ble cr6,0x820feed0
	if (!ctx.cr6.gt) goto loc_820FEED0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x820fee58
	goto loc_820FEE58;
loc_820FEE54:
	// lwz r26,9108(r25)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r25.u32 + 9108);
loc_820FEE58:
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fee74
	if (ctx.cr6.lt) goto loc_820FEE74;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x820fee94
	goto loc_820FEE94;
loc_820FEE74:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fee90
	if (ctx.cr6.eq) goto loc_820FEE90;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x820fee94
	goto loc_820FEE94;
loc_820FEE90:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_820FEE94:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820FEEB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 320);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x820fee54
	if (!ctx.cr0.eq) goto loc_820FEE54;
loc_820FEED0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ffd00
	ctx.lr = 0x820FEED8;
	sub_820FFD00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_820FEEE0:
	// stw r27,320(r28)
	REX_STORE_U32(ctx.r28.u32 + 320, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210C020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FF00) {
	REX_FUNC_PROLOGUE();
	// addi r17,r11,-27240
	ctx.r17.s64 = ctx.r11.s64 + -27240;
	// addi r16,r10,-27248
	ctx.r16.s64 = ctx.r10.s64 + -27248;
	// addi r15,r9,-27256
	ctx.r15.s64 = ctx.r9.s64 + -27256;
	// addi r14,r8,-27264
	ctx.r14.s64 = ctx.r8.s64 + -27264;
	// addi r29,r29,-27272
	ctx.r29.s64 = ctx.r29.s64 + -27272;
	// addi r28,r28,-27280
	ctx.r28.s64 = ctx.r28.s64 + -27280;
	// addi r27,r27,-27288
	ctx.r27.s64 = ctx.r27.s64 + -27288;
	// addi r26,r26,-27296
	ctx.r26.s64 = ctx.r26.s64 + -27296;
	// addi r25,r25,-27304
	ctx.r25.s64 = ctx.r25.s64 + -27304;
	// addi r24,r24,-27312
	ctx.r24.s64 = ctx.r24.s64 + -27312;
	// addi r23,r23,-27320
	ctx.r23.s64 = ctx.r23.s64 + -27320;
	// addi r22,r22,-27328
	ctx.r22.s64 = ctx.r22.s64 + -27328;
	// addi r21,r21,-27336
	ctx.r21.s64 = ctx.r21.s64 + -27336;
	// addi r20,r20,-27344
	ctx.r20.s64 = ctx.r20.s64 + -27344;
	// bl 0x82119088
	ctx.lr = 0x8210FF3C;
	sub_82119088(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8211f150
	ctx.lr = 0x8210FF48;
	sub_8211F150(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x8211f150
	ctx.lr = 0x8210FF54;
	sub_8211F150(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8211f150
	ctx.lr = 0x8210FF60;
	sub_8211F150(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8211f150
	ctx.lr = 0x8210FF6C;
	sub_8211F150(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8211f150
	ctx.lr = 0x8210FF78;
	sub_8211F150(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x8211f150
	ctx.lr = 0x8210FF84;
	sub_8211F150(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x8211f150
	ctx.lr = 0x8210FF90;
	sub_8211F150(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x8211f150
	ctx.lr = 0x8210FF9C;
	sub_8211F150(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x8211f150
	ctx.lr = 0x8210FFA8;
	sub_8211F150(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x8211f150
	ctx.lr = 0x8210FFB4;
	sub_8211F150(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x8211f150
	ctx.lr = 0x8210FFC0;
	sub_8211F150(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x8211f150
	ctx.lr = 0x8210FFCC;
	sub_8211F150(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x8211f150
	ctx.lr = 0x8210FFD8;
	sub_8211F150(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x8211f150
	ctx.lr = 0x8210FFE4;
	sub_8211F150(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8211f150
	ctx.lr = 0x8210FFF0;
	sub_8211F150(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x8211f150
	ctx.lr = 0x8210FFFC;
	sub_8211F150(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x82110008;
	sub_82118928(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// bl 0x82149a88
	ctx.lr = 0x82110020;
	sub_82149A88(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82149b68
	ctx.lr = 0x82110040;
	sub_82149B68(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r10,r9,15104
	ctx.r10.s64 = ctx.r9.s64 + 15104;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r9,r7,-26620
	ctx.r9.s64 = ctx.r7.s64 + -26620;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r5,-26644
	ctx.r7.s64 = ctx.r5.s64 + -26644;
	// stw r9,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r5,r3,-26664
	ctx.r5.s64 = ctx.r3.s64 + -26664;
	// addi r3,r11,-26684
	ctx.r3.s64 = ctx.r11.s64 + -26684;
	// addi r11,r8,15072
	ctx.r11.s64 = ctx.r8.s64 + 15072;
	// stw r5,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r5.u32);
	// addi r10,r6,15040
	ctx.r10.s64 = ctx.r6.s64 + 15040;
	// stw r3,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r9,r4,15008
	ctx.r9.s64 = ctx.r4.s64 + 15008;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r31,-32243
	ctx.r31.s64 = -2113077248;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32243
	ctx.r23.s64 = -2113077248;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
	// addi r8,r8,14976
	ctx.r8.s64 = ctx.r8.s64 + 14976;
	// addi r7,r7,14936
	ctx.r7.s64 = ctx.r7.s64 + 14936;
	// addi r6,r6,-26704
	ctx.r6.s64 = ctx.r6.s64 + -26704;
	// stw r8,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// addi r4,r4,-26724
	ctx.r4.s64 = ctx.r4.s64 + -26724;
	// stw r7,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// addi r11,r11,-26740
	ctx.r11.s64 = ctx.r11.s64 + -26740;
	// addi r9,r9,-26756
	ctx.r9.s64 = ctx.r9.s64 + -26756;
	// stw r4,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r4.u32);
	// addi r8,r30,-26772
	ctx.r8.s64 = ctx.r30.s64 + -26772;
	// stw r11,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// addi r7,r28,-26788
	ctx.r7.s64 = ctx.r28.s64 + -26788;
	// stw r9,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r9.u32);
	// addi r6,r26,-26804
	ctx.r6.s64 = ctx.r26.s64 + -26804;
	// stw r8,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r8.u32);
	// addi r4,r24,-26820
	ctx.r4.s64 = ctx.r24.s64 + -26820;
	// stw r7,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r7.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r6,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r6.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r4,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r4.u32);
	// addi r7,r5,14896
	ctx.r7.s64 = ctx.r5.s64 + 14896;
	// addi r6,r3,14856
	ctx.r6.s64 = ctx.r3.s64 + 14856;
	// addi r11,r22,-26836
	ctx.r11.s64 = ctx.r22.s64 + -26836;
	// stw r7,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// addi r9,r20,-26852
	ctx.r9.s64 = ctx.r20.s64 + -26852;
	// stw r6,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r6.u32);
	// addi r8,r19,-26864
	ctx.r8.s64 = ctx.r19.s64 + -26864;
	// stw r11,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// addi r5,r10,14816
	ctx.r5.s64 = ctx.r10.s64 + 14816;
	// stw r9,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// addi r4,r31,14784
	ctx.r4.s64 = ctx.r31.s64 + 14784;
	// stw r8,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// addi r3,r29,14752
	ctx.r3.s64 = ctx.r29.s64 + 14752;
	// stw r5,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r5.u32);
	// lis r18,-32243
	ctx.r18.s64 = -2113077248;
	// stw r4,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r4.u32);
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// stw r3,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r3.u32);
	// addi r11,r27,14712
	ctx.r11.s64 = ctx.r27.s64 + 14712;
	// addi r10,r25,14672
	ctx.r10.s64 = ctx.r25.s64 + 14672;
	// addi r9,r23,14640
	ctx.r9.s64 = ctx.r23.s64 + 14640;
	// stw r11,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r11.u32);
	// addi r8,r21,14608
	ctx.r8.s64 = ctx.r21.s64 + 14608;
	// stw r10,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r10.u32);
	// lis r16,-32227
	ctx.r16.s64 = -2112028672;
	// stw r9,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// addi r4,r17,-26884
	ctx.r4.s64 = ctx.r17.s64 + -26884;
	// stw r8,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// addi r5,r18,14400
	ctx.r5.s64 = ctx.r18.s64 + 14400;
	// addi r3,r1,2648
	ctx.r3.s64 = ctx.r1.s64 + 2648;
	// addi r31,r16,23592
	ctx.r31.s64 = ctx.r16.s64 + 23592;
	// bl 0x8211f8c0
	ctx.lr = 0x821101CC;
	sub_8211F8C0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r6,-26900
	ctx.r4.s64 = ctx.r6.s64 + -26900;
	// addi r5,r7,14128
	ctx.r5.s64 = ctx.r7.s64 + 14128;
	// addi r3,r1,2268
	ctx.r3.s64 = ctx.r1.s64 + 2268;
	// bl 0x8211f840
	ctx.lr = 0x821101E8;
	sub_8211F840(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,524(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// addi r5,r5,14064
	ctx.r5.s64 = ctx.r5.s64 + 14064;
	// addi r3,r1,2568
	ctx.r3.s64 = ctx.r1.s64 + 2568;
	// bl 0x8211f7c0
	ctx.lr = 0x82110200;
	sub_8211F7C0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r10,-26924
	ctx.r4.s64 = ctx.r10.s64 + -26924;
	// addi r5,r11,13848
	ctx.r5.s64 = ctx.r11.s64 + 13848;
	// addi r3,r1,2276
	ctx.r3.s64 = ctx.r1.s64 + 2276;
	// bl 0x8211f740
	ctx.lr = 0x8211021C;
	sub_8211F740(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r8,-26940
	ctx.r4.s64 = ctx.r8.s64 + -26940;
	// addi r5,r9,13440
	ctx.r5.s64 = ctx.r9.s64 + 13440;
	// addi r3,r1,2624
	ctx.r3.s64 = ctx.r1.s64 + 2624;
	// bl 0x8211f6c0
	ctx.lr = 0x82110238;
	sub_8211F6C0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r6,-26972
	ctx.r4.s64 = ctx.r6.s64 + -26972;
	// addi r5,r7,13296
	ctx.r5.s64 = ctx.r7.s64 + 13296;
	// addi r3,r1,2284
	ctx.r3.s64 = ctx.r1.s64 + 2284;
	// bl 0x8211f650
	ctx.lr = 0x82110254;
	sub_8211F650(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r4,-26992
	ctx.r4.s64 = ctx.r4.s64 + -26992;
	// addi r5,r5,13184
	ctx.r5.s64 = ctx.r5.s64 + 13184;
	// addi r3,r1,2576
	ctx.r3.s64 = ctx.r1.s64 + 2576;
	// bl 0x8211f5e0
	ctx.lr = 0x82110270;
	sub_8211F5E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r10,-27020
	ctx.r4.s64 = ctx.r10.s64 + -27020;
	// addi r5,r11,13040
	ctx.r5.s64 = ctx.r11.s64 + 13040;
	// addi r3,r1,2292
	ctx.r3.s64 = ctx.r1.s64 + 2292;
	// bl 0x8211f650
	ctx.lr = 0x8211028C;
	sub_8211F650(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r8,-27040
	ctx.r4.s64 = ctx.r8.s64 + -27040;
	// addi r5,r9,12920
	ctx.r5.s64 = ctx.r9.s64 + 12920;
	// addi r3,r1,2480
	ctx.r3.s64 = ctx.r1.s64 + 2480;
	// bl 0x8211f5e0
	ctx.lr = 0x821102A8;
	sub_8211F5E0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r6,-27072
	ctx.r4.s64 = ctx.r6.s64 + -27072;
	// addi r5,r7,12728
	ctx.r5.s64 = ctx.r7.s64 + 12728;
	// addi r3,r1,2300
	ctx.r3.s64 = ctx.r1.s64 + 2300;
	// bl 0x8211f5e0
	ctx.lr = 0x821102C4;
	sub_8211F5E0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// addi r5,r5,12432
	ctx.r5.s64 = ctx.r5.s64 + 12432;
	// addi r3,r1,2484
	ctx.r3.s64 = ctx.r1.s64 + 2484;
	// bl 0x8211f560
	ctx.lr = 0x821102DC;
	sub_8211F560(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r10,-27092
	ctx.r4.s64 = ctx.r10.s64 + -27092;
	// addi r5,r11,12264
	ctx.r5.s64 = ctx.r11.s64 + 12264;
	// addi r3,r1,2308
	ctx.r3.s64 = ctx.r1.s64 + 2308;
	// bl 0x8211f4f0
	ctx.lr = 0x821102F8;
	sub_8211F4F0(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r4,r8,-27112
	ctx.r4.s64 = ctx.r8.s64 + -27112;
	// addi r5,r9,12096
	ctx.r5.s64 = ctx.r9.s64 + 12096;
	// addi r3,r1,2492
	ctx.r3.s64 = ctx.r1.s64 + 2492;
	// bl 0x8211f4f0
	ctx.lr = 0x82110314;
	sub_8211F4F0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r4,r6,-27132
	ctx.r4.s64 = ctx.r6.s64 + -27132;
	// addi r5,r7,11928
	ctx.r5.s64 = ctx.r7.s64 + 11928;
	// addi r3,r1,2316
	ctx.r3.s64 = ctx.r1.s64 + 2316;
	// bl 0x8211f4f0
	ctx.lr = 0x82110330;
	sub_8211F4F0(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r4,r4,-27148
	ctx.r4.s64 = ctx.r4.s64 + -27148;
	// addi r5,r5,11832
	ctx.r5.s64 = ctx.r5.s64 + 11832;
	// addi r3,r1,2500
	ctx.r3.s64 = ctx.r1.s64 + 2500;
	// bl 0x8211f480
	ctx.lr = 0x8211034C;
	sub_8211F480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r4,r10,-27168
	ctx.r4.s64 = ctx.r10.s64 + -27168;
	// addi r5,r11,11736
	ctx.r5.s64 = ctx.r11.s64 + 11736;
	// addi r3,r1,2324
	ctx.r3.s64 = ctx.r1.s64 + 2324;
	// bl 0x8211f480
	ctx.lr = 0x82110368;
	sub_8211F480(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r4,r8,-27196
	ctx.r4.s64 = ctx.r8.s64 + -27196;
	// addi r5,r9,11128
	ctx.r5.s64 = ctx.r9.s64 + 11128;
	// addi r3,r1,2508
	ctx.r3.s64 = ctx.r1.s64 + 2508;
	// bl 0x8211f400
	ctx.lr = 0x82110384;
	sub_8211F400(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r5,r7,10688
	ctx.r5.s64 = ctx.r7.s64 + 10688;
	// addi r4,r6,-27216
	ctx.r4.s64 = ctx.r6.s64 + -27216;
	// addi r3,r1,2332
	ctx.r3.s64 = ctx.r1.s64 + 2332;
	// bl 0x8211f380
	ctx.lr = 0x821103A0;
	sub_8211F380(ctx, base);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x821103B0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x821103BC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x821103C8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x821103D4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x821103E0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x821103EC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x821103F8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x82110404;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x82110410;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8211041C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x82110428;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x82110434;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x82110440;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8211044C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x82110458;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x82110464;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x82110470;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8211047C;
	sub_82118928(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x8211f940
	ctx.lr = 0x82110488;
	sub_8211F940(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r5,352(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x8211f990
	ctx.lr = 0x82110494;
	sub_8211F990(ctx, base);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x8211f9e0
	ctx.lr = 0x821104A0;
	sub_8211F9E0(ctx, base);
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r5,520(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// bl 0x8211f990
	ctx.lr = 0x821104AC;
	sub_8211F990(ctx, base);
	// lwz r4,488(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r5,504(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// bl 0x8211f9e0
	ctx.lr = 0x821104B8;
	sub_8211F9E0(ctx, base);
	// lwz r4,516(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r5,508(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x8211f990
	ctx.lr = 0x821104C4;
	sub_8211F990(ctx, base);
	// lwz r4,500(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r5,400(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x8211f9e0
	ctx.lr = 0x821104D0;
	sub_8211F9E0(ctx, base);
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r5,440(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8211f990
	ctx.lr = 0x821104DC;
	sub_8211F990(ctx, base);
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r5,392(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// bl 0x8211f9e0
	ctx.lr = 0x821104E8;
	sub_8211F9E0(ctx, base);
	// lwz r4,384(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r5,368(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x8211f990
	ctx.lr = 0x821104F4;
	sub_8211F990(ctx, base);
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r5,348(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x8211f9e0
	ctx.lr = 0x82110500;
	sub_8211F9E0(ctx, base);
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x8211f990
	ctx.lr = 0x8211050C;
	sub_8211F990(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x8211f9e0
	ctx.lr = 0x82110518;
	sub_8211F9E0(ctx, base);
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x8211f990
	ctx.lr = 0x82110524;
	sub_8211F990(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,172(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x8211f9e0
	ctx.lr = 0x82110530;
	sub_8211F9E0(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lwz r4,600(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214a258
	ctx.lr = 0x82110564;
	sub_8214A258(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r4,528(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r6,r8,15176
	ctx.r6.s64 = ctx.r8.s64 + 15176;
	// addi r5,r7,15168
	ctx.r5.s64 = ctx.r7.s64 + 15168;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x8211fa30
	ctx.lr = 0x82110580;
	sub_8211FA30(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-26596
	ctx.r4.s64 = ctx.r9.s64 + -26596;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214a670
	ctx.lr = 0x821105B4;
	sub_8214A670(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lwz r28,624(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,15392
	ctx.r10.s64 = ctx.r6.s64 + 15392;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214a860
	ctx.lr = 0x821105F4;
	sub_8214A860(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r11,-26560
	ctx.r30.s64 = ctx.r11.s64 + -26560;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r7,r9,16752
	ctx.r7.s64 = ctx.r9.s64 + 16752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,16072
	ctx.r5.s64 = ctx.r8.s64 + 16072;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r3,r1,2516
	ctx.r3.s64 = ctx.r1.s64 + 2516;
	// bl 0x8211fb00
	ctx.lr = 0x82110624;
	sub_8211FB00(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// addi r27,r6,-26572
	ctx.r27.s64 = ctx.r6.s64 + -26572;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r5,15872
	ctx.r5.s64 = ctx.r5.s64 + 15872;
	// addi r3,r1,2340
	ctx.r3.s64 = ctx.r1.s64 + 2340;
	// addi r25,r11,16064
	ctx.r25.s64 = ctx.r11.s64 + 16064;
	// bl 0x8211fb00
	ctx.lr = 0x8211064C;
	sub_8211FB00(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r10,15408
	ctx.r5.s64 = ctx.r10.s64 + 15408;
	// addi r3,r1,2524
	ctx.r3.s64 = ctx.r1.s64 + 2524;
	// addi r28,r9,15864
	ctx.r28.s64 = ctx.r9.s64 + 15864;
	// bl 0x8211fa80
	ctx.lr = 0x8211066C;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x82110678;
	sub_82118928(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211f940
	ctx.lr = 0x82110684;
	sub_8211F940(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x82110690;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8211f940
	ctx.lr = 0x8211069C;
	sub_8211F940(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x821106A8;
	sub_82118928(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r27,416(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214aa68
	ctx.lr = 0x821106DC;
	sub_8214AA68(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r30,608(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r8,r10,18616
	ctx.r8.s64 = ctx.r10.s64 + 18616;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,18472
	ctx.r5.s64 = ctx.r9.s64 + 18472;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r1,2348
	ctx.r3.s64 = ctx.r1.s64 + 2348;
	// bl 0x8211fcb0
	ctx.lr = 0x82110704;
	sub_8211FCB0(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r7,18280
	ctx.r5.s64 = ctx.r7.s64 + 18280;
	// addi r3,r1,2532
	ctx.r3.s64 = ctx.r1.s64 + 2532;
	// addi r25,r6,18464
	ctx.r25.s64 = ctx.r6.s64 + 18464;
	// bl 0x8211fbf0
	ctx.lr = 0x82110724;
	sub_8211FBF0(ctx, base);
	// lwz r29,596(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,18128
	ctx.r5.s64 = ctx.r5.s64 + 18128;
	// addi r3,r1,2356
	ctx.r3.s64 = ctx.r1.s64 + 2356;
	// addi r23,r11,18264
	ctx.r23.s64 = ctx.r11.s64 + 18264;
	// bl 0x8211fcb0
	ctx.lr = 0x82110748;
	sub_8211FCB0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,17544
	ctx.r5.s64 = ctx.r10.s64 + 17544;
	// addi r3,r1,2540
	ctx.r3.s64 = ctx.r1.s64 + 2540;
	// addi r21,r9,18120
	ctx.r21.s64 = ctx.r9.s64 + 18120;
	// bl 0x8211fbf0
	ctx.lr = 0x82110768;
	sub_8211FBF0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r4,496(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r5,r8,17344
	ctx.r5.s64 = ctx.r8.s64 + 17344;
	// addi r3,r1,2364
	ctx.r3.s64 = ctx.r1.s64 + 2364;
	// addi r19,r7,17528
	ctx.r19.s64 = ctx.r7.s64 + 17528;
	// bl 0x8211fbf0
	ctx.lr = 0x82110788;
	sub_8211FBF0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r4,492(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r6,17144
	ctx.r5.s64 = ctx.r6.s64 + 17144;
	// addi r3,r1,2548
	ctx.r3.s64 = ctx.r1.s64 + 2548;
	// addi r17,r11,17328
	ctx.r17.s64 = ctx.r11.s64 + 17328;
	// bl 0x8211fbf0
	ctx.lr = 0x821107A8;
	sub_8211FBF0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r10,16992
	ctx.r5.s64 = ctx.r10.s64 + 16992;
	// addi r3,r1,2372
	ctx.r3.s64 = ctx.r1.s64 + 2372;
	// addi r15,r9,17128
	ctx.r15.s64 = ctx.r9.s64 + 17128;
	// bl 0x8211fb00
	ctx.lr = 0x821107C8;
	sub_8211FB00(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r8,16768
	ctx.r5.s64 = ctx.r8.s64 + 16768;
	// addi r3,r1,2556
	ctx.r3.s64 = ctx.r1.s64 + 2556;
	// addi r27,r7,16984
	ctx.r27.s64 = ctx.r7.s64 + 16984;
	// bl 0x8211fb70
	ctx.lr = 0x821107E8;
	sub_8211FB70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x821107F4;
	sub_82118928(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8211f940
	ctx.lr = 0x82110800;
	sub_8211F940(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8211080C;
	sub_82118928(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,492(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x8211fa30
	ctx.lr = 0x82110818;
	sub_8211FA30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x82110824;
	sub_82118928(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,496(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x8211fa30
	ctx.lr = 0x82110830;
	sub_8211FA30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8211083C;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x8211fa30
	ctx.lr = 0x82110848;
	sub_8211FA30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x82110854;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211fc60
	ctx.lr = 0x82110860;
	sub_8211FC60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8211086C;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8211fa30
	ctx.lr = 0x82110878;
	sub_8211FA30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x82110884;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8211fc60
	ctx.lr = 0x82110890;
	sub_8211FC60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8211089C;
	sub_82118928(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lwz r4,512(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214ae90
	ctx.lr = 0x821108CC;
	sub_8214AE90(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r29,196(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1756
	ctx.r4.s64 = ctx.r1.s64 + 1756;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r7,1756(r1)
	REX_STORE_U32(ctx.r1.u32 + 1756, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821108F4;
	sub_822009C8(ctx, base);
	// lwz r3,3240(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110914
	if (ctx.cr6.eq) goto loc_82110914;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110914:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r4,r11,-26552
	ctx.r4.s64 = ctx.r11.s64 + -26552;
	// bl 0x82201b80
	ctx.lr = 0x82110924;
	sub_82201B80(ctx, base);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// stw r10,1112(r1)
	REX_STORE_U32(ctx.r1.u32 + 1112, ctx.r10.u32);
	// bl 0x8211a8d0
	ctx.lr = 0x82110934;
	sub_8211A8D0(ctx, base);
	// lwz r9,1104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1104);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1396
	ctx.r4.s64 = ctx.r1.s64 + 1396;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,1104(r1)
	REX_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// stw r9,1396(r1)
	REX_STORE_U32(ctx.r1.u32 + 1396, ctx.r9.u32);
	// bl 0x822009c8
	ctx.lr = 0x82110954;
	sub_822009C8(ctx, base);
	// lwz r3,1104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110974
	if (ctx.cr6.eq) goto loc_82110974;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110974:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// addi r4,r11,21712
	ctx.r4.s64 = ctx.r11.s64 + 21712;
	// bl 0x82201b80
	ctx.lr = 0x82110984;
	sub_82201B80(ctx, base);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// stw r10,984(r1)
	REX_STORE_U32(ctx.r1.u32 + 984, ctx.r10.u32);
	// bl 0x8211a9a8
	ctx.lr = 0x82110994;
	sub_8211A9A8(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2380
	ctx.r3.s64 = ctx.r1.s64 + 2380;
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// bl 0x8211fd20
	ctx.lr = 0x821109B0;
	sub_8211FD20(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,984(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 984);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x821109C0;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,984(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821109e4
	if (ctx.cr6.eq) goto loc_821109E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821109E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821109E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1588
	ctx.r4.s64 = ctx.r1.s64 + 1588;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1588(r1)
	REX_STORE_U32(ctx.r1.u32 + 1588, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82110A04;
	sub_822009C8(ctx, base);
	// lwz r3,976(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110a24
	if (ctx.cr6.eq) goto loc_82110A24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110A24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110A24:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,2856
	ctx.r3.s64 = ctx.r1.s64 + 2856;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// bl 0x82119168
	ctx.lr = 0x82110A34;
	sub_82119168(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1404
	ctx.r4.s64 = ctx.r1.s64 + 1404;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1404(r1)
	REX_STORE_U32(ctx.r1.u32 + 1404, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82110A58;
	sub_822009C8(ctx, base);
	// lwz r3,2856(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110a78
	if (ctx.cr6.eq) goto loc_82110A78;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110A78:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,29912
	ctx.r7.s64 = ctx.r11.s64 + 29912;
	// addi r4,r10,-26516
	ctx.r4.s64 = ctx.r10.s64 + -26516;
	// addi r3,r1,3144
	ctx.r3.s64 = ctx.r1.s64 + 3144;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r30,r8,-26496
	ctx.r30.s64 = ctx.r8.s64 + -26496;
	// addi r28,r9,-9520
	ctx.r28.s64 = ctx.r9.s64 + -9520;
	// bl 0x82119248
	ctx.lr = 0x82110AA4;
	sub_82119248(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211fda0
	ctx.lr = 0x82110AB0;
	sub_8211FDA0(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-26460
	ctx.r4.s64 = ctx.r9.s64 + -26460;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214b2a0
	ctx.lr = 0x82110AE4;
	sub_8214B2A0(ctx, base);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r8,23584
	ctx.r11.s64 = ctx.r8.s64 + 23584;
	// addi r4,r6,-26424
	ctx.r4.s64 = ctx.r6.s64 + -26424;
	// addi r5,r7,-9520
	ctx.r5.s64 = ctx.r7.s64 + -9520;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x8211fda0
	ctx.lr = 0x82110B04;
	sub_8211FDA0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-26396
	ctx.r4.s64 = ctx.r7.s64 + -26396;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214b4c0
	ctx.lr = 0x82110B38;
	sub_8214B4C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1884
	ctx.r4.s64 = ctx.r1.s64 + 1884;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1884(r1)
	REX_STORE_U32(ctx.r1.u32 + 1884, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82110B5C;
	sub_822009C8(ctx, base);
	// lwz r3,3144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110b7c
	if (ctx.cr6.eq) goto loc_82110B7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110B7C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-26336
	ctx.r9.s64 = ctx.r11.s64 + -26336;
	// addi r8,r10,-26352
	ctx.r8.s64 = ctx.r10.s64 + -26352;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r10,r6,-26264
	ctx.r10.s64 = ctx.r6.s64 + -26264;
	// addi r9,r5,-26276
	ctx.r9.s64 = ctx.r5.s64 + -26276;
	// addi r8,r4,-26288
	ctx.r8.s64 = ctx.r4.s64 + -26288;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r7,r3,-26304
	ctx.r7.s64 = ctx.r3.s64 + -26304;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r6,r11,-26320
	ctx.r6.s64 = ctx.r11.s64 + -26320;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r10,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// bl 0x821d5e18
	ctx.lr = 0x82110C14;
	sub_821D5E18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82110C28;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x821d5f60
	ctx.lr = 0x82110C34;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d5f60
	ctx.lr = 0x82110C40;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821d5f60
	ctx.lr = 0x82110C4C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82110C58;
	sub_821D5F60(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,2888
	ctx.r3.s64 = ctx.r1.s64 + 2888;
	// addi r4,r9,-26368
	ctx.r4.s64 = ctx.r9.s64 + -26368;
	// bl 0x82119328
	ctx.lr = 0x82110C68;
	sub_82119328(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r30,r11,-26200
	ctx.r30.s64 = ctx.r11.s64 + -26200;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r27,r8,-26104
	ctx.r27.s64 = ctx.r8.s64 + -26104;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r26,r7,-26128
	ctx.r26.s64 = ctx.r7.s64 + -26128;
	// addi r25,r6,-26152
	ctx.r25.s64 = ctx.r6.s64 + -26152;
	// addi r24,r5,-26168
	ctx.r24.s64 = ctx.r5.s64 + -26168;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r23,r4,-26184
	ctx.r23.s64 = ctx.r4.s64 + -26184;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r3,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// addi r11,r11,23544
	ctx.r11.s64 = ctx.r11.s64 + 23544;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r28,r21,-26220
	ctx.r28.s64 = ctx.r21.s64 + -26220;
	// addi r21,r19,-26240
	ctx.r21.s64 = ctx.r19.s64 + -26240;
	// addi r19,r10,-28352
	ctx.r19.s64 = ctx.r10.s64 + -28352;
	// addi r18,r9,23552
	ctx.r18.s64 = ctx.r9.s64 + 23552;
	// addi r17,r8,23560
	ctx.r17.s64 = ctx.r8.s64 + 23560;
	// addi r16,r7,23568
	ctx.r16.s64 = ctx.r7.s64 + 23568;
	// addi r15,r6,23576
	ctx.r15.s64 = ctx.r6.s64 + 23576;
	// addi r14,r5,23824
	ctx.r14.s64 = ctx.r5.s64 + 23824;
	// addi r22,r22,24184
	ctx.r22.s64 = ctx.r22.s64 + 24184;
	// addi r20,r20,24136
	ctx.r20.s64 = ctx.r20.s64 + 24136;
	// bl 0x82119cc8
	ctx.lr = 0x82110D08;
	sub_82119CC8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211fdf0
	ctx.lr = 0x82110D14;
	sub_8211FDF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x8211fdf0
	ctx.lr = 0x82110D20;
	sub_8211FDF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x8211fe40
	ctx.lr = 0x82110D2C;
	sub_8211FE40(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8211fe40
	ctx.lr = 0x82110D38;
	sub_8211FE40(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x8211fe90
	ctx.lr = 0x82110D44;
	sub_8211FE90(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x8211fe40
	ctx.lr = 0x82110D50;
	sub_8211FE40(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x8211fe90
	ctx.lr = 0x82110D5C;
	sub_8211FE90(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x8211fdf0
	ctx.lr = 0x82110D68;
	sub_8211FDF0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-26088
	ctx.r4.s64 = ctx.r7.s64 + -26088;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214bc98
	ctx.lr = 0x82110D9C;
	sub_8214BC98(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1412
	ctx.r4.s64 = ctx.r1.s64 + 1412;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1412(r1)
	REX_STORE_U32(ctx.r1.u32 + 1412, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82110DC0;
	sub_822009C8(ctx, base);
	// lwz r3,2888(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110de0
	if (ctx.cr6.eq) goto loc_82110DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82110DE0:
	// addi r3,r1,3392
	ctx.r3.s64 = ctx.r1.s64 + 3392;
	// bl 0x821d5d58
	ctx.lr = 0x82110DE8;
	sub_821D5D58(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,23528
	ctx.r7.s64 = ctx.r11.s64 + 23528;
	// addi r4,r10,-26072
	ctx.r4.s64 = ctx.r10.s64 + -26072;
	// addi r3,r1,3272
	ctx.r3.s64 = ctx.r1.s64 + 3272;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r30,r8,-26056
	ctx.r30.s64 = ctx.r8.s64 + -26056;
	// addi r28,r9,23392
	ctx.r28.s64 = ctx.r9.s64 + 23392;
	// bl 0x82119408
	ctx.lr = 0x82110E14;
	sub_82119408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211fee0
	ctx.lr = 0x82110E20;
	sub_8211FEE0(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-26036
	ctx.r4.s64 = ctx.r9.s64 + -26036;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214c090
	ctx.lr = 0x82110E54;
	sub_8214C090(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,23512
	ctx.r10.s64 = ctx.r6.s64 + 23512;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-26016
	ctx.r4.s64 = ctx.r9.s64 + -26016;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214c298
	ctx.lr = 0x82110E94;
	sub_8214C298(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,23504
	ctx.r10.s64 = ctx.r6.s64 + 23504;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-26000
	ctx.r4.s64 = ctx.r9.s64 + -26000;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214c4a0
	ctx.lr = 0x82110ED4;
	sub_8214C4A0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r6,10792
	ctx.r5.s64 = ctx.r6.s64 + 10792;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r4,r11,-25988
	ctx.r4.s64 = ctx.r11.s64 + -25988;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stw r4,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// bl 0x8214c690
	ctx.lr = 0x82110F18;
	sub_8214C690(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r4,r11,-25976
	ctx.r4.s64 = ctx.r11.s64 + -25976;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r4,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r4.u32);
	// addi r11,r9,23656
	ctx.r11.s64 = ctx.r9.s64 + 23656;
	// addi r5,r8,23496
	ctx.r5.s64 = ctx.r8.s64 + 23496;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r30,r6,-25964
	ctx.r30.s64 = ctx.r6.s64 + -25964;
	// addi r28,r7,21864
	ctx.r28.s64 = ctx.r7.s64 + 21864;
	// bl 0x8211ff30
	ctx.lr = 0x82110F4C;
	sub_8211FF30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211fee0
	ctx.lr = 0x82110F58;
	sub_8211FEE0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-25948
	ctx.r4.s64 = ctx.r7.s64 + -25948;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214caa0
	ctx.lr = 0x82110F8C;
	sub_8214CAA0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r28,r10,-25792
	ctx.r28.s64 = ctx.r10.s64 + -25792;
	// addi r27,r9,-25804
	ctx.r27.s64 = ctx.r9.s64 + -25804;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r6,r6,24120
	ctx.r6.s64 = ctx.r6.s64 + 24120;
	// addi r23,r5,24080
	ctx.r23.s64 = ctx.r5.s64 + 24080;
	// addi r22,r4,24048
	ctx.r22.s64 = ctx.r4.s64 + 24048;
	// stw r6,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// addi r30,r11,-25776
	ctx.r30.s64 = ctx.r11.s64 + -25776;
	// addi r20,r7,23984
	ctx.r20.s64 = ctx.r7.s64 + 23984;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// addi r10,r10,-25876
	ctx.r10.s64 = ctx.r10.s64 + -25876;
	// addi r9,r9,-25892
	ctx.r9.s64 = ctx.r9.s64 + -25892;
	// addi r21,r8,24008
	ctx.r21.s64 = ctx.r8.s64 + 24008;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// addi r15,r25,-25860
	ctx.r15.s64 = ctx.r25.s64 + -25860;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// addi r4,r4,-25932
	ctx.r4.s64 = ctx.r4.s64 + -25932;
	// addi r5,r5,23720
	ctx.r5.s64 = ctx.r5.s64 + 23720;
	// addi r26,r11,-25820
	ctx.r26.s64 = ctx.r11.s64 + -25820;
	// addi r16,r7,-25840
	ctx.r16.s64 = ctx.r7.s64 + -25840;
	// addi r25,r17,-25912
	ctx.r25.s64 = ctx.r17.s64 + -25912;
	// addi r11,r24,2096
	ctx.r11.s64 = ctx.r24.s64 + 2096;
	// addi r17,r8,23936
	ctx.r17.s64 = ctx.r8.s64 + 23936;
	// addi r14,r6,23880
	ctx.r14.s64 = ctx.r6.s64 + 23880;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r19,r19,23800
	ctx.r19.s64 = ctx.r19.s64 + 23800;
	// addi r24,r18,23760
	ctx.r24.s64 = ctx.r18.s64 + 23760;
	// bl 0x8211ff80
	ctx.lr = 0x82111048;
	sub_8211FF80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8211ff80
	ctx.lr = 0x82111054;
	sub_8211FF80(ctx, base);
	// lwz r24,104(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8211ffd0
	ctx.lr = 0x82111064;
	sub_8211FFD0(ctx, base);
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8211ff30
	ctx.lr = 0x82111074;
	sub_8211FF30(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x8211ffd0
	ctx.lr = 0x82111080;
	sub_8211FFD0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x8211ffd0
	ctx.lr = 0x8211108C;
	sub_8211FFD0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82120020
	ctx.lr = 0x82111098;
	sub_82120020(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82120020
	ctx.lr = 0x821110A4;
	sub_82120020(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82120020
	ctx.lr = 0x821110B0;
	sub_82120020(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82120020
	ctx.lr = 0x821110BC;
	sub_82120020(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214d318
	ctx.lr = 0x821110EC;
	sub_8214D318(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1604
	ctx.r4.s64 = ctx.r1.s64 + 1604;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1604(r1)
	REX_STORE_U32(ctx.r1.u32 + 1604, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82111110;
	sub_822009C8(ctx, base);
	// lwz r3,3272(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111130
	if (ctx.cr6.eq) goto loc_82111130;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111130:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,12392
	ctx.r9.s64 = ctx.r11.s64 + 12392;
	// addi r4,r10,-25764
	ctx.r4.s64 = ctx.r10.s64 + -25764;
	// addi r3,r1,2920
	ctx.r3.s64 = ctx.r1.s64 + 2920;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x821194e8
	ctx.lr = 0x8211114C;
	sub_821194E8(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-25740
	ctx.r4.s64 = ctx.r10.s64 + -25740;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214d520
	ctx.lr = 0x82111180;
	sub_8214D520(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r4,r11,-25720
	ctx.r4.s64 = ctx.r11.s64 + -25720;
	// addi r7,r9,1184
	ctx.r7.s64 = ctx.r9.s64 + 1184;
	// addi r5,r8,2104
	ctx.r5.s64 = ctx.r8.s64 + 2104;
	// stw r4,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r4.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82120070
	ctx.lr = 0x821111A4;
	sub_82120070(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-25704
	ctx.r4.s64 = ctx.r9.s64 + -25704;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214d918
	ctx.lr = 0x821111D8;
	sub_8214D918(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r8,1496
	ctx.r11.s64 = ctx.r8.s64 + 1496;
	// addi r4,r6,-25684
	ctx.r4.s64 = ctx.r6.s64 + -25684;
	// addi r5,r7,1456
	ctx.r5.s64 = ctx.r7.s64 + 1456;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82120070
	ctx.lr = 0x821111F8;
	sub_82120070(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214db30
	ctx.lr = 0x82111228;
	sub_8214DB30(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r7,1528
	ctx.r11.s64 = ctx.r7.s64 + 1528;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214dd38
	ctx.lr = 0x82111264;
	sub_8214DD38(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,29912
	ctx.r10.s64 = ctx.r7.s64 + 29912;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-25660
	ctx.r4.s64 = ctx.r9.s64 + -25660;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214df28
	ctx.lr = 0x821112A4;
	sub_8214DF28(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r8,1832
	ctx.r5.s64 = ctx.r8.s64 + 1832;
	// addi r26,r7,2024
	ctx.r26.s64 = ctx.r7.s64 + 2024;
	// addi r25,r6,1960
	ctx.r25.s64 = ctx.r6.s64 + 1960;
	// addi r24,r11,1888
	ctx.r24.s64 = ctx.r11.s64 + 1888;
	// bl 0x821200c0
	ctx.lr = 0x821112CC;
	sub_821200C0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821200c0
	ctx.lr = 0x821112D8;
	sub_821200C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x821200c0
	ctx.lr = 0x821112E4;
	sub_821200C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821200c0
	ctx.lr = 0x821112F0;
	sub_821200C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1420
	ctx.r4.s64 = ctx.r1.s64 + 1420;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1420(r1)
	REX_STORE_U32(ctx.r1.u32 + 1420, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82111314;
	sub_822009C8(ctx, base);
	// lwz r3,2920(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111334
	if (ctx.cr6.eq) goto loc_82111334;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111334;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111334:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,-9520
	ctx.r5.s64 = ctx.r11.s64 + -9520;
	// addi r4,r10,-25608
	ctx.r4.s64 = ctx.r10.s64 + -25608;
	// addi r3,r1,2564
	ctx.r3.s64 = ctx.r1.s64 + 2564;
	// bl 0x82120110
	ctx.lr = 0x8211134C;
	sub_82120110(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r8,-25620
	ctx.r4.s64 = ctx.r8.s64 + -25620;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2388
	ctx.r3.s64 = ctx.r1.s64 + 2388;
	// bl 0x82120110
	ctx.lr = 0x82111368;
	sub_82120110(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r7,-25640
	ctx.r4.s64 = ctx.r7.s64 + -25640;
	// addi r3,r1,3224
	ctx.r3.s64 = ctx.r1.s64 + 3224;
	// bl 0x821195c8
	ctx.lr = 0x8211137C;
	sub_821195C8(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x82111388;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x82111394;
	sub_82118928(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1772
	ctx.r4.s64 = ctx.r1.s64 + 1772;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1772(r1)
	REX_STORE_U32(ctx.r1.u32 + 1772, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821113B8;
	sub_822009C8(ctx, base);
	// lwz r3,3224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821113d8
	if (ctx.cr6.eq) goto loc_821113D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821113D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821113D8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// addi r4,r11,12848
	ctx.r4.s64 = ctx.r11.s64 + 12848;
	// bl 0x82201b80
	ctx.lr = 0x821113E8;
	sub_82201B80(ctx, base);
	// addi r10,r1,1544
	ctx.r10.s64 = ctx.r1.s64 + 1544;
	// addi r3,r1,1544
	ctx.r3.s64 = ctx.r1.s64 + 1544;
	// stw r10,1552(r1)
	REX_STORE_U32(ctx.r1.u32 + 1552, ctx.r10.u32);
	// bl 0x8211aa80
	ctx.lr = 0x821113F8;
	sub_8211AA80(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r7,r9,15920
	ctx.r7.s64 = ctx.r9.s64 + 15920;
	// addi r5,r8,-9520
	ctx.r5.s64 = ctx.r8.s64 + -9520;
	// addi r3,r1,2572
	ctx.r3.s64 = ctx.r1.s64 + 2572;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x82120180
	ctx.lr = 0x82111418;
	sub_82120180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1552
	ctx.r3.s64 = ctx.r1.s64 + 1552;
	// bl 0x82118928
	ctx.lr = 0x82111424;
	sub_82118928(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-25588
	ctx.r4.s64 = ctx.r9.s64 + -25588;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214e338
	ctx.lr = 0x82111458;
	sub_8214E338(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,15536
	ctx.r10.s64 = ctx.r6.s64 + 15536;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-25572
	ctx.r4.s64 = ctx.r9.s64 + -25572;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214e528
	ctx.lr = 0x82111498;
	sub_8214E528(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,15888
	ctx.r10.s64 = ctx.r6.s64 + 15888;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214e718
	ctx.lr = 0x821114D4;
	sub_8214E718(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r8,-25404
	ctx.r4.s64 = ctx.r8.s64 + -25404;
	// addi r5,r9,-24280
	ctx.r5.s64 = ctx.r9.s64 + -24280;
	// addi r3,r1,2396
	ctx.r3.s64 = ctx.r1.s64 + 2396;
	// bl 0x821203c0
	ctx.lr = 0x821114F0;
	sub_821203C0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r6,-25432
	ctx.r4.s64 = ctx.r6.s64 + -25432;
	// addi r5,r7,23464
	ctx.r5.s64 = ctx.r7.s64 + 23464;
	// addi r3,r1,1928
	ctx.r3.s64 = ctx.r1.s64 + 1928;
	// bl 0x82120340
	ctx.lr = 0x8211150C;
	sub_82120340(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r4,-25460
	ctx.r4.s64 = ctx.r4.s64 + -25460;
	// addi r5,r5,23480
	ctx.r5.s64 = ctx.r5.s64 + 23480;
	// addi r3,r1,1936
	ctx.r3.s64 = ctx.r1.s64 + 1936;
	// bl 0x821202d0
	ctx.lr = 0x82111528;
	sub_821202D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r10,-25480
	ctx.r4.s64 = ctx.r10.s64 + -25480;
	// addi r5,r11,-24520
	ctx.r5.s64 = ctx.r11.s64 + -24520;
	// addi r3,r1,1944
	ctx.r3.s64 = ctx.r1.s64 + 1944;
	// bl 0x821202d0
	ctx.lr = 0x82111544;
	sub_821202D0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r8,-25520
	ctx.r4.s64 = ctx.r8.s64 + -25520;
	// addi r5,r9,-24840
	ctx.r5.s64 = ctx.r9.s64 + -24840;
	// addi r3,r1,1952
	ctx.r3.s64 = ctx.r1.s64 + 1952;
	// addi r24,r6,-25500
	ctx.r24.s64 = ctx.r6.s64 + -25500;
	// addi r23,r10,-25508
	ctx.r23.s64 = ctx.r10.s64 + -25508;
	// addi r22,r7,-24656
	ctx.r22.s64 = ctx.r7.s64 + -24656;
	// addi r21,r11,-24800
	ctx.r21.s64 = ctx.r11.s64 + -24800;
	// bl 0x8211ca10
	ctx.lr = 0x82111580;
	sub_8211CA10(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r8,-25532
	ctx.r4.s64 = ctx.r8.s64 + -25532;
	// addi r5,r9,-24984
	ctx.r5.s64 = ctx.r9.s64 + -24984;
	// addi r3,r1,1960
	ctx.r3.s64 = ctx.r1.s64 + 1960;
	// bl 0x82120110
	ctx.lr = 0x8211159C;
	sub_82120110(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r4,r6,-25552
	ctx.r4.s64 = ctx.r6.s64 + -25552;
	// addi r5,r7,-24248
	ctx.r5.s64 = ctx.r7.s64 + -24248;
	// addi r3,r1,1968
	ctx.r3.s64 = ctx.r1.s64 + 1968;
	// bl 0x82120200
	ctx.lr = 0x821115B8;
	sub_82120200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x821115C4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x821115D0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x821115DC;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82120280
	ctx.lr = 0x821115E8;
	sub_82120280(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82120280
	ctx.lr = 0x821115F4;
	sub_82120280(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x82111600;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8211160C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x82111618;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x82111624;
	sub_82118928(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,1620
	ctx.r4.s64 = ctx.r1.s64 + 1620;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,1620(r1)
	REX_STORE_U32(ctx.r1.u32 + 1620, ctx.r11.u32);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82111648;
	sub_822009C8(ctx, base);
	// lwz r3,1544(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111668
	if (ctx.cr6.eq) goto loc_82111668;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111668:
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// ori r10,r6,255
	ctx.r10.u64 = ctx.r6.u64 | 255;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r6,r3,-24448
	ctx.r6.s64 = ctx.r3.s64 + -24448;
	// stw r10,916(r1)
	REX_STORE_U32(ctx.r1.u32 + 916, ctx.r10.u32);
	// addi r3,r28,-24484
	ctx.r3.s64 = ctx.r28.s64 + -24484;
	// lis r7,-256
	ctx.r7.s64 = -16777216;
	// stw r6,896(r1)
	REX_STORE_U32(ctx.r1.u32 + 896, ctx.r6.u32);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// stw r3,936(r1)
	REX_STORE_U32(ctx.r1.u32 + 936, ctx.r3.u32);
	// addi r8,r8,-24420
	ctx.r8.s64 = ctx.r8.s64 + -24420;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r8,928(r1)
	REX_STORE_U32(ctx.r1.u32 + 928, ctx.r8.u32);
	// lis r26,-256
	ctx.r26.s64 = -16777216;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// ori r11,r4,255
	ctx.r11.u64 = ctx.r4.u64 | 255;
	// addi r7,r5,-24436
	ctx.r7.s64 = ctx.r5.s64 + -24436;
	// stw r9,932(r1)
	REX_STORE_U32(ctx.r1.u32 + 932, ctx.r9.u32);
	// addi r4,r29,-24472
	ctx.r4.s64 = ctx.r29.s64 + -24472;
	// stw r11,908(r1)
	REX_STORE_U32(ctx.r1.u32 + 908, ctx.r11.u32);
	// ori r3,r26,65280
	ctx.r3.u64 = ctx.r26.u64 | 65280;
	// stw r7,912(r1)
	REX_STORE_U32(ctx.r1.u32 + 912, ctx.r7.u32);
	// addi r5,r30,-24460
	ctx.r5.s64 = ctx.r30.s64 + -24460;
	// stw r4,920(r1)
	REX_STORE_U32(ctx.r1.u32 + 920, ctx.r4.u32);
	// addi r8,r27,-24496
	ctx.r8.s64 = ctx.r27.s64 + -24496;
	// stw r3,924(r1)
	REX_STORE_U32(ctx.r1.u32 + 924, ctx.r3.u32);
	// li r26,-256
	ctx.r26.s64 = -256;
	// stw r5,904(r1)
	REX_STORE_U32(ctx.r1.u32 + 904, ctx.r5.u32);
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// stw r8,888(r1)
	REX_STORE_U32(ctx.r1.u32 + 888, ctx.r8.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r26,900(r1)
	REX_STORE_U32(ctx.r1.u32 + 900, ctx.r26.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r14,940(r1)
	REX_STORE_U32(ctx.r1.u32 + 940, ctx.r14.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lis r26,-103
	ctx.r26.s64 = -6750208;
	// addi r14,r4,-24556
	ctx.r14.s64 = ctx.r4.s64 + -24556;
	// stw r3,892(r1)
	REX_STORE_U32(ctx.r1.u32 + 892, ctx.r3.u32);
	// addi r7,r7,-24508
	ctx.r7.s64 = ctx.r7.s64 + -24508;
	// addi r6,r6,-24524
	ctx.r6.s64 = ctx.r6.s64 + -24524;
	// addi r5,r5,-24540
	ctx.r5.s64 = ctx.r5.s64 + -24540;
	// addi r8,r8,-24572
	ctx.r8.s64 = ctx.r8.s64 + -24572;
	// addi r30,r30,-24588
	ctx.r30.s64 = ctx.r30.s64 + -24588;
	// addi r29,r29,-24604
	ctx.r29.s64 = ctx.r29.s64 + -24604;
	// addi r28,r28,-24620
	ctx.r28.s64 = ctx.r28.s64 + -24620;
	// addi r27,r27,-24636
	ctx.r27.s64 = ctx.r27.s64 + -24636;
	// addi r25,r25,-24652
	ctx.r25.s64 = ctx.r25.s64 + -24652;
	// addi r24,r24,-24668
	ctx.r24.s64 = ctx.r24.s64 + -24668;
	// addi r23,r23,-24684
	ctx.r23.s64 = ctx.r23.s64 + -24684;
	// addi r22,r22,-24700
	ctx.r22.s64 = ctx.r22.s64 + -24700;
	// addi r21,r21,-24716
	ctx.r21.s64 = ctx.r21.s64 + -24716;
	// addi r20,r20,-24732
	ctx.r20.s64 = ctx.r20.s64 + -24732;
	// addi r19,r19,-24748
	ctx.r19.s64 = ctx.r19.s64 + -24748;
	// addi r18,r18,-24764
	ctx.r18.s64 = ctx.r18.s64 + -24764;
	// addi r17,r17,-24780
	ctx.r17.s64 = ctx.r17.s64 + -24780;
	// addi r16,r16,-24796
	ctx.r16.s64 = ctx.r16.s64 + -24796;
	// addi r15,r15,-24812
	ctx.r15.s64 = ctx.r15.s64 + -24812;
	// ori r4,r26,13158
	ctx.r4.u64 = ctx.r26.u64 | 13158;
	// stw r7,744(r1)
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r7.u32);
	// lis r7,-205
	ctx.r7.s64 = -13434880;
	// stw r6,760(r1)
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r6.u32);
	// lis r6,-103
	ctx.r6.s64 = -6750208;
	// stw r5,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r5.u32);
	// ori r7,r7,13209
	ctx.r7.u64 = ctx.r7.u64 | 13209;
	// ori r6,r6,13056
	ctx.r6.u64 = ctx.r6.u64 | 13056;
	// stw r14,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, ctx.r14.u32);
	// lis r5,-205
	ctx.r5.s64 = -13434880;
	// std r31,1688(r1)
	REX_STORE_U64(ctx.r1.u32 + 1688, ctx.r31.u64);
	// lis r14,-256
	ctx.r14.s64 = -16777216;
	// stw r8,816(r1)
	REX_STORE_U32(ctx.r1.u32 + 816, ctx.r8.u32);
	// lis r31,-205
	ctx.r31.s64 = -13434880;
	// stw r7,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r7.u32);
	// ori r5,r5,13056
	ctx.r5.u64 = ctx.r5.u64 | 13056;
	// stw r6,820(r1)
	REX_STORE_U32(ctx.r1.u32 + 820, ctx.r6.u32);
	// stw r30,808(r1)
	REX_STORE_U32(ctx.r1.u32 + 808, ctx.r30.u32);
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// stw r29,784(r1)
	REX_STORE_U32(ctx.r1.u32 + 784, ctx.r29.u32);
	// ori r7,r14,13056
	ctx.r7.u64 = ctx.r14.u64 | 13056;
	// stw r28,752(r1)
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r28.u32);
	// ori r6,r31,39270
	ctx.r6.u64 = ctx.r31.u64 | 39270;
	// lis r30,-106
	ctx.r30.s64 = -6946816;
	// stw r5,812(r1)
	REX_STORE_U32(ctx.r1.u32 + 812, ctx.r5.u32);
	// lis r29,-154
	ctx.r29.s64 = -10092544;
	// stw r7,788(r1)
	REX_STORE_U32(ctx.r1.u32 + 788, ctx.r7.u32);
	// lis r28,-1
	ctx.r28.s64 = -65536;
	// stw r6,756(r1)
	REX_STORE_U32(ctx.r1.u32 + 756, ctx.r6.u32);
	// ori r5,r8,13158
	ctx.r5.u64 = ctx.r8.u64 | 13158;
	// stw r27,792(r1)
	REX_STORE_U32(ctx.r1.u32 + 792, ctx.r27.u32);
	// ori r8,r30,38550
	ctx.r8.u64 = ctx.r30.u64 | 38550;
	// stw r25,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r25.u32);
	// ori r7,r29,26265
	ctx.r7.u64 = ctx.r29.u64 | 26265;
	// stw r5,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, ctx.r5.u32);
	// ori r6,r28,26112
	ctx.r6.u64 = ctx.r28.u64 | 26112;
	// stw r8,772(r1)
	REX_STORE_U32(ctx.r1.u32 + 772, ctx.r8.u32);
	// lis r27,-103
	ctx.r27.s64 = -6750208;
	// stw r7,780(r1)
	REX_STORE_U32(ctx.r1.u32 + 780, ctx.r7.u32);
	// lis r25,-205
	ctx.r25.s64 = -13434880;
	// stw r6,740(r1)
	REX_STORE_U32(ctx.r1.u32 + 740, ctx.r6.u32);
	// stw r24,776(r1)
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r24.u32);
	// li r5,-26368
	ctx.r5.s64 = -26368;
	// ori r7,r27,52224
	ctx.r7.u64 = ctx.r27.u64 | 52224;
	// stw r23,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r23.u32);
	// ori r6,r25,52428
	ctx.r6.u64 = ctx.r25.u64 | 52428;
	// stw r5,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r5.u32);
	// lis r24,-205
	ctx.r24.s64 = -13434880;
	// stw r7,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// li r8,-13312
	ctx.r8.s64 = -13312;
	// stw r6,708(r1)
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r6.u32);
	// lis r26,-205
	ctx.r26.s64 = -13434880;
	// stw r4,804(r1)
	REX_STORE_U32(ctx.r1.u32 + 804, ctx.r4.u32);
	// ori r5,r24,26367
	ctx.r5.u64 = ctx.r24.u64 | 26367;
	// stw r8,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r8.u32);
	// lis r23,-256
	ctx.r23.s64 = -16777216;
	// stw r22,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r22.u32);
	// ori r26,r26,13107
	ctx.r26.u64 = ctx.r26.u64 | 13107;
	// stw r5,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, ctx.r5.u32);
	// lis r8,-52
	ctx.r8.s64 = -3407872;
	// stw r23,748(r1)
	REX_STORE_U32(ctx.r1.u32 + 748, ctx.r23.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r26,764(r1)
	REX_STORE_U32(ctx.r1.u32 + 764, ctx.r26.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r21,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r21.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r20,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r20.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r19,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r19.u32);
	// stw r18,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r18.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// li r28,-13159
	ctx.r28.s64 = -13159;
	// ori r8,r8,39423
	ctx.r8.u64 = ctx.r8.u64 | 39423;
	// li r27,-26164
	ctx.r27.s64 = -26164;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// addi r7,r7,-24828
	ctx.r7.s64 = ctx.r7.s64 + -24828;
	// addi r30,r30,-24844
	ctx.r30.s64 = ctx.r30.s64 + -24844;
	// addi r6,r6,-24860
	ctx.r6.s64 = ctx.r6.s64 + -24860;
	// addi r29,r29,-24876
	ctx.r29.s64 = ctx.r29.s64 + -24876;
	// stw r7,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r7.u32);
	// addi r7,r26,-24908
	ctx.r7.s64 = ctx.r26.s64 + -24908;
	// stw r28,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r28.u32);
	// addi r5,r5,-24892
	ctx.r5.s64 = ctx.r5.s64 + -24892;
	// stw r30,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r30.u32);
	// lis r28,-52
	ctx.r28.s64 = -3407872;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r7,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r7.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r8,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r8.u32);
	// addi r7,r23,-24956
	ctx.r7.s64 = ctx.r23.s64 + -24956;
	// stw r5,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r5.u32);
	// ori r5,r28,65535
	ctx.r5.u64 = ctx.r28.u64 | 65535;
	// stw r27,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r27.u32);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// stw r17,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r17.u32);
	// addi r28,r22,-24972
	ctx.r28.s64 = ctx.r22.s64 + -24972;
	// stw r7,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r7.u32);
	// addi r30,r30,-25036
	ctx.r30.s64 = ctx.r30.s64 + -25036;
	// stw r16,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r16.u32);
	// lis r27,-256
	ctx.r27.s64 = -16777216;
	// stw r28,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r28.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r6,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r6.u32);
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r29,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r29.u32);
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// stw r30,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// lis r17,-103
	ctx.r17.s64 = -6750208;
	// stw r15,680(r1)
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r15.u32);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stw r11,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r11.u32);
	// ori r8,r27,128
	ctx.r8.u64 = ctx.r27.u64 | 128;
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// addi r29,r24,-24940
	ctx.r29.s64 = ctx.r24.s64 + -24940;
	// stw r10,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// addi r6,r25,-24924
	ctx.r6.s64 = ctx.r25.s64 + -24924;
	// stw r5,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r5.u32);
	// addi r27,r21,-24988
	ctx.r27.s64 = ctx.r21.s64 + -24988;
	// stw r29,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r29.u32);
	// addi r26,r19,-25004
	ctx.r26.s64 = ctx.r19.s64 + -25004;
	// stw r6,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// addi r28,r18,-25020
	ctx.r28.s64 = ctx.r18.s64 + -25020;
	// stw r27,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r27.u32);
	// ori r30,r17,52479
	ctx.r30.u64 = ctx.r17.u64 | 52479;
	// stw r26,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// lis r16,-52
	ctx.r16.s64 = -3407872;
	// stw r28,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r28.u32);
	// lis r15,-256
	ctx.r15.s64 = -16777216;
	// stw r30,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r30.u32);
	// lis r20,-256
	ctx.r20.s64 = -16777216;
	// stw r7,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r7.u32);
	// ori r23,r16,65484
	ctx.r23.u64 = ctx.r16.u64 | 65484;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// li r24,-103
	ctx.r24.s64 = -103;
	// ori r22,r15,52479
	ctx.r22.u64 = ctx.r15.u64 | 52479;
	// stw r23,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r23.u32);
	// ori r6,r20,32896
	ctx.r6.u64 = ctx.r20.u64 | 32896;
	// stw r24,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r24.u32);
	// lis r29,-128
	ctx.r29.s64 = -8388608;
	// stw r22,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r22.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r6,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r6.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r29,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r29.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// li r30,-256
	ctx.r30.s64 = -256;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r30,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r30.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// addi r27,r27,-25052
	ctx.r27.s64 = ctx.r27.s64 + -25052;
	// addi r28,r28,-25068
	ctx.r28.s64 = ctx.r28.s64 + -25068;
	// addi r26,r26,-25084
	ctx.r26.s64 = ctx.r26.s64 + -25084;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// addi r24,r24,-25116
	ctx.r24.s64 = ctx.r24.s64 + -25116;
	// lis r6,-154
	ctx.r6.s64 = -10092544;
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// ori r4,r4,26316
	ctx.r4.u64 = ctx.r4.u64 | 26316;
	// stw r24,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r24.u32);
	// addi r23,r23,-25132
	ctx.r23.s64 = ctx.r23.s64 + -25132;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// ori r6,r6,102
	ctx.r6.u64 = ctx.r6.u64 | 102;
	// stw r4,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// addi r24,r21,-25164
	ctx.r24.s64 = ctx.r21.s64 + -25164;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// stw r23,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r23.u32);
	// li r4,-52
	ctx.r4.s64 = -52;
	// stw r24,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r24.u32);
	// stw r6,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r6.u32);
	// lis r3,-64
	ctx.r3.s64 = -4194304;
	// stw r27,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r27.u32);
	// ori r6,r8,32896
	ctx.r6.u64 = ctx.r8.u64 | 32896;
	// stw r29,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r29.u32);
	// addi r22,r22,-25148
	ctx.r22.s64 = ctx.r22.s64 + -25148;
	// addi r25,r25,-25100
	ctx.r25.s64 = ctx.r25.s64 + -25100;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// addi r23,r20,-25180
	ctx.r23.s64 = ctx.r20.s64 + -25180;
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// addi r24,r18,-25212
	ctx.r24.s64 = ctx.r18.s64 + -25212;
	// stw r22,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r23,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r23.u32);
	// lis r7,-103
	ctx.r7.s64 = -6750208;
	// stw r24,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r24.u32);
	// lis r29,-128
	ctx.r29.s64 = -8388608;
	// stw r6,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r6.u32);
	// lis r15,-52
	ctx.r15.s64 = -3407872;
	// stw r28,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r28.u32);
	// ori r4,r3,49344
	ctx.r4.u64 = ctx.r3.u64 | 49344;
	// stw r26,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r26.u32);
	// ori r7,r7,39423
	ctx.r7.u64 = ctx.r7.u64 | 39423;
	// stw r25,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r25.u32);
	// ori r3,r29,32768
	ctx.r3.u64 = ctx.r29.u64 | 32768;
	// stw r4,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// addi r8,r27,-25356
	ctx.r8.s64 = ctx.r27.s64 + -25356;
	// stw r7,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// addi r22,r19,-25196
	ctx.r22.s64 = ctx.r19.s64 + -25196;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r23,r17,-25228
	ctx.r23.s64 = ctx.r17.s64 + -25228;
	// ori r24,r15,52479
	ctx.r24.u64 = ctx.r15.u64 | 52479;
	// stw r22,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r22.u32);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// stw r23,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r23.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r24,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r24.u32);
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r14,-256
	ctx.r14.s64 = -16777216;
	// addi r8,r5,-25284
	ctx.r8.s64 = ctx.r5.s64 + -25284;
	// addi r7,r28,-25368
	ctx.r7.s64 = ctx.r28.s64 + -25368;
	// addi r4,r26,-25260
	ctx.r4.s64 = ctx.r26.s64 + -25260;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// addi r3,r25,-25272
	ctx.r3.s64 = ctx.r25.s64 + -25272;
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// addi r22,r16,-25244
	ctx.r22.s64 = ctx.r16.s64 + -25244;
	// stw r4,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// li r24,-32640
	ctx.r24.s64 = -32640;
	// stw r22,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r22.u32);
	// ori r6,r14,32768
	ctx.r6.u64 = ctx.r14.u64 | 32768;
	// stw r24,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r24.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r5,r23,-25296
	ctx.r5.s64 = ctx.r23.s64 + -25296;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r4,r4,-25320
	ctx.r4.s64 = ctx.r4.s64 + -25320;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r3,r3,-25332
	ctx.r3.s64 = ctx.r3.s64 + -25332;
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// stw r5,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// addi r10,r8,-25344
	ctx.r10.s64 = ctx.r8.s64 + -25344;
	// stw r4,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// addi r7,r7,-25308
	ctx.r7.s64 = ctx.r7.s64 + -25308;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// ori r9,r6,65280
	ctx.r9.u64 = ctx.r6.u64 | 65280;
	// stw r30,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// addi r3,r1,3520
	ctx.r3.s64 = ctx.r1.s64 + 3520;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x821d5e18
	ctx.lr = 0x82111BD0;
	sub_821D5E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82111BE4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d5f60
	ctx.lr = 0x82111BF0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821d5f60
	ctx.lr = 0x82111BFC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d5f60
	ctx.lr = 0x82111C08;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x821d5f60
	ctx.lr = 0x82111C14;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x821d5f60
	ctx.lr = 0x82111C20;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x821d5f60
	ctx.lr = 0x82111C2C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x821d5f60
	ctx.lr = 0x82111C38;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x821d5f60
	ctx.lr = 0x82111C44;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x821d5f60
	ctx.lr = 0x82111C50;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x821d5f60
	ctx.lr = 0x82111C5C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x821d5f60
	ctx.lr = 0x82111C68;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x821d5f60
	ctx.lr = 0x82111C74;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x821d5f60
	ctx.lr = 0x82111C80;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x821d5f60
	ctx.lr = 0x82111C8C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x821d5f60
	ctx.lr = 0x82111C98;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x821d5f60
	ctx.lr = 0x82111CA4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x821d5f60
	ctx.lr = 0x82111CB0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x821d5f60
	ctx.lr = 0x82111CBC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x821d5f60
	ctx.lr = 0x82111CC8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// bl 0x821d5f60
	ctx.lr = 0x82111CD4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x821d5f60
	ctx.lr = 0x82111CE0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x821d5f60
	ctx.lr = 0x82111CEC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x821d5f60
	ctx.lr = 0x82111CF8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x821d5f60
	ctx.lr = 0x82111D04;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x821d5f60
	ctx.lr = 0x82111D10;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x821d5f60
	ctx.lr = 0x82111D1C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x821d5f60
	ctx.lr = 0x82111D28;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x821d5f60
	ctx.lr = 0x82111D34;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// bl 0x821d5f60
	ctx.lr = 0x82111D40;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x821d5f60
	ctx.lr = 0x82111D4C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x821d5f60
	ctx.lr = 0x82111D58;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// bl 0x821d5f60
	ctx.lr = 0x82111D64;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// bl 0x821d5f60
	ctx.lr = 0x82111D70;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,648
	ctx.r4.s64 = ctx.r1.s64 + 648;
	// bl 0x821d5f60
	ctx.lr = 0x82111D7C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,680
	ctx.r4.s64 = ctx.r1.s64 + 680;
	// bl 0x821d5f60
	ctx.lr = 0x82111D88;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,712
	ctx.r4.s64 = ctx.r1.s64 + 712;
	// bl 0x821d5f60
	ctx.lr = 0x82111D94;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,696
	ctx.r4.s64 = ctx.r1.s64 + 696;
	// bl 0x821d5f60
	ctx.lr = 0x82111DA0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// bl 0x821d5f60
	ctx.lr = 0x82111DAC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// bl 0x821d5f60
	ctx.lr = 0x82111DB8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x821d5f60
	ctx.lr = 0x82111DC4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// bl 0x821d5f60
	ctx.lr = 0x82111DD0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// bl 0x821d5f60
	ctx.lr = 0x82111DDC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x821d5f60
	ctx.lr = 0x82111DE8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,776
	ctx.r4.s64 = ctx.r1.s64 + 776;
	// bl 0x821d5f60
	ctx.lr = 0x82111DF4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// bl 0x821d5f60
	ctx.lr = 0x82111E00;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// bl 0x821d5f60
	ctx.lr = 0x82111E0C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// bl 0x821d5f60
	ctx.lr = 0x82111E18;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// bl 0x821d5f60
	ctx.lr = 0x82111E24;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,808
	ctx.r4.s64 = ctx.r1.s64 + 808;
	// bl 0x821d5f60
	ctx.lr = 0x82111E30;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// bl 0x821d5f60
	ctx.lr = 0x82111E3C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// bl 0x821d5f60
	ctx.lr = 0x82111E48;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,728
	ctx.r4.s64 = ctx.r1.s64 + 728;
	// bl 0x821d5f60
	ctx.lr = 0x82111E54;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,760
	ctx.r4.s64 = ctx.r1.s64 + 760;
	// bl 0x821d5f60
	ctx.lr = 0x82111E60;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,744
	ctx.r4.s64 = ctx.r1.s64 + 744;
	// bl 0x821d5f60
	ctx.lr = 0x82111E6C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,888
	ctx.r4.s64 = ctx.r1.s64 + 888;
	// bl 0x821d5f60
	ctx.lr = 0x82111E78;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,936
	ctx.r4.s64 = ctx.r1.s64 + 936;
	// bl 0x821d5f60
	ctx.lr = 0x82111E84;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,920
	ctx.r4.s64 = ctx.r1.s64 + 920;
	// bl 0x821d5f60
	ctx.lr = 0x82111E90;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,904
	ctx.r4.s64 = ctx.r1.s64 + 904;
	// bl 0x821d5f60
	ctx.lr = 0x82111E9C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// bl 0x821d5f60
	ctx.lr = 0x82111EA8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// bl 0x821d5f60
	ctx.lr = 0x82111EB4;
	sub_821D5F60(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82111EC0;
	sub_821D5F60(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r3,r1,2952
	ctx.r3.s64 = ctx.r1.s64 + 2952;
	// addi r4,r7,-25388
	ctx.r4.s64 = ctx.r7.s64 + -25388;
	// bl 0x821196a8
	ctx.lr = 0x82111ED0;
	sub_821196A8(ctx, base);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82119cc8
	ctx.lr = 0x82111EE0;
	sub_82119CC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ld r31,1688(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 1688);
	// addi r4,r1,1136
	ctx.r4.s64 = ctx.r1.s64 + 1136;
	// lwz r28,196(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r5,1136(r1)
	REX_STORE_U32(ctx.r1.u32 + 1136, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82111F0C;
	sub_822009C8(ctx, base);
	// lwz r3,2952(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111f2c
	if (ctx.cr6.eq) goto loc_82111F2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82111F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82111F2C:
	// addi r3,r1,3520
	ctx.r3.s64 = ctx.r1.s64 + 3520;
	// bl 0x821d5d58
	ctx.lr = 0x82111F34;
	sub_821D5D58(ctx, base);
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-24408
	ctx.r4.s64 = ctx.r7.s64 + -24408;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82111F64;
	sub_82201B80(ctx, base);
	// addi r6,r1,1560
	ctx.r6.s64 = ctx.r1.s64 + 1560;
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// stw r6,1568(r1)
	REX_STORE_U32(ctx.r1.u32 + 1568, ctx.r6.u32);
	// bl 0x8211ab58
	ctx.lr = 0x82111F74;
	sub_8211AB58(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r5,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// addi r4,r4,-24396
	ctx.r4.s64 = ctx.r4.s64 + -24396;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,1560
	ctx.r3.s64 = ctx.r1.s64 + 1560;
	// addi r30,r11,-24372
	ctx.r30.s64 = ctx.r11.s64 + -24372;
	// addi r29,r10,-24380
	ctx.r29.s64 = ctx.r10.s64 + -24380;
	// addi r27,r9,-24388
	ctx.r27.s64 = ctx.r9.s64 + -24388;
	// bl 0x82120440
	ctx.lr = 0x82111FA8;
	sub_82120440(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82120440
	ctx.lr = 0x82111FB4;
	sub_82120440(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82120440
	ctx.lr = 0x82111FC0;
	sub_82120440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82120440
	ctx.lr = 0x82111FCC;
	sub_82120440(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x8214eb58
	ctx.lr = 0x82111FE4;
	sub_8214EB58(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8214ec38
	ctx.lr = 0x82112004;
	sub_8214EC38(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8214ed20
	ctx.lr = 0x82112024;
	sub_8214ED20(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8214ee08
	ctx.lr = 0x82112044;
	sub_8214EE08(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r6,10704
	ctx.r9.s64 = ctx.r6.s64 + 10704;
	// addi r5,r5,10632
	ctx.r5.s64 = ctx.r5.s64 + 10632;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r30,r10,-24364
	ctx.r30.s64 = ctx.r10.s64 + -24364;
	// addi r29,r11,10656
	ctx.r29.s64 = ctx.r11.s64 + 10656;
	// bl 0x821205f0
	ctx.lr = 0x82112070;
	sub_821205F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821205f0
	ctx.lr = 0x8211207C;
	sub_821205F0(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-24352
	ctx.r4.s64 = ctx.r10.s64 + -24352;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214f0e0
	ctx.lr = 0x821120B0;
	sub_8214F0E0(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r8,-24340
	ctx.r4.s64 = ctx.r8.s64 + -24340;
	// addi r5,r9,-8512
	ctx.r5.s64 = ctx.r9.s64 + -8512;
	// addi r3,r1,1976
	ctx.r3.s64 = ctx.r1.s64 + 1976;
	// bl 0x82120640
	ctx.lr = 0x821120CC;
	sub_82120640(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x821120DC;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112100
	if (ctx.cr6.eq) goto loc_82112100;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112100:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lwz r30,108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,23456
	ctx.r7.s64 = ctx.r9.s64 + 23456;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214f2e8
	ctx.lr = 0x82112144;
	sub_8214F2E8(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r4,23432
	ctx.r10.s64 = ctx.r4.s64 + 23432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214f4f0
	ctx.lr = 0x82112180;
	sub_8214F4F0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,23560
	ctx.r10.s64 = ctx.r7.s64 + 23560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214f728
	ctx.lr = 0x821121BC;
	sub_8214F728(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r9,23392
	ctx.r11.s64 = ctx.r9.s64 + 23392;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r30,r7,-24292
	ctx.r30.s64 = ctx.r7.s64 + -24292;
	// addi r27,r8,-8304
	ctx.r27.s64 = ctx.r8.s64 + -8304;
	// addi r26,r6,-8344
	ctx.r26.s64 = ctx.r6.s64 + -8344;
	// addi r25,r4,-8384
	ctx.r25.s64 = ctx.r4.s64 + -8384;
	// addi r29,r5,-24296
	ctx.r29.s64 = ctx.r5.s64 + -24296;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// addi r4,r9,-24320
	ctx.r4.s64 = ctx.r9.s64 + -24320;
	// addi r5,r10,23424
	ctx.r5.s64 = ctx.r10.s64 + 23424;
	// addi r19,r8,-24300
	ctx.r19.s64 = ctx.r8.s64 + -24300;
	// addi r18,r6,-24304
	ctx.r18.s64 = ctx.r6.s64 + -24304;
	// addi r24,r24,-24308
	ctx.r24.s64 = ctx.r24.s64 + -24308;
	// addi r22,r22,-24312
	ctx.r22.s64 = ctx.r22.s64 + -24312;
	// addi r20,r20,-24316
	ctx.r20.s64 = ctx.r20.s64 + -24316;
	// addi r17,r7,-8264
	ctx.r17.s64 = ctx.r7.s64 + -8264;
	// addi r16,r11,23400
	ctx.r16.s64 = ctx.r11.s64 + 23400;
	// addi r23,r23,23408
	ctx.r23.s64 = ctx.r23.s64 + 23408;
	// addi r21,r21,23416
	ctx.r21.s64 = ctx.r21.s64 + 23416;
	// bl 0x821206c0
	ctx.lr = 0x8211224C;
	sub_821206C0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x821206c0
	ctx.lr = 0x82112258;
	sub_821206C0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x821206c0
	ctx.lr = 0x82112264;
	sub_821206C0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x821206c0
	ctx.lr = 0x82112270;
	sub_821206C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x82120710
	ctx.lr = 0x8211227C;
	sub_82120710(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82120710
	ctx.lr = 0x82112288;
	sub_82120710(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82120710
	ctx.lr = 0x82112294;
	sub_82120710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82120710
	ctx.lr = 0x821122A0;
	sub_82120710(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-24288
	ctx.r4.s64 = ctx.r7.s64 + -24288;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214fd10
	ctx.lr = 0x821122D4;
	sub_8214FD10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1144
	ctx.r4.s64 = ctx.r1.s64 + 1144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1144(r1)
	REX_STORE_U32(ctx.r1.u32 + 1144, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821122F8;
	sub_822009C8(ctx, base);
	// lwz r3,1560(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112318
	if (ctx.cr6.eq) goto loc_82112318;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112318:
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
	// addi r4,r11,-24280
	ctx.r4.s64 = ctx.r11.s64 + -24280;
	// addi r3,r1,3192
	ctx.r3.s64 = ctx.r1.s64 + 3192;
	// addi r30,r10,-24152
	ctx.r30.s64 = ctx.r10.s64 + -24152;
	// addi r29,r9,-24180
	ctx.r29.s64 = ctx.r9.s64 + -24180;
	// addi r27,r8,-24200
	ctx.r27.s64 = ctx.r8.s64 + -24200;
	// addi r26,r7,-24224
	ctx.r26.s64 = ctx.r7.s64 + -24224;
	// addi r25,r6,-24244
	ctx.r25.s64 = ctx.r6.s64 + -24244;
	// addi r24,r5,-24260
	ctx.r24.s64 = ctx.r5.s64 + -24260;
	// bl 0x82119788
	ctx.lr = 0x82112358;
	sub_82119788(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120760
	ctx.lr = 0x82112364;
	sub_82120760(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82120910
	ctx.lr = 0x82112370;
	sub_82120910(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82120ac0
	ctx.lr = 0x8211237C;
	sub_82120AC0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82120c70
	ctx.lr = 0x82112388;
	sub_82120C70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82120c70
	ctx.lr = 0x82112394;
	sub_82120C70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82120e20
	ctx.lr = 0x821123A0;
	sub_82120E20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1152(r1)
	REX_STORE_U32(ctx.r1.u32 + 1152, ctx.r10.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821123C4;
	sub_822009C8(ctx, base);
	// lwz r3,3192(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821123e4
	if (ctx.cr6.eq) goto loc_821123E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821123E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821123E4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// addi r4,r11,32464
	ctx.r4.s64 = ctx.r11.s64 + 32464;
	// bl 0x82201b80
	ctx.lr = 0x821123F4;
	sub_82201B80(ctx, base);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// stw r10,952(r1)
	REX_STORE_U32(ctx.r1.u32 + 952, ctx.r10.u32);
	// bl 0x8211ac30
	ctx.lr = 0x82112404;
	sub_8211AC30(ctx, base);
	// lwz r25,192(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x82120fd0
	ctx.lr = 0x8211241C;
	sub_82120FD0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,952(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 952);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x8211242C;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,952(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112450
	if (ctx.cr6.eq) goto loc_82112450;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112450:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,-22528
	ctx.r7.s64 = ctx.r9.s64 + -22528;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-24132
	ctx.r4.s64 = ctx.r5.s64 + -24132;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8214ff00
	ctx.lr = 0x82112494;
	sub_8214FF00(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-22424
	ctx.r8.s64 = ctx.r10.s64 + -22424;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-24112
	ctx.r4.s64 = ctx.r7.s64 + -24112;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150120
	ctx.lr = 0x821124D4;
	sub_82150120(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r4,23376
	ctx.r10.s64 = ctx.r4.s64 + 23376;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-24076
	ctx.r4.s64 = ctx.r9.s64 + -24076;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150360
	ctx.lr = 0x82112514;
	sub_82150360(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,23360
	ctx.r10.s64 = ctx.r6.s64 + 23360;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-24060
	ctx.r4.s64 = ctx.r9.s64 + -24060;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150550
	ctx.lr = 0x82112554;
	sub_82150550(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,23312
	ctx.r10.s64 = ctx.r6.s64 + 23312;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-24044
	ctx.r4.s64 = ctx.r9.s64 + -24044;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150740
	ctx.lr = 0x82112594;
	sub_82150740(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,-20800
	ctx.r10.s64 = ctx.r6.s64 + -20800;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-24032
	ctx.r4.s64 = ctx.r9.s64 + -24032;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150948
	ctx.lr = 0x821125D4;
	sub_82150948(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,-20744
	ctx.r10.s64 = ctx.r6.s64 + -20744;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-24016
	ctx.r4.s64 = ctx.r9.s64 + -24016;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150b50
	ctx.lr = 0x82112614;
	sub_82150B50(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,-20392
	ctx.r10.s64 = ctx.r6.s64 + -20392;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-23992
	ctx.r4.s64 = ctx.r9.s64 + -23992;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82150d80
	ctx.lr = 0x82112654;
	sub_82150D80(ctx, base);
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r8,-19848
	ctx.r11.s64 = ctx.r8.s64 + -19848;
	// addi r4,r6,-23968
	ctx.r4.s64 = ctx.r6.s64 + -23968;
	// addi r5,r7,-19928
	ctx.r5.s64 = ctx.r7.s64 + -19928;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82121050
	ctx.lr = 0x82112674;
	sub_82121050(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,-23948
	ctx.r4.s64 = ctx.r7.s64 + -23948;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821511c0
	ctx.lr = 0x821126A8;
	sub_821511C0(ctx, base);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r6,-21056
	ctx.r5.s64 = ctx.r6.s64 + -21056;
	// addi r4,r4,-23936
	ctx.r4.s64 = ctx.r4.s64 + -23936;
	// bl 0x82121050
	ctx.lr = 0x821126BC;
	sub_82121050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,1160
	ctx.r4.s64 = ctx.r1.s64 + 1160;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1160(r1)
	REX_STORE_U32(ctx.r1.u32 + 1160, ctx.r10.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821126E0;
	sub_822009C8(ctx, base);
	// lwz r3,944(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 944);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112700
	if (ctx.cr6.eq) goto loc_82112700;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112700:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r11,-7704
	ctx.r7.s64 = ctx.r11.s64 + -7704;
	// addi r4,r10,-23916
	ctx.r4.s64 = ctx.r10.s64 + -23916;
	// addi r3,r1,2984
	ctx.r3.s64 = ctx.r1.s64 + 2984;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r30,r8,-23900
	ctx.r30.s64 = ctx.r8.s64 + -23900;
	// addi r29,r9,-8152
	ctx.r29.s64 = ctx.r9.s64 + -8152;
	// bl 0x82119868
	ctx.lr = 0x8211272C;
	sub_82119868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821210a0
	ctx.lr = 0x82112738;
	sub_821210A0(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-23884
	ctx.r4.s64 = ctx.r9.s64 + -23884;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821515d0
	ctx.lr = 0x8211276C;
	sub_821515D0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r4,604(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r30,r11,-23864
	ctx.r30.s64 = ctx.r11.s64 + -23864;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r30,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r5,r8,-7184
	ctx.r5.s64 = ctx.r8.s64 + -7184;
	// addi r29,r6,-23856
	ctx.r29.s64 = ctx.r6.s64 + -23856;
	// addi r27,r7,21864
	ctx.r27.s64 = ctx.r7.s64 + 21864;
	// addi r26,r11,-7104
	ctx.r26.s64 = ctx.r11.s64 + -7104;
	// addi r24,r10,-7136
	ctx.r24.s64 = ctx.r10.s64 + -7136;
	// addi r23,r9,-7160
	ctx.r23.s64 = ctx.r9.s64 + -7160;
	// bl 0x821210a0
	ctx.lr = 0x821127B0;
	sub_821210A0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x821210a0
	ctx.lr = 0x821127BC;
	sub_821210A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821210a0
	ctx.lr = 0x821127C8;
	sub_821210A0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x821210f0
	ctx.lr = 0x821127D4;
	sub_821210F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821210f0
	ctx.lr = 0x821127E0;
	sub_821210F0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,1176
	ctx.r4.s64 = ctx.r1.s64 + 1176;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1176(r1)
	REX_STORE_U32(ctx.r1.u32 + 1176, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112804;
	sub_822009C8(ctx, base);
	// lwz r3,2984(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112824
	if (ctx.cr6.eq) goto loc_82112824;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112824:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,24888
	ctx.r9.s64 = ctx.r11.s64 + 24888;
	// addi r4,r10,-23840
	ctx.r4.s64 = ctx.r10.s64 + -23840;
	// addi r3,r1,3256
	ctx.r3.s64 = ctx.r1.s64 + 3256;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82119948
	ctx.lr = 0x82112840;
	sub_82119948(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-23824
	ctx.r4.s64 = ctx.r10.s64 + -23824;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821519b0
	ctx.lr = 0x82112874;
	sub_821519B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1184(r1)
	REX_STORE_U32(ctx.r1.u32 + 1184, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112898;
	sub_822009C8(ctx, base);
	// lwz r3,3256(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821128b8
	if (ctx.cr6.eq) goto loc_821128B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821128B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821128B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// addi r4,r11,31388
	ctx.r4.s64 = ctx.r11.s64 + 31388;
	// bl 0x82201b80
	ctx.lr = 0x821128C8;
	sub_82201B80(ctx, base);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// stw r10,1016(r1)
	REX_STORE_U32(ctx.r1.u32 + 1016, ctx.r10.u32);
	// bl 0x8211ad08
	ctx.lr = 0x821128D8;
	sub_8211AD08(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,1992
	ctx.r3.s64 = ctx.r1.s64 + 1992;
	// bl 0x82121140
	ctx.lr = 0x821128EC;
	sub_82121140(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1016(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1016);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x821128FC;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1016(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112920
	if (ctx.cr6.eq) goto loc_82112920;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112920:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1192
	ctx.r4.s64 = ctx.r1.s64 + 1192;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1192(r1)
	REX_STORE_U32(ctx.r1.u32 + 1192, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112940;
	sub_822009C8(ctx, base);
	// lwz r3,1008(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1008);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112960
	if (ctx.cr6.eq) goto loc_82112960;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112960;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112960:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// addi r4,r11,-23804
	ctx.r4.s64 = ctx.r11.s64 + -23804;
	// bl 0x82201b80
	ctx.lr = 0x82112970;
	sub_82201B80(ctx, base);
	// addi r10,r1,1576
	ctx.r10.s64 = ctx.r1.s64 + 1576;
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// stw r10,1584(r1)
	REX_STORE_U32(ctx.r1.u32 + 1584, ctx.r10.u32);
	// bl 0x8211ade0
	ctx.lr = 0x82112980;
	sub_8211ADE0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r7,-26784
	ctx.r11.s64 = ctx.r7.s64 + -26784;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r31,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23788
	ctx.r4.s64 = ctx.r10.s64 + -23788;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1576
	ctx.r3.s64 = ctx.r1.s64 + 1576;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82151bf0
	ctx.lr = 0x821129C4;
	sub_82151BF0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r4,r1,1200
	ctx.r4.s64 = ctx.r1.s64 + 1200;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1200(r1)
	REX_STORE_U32(ctx.r1.u32 + 1200, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821129E8;
	sub_822009C8(ctx, base);
	// lwz r3,1576(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112a08
	if (ctx.cr6.eq) goto loc_82112A08;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112A08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112A08:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r30,r11,-23744
	ctx.r30.s64 = ctx.r11.s64 + -23744;
	// addi r29,r10,-23756
	ctx.r29.s64 = ctx.r10.s64 + -23756;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r5,r9,16608
	ctx.r5.s64 = ctx.r9.s64 + 16608;
	// addi r4,r8,-23776
	ctx.r4.s64 = ctx.r8.s64 + -23776;
	// addi r3,r1,3016
	ctx.r3.s64 = ctx.r1.s64 + 3016;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r27,r7,17632
	ctx.r27.s64 = ctx.r7.s64 + 17632;
	// addi r26,r6,17504
	ctx.r26.s64 = ctx.r6.s64 + 17504;
	// bl 0x82119a28
	ctx.lr = 0x82112A4C;
	sub_82119A28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821211c0
	ctx.lr = 0x82112A58;
	sub_821211C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821211c0
	ctx.lr = 0x82112A64;
	sub_821211C0(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-23732
	ctx.r4.s64 = ctx.r9.s64 + -23732;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82151fe8
	ctx.lr = 0x82112A98;
	sub_82151FE8(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,16808
	ctx.r10.s64 = ctx.r6.s64 + 16808;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-23712
	ctx.r4.s64 = ctx.r9.s64 + -23712;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821521b0
	ctx.lr = 0x82112AD8;
	sub_821521B0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r1,1208
	ctx.r4.s64 = ctx.r1.s64 + 1208;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r7,1208(r1)
	REX_STORE_U32(ctx.r1.u32 + 1208, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112AFC;
	sub_822009C8(ctx, base);
	// lwz r3,3016(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112b1c
	if (ctx.cr6.eq) goto loc_82112B1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112B1C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// addi r4,r11,-23688
	ctx.r4.s64 = ctx.r11.s64 + -23688;
	// bl 0x82201b80
	ctx.lr = 0x82112B2C;
	sub_82201B80(ctx, base);
	// addi r10,r1,1592
	ctx.r10.s64 = ctx.r1.s64 + 1592;
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// stw r10,1600(r1)
	REX_STORE_U32(ctx.r1.u32 + 1600, ctx.r10.u32);
	// bl 0x8211aeb8
	ctx.lr = 0x82112B3C;
	sub_8211AEB8(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r7,2424
	ctx.r11.s64 = ctx.r7.s64 + 2424;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r31,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23668
	ctx.r4.s64 = ctx.r10.s64 + -23668;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1592
	ctx.r3.s64 = ctx.r1.s64 + 1592;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82152378
	ctx.lr = 0x82112B80;
	sub_82152378(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,-26872
	ctx.r10.s64 = ctx.r7.s64 + -26872;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23656
	ctx.r4.s64 = ctx.r9.s64 + -23656;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82152568
	ctx.lr = 0x82112BC0;
	sub_82152568(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,-26832
	ctx.r10.s64 = ctx.r6.s64 + -26832;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-23636
	ctx.r4.s64 = ctx.r9.s64 + -23636;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82152758
	ctx.lr = 0x82112C00;
	sub_82152758(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r7,1216(r1)
	REX_STORE_U32(ctx.r1.u32 + 1216, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112C24;
	sub_822009C8(ctx, base);
	// lwz r3,1592(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1592);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112c44
	if (ctx.cr6.eq) goto loc_82112C44;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112C44:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-23608
	ctx.r9.s64 = ctx.r11.s64 + -23608;
	// addi r8,r10,-23624
	ctx.r8.s64 = ctx.r10.s64 + -23624;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r11,r7,-23520
	ctx.r11.s64 = ctx.r7.s64 + -23520;
	// addi r9,r5,-23556
	ctx.r9.s64 = ctx.r5.s64 + -23556;
	// addi r8,r4,-23576
	ctx.r8.s64 = ctx.r4.s64 + -23576;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r7,r3,-23592
	ctx.r7.s64 = ctx.r3.s64 + -23592;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addi r10,r6,-23536
	ctx.r10.s64 = ctx.r6.s64 + -23536;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// bl 0x821d5e18
	ctx.lr = 0x82112CDC;
	sub_821D5E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82112CF0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d5f60
	ctx.lr = 0x82112CFC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821d5f60
	ctx.lr = 0x82112D08;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d5f60
	ctx.lr = 0x82112D14;
	sub_821D5F60(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82112D20;
	sub_821D5F60(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// addi r4,r11,32528
	ctx.r4.s64 = ctx.r11.s64 + 32528;
	// bl 0x82201b80
	ctx.lr = 0x82112D30;
	sub_82201B80(ctx, base);
	// addi r10,r1,1608
	ctx.r10.s64 = ctx.r1.s64 + 1608;
	// addi r3,r1,1608
	ctx.r3.s64 = ctx.r1.s64 + 1608;
	// stw r10,1616(r1)
	REX_STORE_U32(ctx.r1.u32 + 1616, ctx.r10.u32);
	// bl 0x8211af90
	ctx.lr = 0x82112D40;
	sub_8211AF90(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r1,1608
	ctx.r8.s64 = ctx.r1.s64 + 1608;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,2000
	ctx.r3.s64 = ctx.r1.s64 + 2000;
	// bl 0x82121210
	ctx.lr = 0x82112D5C;
	sub_82121210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82119cc8
	ctx.lr = 0x82112D6C;
	sub_82119CC8(ctx, base);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82202028
	ctx.lr = 0x82112D7C;
	sub_82202028(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,0(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112da0
	if (ctx.cr6.eq) goto loc_82112DA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112DA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1224
	ctx.r4.s64 = ctx.r1.s64 + 1224;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1224(r1)
	REX_STORE_U32(ctx.r1.u32 + 1224, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82112DC0;
	sub_822009C8(ctx, base);
	// lwz r3,1608(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112de0
	if (ctx.cr6.eq) goto loc_82112DE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82112DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82112DE0:
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// bl 0x821d5d58
	ctx.lr = 0x82112DE8;
	sub_821D5D58(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r9,r11,-23056
	ctx.r9.s64 = ctx.r11.s64 + -23056;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r8,r10,-23084
	ctx.r8.s64 = ctx.r10.s64 + -23084;
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r7,-23028
	ctx.r6.s64 = ctx.r7.s64 + -23028;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bl 0x821d5e18
	ctx.lr = 0x82112E28;
	sub_821D5E18(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x821d5f60
	ctx.lr = 0x82112E38;
	sub_821D5F60(ctx, base);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// addi r4,r5,31640
	ctx.r4.s64 = ctx.r5.s64 + 31640;
	// bl 0x82201b80
	ctx.lr = 0x82112E48;
	sub_82201B80(ctx, base);
	// addi r4,r1,1624
	ctx.r4.s64 = ctx.r1.s64 + 1624;
	// addi r3,r1,1624
	ctx.r3.s64 = ctx.r1.s64 + 1624;
	// stw r4,1632(r1)
	REX_STORE_U32(ctx.r1.u32 + 1632, ctx.r4.u32);
	// bl 0x8211b068
	ctx.lr = 0x82112E58;
	sub_8211B068(ctx, base);
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r3,31776
	ctx.r10.s64 = ctx.r3.s64 + 31776;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,-9520
	ctx.r5.s64 = ctx.r11.s64 + -9520;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,2008
	ctx.r3.s64 = ctx.r1.s64 + 2008;
	// bl 0x82121290
	ctx.lr = 0x82112E78;
	sub_82121290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1632
	ctx.r3.s64 = ctx.r1.s64 + 1632;
	// bl 0x82118928
	ctx.lr = 0x82112E84;
	sub_82118928(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-23500
	ctx.r4.s64 = ctx.r5.s64 + -23500;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82152960
	ctx.lr = 0x82112EB8;
	sub_82152960(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-32504
	ctx.r8.s64 = ctx.r10.s64 + -32504;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-23480
	ctx.r4.s64 = ctx.r7.s64 + -23480;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82152b68
	ctx.lr = 0x82112EF8;
	sub_82152B68(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r18,-32227
	ctx.r18.s64 = -2112028672;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r14,-32227
	ctx.r14.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r14,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r6,r6,30856
	ctx.r6.s64 = ctx.r6.s64 + 30856;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r10,r10,-23260
	ctx.r10.s64 = ctx.r10.s64 + -23260;
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// addi r9,r9,-23276
	ctx.r9.s64 = ctx.r9.s64 + -23276;
	// addi r8,r8,-23292
	ctx.r8.s64 = ctx.r8.s64 + -23292;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r9,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r8,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r7,-23312
	ctx.r7.s64 = ctx.r7.s64 + -23312;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// addi r17,r17,-23244
	ctx.r17.s64 = ctx.r17.s64 + -23244;
	// addi r6,r4,-23332
	ctx.r6.s64 = ctx.r4.s64 + -23332;
	// lwz r15,104(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// stw r17,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r17.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r31,-23368
	ctx.r10.s64 = ctx.r31.s64 + -23368;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// lis r18,-32227
	ctx.r18.s64 = -2112028672;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-23348
	ctx.r11.s64 = ctx.r11.s64 + -23348;
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r4,r30,-23456
	ctx.r4.s64 = ctx.r30.s64 + -23456;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// stw r6,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// addi r5,r5,-32208
	ctx.r5.s64 = ctx.r5.s64 + -32208;
	// addi r31,r21,-23384
	ctx.r31.s64 = ctx.r21.s64 + -23384;
	// addi r30,r19,-23396
	ctx.r30.s64 = ctx.r19.s64 + -23396;
	// addi r21,r16,-23408
	ctx.r21.s64 = ctx.r16.s64 + -23408;
	// addi r19,r14,-23420
	ctx.r19.s64 = ctx.r14.s64 + -23420;
	// addi r17,r15,30728
	ctx.r17.s64 = ctx.r15.s64 + 30728;
	// addi r18,r18,-23432
	ctx.r18.s64 = ctx.r18.s64 + -23432;
	// addi r26,r26,30792
	ctx.r26.s64 = ctx.r26.s64 + 30792;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r28,r28,30664
	ctx.r28.s64 = ctx.r28.s64 + 30664;
	// addi r27,r27,22784
	ctx.r27.s64 = ctx.r27.s64 + 22784;
	// addi r29,r29,22888
	ctx.r29.s64 = ctx.r29.s64 + 22888;
	// addi r25,r25,22928
	ctx.r25.s64 = ctx.r25.s64 + 22928;
	// addi r24,r24,22968
	ctx.r24.s64 = ctx.r24.s64 + 22968;
	// addi r23,r23,23072
	ctx.r23.s64 = ctx.r23.s64 + 23072;
	// addi r22,r22,23112
	ctx.r22.s64 = ctx.r22.s64 + 23112;
	// addi r20,r20,23152
	ctx.r20.s64 = ctx.r20.s64 + 23152;
	// addi r16,r9,23192
	ctx.r16.s64 = ctx.r9.s64 + 23192;
	// addi r15,r8,23232
	ctx.r15.s64 = ctx.r8.s64 + 23232;
	// addi r14,r7,23272
	ctx.r14.s64 = ctx.r7.s64 + 23272;
	// bl 0x82121310
	ctx.lr = 0x82113038;
	sub_82121310(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x82121360
	ctx.lr = 0x82113044;
	sub_82121360(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x82121360
	ctx.lr = 0x82113050;
	sub_82121360(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82121310
	ctx.lr = 0x8211305C;
	sub_82121310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82121310
	ctx.lr = 0x82113068;
	sub_82121310(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x821213b0
	ctx.lr = 0x82113074;
	sub_821213B0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x821213b0
	ctx.lr = 0x82113080;
	sub_821213B0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x821213b0
	ctx.lr = 0x8211308C;
	sub_821213B0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x821213b0
	ctx.lr = 0x82113098;
	sub_821213B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x821213b0
	ctx.lr = 0x821130A4;
	sub_821213B0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x821213b0
	ctx.lr = 0x821130B0;
	sub_821213B0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,260(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82121310
	ctx.lr = 0x821130BC;
	sub_82121310(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82121310
	ctx.lr = 0x821130C8;
	sub_82121310(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82121310
	ctx.lr = 0x821130D4;
	sub_82121310(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-23228
	ctx.r4.s64 = ctx.r11.s64 + -23228;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,348
	ctx.r5.s64 = ctx.r1.s64 + 348;
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82153358
	ctx.lr = 0x82113110;
	sub_82153358(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r9,31096
	ctx.r10.s64 = ctx.r9.s64 + 31096;
	// addi r4,r7,-23216
	ctx.r4.s64 = ctx.r7.s64 + -23216;
	// addi r5,r8,31016
	ctx.r5.s64 = ctx.r8.s64 + 31016;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r30,r11,-23204
	ctx.r30.s64 = ctx.r11.s64 + -23204;
	// addi r29,r6,31056
	ctx.r29.s64 = ctx.r6.s64 + 31056;
	// bl 0x82121310
	ctx.lr = 0x82113140;
	sub_82121310(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82121310
	ctx.lr = 0x8211314C;
	sub_82121310(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-23192
	ctx.r4.s64 = ctx.r5.s64 + -23192;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x82153580
	ctx.lr = 0x82113180;
	sub_82153580(ctx, base);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r7,r4,32704
	ctx.r7.s64 = ctx.r4.s64 + 32704;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r4,r10,-23180
	ctx.r4.s64 = ctx.r10.s64 + -23180;
	// addi r5,r11,32296
	ctx.r5.s64 = ctx.r11.s64 + 32296;
	// addi r30,r8,-23160
	ctx.r30.s64 = ctx.r8.s64 + -23160;
	// addi r29,r9,32432
	ctx.r29.s64 = ctx.r9.s64 + 32432;
	// bl 0x82121400
	ctx.lr = 0x821131B0;
	sub_82121400(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82121400
	ctx.lr = 0x821131BC;
	sub_82121400(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821539a0
	ctx.lr = 0x821131EC;
	sub_821539A0(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r8,-23108
	ctx.r4.s64 = ctx.r8.s64 + -23108;
	// addi r5,r9,22768
	ctx.r5.s64 = ctx.r9.s64 + 22768;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82121450
	ctx.lr = 0x82113208;
	sub_82121450(ctx, base);
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r6,-23136
	ctx.r4.s64 = ctx.r6.s64 + -23136;
	// addi r5,r7,-32624
	ctx.r5.s64 = ctx.r7.s64 + -32624;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82121400
	ctx.lr = 0x82113224;
	sub_82121400(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x82113230;
	sub_82118928(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r5,32008
	ctx.r11.s64 = ctx.r5.s64 + 32008;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82119cc8
	ctx.lr = 0x8211324C;
	sub_82119CC8(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-23000
	ctx.r4.s64 = ctx.r7.s64 + -23000;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82153ba8
	ctx.lr = 0x82113280;
	sub_82153BA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r30,196(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r5,1232(r1)
	REX_STORE_U32(ctx.r1.u32 + 1232, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821132A8;
	sub_822009C8(ctx, base);
	// lwz r3,1624(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821132c8
	if (ctx.cr6.eq) goto loc_821132C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821132C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821132C8:
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x821d5d58
	ctx.lr = 0x821132D0;
	sub_821D5D58(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,3160
	ctx.r3.s64 = ctx.r1.s64 + 3160;
	// addi r4,r10,-22960
	ctx.r4.s64 = ctx.r10.s64 + -22960;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82119b08
	ctx.lr = 0x821132F0;
	sub_82119B08(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x82153dc8
	ctx.lr = 0x82113308;
	sub_82153DC8(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lwz r29,252(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r5,10944
	ctx.r10.s64 = ctx.r5.s64 + 10944;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82153ea8
	ctx.lr = 0x82113348;
	sub_82153EA8(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,11000
	ctx.r10.s64 = ctx.r7.s64 + 11000;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-22944
	ctx.r4.s64 = ctx.r9.s64 + -22944;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821540b0
	ctx.lr = 0x82113388;
	sub_821540B0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1240
	ctx.r4.s64 = ctx.r1.s64 + 1240;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1240(r1)
	REX_STORE_U32(ctx.r1.u32 + 1240, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821133AC;
	sub_822009C8(ctx, base);
	// lwz r3,3160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821133cc
	if (ctx.cr6.eq) goto loc_821133CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821133CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821133CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r11,-3824
	ctx.r5.s64 = ctx.r11.s64 + -3824;
	// addi r4,r10,-22932
	ctx.r4.s64 = ctx.r10.s64 + -22932;
	// addi r3,r1,3048
	ctx.r3.s64 = ctx.r1.s64 + 3048;
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r30,r8,-22904
	ctx.r30.s64 = ctx.r8.s64 + -22904;
	// addi r28,r6,-22920
	ctx.r28.s64 = ctx.r6.s64 + -22920;
	// addi r27,r9,-2216
	ctx.r27.s64 = ctx.r9.s64 + -2216;
	// addi r26,r7,-2288
	ctx.r26.s64 = ctx.r7.s64 + -2288;
	// bl 0x82119be8
	ctx.lr = 0x82113408;
	sub_82119BE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821214d0
	ctx.lr = 0x82113414;
	sub_821214D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821214d0
	ctx.lr = 0x82113420;
	sub_821214D0(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-22888
	ctx.r4.s64 = ctx.r9.s64 + -22888;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821544d8
	ctx.lr = 0x82113454;
	sub_821544D8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r8,-2432
	ctx.r8.s64 = ctx.r8.s64 + -2432;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// addi r4,r6,-22872
	ctx.r4.s64 = ctx.r6.s64 + -22872;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r5,r7,-3336
	ctx.r5.s64 = ctx.r7.s64 + -3336;
	// addi r28,r10,-22832
	ctx.r28.s64 = ctx.r10.s64 + -22832;
	// addi r30,r30,-22860
	ctx.r30.s64 = ctx.r30.s64 + -22860;
	// addi r27,r11,-2360
	ctx.r27.s64 = ctx.r11.s64 + -2360;
	// addi r26,r9,-3280
	ctx.r26.s64 = ctx.r9.s64 + -3280;
	// bl 0x82121520
	ctx.lr = 0x82113494;
	sub_82121520(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82121520
	ctx.lr = 0x821134A0;
	sub_82121520(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821214d0
	ctx.lr = 0x821134AC;
	sub_821214D0(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-22816
	ctx.r4.s64 = ctx.r10.s64 + -22816;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821548c0
	ctx.lr = 0x821134E0;
	sub_821548C0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,-2144
	ctx.r10.s64 = ctx.r7.s64 + -2144;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,-22800
	ctx.r4.s64 = ctx.r9.s64 + -22800;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82154ac8
	ctx.lr = 0x82113520;
	sub_82154AC8(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r8,-1816
	ctx.r10.s64 = ctx.r8.s64 + -1816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,-2072
	ctx.r5.s64 = ctx.r7.s64 + -2072;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r30,r11,-22788
	ctx.r30.s64 = ctx.r11.s64 + -22788;
	// addi r29,r6,-1944
	ctx.r29.s64 = ctx.r6.s64 + -1944;
	// bl 0x82121570
	ctx.lr = 0x8211354C;
	sub_82121570(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82121570
	ctx.lr = 0x82113558;
	sub_82121570(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-22772
	ctx.r4.s64 = ctx.r5.s64 + -22772;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82154f20
	ctx.lr = 0x8211358C;
	sub_82154F20(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-1576
	ctx.r8.s64 = ctx.r10.s64 + -1576;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-22756
	ctx.r4.s64 = ctx.r7.s64 + -22756;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82155158
	ctx.lr = 0x821135CC;
	sub_82155158(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r11,r6,-4296
	ctx.r11.s64 = ctx.r6.s64 + -4296;
	// addi r4,r4,-22736
	ctx.r4.s64 = ctx.r4.s64 + -22736;
	// addi r5,r5,-1432
	ctx.r5.s64 = ctx.r5.s64 + -1432;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821215c0
	ctx.lr = 0x821135EC;
	sub_821215C0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-22720
	ctx.r4.s64 = ctx.r7.s64 + -22720;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82155580
	ctx.lr = 0x82113620;
	sub_82155580(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r4,r5,-22624
	ctx.r4.s64 = ctx.r5.s64 + -22624;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// addi r5,r6,-1080
	ctx.r5.s64 = ctx.r6.s64 + -1080;
	// addi r3,r1,2024
	ctx.r3.s64 = ctx.r1.s64 + 2024;
	// addi r23,r10,-22520
	ctx.r23.s64 = ctx.r10.s64 + -22520;
	// addi r22,r8,-22532
	ctx.r22.s64 = ctx.r8.s64 + -22532;
	// addi r30,r30,-22548
	ctx.r30.s64 = ctx.r30.s64 + -22548;
	// addi r28,r28,-22564
	ctx.r28.s64 = ctx.r28.s64 + -22564;
	// addi r26,r26,-22580
	ctx.r26.s64 = ctx.r26.s64 + -22580;
	// addi r24,r24,-22596
	ctx.r24.s64 = ctx.r24.s64 + -22596;
	// addi r21,r11,-288
	ctx.r21.s64 = ctx.r11.s64 + -288;
	// addi r20,r9,-480
	ctx.r20.s64 = ctx.r9.s64 + -480;
	// addi r19,r7,-832
	ctx.r19.s64 = ctx.r7.s64 + -832;
	// addi r29,r29,22752
	ctx.r29.s64 = ctx.r29.s64 + 22752;
	// addi r27,r27,-976
	ctx.r27.s64 = ctx.r27.s64 + -976;
	// addi r25,r25,22760
	ctx.r25.s64 = ctx.r25.s64 + 22760;
	// bl 0x82121610
	ctx.lr = 0x8211369C;
	sub_82121610(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r4,r5,-22652
	ctx.r4.s64 = ctx.r5.s64 + -22652;
	// addi r5,r6,-1152
	ctx.r5.s64 = ctx.r6.s64 + -1152;
	// addi r3,r1,2032
	ctx.r3.s64 = ctx.r1.s64 + 2032;
	// bl 0x82121610
	ctx.lr = 0x821136B8;
	sub_82121610(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,-22696
	ctx.r4.s64 = ctx.r4.s64 + -22696;
	// addi r5,r11,-1400
	ctx.r5.s64 = ctx.r11.s64 + -1400;
	// addi r31,r9,-22664
	ctx.r31.s64 = ctx.r9.s64 + -22664;
	// addi r16,r7,-22676
	ctx.r16.s64 = ctx.r7.s64 + -22676;
	// addi r15,r10,-1168
	ctx.r15.s64 = ctx.r10.s64 + -1168;
	// addi r14,r8,-1416
	ctx.r14.s64 = ctx.r8.s64 + -1416;
	// bl 0x821215c0
	ctx.lr = 0x821136F4;
	sub_821215C0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x821215c0
	ctx.lr = 0x82113700;
	sub_821215C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x821215c0
	ctx.lr = 0x8211370C;
	sub_821215C0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x82113718;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x82113724;
	sub_82118928(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82121680
	ctx.lr = 0x82113730;
	sub_82121680(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821216d0
	ctx.lr = 0x8211373C;
	sub_821216D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82121680
	ctx.lr = 0x82113748;
	sub_82121680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x821216d0
	ctx.lr = 0x82113754;
	sub_821216D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82121720
	ctx.lr = 0x82113760;
	sub_82121720(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82121720
	ctx.lr = 0x8211376C;
	sub_82121720(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r29,196(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r5,1248(r1)
	REX_STORE_U32(ctx.r1.u32 + 1248, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82113798;
	sub_822009C8(ctx, base);
	// lwz r3,3048(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821137b8
	if (ctx.cr6.eq) goto loc_821137B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821137B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821137B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// addi r4,r11,32540
	ctx.r4.s64 = ctx.r11.s64 + 32540;
	// bl 0x82201b80
	ctx.lr = 0x821137C8;
	sub_82201B80(ctx, base);
	// addi r10,r1,1072
	ctx.r10.s64 = ctx.r1.s64 + 1072;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// stw r10,1080(r1)
	REX_STORE_U32(ctx.r1.u32 + 1080, ctx.r10.u32);
	// bl 0x8211b140
	ctx.lr = 0x821137D8;
	sub_8211B140(ctx, base);
	// lwz r28,192(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2040
	ctx.r3.s64 = ctx.r1.s64 + 2040;
	// bl 0x82121770
	ctx.lr = 0x821137F0;
	sub_82121770(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1080(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1080);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82113800;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1080(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113824
	if (ctx.cr6.eq) goto loc_82113824;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82113824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82113824:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1256
	ctx.r4.s64 = ctx.r1.s64 + 1256;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1256(r1)
	REX_STORE_U32(ctx.r1.u32 + 1256, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82113844;
	sub_822009C8(ctx, base);
	// lwz r3,1072(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82113864
	if (ctx.cr6.eq) goto loc_82113864;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82113864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82113864:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x82201b80
	ctx.lr = 0x82113874;
	sub_82201B80(ctx, base);
	// addi r10,r1,1040
	ctx.r10.s64 = ctx.r1.s64 + 1040;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// stw r10,1048(r1)
	REX_STORE_U32(ctx.r1.u32 + 1048, ctx.r10.u32);
	// bl 0x8211b218
	ctx.lr = 0x82113884;
	sub_8211B218(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2048
	ctx.r3.s64 = ctx.r1.s64 + 2048;
	// bl 0x821217f0
	ctx.lr = 0x82113898;
	sub_821217F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1048(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1048);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x821138A8;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1048(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1048);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821138cc
	if (ctx.cr6.eq) goto loc_821138CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821138CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821138CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1264(r1)
	REX_STORE_U32(ctx.r1.u32 + 1264, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821138EC;
	sub_822009C8(ctx, base);
	// lwz r3,1040(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1040);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211390c
	if (ctx.cr6.eq) goto loc_8211390C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211390C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211390C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-22476
	ctx.r9.s64 = ctx.r11.s64 + -22476;
	// addi r8,r10,-22508
	ctx.r8.s64 = ctx.r10.s64 + -22508;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r6,-22444
	ctx.r3.s64 = ctx.r6.s64 + -22444;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,3424
	ctx.r3.s64 = ctx.r1.s64 + 3424;
	// bl 0x821d5e18
	ctx.lr = 0x82113954;
	sub_821D5E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x821d5f60
	ctx.lr = 0x82113964;
	sub_821D5F60(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// addi r4,r11,31656
	ctx.r4.s64 = ctx.r11.s64 + 31656;
	// bl 0x82201b80
	ctx.lr = 0x82113974;
	sub_82201B80(ctx, base);
	// addi r10,r1,1640
	ctx.r10.s64 = ctx.r1.s64 + 1640;
	// addi r3,r1,1640
	ctx.r3.s64 = ctx.r1.s64 + 1640;
	// stw r10,1648(r1)
	REX_STORE_U32(ctx.r1.u32 + 1648, ctx.r10.u32);
	// bl 0x8211b2f0
	ctx.lr = 0x82113984;
	sub_8211B2F0(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r8,r1,1640
	ctx.r8.s64 = ctx.r1.s64 + 1640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,2056
	ctx.r3.s64 = ctx.r1.s64 + 2056;
	// bl 0x82121870
	ctx.lr = 0x821139A0;
	sub_82121870(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82119cc8
	ctx.lr = 0x821139B0;
	sub_82119CC8(ctx, base);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82202028
	ctx.lr = 0x821139C0;
	sub_82202028(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821139e4
	if (ctx.cr6.eq) goto loc_821139E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821139E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821139E4:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,19952
	ctx.r7.s64 = ctx.r9.s64 + 19952;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-22416
	ctx.r4.s64 = ctx.r5.s64 + -22416;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82155d88
	ctx.lr = 0x82113A28;
	sub_82155D88(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,21784
	ctx.r8.s64 = ctx.r10.s64 + 21784;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-22400
	ctx.r4.s64 = ctx.r7.s64 + -22400;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82155f78
	ctx.lr = 0x82113A68;
	sub_82155F78(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r4,21840
	ctx.r10.s64 = ctx.r4.s64 + 21840;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-22384
	ctx.r30.s64 = ctx.r11.s64 + -22384;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82156180
	ctx.lr = 0x82113AAC;
	sub_82156180(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,22728
	ctx.r10.s64 = ctx.r6.s64 + 22728;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82156348
	ctx.lr = 0x82113AE8;
	sub_82156348(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22696
	ctx.r10.s64 = ctx.r7.s64 + 22696;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82156510
	ctx.lr = 0x82113B24;
	sub_82156510(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22664
	ctx.r10.s64 = ctx.r7.s64 + 22664;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82156768
	ctx.lr = 0x82113B60;
	sub_82156768(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22632
	ctx.r10.s64 = ctx.r7.s64 + 22632;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x821569b0
	ctx.lr = 0x82113B9C;
	sub_821569B0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r7,22520
	ctx.r5.s64 = ctx.r7.s64 + 22520;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,-22368
	ctx.r10.s64 = ctx.r6.s64 + -22368;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82156be0
	ctx.lr = 0x82113BE4;
	sub_82156BE0(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// addi r7,r7,-22100
	ctx.r7.s64 = ctx.r7.s64 + -22100;
	// addi r11,r11,-22128
	ctx.r11.s64 = ctx.r11.s64 + -22128;
	// stw r7,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// addi r7,r30,-22184
	ctx.r7.s64 = ctx.r30.s64 + -22184;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// addi r11,r29,-22212
	ctx.r11.s64 = ctx.r29.s64 + -22212;
	// addi r31,r31,-22156
	ctx.r31.s64 = ctx.r31.s64 + -22156;
	// addi r7,r27,-22276
	ctx.r7.s64 = ctx.r27.s64 + -22276;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r31,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// addi r11,r8,22248
	ctx.r11.s64 = ctx.r8.s64 + 22248;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lis r15,-32227
	ctx.r15.s64 = -2112028672;
	// addi r8,r6,23120
	ctx.r8.s64 = ctx.r6.s64 + 23120;
	// stw r11,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// addi r7,r5,22304
	ctx.r7.s64 = ctx.r5.s64 + 22304;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r9,r9,21992
	ctx.r9.s64 = ctx.r9.s64 + 21992;
	// stw r8,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// addi r31,r28,-22248
	ctx.r31.s64 = ctx.r28.s64 + -22248;
	// stw r7,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r6,r10,22904
	ctx.r6.s64 = ctx.r10.s64 + 22904;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// stw r6,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r22,-32240
	ctx.r22.s64 = -2112880640;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r19,-32227
	ctx.r19.s64 = -2112028672;
	// lis r20,-32240
	ctx.r20.s64 = -2112880640;
	// lis r18,-32240
	ctx.r18.s64 = -2112880640;
	// lis r17,-32227
	ctx.r17.s64 = -2112028672;
	// lis r16,-32240
	ctx.r16.s64 = -2112880640;
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r31,r25,22312
	ctx.r31.s64 = ctx.r25.s64 + 22312;
	// addi r5,r26,22608
	ctx.r5.s64 = ctx.r26.s64 + 22608;
	// addi r30,r24,23024
	ctx.r30.s64 = ctx.r24.s64 + 23024;
	// addi r29,r23,22368
	ctx.r29.s64 = ctx.r23.s64 + 22368;
	// addi r28,r22,22816
	ctx.r28.s64 = ctx.r22.s64 + 22816;
	// addi r27,r21,22416
	ctx.r27.s64 = ctx.r21.s64 + 22416;
	// addi r25,r19,22416
	ctx.r25.s64 = ctx.r19.s64 + 22416;
	// addi r26,r20,23384
	ctx.r26.s64 = ctx.r20.s64 + 23384;
	// addi r24,r18,23320
	ctx.r24.s64 = ctx.r18.s64 + 23320;
	// addi r23,r17,22456
	ctx.r23.s64 = ctx.r17.s64 + 22456;
	// addi r22,r16,23216
	ctx.r22.s64 = ctx.r16.s64 + 23216;
	// addi r21,r14,-22304
	ctx.r21.s64 = ctx.r14.s64 + -22304;
	// addi r19,r15,-22352
	ctx.r19.s64 = ctx.r15.s64 + -22352;
	// addi r20,r9,-22332
	ctx.r20.s64 = ctx.r9.s64 + -22332;
	// addi r18,r6,22528
	ctx.r18.s64 = ctx.r6.s64 + 22528;
	// addi r17,r11,22752
	ctx.r17.s64 = ctx.r11.s64 + 22752;
	// addi r16,r10,22568
	ctx.r16.s64 = ctx.r10.s64 + 22568;
	// addi r15,r8,22688
	ctx.r15.s64 = ctx.r8.s64 + 22688;
	// addi r14,r7,22584
	ctx.r14.s64 = ctx.r7.s64 + 22584;
	// bl 0x821218f0
	ctx.lr = 0x82113D1C;
	sub_821218F0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x821218f0
	ctx.lr = 0x82113D28;
	sub_821218F0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x82121940
	ctx.lr = 0x82113D34;
	sub_82121940(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82121990
	ctx.lr = 0x82113D40;
	sub_82121990(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x82121940
	ctx.lr = 0x82113D4C;
	sub_82121940(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82121990
	ctx.lr = 0x82113D58;
	sub_82121990(ctx, base);
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82121940
	ctx.lr = 0x82113D68;
	sub_82121940(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82121990
	ctx.lr = 0x82113D74;
	sub_82121990(ctx, base);
	// lwz r23,104(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82121940
	ctx.lr = 0x82113D84;
	sub_82121940(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82121990
	ctx.lr = 0x82113D90;
	sub_82121990(ctx, base);
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82121940
	ctx.lr = 0x82113DA0;
	sub_82121940(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82121990
	ctx.lr = 0x82113DAC;
	sub_82121990(ctx, base);
	// lwz r27,208(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821219e0
	ctx.lr = 0x82113DBC;
	sub_821219E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82121a30
	ctx.lr = 0x82113DC8;
	sub_82121A30(ctx, base);
	// lwz r29,212(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821219e0
	ctx.lr = 0x82113DD8;
	sub_821219E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82121a30
	ctx.lr = 0x82113DE4;
	sub_82121A30(ctx, base);
	// lwz r31,224(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821219e0
	ctx.lr = 0x82113DF4;
	sub_821219E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,260(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82121a30
	ctx.lr = 0x82113E00;
	sub_82121A30(ctx, base);
	// lwz r31,256(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821219e0
	ctx.lr = 0x82113E10;
	sub_821219E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,348(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82121a30
	ctx.lr = 0x82113E1C;
	sub_82121A30(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-22072
	ctx.r4.s64 = ctx.r10.s64 + -22072;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82157858
	ctx.lr = 0x82113E54;
	sub_82157858(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22040
	ctx.r10.s64 = ctx.r7.s64 + 22040;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r9,-22052
	ctx.r4.s64 = ctx.r9.s64 + -22052;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82157a48
	ctx.lr = 0x82113E94;
	sub_82157A48(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r8,21136
	ctx.r11.s64 = ctx.r8.s64 + 21136;
	// addi r4,r6,-22032
	ctx.r4.s64 = ctx.r6.s64 + -22032;
	// addi r5,r7,22088
	ctx.r5.s64 = ctx.r7.s64 + 22088;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82121a80
	ctx.lr = 0x82113EB4;
	sub_82121A80(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-21996
	ctx.r4.s64 = ctx.r7.s64 + -21996;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82157e58
	ctx.lr = 0x82113EE8;
	sub_82157E58(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r4,26144
	ctx.r10.s64 = ctx.r4.s64 + 26144;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-21972
	ctx.r4.s64 = ctx.r9.s64 + -21972;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158020
	ctx.lr = 0x82113F28;
	sub_82158020(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,26296
	ctx.r10.s64 = ctx.r6.s64 + 26296;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-21956
	ctx.r4.s64 = ctx.r9.s64 + -21956;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158228
	ctx.lr = 0x82113F68;
	sub_82158228(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r10,r6,26512
	ctx.r10.s64 = ctx.r6.s64 + 26512;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r9,-21944
	ctx.r4.s64 = ctx.r9.s64 + -21944;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158458
	ctx.lr = 0x82113FA8;
	sub_82158458(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r8,15728
	ctx.r11.s64 = ctx.r8.s64 + 15728;
	// addi r4,r6,-21932
	ctx.r4.s64 = ctx.r6.s64 + -21932;
	// addi r5,r7,26600
	ctx.r5.s64 = ctx.r7.s64 + 26600;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82121a80
	ctx.lr = 0x82113FC8;
	sub_82121A80(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-21920
	ctx.r4.s64 = ctx.r7.s64 + -21920;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158678
	ctx.lr = 0x82113FFC;
	sub_82158678(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,26064
	ctx.r8.s64 = ctx.r10.s64 + 26064;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-21896
	ctx.r4.s64 = ctx.r9.s64 + -21896;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158880
	ctx.lr = 0x8211403C;
	sub_82158880(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r30,196(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,1272
	ctx.r4.s64 = ctx.r1.s64 + 1272;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r6,1272(r1)
	REX_STORE_U32(ctx.r1.u32 + 1272, ctx.r6.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114064;
	sub_822009C8(ctx, base);
	// lwz r3,1640(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114084
	if (ctx.cr6.eq) goto loc_82114084;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114084:
	// addi r3,r1,3424
	ctx.r3.s64 = ctx.r1.s64 + 3424;
	// bl 0x821d5d58
	ctx.lr = 0x8211408C;
	sub_821D5D58(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r7,r11,-17744
	ctx.r7.s64 = ctx.r11.s64 + -17744;
	// addi r6,r10,-20168
	ctx.r6.s64 = ctx.r10.s64 + -20168;
	// addi r5,r9,-20320
	ctx.r5.s64 = ctx.r9.s64 + -20320;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r4,r8,31672
	ctx.r4.s64 = ctx.r8.s64 + 31672;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82201b80
	ctx.lr = 0x821140CC;
	sub_82201B80(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// stw r4,968(r1)
	REX_STORE_U32(ctx.r1.u32 + 968, ctx.r4.u32);
	// bl 0x8211b3c8
	ctx.lr = 0x821140DC;
	sub_8211B3C8(ctx, base);
	// lis r3,-32210
	ctx.r3.s64 = -2110914560;
	// lwz r26,192(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r3,-9520
	ctx.r5.s64 = ctx.r3.s64 + -9520;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,2064
	ctx.r3.s64 = ctx.r1.s64 + 2064;
	// bl 0x82121ad0
	ctx.lr = 0x821140F4;
	sub_82121AD0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,968(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 968);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82114104;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r29,968(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114128
	if (ctx.cr6.eq) goto loc_82114128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114128:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-21880
	ctx.r4.s64 = ctx.r7.s64 + -21880;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158a88
	ctx.lr = 0x82114168;
	sub_82158A88(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// ld r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r8,-21852
	ctx.r4.s64 = ctx.r8.s64 + -21852;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158ca8
	ctx.lr = 0x821141A4;
	sub_82158CA8(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// ld r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-21832
	ctx.r4.s64 = ctx.r9.s64 + -21832;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82158ec0
	ctx.lr = 0x821141E0;
	sub_82158EC0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1280
	ctx.r4.s64 = ctx.r1.s64 + 1280;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1280(r1)
	REX_STORE_U32(ctx.r1.u32 + 1280, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114204;
	sub_822009C8(ctx, base);
	// lwz r3,960(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114224
	if (ctx.cr6.eq) goto loc_82114224;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114224:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,2696
	ctx.r3.s64 = ctx.r1.s64 + 2696;
	// addi r4,r9,-21808
	ctx.r4.s64 = ctx.r9.s64 + -21808;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x82119d70
	ctx.lr = 0x8211424C;
	sub_82119D70(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// bl 0x821590c8
	ctx.lr = 0x82114264;
	sub_821590C8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x821591a8
	ctx.lr = 0x82114284;
	sub_821591A8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,-21788
	ctx.r4.s64 = ctx.r9.s64 + -21788;
	// bl 0x82121b50
	ctx.lr = 0x82114294;
	sub_82121B50(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1288
	ctx.r4.s64 = ctx.r1.s64 + 1288;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1288(r1)
	REX_STORE_U32(ctx.r1.u32 + 1288, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821142B8;
	sub_822009C8(ctx, base);
	// lwz r3,2696(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821142d8
	if (ctx.cr6.eq) goto loc_821142D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821142D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821142D8:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// addi r4,r9,-21768
	ctx.r4.s64 = ctx.r9.s64 + -21768;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x821142F8;
	sub_82201B80(ctx, base);
	// addi r8,r1,1656
	ctx.r8.s64 = ctx.r1.s64 + 1656;
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// stw r8,1664(r1)
	REX_STORE_U32(ctx.r1.u32 + 1664, ctx.r8.u32);
	// bl 0x8211b4b0
	ctx.lr = 0x82114308;
	sub_8211B4B0(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1656
	ctx.r3.s64 = ctx.r1.s64 + 1656;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82159290
	ctx.lr = 0x8211432C;
	sub_82159290(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82159370
	ctx.lr = 0x8211434C;
	sub_82159370(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r6,22240
	ctx.r5.s64 = ctx.r6.s64 + 22240;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-21740
	ctx.r29.s64 = ctx.r11.s64 + -21740;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82159458
	ctx.lr = 0x82114390;
	sub_82159458(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22240
	ctx.r10.s64 = ctx.r7.s64 + 22240;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82159648
	ctx.lr = 0x821143CC;
	sub_82159648(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r7,1112
	ctx.r6.s64 = ctx.r7.s64 + 1112;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r11,-21724
	ctx.r28.s64 = ctx.r11.s64 + -21724;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82159838
	ctx.lr = 0x82114410;
	sub_82159838(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1320
	ctx.r4.s64 = ctx.r1.s64 + 1320;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1320(r1)
	REX_STORE_U32(ctx.r1.u32 + 1320, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114434;
	sub_822009C8(ctx, base);
	// lwz r3,1656(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114454
	if (ctx.cr6.eq) goto loc_82114454;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114454:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// addi r4,r9,-21712
	ctx.r4.s64 = ctx.r9.s64 + -21712;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114474;
	sub_82201B80(ctx, base);
	// addi r8,r1,1672
	ctx.r8.s64 = ctx.r1.s64 + 1672;
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// stw r8,1680(r1)
	REX_STORE_U32(ctx.r1.u32 + 1680, ctx.r8.u32);
	// bl 0x8211b588
	ctx.lr = 0x82114484;
	sub_8211B588(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1672
	ctx.r3.s64 = ctx.r1.s64 + 1672;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82159a40
	ctx.lr = 0x821144A8;
	sub_82159A40(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82159b20
	ctx.lr = 0x821144C8;
	sub_82159B20(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r27,r11,-21688
	ctx.r27.s64 = ctx.r11.s64 + -21688;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82121d00
	ctx.lr = 0x821144DC;
	sub_82121D00(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1336
	ctx.r4.s64 = ctx.r1.s64 + 1336;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1336(r1)
	REX_STORE_U32(ctx.r1.u32 + 1336, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114500;
	sub_822009C8(ctx, base);
	// lwz r3,1672(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1672);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114520
	if (ctx.cr6.eq) goto loc_82114520;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114520:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// addi r4,r9,-21676
	ctx.r4.s64 = ctx.r9.s64 + -21676;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114540;
	sub_82201B80(ctx, base);
	// addi r8,r1,1696
	ctx.r8.s64 = ctx.r1.s64 + 1696;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r8,1704(r1)
	REX_STORE_U32(ctx.r1.u32 + 1704, ctx.r8.u32);
	// bl 0x8211b660
	ctx.lr = 0x82114550;
	sub_8211B660(ctx, base);
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x82121eb0
	ctx.lr = 0x82114568;
	sub_82121EB0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82159c08
	ctx.lr = 0x82114580;
	sub_82159C08(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82159ce8
	ctx.lr = 0x821145A0;
	sub_82159CE8(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r6,22240
	ctx.r10.s64 = ctx.r6.s64 + 22240;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82159dd0
	ctx.lr = 0x821145DC;
	sub_82159DD0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,22240
	ctx.r10.s64 = ctx.r7.s64 + 22240;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82159fc0
	ctx.lr = 0x82114618;
	sub_82159FC0(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,1112
	ctx.r6.s64 = ctx.r8.s64 + 1112;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215a1b0
	ctx.lr = 0x82114654;
	sub_8215A1B0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1368
	ctx.r4.s64 = ctx.r1.s64 + 1368;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1368(r1)
	REX_STORE_U32(ctx.r1.u32 + 1368, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114678;
	sub_822009C8(ctx, base);
	// lwz r3,1696(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1696);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114698
	if (ctx.cr6.eq) goto loc_82114698;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114698:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// addi r4,r9,-21644
	ctx.r4.s64 = ctx.r9.s64 + -21644;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x821146B8;
	sub_82201B80(ctx, base);
	// addi r8,r1,1712
	ctx.r8.s64 = ctx.r1.s64 + 1712;
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// stw r8,1720(r1)
	REX_STORE_U32(ctx.r1.u32 + 1720, ctx.r8.u32);
	// bl 0x8211b738
	ctx.lr = 0x821146C8;
	sub_8211B738(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1712
	ctx.r3.s64 = ctx.r1.s64 + 1712;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8215a3b8
	ctx.lr = 0x821146EC;
	sub_8215A3B8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8215a498
	ctx.lr = 0x8211470C;
	sub_8215A498(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r8,-21616
	ctx.r4.s64 = ctx.r8.s64 + -21616;
	// bl 0x82122060
	ctx.lr = 0x8211471C;
	sub_82122060(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,1440(r1)
	REX_STORE_U32(ctx.r1.u32 + 1440, ctx.r6.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114740;
	sub_822009C8(ctx, base);
	// lwz r3,1712(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114760
	if (ctx.cr6.eq) goto loc_82114760;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114760:
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// addi r4,r8,-21604
	ctx.r4.s64 = ctx.r8.s64 + -21604;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114788;
	sub_82201B80(ctx, base);
	// addi r7,r1,1728
	ctx.r7.s64 = ctx.r1.s64 + 1728;
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// stw r7,1736(r1)
	REX_STORE_U32(ctx.r1.u32 + 1736, ctx.r7.u32);
	// bl 0x8211b810
	ctx.lr = 0x82114798;
	sub_8211B810(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1728
	ctx.r3.s64 = ctx.r1.s64 + 1728;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x8215a580
	ctx.lr = 0x821147BC;
	sub_8215A580(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8215a660
	ctx.lr = 0x821147DC;
	sub_8215A660(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r11,83(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8215a748
	ctx.lr = 0x821147FC;
	sub_8215A748(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r10,-21576
	ctx.r4.s64 = ctx.r10.s64 + -21576;
	// bl 0x82122210
	ctx.lr = 0x8211480C;
	sub_82122210(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1448
	ctx.r4.s64 = ctx.r1.s64 + 1448;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1448(r1)
	REX_STORE_U32(ctx.r1.u32 + 1448, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114830;
	sub_822009C8(ctx, base);
	// lwz r3,1728(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114850
	if (ctx.cr6.eq) goto loc_82114850;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114850:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r4,r11,-21564
	ctx.r4.s64 = ctx.r11.s64 + -21564;
	// bl 0x82201b80
	ctx.lr = 0x82114860;
	sub_82201B80(ctx, base);
	// addi r10,r1,1744
	ctx.r10.s64 = ctx.r1.s64 + 1744;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// stw r10,1752(r1)
	REX_STORE_U32(ctx.r1.u32 + 1752, ctx.r10.u32);
	// bl 0x8211b8e8
	ctx.lr = 0x82114870;
	sub_8211B8E8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r9,-21532
	ctx.r4.s64 = ctx.r9.s64 + -21532;
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// bl 0x821223c0
	ctx.lr = 0x82114884;
	sub_821223C0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1456(r1)
	REX_STORE_U32(ctx.r1.u32 + 1456, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821148A8;
	sub_822009C8(ctx, base);
	// lwz r3,1744(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821148c8
	if (ctx.cr6.eq) goto loc_821148C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821148C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821148C8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// addi r4,r11,-21516
	ctx.r4.s64 = ctx.r11.s64 + -21516;
	// bl 0x82201b80
	ctx.lr = 0x821148D8;
	sub_82201B80(ctx, base);
	// addi r10,r1,1760
	ctx.r10.s64 = ctx.r1.s64 + 1760;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// stw r10,1768(r1)
	REX_STORE_U32(ctx.r1.u32 + 1768, ctx.r10.u32);
	// bl 0x8211b9c0
	ctx.lr = 0x821148E8;
	sub_8211B9C0(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r9,-21488
	ctx.r4.s64 = ctx.r9.s64 + -21488;
	// addi r3,r1,1760
	ctx.r3.s64 = ctx.r1.s64 + 1760;
	// bl 0x82122570
	ctx.lr = 0x821148FC;
	sub_82122570(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1464
	ctx.r4.s64 = ctx.r1.s64 + 1464;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1464(r1)
	REX_STORE_U32(ctx.r1.u32 + 1464, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114920;
	sub_822009C8(ctx, base);
	// lwz r3,1760(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114940
	if (ctx.cr6.eq) goto loc_82114940;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114940:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// addi r4,r11,-21464
	ctx.r4.s64 = ctx.r11.s64 + -21464;
	// bl 0x82201b80
	ctx.lr = 0x82114950;
	sub_82201B80(ctx, base);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// stw r10,1784(r1)
	REX_STORE_U32(ctx.r1.u32 + 1784, ctx.r10.u32);
	// bl 0x8211ba98
	ctx.lr = 0x82114960;
	sub_8211BA98(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r9,-21440
	ctx.r4.s64 = ctx.r9.s64 + -21440;
	// addi r3,r1,1776
	ctx.r3.s64 = ctx.r1.s64 + 1776;
	// bl 0x82122720
	ctx.lr = 0x82114974;
	sub_82122720(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1472
	ctx.r4.s64 = ctx.r1.s64 + 1472;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1472(r1)
	REX_STORE_U32(ctx.r1.u32 + 1472, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114998;
	sub_822009C8(ctx, base);
	// lwz r3,1776(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821149b8
	if (ctx.cr6.eq) goto loc_821149B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821149B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821149B8:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// addi r4,r9,-21420
	ctx.r4.s64 = ctx.r9.s64 + -21420;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x821149D8;
	sub_82201B80(ctx, base);
	// addi r8,r1,1792
	ctx.r8.s64 = ctx.r1.s64 + 1792;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// stw r8,1800(r1)
	REX_STORE_U32(ctx.r1.u32 + 1800, ctx.r8.u32);
	// bl 0x8211bb70
	ctx.lr = 0x821149E8;
	sub_8211BB70(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8215a830
	ctx.lr = 0x82114A0C;
	sub_8215A830(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8215a910
	ctx.lr = 0x82114A2C;
	sub_8215A910(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r29,r11,-21392
	ctx.r29.s64 = ctx.r11.s64 + -21392;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821228d0
	ctx.lr = 0x82114A40;
	sub_821228D0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1480
	ctx.r4.s64 = ctx.r1.s64 + 1480;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1480(r1)
	REX_STORE_U32(ctx.r1.u32 + 1480, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114A64;
	sub_822009C8(ctx, base);
	// lwz r3,1792(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114a84
	if (ctx.cr6.eq) goto loc_82114A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114A84:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// addi r4,r9,-21380
	ctx.r4.s64 = ctx.r9.s64 + -21380;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114AA4;
	sub_82201B80(ctx, base);
	// addi r8,r1,1808
	ctx.r8.s64 = ctx.r1.s64 + 1808;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// stw r8,1816(r1)
	REX_STORE_U32(ctx.r1.u32 + 1816, ctx.r8.u32);
	// bl 0x8211bc48
	ctx.lr = 0x82114AB4;
	sub_8211BC48(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8215a9f8
	ctx.lr = 0x82114AD8;
	sub_8215A9F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8215aad8
	ctx.lr = 0x82114AF8;
	sub_8215AAD8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82122a80
	ctx.lr = 0x82114B04;
	sub_82122A80(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82122c30
	ctx.lr = 0x82114B10;
	sub_82122C30(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1488
	ctx.r4.s64 = ctx.r1.s64 + 1488;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1488(r1)
	REX_STORE_U32(ctx.r1.u32 + 1488, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114B34;
	sub_822009C8(ctx, base);
	// lwz r3,1808(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114b54
	if (ctx.cr6.eq) goto loc_82114B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114B54:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// addi r4,r10,-21348
	ctx.r4.s64 = ctx.r10.s64 + -21348;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114B6C;
	sub_82201B80(ctx, base);
	// addi r9,r1,1824
	ctx.r9.s64 = ctx.r1.s64 + 1824;
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// stw r9,1832(r1)
	REX_STORE_U32(ctx.r1.u32 + 1832, ctx.r9.u32);
	// bl 0x8211bd20
	ctx.lr = 0x82114B7C;
	sub_8211BD20(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1824
	ctx.r3.s64 = ctx.r1.s64 + 1824;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x8215abc0
	ctx.lr = 0x82114BA0;
	sub_8215ABC0(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r6,-21316
	ctx.r4.s64 = ctx.r6.s64 + -21316;
	// bl 0x82122de0
	ctx.lr = 0x82114BB0;
	sub_82122DE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1496
	ctx.r4.s64 = ctx.r1.s64 + 1496;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,1496(r1)
	REX_STORE_U32(ctx.r1.u32 + 1496, ctx.r11.u32);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114BD4;
	sub_822009C8(ctx, base);
	// lwz r3,1824(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114bf4
	if (ctx.cr6.eq) goto loc_82114BF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114BF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114BF4:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// addi r4,r9,-21300
	ctx.r4.s64 = ctx.r9.s64 + -21300;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// bl 0x82201b80
	ctx.lr = 0x82114C14;
	sub_82201B80(ctx, base);
	// addi r8,r1,1840
	ctx.r8.s64 = ctx.r1.s64 + 1840;
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// stw r8,1848(r1)
	REX_STORE_U32(ctx.r1.u32 + 1848, ctx.r8.u32);
	// bl 0x8211bdf8
	ctx.lr = 0x82114C24;
	sub_8211BDF8(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,1840
	ctx.r3.s64 = ctx.r1.s64 + 1840;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8215aca0
	ctx.lr = 0x82114C48;
	sub_8215ACA0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x8215ad80
	ctx.lr = 0x82114C68;
	sub_8215AD80(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r8,-21268
	ctx.r4.s64 = ctx.r8.s64 + -21268;
	// bl 0x82122f90
	ctx.lr = 0x82114C78;
	sub_82122F90(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1504
	ctx.r4.s64 = ctx.r1.s64 + 1504;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,1504(r1)
	REX_STORE_U32(ctx.r1.u32 + 1504, ctx.r6.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114C9C;
	sub_822009C8(ctx, base);
	// lwz r3,1840(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114cbc
	if (ctx.cr6.eq) goto loc_82114CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114CBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114CBC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r4,r11,-21252
	ctx.r4.s64 = ctx.r11.s64 + -21252;
	// addi r3,r1,2712
	ctx.r3.s64 = ctx.r1.s64 + 2712;
	// addi r29,r9,-21196
	ctx.r29.s64 = ctx.r9.s64 + -21196;
	// addi r28,r7,-21224
	ctx.r28.s64 = ctx.r7.s64 + -21224;
	// addi r27,r10,-5392
	ctx.r27.s64 = ctx.r10.s64 + -5392;
	// addi r25,r8,-5440
	ctx.r25.s64 = ctx.r8.s64 + -5440;
	// bl 0x82119e50
	ctx.lr = 0x82114CEC;
	sub_82119E50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82123140
	ctx.lr = 0x82114CF8;
	sub_82123140(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82123140
	ctx.lr = 0x82114D04;
	sub_82123140(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1512
	ctx.r4.s64 = ctx.r1.s64 + 1512;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1512(r1)
	REX_STORE_U32(ctx.r1.u32 + 1512, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82114D28;
	sub_822009C8(ctx, base);
	// lwz r3,2712(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2712);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114d48
	if (ctx.cr6.eq) goto loc_82114D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82114D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82114D48:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r31,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r31.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r31,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r31.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r31,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r31.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r31,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r31.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r31,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r31.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r31,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// stw r31,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r31.u32);
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// stw r31,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r31.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// stw r31,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r31.u32);
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
	// stw r31,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r31.u32);
	// addi r10,r10,-416
	ctx.r10.s64 = ctx.r10.s64 + -416;
	// stw r31,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// addi r9,r9,-448
	ctx.r9.s64 = ctx.r9.s64 + -448;
	// stw r11,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
	// addi r8,r8,-480
	ctx.r8.s64 = ctx.r8.s64 + -480;
	// stw r10,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// addi r7,r7,-512
	ctx.r7.s64 = ctx.r7.s64 + -512;
	// stw r9,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r9.u32);
	// addi r6,r6,-848
	ctx.r6.s64 = ctx.r6.s64 + -848;
	// stw r8,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// addi r4,r4,-968
	ctx.r4.s64 = ctx.r4.s64 + -968;
	// stw r7,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
	// addi r3,r3,15552
	ctx.r3.s64 = ctx.r3.s64 + 15552;
	// stw r6,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r6.u32);
	// addi r5,r5,-944
	ctx.r5.s64 = ctx.r5.s64 + -944;
	// stw r4,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r4.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// stw r3,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r3.u32);
	// lis r28,-32240
	ctx.r28.s64 = -2112880640;
	// stw r5,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r5.u32);
	// lis r27,-32240
	ctx.r27.s64 = -2112880640;
	// stw r31,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r31.u32);
	// lis r25,-32240
	ctx.r25.s64 = -2112880640;
	// stw r31,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// stw r31,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// lis r23,-32240
	ctx.r23.s64 = -2112880640;
	// lis r22,-32240
	ctx.r22.s64 = -2112880640;
	// addi r11,r29,15632
	ctx.r11.s64 = ctx.r29.s64 + 15632;
	// addi r10,r28,-1624
	ctx.r10.s64 = ctx.r28.s64 + -1624;
	// addi r8,r27,-2624
	ctx.r8.s64 = ctx.r27.s64 + -2624;
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// addi r7,r25,1176
	ctx.r7.s64 = ctx.r25.s64 + 1176;
	// stw r10,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// addi r6,r24,936
	ctx.r6.s64 = ctx.r24.s64 + 936;
	// stw r8,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r8.u32);
	// addi r4,r23,840
	ctx.r4.s64 = ctx.r23.s64 + 840;
	// stw r7,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r7.u32);
	// addi r3,r22,704
	ctx.r3.s64 = ctx.r22.s64 + 704;
	// stw r6,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r6.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r4,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r4.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// stw r3,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// stw r9,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r9.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// lis r28,-32240
	ctx.r28.s64 = -2112880640;
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r25,-32240
	ctx.r25.s64 = -2112880640;
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// lis r23,-32240
	ctx.r23.s64 = -2112880640;
	// lis r22,-32246
	ctx.r22.s64 = -2113273856;
	// addi r5,r5,592
	ctx.r5.s64 = ctx.r5.s64 + 592;
	// addi r10,r10,392
	ctx.r10.s64 = ctx.r10.s64 + 392;
	// stw r5,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// addi r9,r9,296
	ctx.r9.s64 = ctx.r9.s64 + 296;
	// stw r31,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// addi r11,r11,496
	ctx.r11.s64 = ctx.r11.s64 + 496;
	// stw r10,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// addi r8,r8,200
	ctx.r8.s64 = ctx.r8.s64 + 200;
	// stw r9,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r9.u32);
	// addi r7,r7,96
	ctx.r7.s64 = ctx.r7.s64 + 96;
	// stw r11,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// addi r10,r29,-320
	ctx.r10.s64 = ctx.r29.s64 + -320;
	// stw r8,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// addi r9,r28,-360
	ctx.r9.s64 = ctx.r28.s64 + -360;
	// stw r7,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r7.u32);
	// addi r5,r4,-104
	ctx.r5.s64 = ctx.r4.s64 + -104;
	// stw r31,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// addi r11,r3,-200
	ctx.r11.s64 = ctx.r3.s64 + -200;
	// stw r31,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// addi r6,r6,-72
	ctx.r6.s64 = ctx.r6.s64 + -72;
	// stw r31,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// addi r8,r27,22232
	ctx.r8.s64 = ctx.r27.s64 + 22232;
	// stw r31,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r7,r24,-624
	ctx.r7.s64 = ctx.r24.s64 + -624;
	// stw r31,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// addi r29,r25,-2680
	ctx.r29.s64 = ctx.r25.s64 + -2680;
	// stw r31,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r28,r23,-3040
	ctx.r28.s64 = ctx.r23.s64 + -3040;
	// stw r6,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r4,r22,31684
	ctx.r4.s64 = ctx.r22.s64 + 31684;
	// stw r31,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// stw r5,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// stw r31,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r31,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r31,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r31,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82201b80
	ctx.lr = 0x82114F4C;
	sub_82201B80(ctx, base);
	// addi r6,r1,1856
	ctx.r6.s64 = ctx.r1.s64 + 1856;
	// addi r3,r1,1856
	ctx.r3.s64 = ctx.r1.s64 + 1856;
	// stw r6,1864(r1)
	REX_STORE_U32(ctx.r1.u32 + 1864, ctx.r6.u32);
	// bl 0x8211bed0
	ctx.lr = 0x82114F5C;
	sub_8211BED0(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r10,22216
	ctx.r5.s64 = ctx.r10.s64 + 22216;
	// addi r4,r9,-21164
	ctx.r4.s64 = ctx.r9.s64 + -21164;
	// addi r3,r1,2072
	ctx.r3.s64 = ctx.r1.s64 + 2072;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82123210
	ctx.lr = 0x82114F7C;
	sub_82123210(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r8,-9520
	ctx.r5.s64 = ctx.r8.s64 + -9520;
	// addi r3,r1,2080
	ctx.r3.s64 = ctx.r1.s64 + 2080;
	// bl 0x82123190
	ctx.lr = 0x82114F94;
	sub_82123190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1864
	ctx.r3.s64 = ctx.r1.s64 + 1864;
	// bl 0x82118928
	ctx.lr = 0x82114FA0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x82114FAC;
	sub_82118928(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r5,-21132
	ctx.r4.s64 = ctx.r5.s64 + -21132;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215b058
	ctx.lr = 0x82114FE0;
	sub_8215B058(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// ld r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215b260
	ctx.lr = 0x82115018;
	sub_8215B260(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// ld r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r8,-21120
	ctx.r4.s64 = ctx.r8.s64 + -21120;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215b450
	ctx.lr = 0x82115054;
	sub_8215B450(ctx, base);
	// ld r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// ld r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// addi r4,r6,-21092
	ctx.r4.s64 = ctx.r6.s64 + -21092;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// bl 0x82123290
	ctx.lr = 0x8211506C;
	sub_82123290(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-21068
	ctx.r4.s64 = ctx.r9.s64 + -21068;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215b830
	ctx.lr = 0x821150A0;
	sub_8215B830(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// ld r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r4,r4,-21040
	ctx.r4.s64 = ctx.r4.s64 + -21040;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215ba38
	ctx.lr = 0x821150DC;
	sub_8215BA38(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// ld r8,200(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r5,-21004
	ctx.r4.s64 = ctx.r5.s64 + -21004;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215bc40
	ctx.lr = 0x82115118;
	sub_8215BC40(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// ld r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r8,-20972
	ctx.r4.s64 = ctx.r8.s64 + -20972;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215be48
	ctx.lr = 0x82115154;
	sub_8215BE48(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// ld r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-20936
	ctx.r4.s64 = ctx.r9.s64 + -20936;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215c050
	ctx.lr = 0x82115190;
	sub_8215C050(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// ld r10,264(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-20896
	ctx.r4.s64 = ctx.r9.s64 + -20896;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215c258
	ctx.lr = 0x821151CC;
	sub_8215C258(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// ld r7,272(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20864
	ctx.r4.s64 = ctx.r10.s64 + -20864;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215c460
	ctx.lr = 0x82115208;
	sub_8215C460(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20828
	ctx.r4.s64 = ctx.r10.s64 + -20828;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215c668
	ctx.lr = 0x82115244;
	sub_8215C668(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,312(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20796
	ctx.r4.s64 = ctx.r10.s64 + -20796;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215c870
	ctx.lr = 0x82115280;
	sub_8215C870(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,336(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20756
	ctx.r4.s64 = ctx.r10.s64 + -20756;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215ca78
	ctx.lr = 0x821152BC;
	sub_8215CA78(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// ld r9,320(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20720
	ctx.r4.s64 = ctx.r10.s64 + -20720;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215cc80
	ctx.lr = 0x821152F8;
	sub_8215CC80(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// ld r7,304(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20684
	ctx.r4.s64 = ctx.r10.s64 + -20684;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215ce88
	ctx.lr = 0x82115334;
	sub_8215CE88(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,296(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20644
	ctx.r4.s64 = ctx.r10.s64 + -20644;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215d090
	ctx.lr = 0x82115370;
	sub_8215D090(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,328(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 328);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20616
	ctx.r4.s64 = ctx.r10.s64 + -20616;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215d298
	ctx.lr = 0x821153AC;
	sub_8215D298(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r7,432(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 432);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r6,-20588
	ctx.r29.s64 = ctx.r6.s64 + -20588;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8215d4a0
	ctx.lr = 0x821153EC;
	sub_8215D4A0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// ld r8,376(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 376);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215d6a8
	ctx.lr = 0x82115424;
	sub_8215D6A8(ctx, base);
	// ld r6,408(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 408);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// ld r5,360(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 360);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r29,r11,-20540
	ctx.r29.s64 = ctx.r11.s64 + -20540;
	// addi r28,r10,-20556
	ctx.r28.s64 = ctx.r10.s64 + -20556;
	// addi r4,r4,-20576
	ctx.r4.s64 = ctx.r4.s64 + -20576;
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// stw r29,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// stw r28,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r28.u32);
	// bl 0x82123290
	ctx.lr = 0x82115454;
	sub_82123290(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ld r5,448(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 448);
	// bl 0x821232e0
	ctx.lr = 0x82115460;
	sub_821232E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,424(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 424);
	// bl 0x821232e0
	ctx.lr = 0x8211546C;
	sub_821232E0(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,-20520
	ctx.r29.s64 = ctx.r11.s64 + -20520;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215dae8
	ctx.lr = 0x821154A8;
	sub_8215DAE8(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// ld r5,480(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 480);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215dd20
	ctx.lr = 0x821154E0;
	sub_8215DD20(ctx, base);
	// ld r9,472(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 472);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// ld r5,464(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// addi r4,r8,-20508
	ctx.r4.s64 = ctx.r8.s64 + -20508;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bl 0x821232e0
	ctx.lr = 0x821154F8;
	sub_821232E0(ctx, base);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20492
	ctx.r4.s64 = ctx.r10.s64 + -20492;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215df58
	ctx.lr = 0x8211552C;
	sub_8215DF58(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r8,544(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 544);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-20480
	ctx.r4.s64 = ctx.r10.s64 + -20480;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215e160
	ctx.lr = 0x82115568;
	sub_8215E160(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// ld r7,536(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 536);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215e368
	ctx.lr = 0x821155A0;
	sub_8215E368(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// ld r8,560(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 560);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-20464
	ctx.r4.s64 = ctx.r7.s64 + -20464;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215e570
	ctx.lr = 0x821155DC;
	sub_8215E570(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// ld r9,552(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 552);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-20448
	ctx.r4.s64 = ctx.r11.s64 + -20448;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x8215e778
	ctx.lr = 0x8211561C;
	sub_8215E778(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r4,r1,1528
	ctx.r4.s64 = ctx.r1.s64 + 1528;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1528(r1)
	REX_STORE_U32(ctx.r1.u32 + 1528, ctx.r5.u32);
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82115640;
	sub_822009C8(ctx, base);
	// lwz r3,1856(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115660
	if (ctx.cr6.eq) goto loc_82115660;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115660:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r4,r11,31700
	ctx.r4.s64 = ctx.r11.s64 + 31700;
	// bl 0x82201b80
	ctx.lr = 0x82115670;
	sub_82201B80(ctx, base);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// stw r10,1000(r1)
	REX_STORE_U32(ctx.r1.u32 + 1000, ctx.r10.u32);
	// bl 0x8211bfd8
	ctx.lr = 0x82115680;
	sub_8211BFD8(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2088
	ctx.r3.s64 = ctx.r1.s64 + 2088;
	// bl 0x82123330
	ctx.lr = 0x82115694;
	sub_82123330(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1000(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1000);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x821156A4;
	sub_82202028(ctx, base);
	// lwz r6,1000(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// beq cr6,0x821156cc
	if (ctx.cr6.eq) goto loc_821156CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821156CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821156CC:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r31,-32240
	ctx.r31.s64 = -2112880640;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lis r30,-32240
	ctx.r30.s64 = -2112880640;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// lis r31,-32239
	ctx.r31.s64 = -2112815104;
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stw r31,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r29,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r31,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lwz r31,176(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r7,r7,-19912
	ctx.r7.s64 = ctx.r7.s64 + -19912;
	// lwz r29,96(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r6,-20040
	ctx.r6.s64 = ctx.r6.s64 + -20040;
	// lwz r28,100(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r5,-20060
	ctx.r5.s64 = ctx.r5.s64 + -20060;
	// lwz r27,104(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r31,r31,-19932
	ctx.r31.s64 = ctx.r31.s64 + -19932;
	// addi r30,r27,-20020
	ctx.r30.s64 = ctx.r27.s64 + -20020;
	// stw r7,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// addi r29,r29,-19952
	ctx.r29.s64 = ctx.r29.s64 + -19952;
	// stw r31,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// addi r28,r28,-19984
	ctx.r28.s64 = ctx.r28.s64 + -19984;
	// stw r30,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r30.u32);
	// addi r4,r4,-20084
	ctx.r4.s64 = ctx.r4.s64 + -20084;
	// stw r29,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r29.u32);
	// addi r3,r3,-20108
	ctx.r3.s64 = ctx.r3.s64 + -20108;
	// stw r28,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r28.u32);
	// addi r10,r10,-20136
	ctx.r10.s64 = ctx.r10.s64 + -20136;
	// stw r6,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// addi r9,r9,-20148
	ctx.r9.s64 = ctx.r9.s64 + -20148;
	// stw r5,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// addi r8,r8,-20160
	ctx.r8.s64 = ctx.r8.s64 + -20160;
	// stw r4,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// addi r11,r11,-20124
	ctx.r11.s64 = ctx.r11.s64 + -20124;
	// stw r3,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// stw r10,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lis r31,-32239
	ctx.r31.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r30,-32239
	ctx.r30.s64 = -2112815104;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r28,-32240
	ctx.r28.s64 = -2112880640;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// lis r25,-32176
	ctx.r25.s64 = -2108686336;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32240
	ctx.r23.s64 = -2112880640;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r15,r3,-20208
	ctx.r15.s64 = ctx.r3.s64 + -20208;
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r20,176(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r30,r30,-32512
	ctx.r30.s64 = ctx.r30.s64 + -32512;
	// lwz r21,172(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r19,r4,-20188
	ctx.r19.s64 = ctx.r4.s64 + -20188;
	// lwz r18,208(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r11,-20436
	ctx.r4.s64 = ctx.r11.s64 + -20436;
	// stw r3,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r21,r21,-20220
	ctx.r21.s64 = ctx.r21.s64 + -20220;
	// addi r5,r5,-31816
	ctx.r5.s64 = ctx.r5.s64 + -31816;
	// lwz r16,224(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stw r21,624(r1)
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r21.u32);
	// addi r8,r8,-32376
	ctx.r8.s64 = ctx.r8.s64 + -32376;
	// lwz r23,256(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// addi r24,r24,-20276
	ctx.r24.s64 = ctx.r24.s64 + -20276;
	// addi r31,r31,-31824
	ctx.r31.s64 = ctx.r31.s64 + -31824;
	// stw r30,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r17,212(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r6,r6,-31752
	ctx.r6.s64 = ctx.r6.s64 + -31752;
	// lwz r14,216(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r30,r29,22208
	ctx.r30.s64 = ctx.r29.s64 + 22208;
	// lwz r3,280(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// stw r19,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// addi r29,r28,30792
	ctx.r29.s64 = ctx.r28.s64 + 30792;
	// stw r5,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// addi r19,r16,26736
	ctx.r19.s64 = ctx.r16.s64 + 26736;
	// stw r8,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// addi r8,r11,-20420
	ctx.r8.s64 = ctx.r11.s64 + -20420;
	// addi r20,r20,-20248
	ctx.r20.s64 = ctx.r20.s64 + -20248;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r22,r22,-20300
	ctx.r22.s64 = ctx.r22.s64 + -20300;
	// stw r31,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r23,r23,22200
	ctx.r23.s64 = ctx.r23.s64 + 22200;
	// stw r6,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// addi r7,r7,-31744
	ctx.r7.s64 = ctx.r7.s64 + -31744;
	// stw r20,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r20.u32);
	// addi r10,r10,-32176
	ctx.r10.s64 = ctx.r10.s64 + -32176;
	// stw r19,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r19.u32);
	// addi r9,r9,-32304
	ctx.r9.s64 = ctx.r9.s64 + -32304;
	// stw r23,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r23.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r28,r27,23488
	ctx.r28.s64 = ctx.r27.s64 + 23488;
	// addi r18,r18,31408
	ctx.r18.s64 = ctx.r18.s64 + 31408;
	// stw r7,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r7.u32);
	// addi r17,r17,30856
	ctx.r17.s64 = ctx.r17.s64 + 30856;
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lwz r21,176(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r16,r14,-31384
	ctx.r16.s64 = ctx.r14.s64 + -31384;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r22,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// addi r21,r21,22192
	ctx.r21.s64 = ctx.r21.s64 + 22192;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r8,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r8.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r21,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r21.u32);
	// addi r27,r26,23480
	ctx.r27.s64 = ctx.r26.s64 + 23480;
	// stw r4,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r4.u32);
	// addi r26,r25,-2264
	ctx.r26.s64 = ctx.r25.s64 + -2264;
	// stw r15,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r25,r5,30752
	ctx.r25.s64 = ctx.r5.s64 + 30752;
	// stw r18,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r18.u32);
	// stw r17,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r17.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r16,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r16.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r23,-32240
	ctx.r23.s64 = -2112880640;
	// lis r22,-32240
	ctx.r22.s64 = -2112880640;
	// lis r21,-32240
	ctx.r21.s64 = -2112880640;
	// lis r20,-32240
	ctx.r20.s64 = -2112880640;
	// lis r19,-32240
	ctx.r19.s64 = -2112880640;
	// addi r5,r6,30912
	ctx.r5.s64 = ctx.r6.s64 + 30912;
	// addi r24,r24,-20320
	ctx.r24.s64 = ctx.r24.s64 + -20320;
	// addi r31,r31,-20360
	ctx.r31.s64 = ctx.r31.s64 + -20360;
	// addi r18,r10,-20388
	ctx.r18.s64 = ctx.r10.s64 + -20388;
	// addi r17,r9,-20404
	ctx.r17.s64 = ctx.r9.s64 + -20404;
	// addi r16,r7,30712
	ctx.r16.s64 = ctx.r7.s64 + 30712;
	// addi r15,r11,30520
	ctx.r15.s64 = ctx.r11.s64 + 30520;
	// addi r14,r8,30480
	ctx.r14.s64 = ctx.r8.s64 + 30480;
	// addi r23,r23,30400
	ctx.r23.s64 = ctx.r23.s64 + 30400;
	// addi r22,r22,30296
	ctx.r22.s64 = ctx.r22.s64 + 30296;
	// addi r21,r21,31592
	ctx.r21.s64 = ctx.r21.s64 + 31592;
	// addi r20,r20,31280
	ctx.r20.s64 = ctx.r20.s64 + 31280;
	// addi r19,r19,31064
	ctx.r19.s64 = ctx.r19.s64 + 31064;
	// bl 0x821233b0
	ctx.lr = 0x82115980;
	sub_821233B0(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82123400
	ctx.lr = 0x8211598C;
	sub_82123400(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82123468
	ctx.lr = 0x82115998;
	sub_82123468(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x821234d0
	ctx.lr = 0x821159A4;
	sub_821234D0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x821233b0
	ctx.lr = 0x821159B0;
	sub_821233B0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82123538
	ctx.lr = 0x821159BC;
	sub_82123538(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x821233b0
	ctx.lr = 0x821159C8;
	sub_821233B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x821235a0
	ctx.lr = 0x821159D4;
	sub_821235A0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82123608
	ctx.lr = 0x821159E0;
	sub_82123608(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82123608
	ctx.lr = 0x821159EC;
	sub_82123608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82123658
	ctx.lr = 0x821159F8;
	sub_82123658(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x821236c0
	ctx.lr = 0x82115A04;
	sub_821236C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,624(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82123728
	ctx.lr = 0x82115A10;
	sub_82123728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82123778
	ctx.lr = 0x82115A1C;
	sub_82123778(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82123608
	ctx.lr = 0x82115A28;
	sub_82123608(ctx, base);
	// lwz r4,348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x821237c8
	ctx.lr = 0x82115A34;
	sub_821237C8(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,212(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x821237c8
	ctx.lr = 0x82115A40;
	sub_821237C8(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,224(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82123778
	ctx.lr = 0x82115A4C;
	sub_82123778(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r5,216(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82123818
	ctx.lr = 0x82115A58;
	sub_82123818(ctx, base);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,260(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82123608
	ctx.lr = 0x82115A64;
	sub_82123608(ctx, base);
	// lwz r4,524(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r5,256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82123728
	ctx.lr = 0x82115A70;
	sub_82123728(ctx, base);
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,280(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82123608
	ctx.lr = 0x82115A7C;
	sub_82123608(ctx, base);
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r5,488(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x82123728
	ctx.lr = 0x82115A88;
	sub_82123728(ctx, base);
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r5,516(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x82123880
	ctx.lr = 0x82115A94;
	sub_82123880(ctx, base);
	// lwz r4,508(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,500(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82123880
	ctx.lr = 0x82115AA0;
	sub_82123880(ctx, base);
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r5,440(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x821238d0
	ctx.lr = 0x82115AAC;
	sub_821238D0(ctx, base);
	// lwz r31,344(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r5,392(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82123938
	ctx.lr = 0x82115ABC;
	sub_82123938(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,384(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82123988
	ctx.lr = 0x82115AC8;
	sub_82123988(ctx, base);
	// lwz r4,368(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r5,512(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82123938
	ctx.lr = 0x82115AD4;
	sub_82123938(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r29,196(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1536
	ctx.r4.s64 = ctx.r1.s64 + 1536;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r6,1536(r1)
	REX_STORE_U32(ctx.r1.u32 + 1536, ctx.r6.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82115B00;
	sub_822009C8(ctx, base);
	// lwz r3,992(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 992);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115b20
	if (ctx.cr6.eq) goto loc_82115B20;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115B20:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,32568
	ctx.r4.s64 = ctx.r11.s64 + 32568;
	// bl 0x82201b80
	ctx.lr = 0x82115B30;
	sub_82201B80(ctx, base);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// stw r10,1032(r1)
	REX_STORE_U32(ctx.r1.u32 + 1032, ctx.r10.u32);
	// bl 0x8211c0b0
	ctx.lr = 0x82115B40;
	sub_8211C0B0(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r3,r1,2096
	ctx.r3.s64 = ctx.r1.s64 + 2096;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// bl 0x821239f0
	ctx.lr = 0x82115B54;
	sub_821239F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1032(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1032);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82115B64;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1032(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115b88
	if (ctx.cr6.eq) goto loc_82115B88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115B88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1920
	ctx.r4.s64 = ctx.r1.s64 + 1920;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,1920(r1)
	REX_STORE_U32(ctx.r1.u32 + 1920, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82115BA8;
	sub_822009C8(ctx, base);
	// lwz r3,1024(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115bc8
	if (ctx.cr6.eq) goto loc_82115BC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115BC8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,2744
	ctx.r3.s64 = ctx.r1.s64 + 2744;
	// addi r4,r10,-19900
	ctx.r4.s64 = ctx.r10.s64 + -19900;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82119f30
	ctx.lr = 0x82115BE8;
	sub_82119F30(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x82160c10
	ctx.lr = 0x82115C00;
	sub_82160C10(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r6,-19884
	ctx.r4.s64 = ctx.r6.s64 + -19884;
	// addi r5,r7,22184
	ctx.r5.s64 = ctx.r7.s64 + 22184;
	// addi r30,r10,-19864
	ctx.r30.s64 = ctx.r10.s64 + -19864;
	// addi r28,r11,22136
	ctx.r28.s64 = ctx.r11.s64 + 22136;
	// bl 0x82123a70
	ctx.lr = 0x82115C24;
	sub_82123A70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82123ad8
	ctx.lr = 0x82115C30;
	sub_82123AD8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r4,r1,1140
	ctx.r4.s64 = ctx.r1.s64 + 1140;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1140(r1)
	REX_STORE_U32(ctx.r1.u32 + 1140, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82115C54;
	sub_822009C8(ctx, base);
	// lwz r3,2744(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2744);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115c74
	if (ctx.cr6.eq) goto loc_82115C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115C74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115C74:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r4,r11,-19848
	ctx.r4.s64 = ctx.r11.s64 + -19848;
	// addi r3,r1,2776
	ctx.r3.s64 = ctx.r1.s64 + 2776;
	// addi r30,r9,-19820
	ctx.r30.s64 = ctx.r9.s64 + -19820;
	// addi r28,r7,-19836
	ctx.r28.s64 = ctx.r7.s64 + -19836;
	// addi r27,r10,15400
	ctx.r27.s64 = ctx.r10.s64 + 15400;
	// addi r26,r8,15088
	ctx.r26.s64 = ctx.r8.s64 + 15088;
	// bl 0x8211a010
	ctx.lr = 0x82115CA4;
	sub_8211A010(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82123b40
	ctx.lr = 0x82115CB0;
	sub_82123B40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82123ba8
	ctx.lr = 0x82115CBC;
	sub_82123BA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r4,r1,1436
	ctx.r4.s64 = ctx.r1.s64 + 1436;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1436(r1)
	REX_STORE_U32(ctx.r1.u32 + 1436, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82115CE0;
	sub_822009C8(ctx, base);
	// lwz r3,2776(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2776);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115d00
	if (ctx.cr6.eq) goto loc_82115D00;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82115D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115D00:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-19772
	ctx.r9.s64 = ctx.r11.s64 + -19772;
	// addi r8,r10,-19788
	ctx.r8.s64 = ctx.r10.s64 + -19788;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// addi r9,r4,-19740
	ctx.r9.s64 = ctx.r4.s64 + -19740;
	// addi r8,r3,-19756
	ctx.r8.s64 = ctx.r3.s64 + -19756;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r6,-19708
	ctx.r11.s64 = ctx.r6.s64 + -19708;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r10,r5,-19724
	ctx.r10.s64 = ctx.r5.s64 + -19724;
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r7,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x821d5e18
	ctx.lr = 0x82115D84;
	sub_821D5E18(ctx, base);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// stw r3,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82115D98;
	sub_821D5F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d5f60
	ctx.lr = 0x82115DA4;
	sub_821D5F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x821d5f60
	ctx.lr = 0x82115DB0;
	sub_821D5F60(ctx, base);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d5f60
	ctx.lr = 0x82115DBC;
	sub_821D5F60(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// addi r4,r11,31716
	ctx.r4.s64 = ctx.r11.s64 + 31716;
	// bl 0x82201b80
	ctx.lr = 0x82115DCC;
	sub_82201B80(ctx, base);
	// addi r10,r1,1872
	ctx.r10.s64 = ctx.r1.s64 + 1872;
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// stw r10,1880(r1)
	REX_STORE_U32(ctx.r1.u32 + 1880, ctx.r10.u32);
	// bl 0x8211c188
	ctx.lr = 0x82115DDC;
	sub_8211C188(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r8,-18316
	ctx.r11.s64 = ctx.r8.s64 + -18316;
	// addi r10,r6,-18340
	ctx.r10.s64 = ctx.r6.s64 + -18340;
	// addi r8,r5,-18356
	ctx.r8.s64 = ctx.r5.s64 + -18356;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r9,22072
	ctx.r6.s64 = ctx.r9.s64 + 22072;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r5,r7,19656
	ctx.r5.s64 = ctx.r7.s64 + 19656;
	// stw r8,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// addi r3,r1,1872
	ctx.r3.s64 = ctx.r1.s64 + 1872;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r3,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r3.u32);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r6,r4,19632
	ctx.r6.s64 = ctx.r4.s64 + 19632;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r3,r3,19544
	ctx.r3.s64 = ctx.r3.s64 + 19544;
	// stw r6,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// addi r8,r8,19360
	ctx.r8.s64 = ctx.r8.s64 + 19360;
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
	// addi r10,r10,19408
	ctx.r10.s64 = ctx.r10.s64 + 19408;
	// stw r8,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// addi r3,r29,-18388
	ctx.r3.s64 = ctx.r29.s64 + -18388;
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r3,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r3.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r28,-32210
	ctx.r28.s64 = -2110914560;
	// addi r8,r4,19304
	ctx.r8.s64 = ctx.r4.s64 + 19304;
	// addi r7,r7,19336
	ctx.r7.s64 = ctx.r7.s64 + 19336;
	// addi r9,r9,19384
	ctx.r9.s64 = ctx.r9.s64 + 19384;
	// stw r8,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r7,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r7.u32);
	// addi r11,r27,-18416
	ctx.r11.s64 = ctx.r27.s64 + -18416;
	// stw r9,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// addi r10,r25,-18436
	ctx.r10.s64 = ctx.r25.s64 + -18436;
	// addi r4,r30,18920
	ctx.r4.s64 = ctx.r30.s64 + 18920;
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// addi r5,r5,-18468
	ctx.r5.s64 = ctx.r5.s64 + -18468;
	// stw r10,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r10.u32);
	// addi r3,r28,-9520
	ctx.r3.s64 = ctx.r28.s64 + -9520;
	// stw r4,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r4.u32);
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// stw r5,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r5.u32);
	// lis r26,-32210
	ctx.r26.s64 = -2110914560;
	// stw r3,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// lis r24,-32241
	ctx.r24.s64 = -2112946176;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32210
	ctx.r22.s64 = -2110914560;
	// addi r7,r6,19264
	ctx.r7.s64 = ctx.r6.s64 + 19264;
	// addi r9,r23,-18452
	ctx.r9.s64 = ctx.r23.s64 + -18452;
	// addi r6,r31,19224
	ctx.r6.s64 = ctx.r31.s64 + 19224;
	// stw r7,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r11,r26,-9520
	ctx.r11.s64 = ctx.r26.s64 + -9520;
	// stw r9,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r9.u32);
	// addi r10,r24,7008
	ctx.r10.s64 = ctx.r24.s64 + 7008;
	// stw r6,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r6.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// addi r5,r22,-9520
	ctx.r5.s64 = ctx.r22.s64 + -9520;
	// stw r10,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// addi r3,r1,2104
	ctx.r3.s64 = ctx.r1.s64 + 2104;
	// bl 0x82124c80
	ctx.lr = 0x82115F18;
	sub_82124C80(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r9,-18476
	ctx.r7.s64 = ctx.r9.s64 + -18476;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r7,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r7.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32177
	ctx.r23.s64 = -2108751872;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32241
	ctx.r21.s64 = -2112946176;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32241
	ctx.r19.s64 = -2112946176;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// addi r8,r8,-18496
	ctx.r8.s64 = ctx.r8.s64 + -18496;
	// addi r10,r10,-18516
	ctx.r10.s64 = ctx.r10.s64 + -18516;
	// stw r8,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r8.u32);
	// addi r8,r7,-18532
	ctx.r8.s64 = ctx.r7.s64 + -18532;
	// stw r3,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r3.u32);
	// addi r7,r30,-18548
	ctx.r7.s64 = ctx.r30.s64 + -18548;
	// stw r8,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r8.u32);
	// addi r8,r24,-18600
	ctx.r8.s64 = ctx.r24.s64 + -18600;
	// addi r3,r28,-18568
	ctx.r3.s64 = ctx.r28.s64 + -18568;
	// stw r10,680(r1)
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r10.u32);
	// stw r8,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r8.u32);
	// addi r8,r5,-9520
	ctx.r8.s64 = ctx.r5.s64 + -9520;
	// stw r7,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r7.u32);
	// addi r10,r26,-18584
	ctx.r10.s64 = ctx.r26.s64 + -18584;
	// stw r8,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r8.u32);
	// addi r8,r21,23728
	ctx.r8.s64 = ctx.r21.s64 + 23728;
	// stw r3,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r3.u32);
	// addi r7,r22,-18616
	ctx.r7.s64 = ctx.r22.s64 + -18616;
	// stw r8,784(r1)
	REX_STORE_U32(ctx.r1.u32 + 784, ctx.r8.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r3,r20,-18632
	ctx.r3.s64 = ctx.r20.s64 + -18632;
	// stw r10,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r10.u32);
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// addi r10,r6,20008
	ctx.r10.s64 = ctx.r6.s64 + 20008;
	// stw r7,752(r1)
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r7.u32);
	// addi r7,r4,22080
	ctx.r7.s64 = ctx.r4.s64 + 22080;
	// stw r3,808(r1)
	REX_STORE_U32(ctx.r1.u32 + 808, ctx.r3.u32);
	// addi r6,r11,18224
	ctx.r6.s64 = ctx.r11.s64 + 18224;
	// addi r5,r9,18160
	ctx.r5.s64 = ctx.r9.s64 + 18160;
	// stw r10,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// addi r4,r31,17888
	ctx.r4.s64 = ctx.r31.s64 + 17888;
	// stw r7,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r7.u32);
	// addi r3,r29,22112
	ctx.r3.s64 = ctx.r29.s64 + 22112;
	// stw r6,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r6.u32);
	// stw r5,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r5.u32);
	// addi r11,r27,21616
	ctx.r11.s64 = ctx.r27.s64 + 21616;
	// stw r4,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r4.u32);
	// addi r10,r25,22192
	ctx.r10.s64 = ctx.r25.s64 + 22192;
	// stw r3,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r3.u32);
	// addi r9,r23,-2776
	ctx.r9.s64 = ctx.r23.s64 + -2776;
	// addi r7,r19,14344
	ctx.r7.s64 = ctx.r19.s64 + 14344;
	// stw r11,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// addi r6,r18,-18668
	ctx.r6.s64 = ctx.r18.s64 + -18668;
	// stw r10,776(r1)
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r10.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r9,792(r1)
	REX_STORE_U32(ctx.r1.u32 + 792, ctx.r9.u32);
	// addi r4,r17,-18704
	ctx.r4.s64 = ctx.r17.s64 + -18704;
	// stw r7,816(r1)
	REX_STORE_U32(ctx.r1.u32 + 816, ctx.r7.u32);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r6,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, ctx.r6.u32);
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r4,744(r1)
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r4.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r3,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r9,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r7,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r5.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r4,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r4.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lwz r27,176(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32241
	ctx.r28.s64 = -2112946176;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r10,r10,-18736
	ctx.r10.s64 = ctx.r10.s64 + -18736;
	// addi r7,r7,-18840
	ctx.r7.s64 = ctx.r7.s64 + -18840;
	// lwz r21,104(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,920(r1)
	REX_STORE_U32(ctx.r1.u32 + 920, ctx.r10.u32);
	// addi r10,r29,-18904
	ctx.r10.s64 = ctx.r29.s64 + -18904;
	// lwz r16,212(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r5,-18864
	ctx.r5.s64 = ctx.r5.s64 + -18864;
	// lwz r25,96(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r3,-18884
	ctx.r3.s64 = ctx.r3.s64 + -18884;
	// lwz r19,172(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r27,r27,-18764
	ctx.r27.s64 = ctx.r27.s64 + -18764;
	// stw r7,1244(r1)
	REX_STORE_U32(ctx.r1.u32 + 1244, ctx.r7.u32);
	// addi r7,r21,14168
	ctx.r7.s64 = ctx.r21.s64 + 14168;
	// stw r10,1212(r1)
	REX_STORE_U32(ctx.r1.u32 + 1212, ctx.r10.u32);
	// addi r10,r16,14000
	ctx.r10.s64 = ctx.r16.s64 + 14000;
	// lwz r17,208(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r25,r25,-18788
	ctx.r25.s64 = ctx.r25.s64 + -18788;
	// lwz r11,256(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lis r18,-32227
	ctx.r18.s64 = -2112028672;
	// stw r5,1236(r1)
	REX_STORE_U32(ctx.r1.u32 + 1236, ctx.r5.u32);
	// addi r5,r19,14152
	ctx.r5.s64 = ctx.r19.s64 + 14152;
	// stw r3,1476(r1)
	REX_STORE_U32(ctx.r1.u32 + 1476, ctx.r3.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r7,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r7.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r10,936(r1)
	REX_STORE_U32(ctx.r1.u32 + 936, ctx.r10.u32);
	// addi r3,r17,14008
	ctx.r3.s64 = ctx.r17.s64 + 14008;
	// stw r27,896(r1)
	REX_STORE_U32(ctx.r1.u32 + 896, ctx.r27.u32);
	// addi r7,r11,13728
	ctx.r7.s64 = ctx.r11.s64 + 13728;
	// stw r25,1688(r1)
	REX_STORE_U32(ctx.r1.u32 + 1688, ctx.r25.u32);
	// addi r10,r4,13472
	ctx.r10.s64 = ctx.r4.s64 + 13472;
	// stw r5,760(r1)
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r5.u32);
	// addi r29,r24,-18928
	ctx.r29.s64 = ctx.r24.s64 + -18928;
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r27,r22,-18952
	ctx.r27.s64 = ctx.r22.s64 + -18952;
	// lwz r23,100(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r25,r20,-18972
	ctx.r25.s64 = ctx.r20.s64 + -18972;
	// lwz r15,224(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lis r26,-32176
	ctx.r26.s64 = -2108686336;
	// lwz r14,216(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r18,260(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r5,r9,13656
	ctx.r5.s64 = ctx.r9.s64 + 13656;
	// stw r3,888(r1)
	REX_STORE_U32(ctx.r1.u32 + 888, ctx.r3.u32);
	// addi r3,r8,13584
	ctx.r3.s64 = ctx.r8.s64 + 13584;
	// addi r11,r6,13568
	ctx.r11.s64 = ctx.r6.s64 + 13568;
	// stw r7,1260(r1)
	REX_STORE_U32(ctx.r1.u32 + 1260, ctx.r7.u32);
	// addi r9,r31,13392
	ctx.r9.s64 = ctx.r31.s64 + 13392;
	// stw r10,1668(r1)
	REX_STORE_U32(ctx.r1.u32 + 1668, ctx.r10.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r8,r30,13296
	ctx.r8.s64 = ctx.r30.s64 + 13296;
	// addi r7,r28,13216
	ctx.r7.s64 = ctx.r28.s64 + 13216;
	// stw r29,1204(r1)
	REX_STORE_U32(ctx.r1.u32 + 1204, ctx.r29.u32);
	// addi r6,r26,-2264
	ctx.r6.s64 = ctx.r26.s64 + -2264;
	// stw r27,1196(r1)
	REX_STORE_U32(ctx.r1.u32 + 1196, ctx.r27.u32);
	// stw r25,1180(r1)
	REX_STORE_U32(ctx.r1.u32 + 1180, ctx.r25.u32);
	// addi r23,r23,-18812
	ctx.r23.s64 = ctx.r23.s64 + -18812;
	// addi r29,r15,13984
	ctx.r29.s64 = ctx.r15.s64 + 13984;
	// stw r9,1228(r1)
	REX_STORE_U32(ctx.r1.u32 + 1228, ctx.r9.u32);
	// addi r27,r14,13896
	ctx.r27.s64 = ctx.r14.s64 + 13896;
	// stw r5,1492(r1)
	REX_STORE_U32(ctx.r1.u32 + 1492, ctx.r5.u32);
	// addi r25,r18,13816
	ctx.r25.s64 = ctx.r18.s64 + 13816;
	// stw r3,1804(r1)
	REX_STORE_U32(ctx.r1.u32 + 1804, ctx.r3.u32);
	// stw r11,1484(r1)
	REX_STORE_U32(ctx.r1.u32 + 1484, ctx.r11.u32);
	// addi r9,r10,-19076
	ctx.r9.s64 = ctx.r10.s64 + -19076;
	// stw r8,1220(r1)
	REX_STORE_U32(ctx.r1.u32 + 1220, ctx.r8.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r7,1916(r1)
	REX_STORE_U32(ctx.r1.u32 + 1916, ctx.r7.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// stw r6,1468(r1)
	REX_STORE_U32(ctx.r1.u32 + 1468, ctx.r6.u32);
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r23,1252(r1)
	REX_STORE_U32(ctx.r1.u32 + 1252, ctx.r23.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,904(r1)
	REX_STORE_U32(ctx.r1.u32 + 904, ctx.r29.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r27,912(r1)
	REX_STORE_U32(ctx.r1.u32 + 912, ctx.r27.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r25,928(r1)
	REX_STORE_U32(ctx.r1.u32 + 928, ctx.r25.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r3,23704
	ctx.r3.s64 = ctx.r3.s64 + 23704;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r5,18528
	ctx.r5.s64 = ctx.r5.s64 + 18528;
	// stw r9,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r9.u32);
	// stw r3,1788(r1)
	REX_STORE_U32(ctx.r1.u32 + 1788, ctx.r3.u32);
	// addi r4,r4,23720
	ctx.r4.s64 = ctx.r4.s64 + 23720;
	// addi r3,r8,18240
	ctx.r3.s64 = ctx.r8.s64 + 18240;
	// stw r5,1460(r1)
	REX_STORE_U32(ctx.r1.u32 + 1460, ctx.r5.u32);
	// addi r30,r30,22120
	ctx.r30.s64 = ctx.r30.s64 + 22120;
	// stw r4,1188(r1)
	REX_STORE_U32(ctx.r1.u32 + 1188, ctx.r4.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r3,1452(r1)
	REX_STORE_U32(ctx.r1.u32 + 1452, ctx.r3.u32);
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// stw r30,1652(r1)
	REX_STORE_U32(ctx.r1.u32 + 1652, ctx.r30.u32);
	// addi r7,r7,-18992
	ctx.r7.s64 = ctx.r7.s64 + -18992;
	// addi r6,r6,-19016
	ctx.r6.s64 = ctx.r6.s64 + -19016;
	// addi r5,r10,-19040
	ctx.r5.s64 = ctx.r10.s64 + -19040;
	// stw r7,1172(r1)
	REX_STORE_U32(ctx.r1.u32 + 1172, ctx.r7.u32);
	// addi r4,r31,-19060
	ctx.r4.s64 = ctx.r31.s64 + -19060;
	// stw r6,1164(r1)
	REX_STORE_U32(ctx.r1.u32 + 1164, ctx.r6.u32);
	// addi r3,r26,12056
	ctx.r3.s64 = ctx.r26.s64 + 12056;
	// stw r5,1156(r1)
	REX_STORE_U32(ctx.r1.u32 + 1156, ctx.r5.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// stw r4,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r4.u32);
	// lis r30,-32177
	ctx.r30.s64 = -2108751872;
	// stw r3,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r3.u32);
	// lis r28,-32241
	ctx.r28.s64 = -2112946176;
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// addi r10,r29,27528
	ctx.r10.s64 = ctx.r29.s64 + 27528;
	// addi r8,r30,-25040
	ctx.r8.s64 = ctx.r30.s64 + -25040;
	// addi r7,r28,14496
	ctx.r7.s64 = ctx.r28.s64 + 14496;
	// stw r10,1636(r1)
	REX_STORE_U32(ctx.r1.u32 + 1636, ctx.r10.u32);
	// addi r6,r27,12416
	ctx.r6.s64 = ctx.r27.s64 + 12416;
	// stw r8,1444(r1)
	REX_STORE_U32(ctx.r1.u32 + 1444, ctx.r8.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// stw r7,1852(r1)
	REX_STORE_U32(ctx.r1.u32 + 1852, ctx.r7.u32);
	// addi r5,r11,12232
	ctx.r5.s64 = ctx.r11.s64 + 12232;
	// stw r6,1132(r1)
	REX_STORE_U32(ctx.r1.u32 + 1132, ctx.r6.u32);
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82124218
	ctx.lr = 0x821162B0;
	sub_82124218(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lwz r26,176(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r11,r10,-19104
	ctx.r11.s64 = ctx.r10.s64 + -19104;
	// addi r10,r9,-19136
	ctx.r10.s64 = ctx.r9.s64 + -19136;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r11,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r26,r26,-19120
	ctx.r26.s64 = ctx.r26.s64 + -19120;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r26,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r26.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// lis r28,-32241
	ctx.r28.s64 = -2112946176;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r25,-32241
	ctx.r25.s64 = -2112946176;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// addi r15,r4,-19180
	ctx.r15.s64 = ctx.r4.s64 + -19180;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// stw r3,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r3.u32);
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r7,r7,-19216
	ctx.r7.s64 = ctx.r7.s64 + -19216;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r10,r10,-19256
	ctx.r10.s64 = ctx.r10.s64 + -19256;
	// stw r4,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r5,r5,-19240
	ctx.r5.s64 = ctx.r5.s64 + -19240;
	// lwz r17,172(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// addi r9,r9,10696
	ctx.r9.s64 = ctx.r9.s64 + 10696;
	// stw r7,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r7.u32);
	// addi r3,r11,11752
	ctx.r3.s64 = ctx.r11.s64 + 11752;
	// stw r10,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r10.u32);
	// addi r10,r17,11128
	ctx.r10.s64 = ctx.r17.s64 + 11128;
	// lwz r16,104(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r8,10680
	ctx.r8.s64 = ctx.r8.s64 + 10680;
	// stw r5,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r5.u32);
	// addi r6,r6,10520
	ctx.r6.s64 = ctx.r6.s64 + 10520;
	// stw r10,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// addi r5,r16,11832
	ctx.r5.s64 = ctx.r16.s64 + 11832;
	// stw r9,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// addi r10,r25,9368
	ctx.r10.s64 = ctx.r25.s64 + 9368;
	// addi r9,r23,9336
	ctx.r9.s64 = ctx.r23.s64 + 9336;
	// stw r5,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r5.u32);
	// addi r11,r31,11560
	ctx.r11.s64 = ctx.r31.s64 + 11560;
	// stw r10,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// addi r5,r28,11392
	ctx.r5.s64 = ctx.r28.s64 + 11392;
	// stw r9,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// stw r8,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r8.u32);
	// addi r30,r30,-19280
	ctx.r30.s64 = ctx.r30.s64 + -19280;
	// stw r6,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r6.u32);
	// addi r8,r22,-19348
	ctx.r8.s64 = ctx.r22.s64 + -19348;
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// addi r6,r26,-19380
	ctx.r6.s64 = ctx.r26.s64 + -19380;
	// stw r5,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r5.u32);
	// addi r11,r20,-19440
	ctx.r11.s64 = ctx.r20.s64 + -19440;
	// addi r5,r18,-19484
	ctx.r5.s64 = ctx.r18.s64 + -19484;
	// stw r15,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r15.u32);
	// stw r3,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r3.u32);
	// addi r27,r27,-19300
	ctx.r27.s64 = ctx.r27.s64 + -19300;
	// addi r24,r24,-19324
	ctx.r24.s64 = ctx.r24.s64 + -19324;
	// stw r30,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r15,r14,22128
	ctx.r15.s64 = ctx.r14.s64 + 22128;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r21,-19412
	ctx.r3.s64 = ctx.r21.s64 + -19412;
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,-19500
	ctx.r10.s64 = ctx.r10.s64 + -19500;
	// addi r9,r9,-19524
	ctx.r9.s64 = ctx.r9.s64 + -19524;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r7,r7,11968
	ctx.r7.s64 = ctx.r7.s64 + 11968;
	// stw r6,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r7,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r7.u32);
	// addi r7,r29,11472
	ctx.r7.s64 = ctx.r29.s64 + 11472;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// addi r7,r19,-19468
	ctx.r7.s64 = ctx.r19.s64 + -19468;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lis r31,-32241
	ctx.r31.s64 = -2112946176;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r30,-32241
	ctx.r30.s64 = -2112946176;
	// stw r27,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r24,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r24.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r15,528(r1)
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r15.u32);
	// lis r29,-32241
	ctx.r29.s64 = -2112946176;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// lis r28,-32241
	ctx.r28.s64 = -2112946176;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r5,r5,-19548
	ctx.r5.s64 = ctx.r5.s64 + -19548;
	// addi r3,r3,-19568
	ctx.r3.s64 = ctx.r3.s64 + -19568;
	// addi r24,r24,-19588
	ctx.r24.s64 = ctx.r24.s64 + -19588;
	// stw r5,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r22,r22,-19628
	ctx.r22.s64 = ctx.r22.s64 + -19628;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// stw r22,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// lis r27,-32241
	ctx.r27.s64 = -2112946176;
	// lis r26,-32241
	ctx.r26.s64 = -2112946176;
	// lis r25,-32241
	ctx.r25.s64 = -2112946176;
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lis r21,-32241
	ctx.r21.s64 = -2112946176;
	// lis r19,-32241
	ctx.r19.s64 = -2112946176;
	// addi r5,r8,-9520
	ctx.r5.s64 = ctx.r8.s64 + -9520;
	// addi r3,r1,2120
	ctx.r3.s64 = ctx.r1.s64 + 2120;
	// addi r24,r20,-19660
	ctx.r24.s64 = ctx.r20.s64 + -19660;
	// addi r22,r18,-19692
	ctx.r22.s64 = ctx.r18.s64 + -19692;
	// addi r20,r6,9296
	ctx.r20.s64 = ctx.r6.s64 + 9296;
	// addi r31,r31,9256
	ctx.r31.s64 = ctx.r31.s64 + 9256;
	// addi r18,r11,9224
	ctx.r18.s64 = ctx.r11.s64 + 9224;
	// addi r17,r7,9192
	ctx.r17.s64 = ctx.r7.s64 + 9192;
	// addi r30,r30,9160
	ctx.r30.s64 = ctx.r30.s64 + 9160;
	// addi r16,r10,9064
	ctx.r16.s64 = ctx.r10.s64 + 9064;
	// addi r15,r9,8872
	ctx.r15.s64 = ctx.r9.s64 + 8872;
	// addi r29,r29,8832
	ctx.r29.s64 = ctx.r29.s64 + 8832;
	// addi r28,r28,8648
	ctx.r28.s64 = ctx.r28.s64 + 8648;
	// addi r27,r27,8544
	ctx.r27.s64 = ctx.r27.s64 + 8544;
	// addi r26,r26,8512
	ctx.r26.s64 = ctx.r26.s64 + 8512;
	// addi r25,r25,8416
	ctx.r25.s64 = ctx.r25.s64 + 8416;
	// addi r23,r23,8248
	ctx.r23.s64 = ctx.r23.s64 + 8248;
	// addi r21,r21,8184
	ctx.r21.s64 = ctx.r21.s64 + 8184;
	// addi r19,r19,8048
	ctx.r19.s64 = ctx.r19.s64 + 8048;
	// bl 0x82123c10
	ctx.lr = 0x82116534;
	sub_82123C10(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwz r4,280(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// addi r3,r1,348
	ctx.r3.s64 = ctx.r1.s64 + 348;
	// bl 0x82119cc8
	ctx.lr = 0x82116544;
	sub_82119CC8(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x82116550;
	sub_82118928(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x82123c90
	ctx.lr = 0x8211655C;
	sub_82123C90(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82123cf8
	ctx.lr = 0x82116568;
	sub_82123CF8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82123d60
	ctx.lr = 0x82116574;
	sub_82123D60(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82123dc8
	ctx.lr = 0x82116580;
	sub_82123DC8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82123e18
	ctx.lr = 0x8211658C;
	sub_82123E18(ctx, base);
	// lwz r26,104(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82123e68
	ctx.lr = 0x8211659C;
	sub_82123E68(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82123eb8
	ctx.lr = 0x821165A8;
	sub_82123EB8(ctx, base);
	// lwz r28,172(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82123f20
	ctx.lr = 0x821165B8;
	sub_82123F20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x82123f70
	ctx.lr = 0x821165C4;
	sub_82123F70(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82123dc8
	ctx.lr = 0x821165D0;
	sub_82123DC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,212(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82123e18
	ctx.lr = 0x821165DC;
	sub_82123E18(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,224(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82123dc8
	ctx.lr = 0x821165E8;
	sub_82123DC8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82123e18
	ctx.lr = 0x821165F4;
	sub_82123E18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x82123e68
	ctx.lr = 0x82116600;
	sub_82123E68(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,256(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82123f20
	ctx.lr = 0x8211660C;
	sub_82123F20(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82123dc8
	ctx.lr = 0x82116618;
	sub_82123DC8(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r5,352(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82123e18
	ctx.lr = 0x82116624;
	sub_82123E18(ctx, base);
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r5,524(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82123e18
	ctx.lr = 0x82116630;
	sub_82123E18(ctx, base);
	// lwz r31,284(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r5,220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82123f20
	ctx.lr = 0x82116640;
	sub_82123F20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,488(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x82123f70
	ctx.lr = 0x8211664C;
	sub_82123F70(ctx, base);
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r5,516(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// bl 0x82123e18
	ctx.lr = 0x82116658;
	sub_82123E18(ctx, base);
	// lwz r4,508(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// lwz r5,500(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// bl 0x82123fc0
	ctx.lr = 0x82116664;
	sub_82123FC0(ctx, base);
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r5,440(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x82124028
	ctx.lr = 0x82116670;
	sub_82124028(ctx, base);
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r5,392(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// bl 0x82124090
	ctx.lr = 0x8211667C;
	sub_82124090(ctx, base);
	// lwz r4,384(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r5,368(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82123e18
	ctx.lr = 0x82116688;
	sub_82123E18(ctx, base);
	// lwz r31,512(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r5,596(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821240f8
	ctx.lr = 0x82116698;
	sub_821240F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,608(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82124160
	ctx.lr = 0x821166A4;
	sub_82124160(ctx, base);
	// lwz r4,600(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r5,528(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x821241c8
	ctx.lr = 0x821166B0;
	sub_821241C8(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x82118928
	ctx.lr = 0x821166BC;
	sub_82118928(ctx, base);
	// lwz r4,496(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// lwz r5,492(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x82123dc8
	ctx.lr = 0x821166C8;
	sub_82123DC8(ctx, base);
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r5,1132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1132);
	// bl 0x82124298
	ctx.lr = 0x821166D4;
	sub_82124298(ctx, base);
	// lwz r4,520(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r5,1852(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1852);
	// bl 0x82124300
	ctx.lr = 0x821166E0;
	sub_82124300(ctx, base);
	// lwz r4,1156(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1156);
	// lwz r5,1444(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1444);
	// bl 0x82124350
	ctx.lr = 0x821166EC;
	sub_82124350(ctx, base);
	// lwz r4,1164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1164);
	// lwz r5,1636(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// bl 0x82124350
	ctx.lr = 0x821166F8;
	sub_82124350(ctx, base);
	// lwz r4,1172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r5,1452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1452);
	// bl 0x821243a0
	ctx.lr = 0x82116704;
	sub_821243A0(ctx, base);
	// lwz r31,1180(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1180);
	// lwz r5,1788(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1788);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124408
	ctx.lr = 0x82116714;
	sub_82124408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1188);
	// bl 0x82124470
	ctx.lr = 0x82116720;
	sub_82124470(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1460(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1460);
	// bl 0x821244d8
	ctx.lr = 0x8211672C;
	sub_821244D8(ctx, base);
	// lwz r4,1196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1196);
	// lwz r5,1652(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// bl 0x82124300
	ctx.lr = 0x82116738;
	sub_82124300(ctx, base);
	// lwz r4,1204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1204);
	// lwz r5,1468(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1468);
	// bl 0x821241c8
	ctx.lr = 0x82116744;
	sub_821241C8(ctx, base);
	// lwz r31,1212(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1212);
	// lwz r5,1916(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1916);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124540
	ctx.lr = 0x82116754;
	sub_82124540(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1220(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1220);
	// bl 0x82124590
	ctx.lr = 0x82116760;
	sub_82124590(ctx, base);
	// lwz r31,1476(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1476);
	// lwz r5,1228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821245e0
	ctx.lr = 0x82116770;
	sub_821245E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1668(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// bl 0x82124630
	ctx.lr = 0x8211677C;
	sub_82124630(ctx, base);
	// lwz r4,1236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1236);
	// lwz r5,1484(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1484);
	// bl 0x82124680
	ctx.lr = 0x82116788;
	sub_82124680(ctx, base);
	// lwz r4,1244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r5,1804(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1804);
	// bl 0x82124540
	ctx.lr = 0x82116794;
	sub_82124540(ctx, base);
	// lwz r31,1252(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1252);
	// lwz r5,1492(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1492);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124590
	ctx.lr = 0x821167A4;
	sub_82124590(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1260(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x821246d0
	ctx.lr = 0x821167B0;
	sub_821246D0(ctx, base);
	// lwz r31,1688(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1688);
	// lwz r5,928(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 928);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124738
	ctx.lr = 0x821167C0;
	sub_82124738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,912(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 912);
	// bl 0x821247a0
	ctx.lr = 0x821167CC;
	sub_821247A0(ctx, base);
	// lwz r4,896(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 896);
	// lwz r5,904(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 904);
	// bl 0x82124808
	ctx.lr = 0x821167D8;
	sub_82124808(ctx, base);
	// lwz r31,920(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 920);
	// lwz r5,936(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 936);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124540
	ctx.lr = 0x821167E8;
	sub_82124540(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,888(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 888);
	// bl 0x82124590
	ctx.lr = 0x821167F4;
	sub_82124590(ctx, base);
	// lwz r31,744(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r5,760(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821245e0
	ctx.lr = 0x82116804;
	sub_821245E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,728(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// bl 0x82124630
	ctx.lr = 0x82116810;
	sub_82124630(ctx, base);
	// lwz r4,800(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r5,816(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82124680
	ctx.lr = 0x8211681C;
	sub_82124680(ctx, base);
	// lwz r4,808(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 808);
	// lwz r5,784(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82124870
	ctx.lr = 0x82116828;
	sub_82124870(ctx, base);
	// lwz r4,752(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// lwz r5,792(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// bl 0x821248d8
	ctx.lr = 0x82116834;
	sub_821248D8(ctx, base);
	// lwz r4,768(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// lwz r5,776(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 776);
	// bl 0x82124940
	ctx.lr = 0x82116840;
	sub_82124940(ctx, base);
	// lwz r4,736(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r5,656(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x821249a8
	ctx.lr = 0x8211684C;
	sub_821249A8(ctx, base);
	// lwz r4,672(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r5,688(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82124a10
	ctx.lr = 0x82116858;
	sub_82124A10(ctx, base);
	// lwz r4,704(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r5,720(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82124a78
	ctx.lr = 0x82116864;
	sub_82124A78(ctx, base);
	// lwz r4,696(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r5,712(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// bl 0x82124ae0
	ctx.lr = 0x82116870;
	sub_82124AE0(ctx, base);
	// lwz r4,680(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r5,648(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// bl 0x821241c8
	ctx.lr = 0x8211687C;
	sub_821241C8(ctx, base);
	// lwz r4,664(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r5,640(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82124b48
	ctx.lr = 0x82116888;
	sub_82124B48(ctx, base);
	// lwz r4,616(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r5,632(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// bl 0x82124bb0
	ctx.lr = 0x82116894;
	sub_82124BB0(ctx, base);
	// lwz r4,552(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r5,560(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82124c18
	ctx.lr = 0x821168A0;
	sub_82124C18(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,536(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// bl 0x82118928
	ctx.lr = 0x821168AC;
	sub_82118928(ctx, base);
	// lwz r4,544(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r5,464(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82124d00
	ctx.lr = 0x821168B8;
	sub_82124D00(ctx, base);
	// lwz r4,472(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r5,480(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82124d68
	ctx.lr = 0x821168C4;
	sub_82124D68(ctx, base);
	// lwz r4,424(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r5,448(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82124dd0
	ctx.lr = 0x821168D0;
	sub_82124DD0(ctx, base);
	// lwz r4,360(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r5,408(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// bl 0x82124300
	ctx.lr = 0x821168DC;
	sub_82124300(ctx, base);
	// lwz r4,376(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r5,432(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82124e38
	ctx.lr = 0x821168E8;
	sub_82124E38(ctx, base);
	// lwz r4,328(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r5,296(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82124e38
	ctx.lr = 0x821168F4;
	sub_82124E38(ctx, base);
	// lwz r31,304(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r5,320(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82124e88
	ctx.lr = 0x82116904;
	sub_82124E88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82124ef0
	ctx.lr = 0x82116910;
	sub_82124EF0(ctx, base);
	// lwz r4,312(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r5,288(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82123e18
	ctx.lr = 0x8211691C;
	sub_82123E18(ctx, base);
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r5,272(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82124f58
	ctx.lr = 0x82116928;
	sub_82124F58(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,264(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82123e18
	ctx.lr = 0x82116934;
	sub_82123E18(ctx, base);
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x821241c8
	ctx.lr = 0x82116940;
	sub_821241C8(ctx, base);
	// lwz r4,624(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// lwz r5,200(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x821241c8
	ctx.lr = 0x8211694C;
	sub_821241C8(ctx, base);
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82124fc0
	ctx.lr = 0x82116958;
	sub_82124FC0(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82124300
	ctx.lr = 0x82116964;
	sub_82124300(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x821241c8
	ctx.lr = 0x82116970;
	sub_821241C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,1296
	ctx.r4.s64 = ctx.r1.s64 + 1296;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,1296(r1)
	REX_STORE_U32(ctx.r1.u32 + 1296, ctx.r8.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x822009c8
	ctx.lr = 0x8211699C;
	sub_822009C8(ctx, base);
	// lwz r3,1872(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821169bc
	if (ctx.cr6.eq) goto loc_821169BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821169BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821169BC:
	// addi r3,r1,3488
	ctx.r3.s64 = ctx.r1.s64 + 3488;
	// bl 0x821d5d58
	ctx.lr = 0x821169C4;
	sub_821D5D58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// addi r4,r11,32588
	ctx.r4.s64 = ctx.r11.s64 + 32588;
	// bl 0x82201b80
	ctx.lr = 0x821169D4;
	sub_82201B80(ctx, base);
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// stw r10,1064(r1)
	REX_STORE_U32(ctx.r1.u32 + 1064, ctx.r10.u32);
	// bl 0x8211c260
	ctx.lr = 0x821169E4;
	sub_8211C260(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r3,r1,2128
	ctx.r3.s64 = ctx.r1.s64 + 2128;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// bl 0x82125028
	ctx.lr = 0x821169F8;
	sub_82125028(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1064(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82116A08;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,1064(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116a2c
	if (ctx.cr6.eq) goto loc_82116A2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82116A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82116A2C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r5,r5,-18192
	ctx.r5.s64 = ctx.r5.s64 + -18192;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r10,r10,-18096
	ctx.r10.s64 = ctx.r10.s64 + -18096;
	// addi r9,r9,-18112
	ctx.r9.s64 = ctx.r9.s64 + -18112;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// stw r10,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r5,r3,-8472
	ctx.r5.s64 = ctx.r3.s64 + -8472;
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// addi r31,r22,-18224
	ctx.r31.s64 = ctx.r22.s64 + -18224;
	// addi r22,r20,-18236
	ctx.r22.s64 = ctx.r20.s64 + -18236;
	// lwz r18,120(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r4,-18216
	ctx.r10.s64 = ctx.r4.s64 + -18216;
	// stw r14,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// addi r8,r8,-18124
	ctx.r8.s64 = ctx.r8.s64 + -18124;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r7,r7,-18144
	ctx.r7.s64 = ctx.r7.s64 + -18144;
	// addi r6,r6,-18160
	ctx.r6.s64 = ctx.r6.s64 + -18160;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lis r30,-32240
	ctx.r30.s64 = -2112880640;
	// stw r7,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lis r29,-32240
	ctx.r29.s64 = -2112880640;
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lis r28,-32240
	ctx.r28.s64 = -2112880640;
	// lis r27,-32240
	ctx.r27.s64 = -2112880640;
	// lis r26,-32240
	ctx.r26.s64 = -2112880640;
	// lis r25,-32240
	ctx.r25.s64 = -2112880640;
	// lis r24,-32240
	ctx.r24.s64 = -2112880640;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r19,-32227
	ctx.r19.s64 = -2112028672;
	// lis r16,-32227
	ctx.r16.s64 = -2112028672;
	// addi r20,r17,-18252
	ctx.r20.s64 = ctx.r17.s64 + -18252;
	// addi r4,r11,-18300
	ctx.r4.s64 = ctx.r11.s64 + -18300;
	// addi r17,r15,-18260
	ctx.r17.s64 = ctx.r15.s64 + -18260;
	// addi r15,r14,-18284
	ctx.r15.s64 = ctx.r14.s64 + -18284;
	// addi r18,r18,15472
	ctx.r18.s64 = ctx.r18.s64 + 15472;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r30,r30,10464
	ctx.r30.s64 = ctx.r30.s64 + 10464;
	// addi r29,r29,10424
	ctx.r29.s64 = ctx.r29.s64 + 10424;
	// addi r28,r28,8992
	ctx.r28.s64 = ctx.r28.s64 + 8992;
	// addi r27,r27,8960
	ctx.r27.s64 = ctx.r27.s64 + 8960;
	// addi r26,r26,8920
	ctx.r26.s64 = ctx.r26.s64 + 8920;
	// addi r25,r25,10048
	ctx.r25.s64 = ctx.r25.s64 + 10048;
	// addi r24,r24,9992
	ctx.r24.s64 = ctx.r24.s64 + 9992;
	// addi r23,r23,22040
	ctx.r23.s64 = ctx.r23.s64 + 22040;
	// addi r21,r21,22048
	ctx.r21.s64 = ctx.r21.s64 + 22048;
	// addi r19,r19,22056
	ctx.r19.s64 = ctx.r19.s64 + 22056;
	// addi r16,r16,22064
	ctx.r16.s64 = ctx.r16.s64 + 22064;
	// addi r14,r9,-8480
	ctx.r14.s64 = ctx.r9.s64 + -8480;
	// bl 0x821250a8
	ctx.lr = 0x82116B38;
	sub_821250A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x821250a8
	ctx.lr = 0x82116B44;
	sub_821250A8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x821250f8
	ctx.lr = 0x82116B50;
	sub_821250F8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x821250f8
	ctx.lr = 0x82116B5C;
	sub_821250F8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x821250f8
	ctx.lr = 0x82116B68;
	sub_821250F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x821250f8
	ctx.lr = 0x82116B74;
	sub_821250F8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82125148
	ctx.lr = 0x82116B80;
	sub_82125148(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821251b0
	ctx.lr = 0x82116B8C;
	sub_821251B0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82125218
	ctx.lr = 0x82116B98;
	sub_82125218(ctx, base);
	// lwz r31,184(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82125280
	ctx.lr = 0x82116BA8;
	sub_82125280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821252e8
	ctx.lr = 0x82116BB4;
	sub_821252E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82125350
	ctx.lr = 0x82116BC0;
	sub_82125350(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x821253b8
	ctx.lr = 0x82116BCC;
	sub_821253B8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82125420
	ctx.lr = 0x82116BD8;
	sub_82125420(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r30,196(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1304
	ctx.r4.s64 = ctx.r1.s64 + 1304;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r7,1304(r1)
	REX_STORE_U32(ctx.r1.u32 + 1304, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82116C04;
	sub_822009C8(ctx, base);
	// lwz r3,1056(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1056);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116c24
	if (ctx.cr6.eq) goto loc_82116C24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82116C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82116C24:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// addi r4,r11,31940
	ctx.r4.s64 = ctx.r11.s64 + 31940;
	// bl 0x82201b80
	ctx.lr = 0x82116C34;
	sub_82201B80(ctx, base);
	// addi r10,r1,1888
	ctx.r10.s64 = ctx.r1.s64 + 1888;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// stw r10,1896(r1)
	REX_STORE_U32(ctx.r1.u32 + 1896, ctx.r10.u32);
	// bl 0x8211c338
	ctx.lr = 0x82116C44;
	sub_8211C338(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r5,r9,25248
	ctx.r5.s64 = ctx.r9.s64 + 25248;
	// addi r4,r8,-18076
	ctx.r4.s64 = ctx.r8.s64 + -18076;
	// addi r3,r1,1888
	ctx.r3.s64 = ctx.r1.s64 + 1888;
	// bl 0x82125488
	ctx.lr = 0x82116C5C;
	sub_82125488(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,1312(r1)
	REX_STORE_U32(ctx.r1.u32 + 1312, ctx.r6.u32);
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82116C80;
	sub_822009C8(ctx, base);
	// lwz r3,1888(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1888);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116ca0
	if (ctx.cr6.eq) goto loc_82116CA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82116CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82116CA0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// addi r4,r11,32600
	ctx.r4.s64 = ctx.r11.s64 + 32600;
	// bl 0x82201b80
	ctx.lr = 0x82116CB0;
	sub_82201B80(ctx, base);
	// addi r10,r1,1904
	ctx.r10.s64 = ctx.r1.s64 + 1904;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// stw r10,1912(r1)
	REX_STORE_U32(ctx.r1.u32 + 1912, ctx.r10.u32);
	// bl 0x8211c410
	ctx.lr = 0x82116CC0;
	sub_8211C410(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r7,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r28,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// addi r6,r6,-17728
	ctx.r6.s64 = ctx.r6.s64 + -17728;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// stw r26,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// stw r6,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r6.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r28,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r28.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r27,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
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
	// addi r5,r5,-17820
	ctx.r5.s64 = ctx.r5.s64 + -17820;
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// addi r4,r4,-17848
	ctx.r4.s64 = ctx.r4.s64 + -17848;
	// stw r5,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r5.u32);
	// addi r3,r3,-17864
	ctx.r3.s64 = ctx.r3.s64 + -17864;
	// lwz r25,144(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,-17884
	ctx.r11.s64 = ctx.r11.s64 + -17884;
	// lwz r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r10,-17900
	ctx.r10.s64 = ctx.r10.s64 + -17900;
	// addi r6,r25,-17792
	ctx.r6.s64 = ctx.r25.s64 + -17792;
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,-17744
	ctx.r28.s64 = ctx.r28.s64 + -17744;
	// stw r4,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r4.u32);
	// stw r6,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r6.u32);
	// addi r6,r31,-18004
	ctx.r6.s64 = ctx.r31.s64 + -18004;
	// addi r26,r26,-17764
	ctx.r26.s64 = ctx.r26.s64 + -17764;
	// stw r28,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r28.u32);
	// addi r9,r9,-17920
	ctx.r9.s64 = ctx.r9.s64 + -17920;
	// stw r3,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// addi r8,r8,-17948
	ctx.r8.s64 = ctx.r8.s64 + -17948;
	// stw r26,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// addi r7,r7,-17976
	ctx.r7.s64 = ctx.r7.s64 + -17976;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r10,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r10.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r5,r30,26336
	ctx.r5.s64 = ctx.r30.s64 + 26336;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r4,r29,-18056
	ctx.r4.s64 = ctx.r29.s64 + -18056;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// addi r30,r27,-18020
	ctx.r30.s64 = ctx.r27.s64 + -18020;
	// addi r27,r22,-18032
	ctx.r27.s64 = ctx.r22.s64 + -18032;
	// lwz r29,160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r21,r11,21944
	ctx.r21.s64 = ctx.r11.s64 + 21944;
	// lwz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r22,184(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r29,r29,21912
	ctx.r29.s64 = ctx.r29.s64 + 21912;
	// lwz r20,232(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r19,r11,21928
	ctx.r19.s64 = ctx.r11.s64 + 21928;
	// addi r22,r22,21920
	ctx.r22.s64 = ctx.r22.s64 + 21920;
	// addi r20,r20,21936
	ctx.r20.s64 = ctx.r20.s64 + 21936;
	// addi r18,r10,21952
	ctx.r18.s64 = ctx.r10.s64 + 21952;
	// addi r17,r9,21960
	ctx.r17.s64 = ctx.r9.s64 + 21960;
	// addi r16,r8,21968
	ctx.r16.s64 = ctx.r8.s64 + 21968;
	// addi r15,r7,21976
	ctx.r15.s64 = ctx.r7.s64 + 21976;
	// addi r14,r6,21984
	ctx.r14.s64 = ctx.r6.s64 + 21984;
	// addi r31,r31,21992
	ctx.r31.s64 = ctx.r31.s64 + 21992;
	// addi r28,r28,22000
	ctx.r28.s64 = ctx.r28.s64 + 22000;
	// addi r26,r26,22008
	ctx.r26.s64 = ctx.r26.s64 + 22008;
	// addi r25,r25,22016
	ctx.r25.s64 = ctx.r25.s64 + 22016;
	// addi r24,r24,22040
	ctx.r24.s64 = ctx.r24.s64 + 22040;
	// addi r23,r23,22024
	ctx.r23.s64 = ctx.r23.s64 + 22024;
	// bl 0x821254f0
	ctx.lr = 0x82116E3C;
	sub_821254F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82125558
	ctx.lr = 0x82116E48;
	sub_82125558(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821255c0
	ctx.lr = 0x82116E54;
	sub_821255C0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x821255c0
	ctx.lr = 0x82116E60;
	sub_821255C0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x821255c0
	ctx.lr = 0x82116E6C;
	sub_821255C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821255c0
	ctx.lr = 0x82116E78;
	sub_821255C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x821255c0
	ctx.lr = 0x82116E84;
	sub_821255C0(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x821255c0
	ctx.lr = 0x82116E90;
	sub_821255C0(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x821255c0
	ctx.lr = 0x82116E9C;
	sub_821255C0(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82125610
	ctx.lr = 0x82116EA8;
	sub_82125610(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82125678
	ctx.lr = 0x82116EB4;
	sub_82125678(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,312(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82125678
	ctx.lr = 0x82116EC0;
	sub_82125678(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82125678
	ctx.lr = 0x82116ECC;
	sub_82125678(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82125678
	ctx.lr = 0x82116ED8;
	sub_82125678(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82125678
	ctx.lr = 0x82116EE4;
	sub_82125678(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82125678
	ctx.lr = 0x82116EF0;
	sub_82125678(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,328(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82125678
	ctx.lr = 0x82116EFC;
	sub_82125678(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r29,196(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1328
	ctx.r4.s64 = ctx.r1.s64 + 1328;
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r9,1328(r1)
	REX_STORE_U32(ctx.r1.u32 + 1328, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82116F28;
	sub_822009C8(ctx, base);
	// lwz r3,1904(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116f48
	if (ctx.cr6.eq) goto loc_82116F48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82116F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82116F48:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r4,r11,31096
	ctx.r4.s64 = ctx.r11.s64 + 31096;
	// bl 0x82201b80
	ctx.lr = 0x82116F58;
	sub_82201B80(ctx, base);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// stw r10,1096(r1)
	REX_STORE_U32(ctx.r1.u32 + 1096, ctx.r10.u32);
	// bl 0x8211c4e8
	ctx.lr = 0x82116F68;
	sub_8211C4E8(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r3,r1,2136
	ctx.r3.s64 = ctx.r1.s64 + 2136;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// bl 0x821256c8
	ctx.lr = 0x82116F7C;
	sub_821256C8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1096(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1096);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82116F8C;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1096(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116fb0
	if (ctx.cr6.eq) goto loc_82116FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82116FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82116FB0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r4,520(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32177
	ctx.r7.s64 = -2108751872;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,21904
	ctx.r5.s64 = ctx.r11.s64 + 21904;
	// addi r30,r8,-17696
	ctx.r30.s64 = ctx.r8.s64 + -17696;
	// addi r28,r6,-17708
	ctx.r28.s64 = ctx.r6.s64 + -17708;
	// addi r27,r10,5688
	ctx.r27.s64 = ctx.r10.s64 + 5688;
	// addi r26,r9,-30752
	ctx.r26.s64 = ctx.r9.s64 + -30752;
	// addi r25,r7,20448
	ctx.r25.s64 = ctx.r7.s64 + 20448;
	// bl 0x82125748
	ctx.lr = 0x82116FEC;
	sub_82125748(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x821257b0
	ctx.lr = 0x82116FF8;
	sub_821257B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821257b0
	ctx.lr = 0x82117004;
	sub_821257B0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82125800
	ctx.lr = 0x82117010;
	sub_82125800(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,1344(r1)
	REX_STORE_U32(ctx.r1.u32 + 1344, ctx.r11.u32);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82117034;
	sub_822009C8(ctx, base);
	// lwz r3,1088(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1088);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117054
	if (ctx.cr6.eq) goto loc_82117054;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117054;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117054:
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
	// addi r4,r11,-17668
	ctx.r4.s64 = ctx.r11.s64 + -17668;
	// addi r3,r1,2808
	ctx.r3.s64 = ctx.r1.s64 + 2808;
	// addi r30,r10,-17588
	ctx.r30.s64 = ctx.r10.s64 + -17588;
	// addi r28,r9,-17608
	ctx.r28.s64 = ctx.r9.s64 + -17608;
	// addi r27,r8,-17632
	ctx.r27.s64 = ctx.r8.s64 + -17632;
	// addi r26,r7,-17644
	ctx.r26.s64 = ctx.r7.s64 + -17644;
	// bl 0x8211a0f0
	ctx.lr = 0x82117084;
	sub_8211A0F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125868
	ctx.lr = 0x82117090;
	sub_82125868(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82125868
	ctx.lr = 0x8211709C;
	sub_82125868(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82125868
	ctx.lr = 0x821170A8;
	sub_82125868(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82125868
	ctx.lr = 0x821170B4;
	sub_82125868(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,1352
	ctx.r4.s64 = ctx.r1.s64 + 1352;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r5,1352(r1)
	REX_STORE_U32(ctx.r1.u32 + 1352, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821170D8;
	sub_822009C8(ctx, base);
	// lwz r3,2808(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821170f8
	if (ctx.cr6.eq) goto loc_821170F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821170F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821170F8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r4,r10,-17556
	ctx.r4.s64 = ctx.r10.s64 + -17556;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r3,r1,2840
	ctx.r3.s64 = ctx.r1.s64 + 2840;
	// addi r30,r9,-17516
	ctx.r30.s64 = ctx.r9.s64 + -17516;
	// addi r28,r8,-17532
	ctx.r28.s64 = ctx.r8.s64 + -17532;
	// lbz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x8211a1d0
	ctx.lr = 0x82117128;
	sub_8211A1D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82125a18
	ctx.lr = 0x82117134;
	sub_82125A18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82125bc8
	ctx.lr = 0x82117140;
	sub_82125BC8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x8216a080
	ctx.lr = 0x82117158;
	sub_8216A080(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r4,r1,1360
	ctx.r4.s64 = ctx.r1.s64 + 1360;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1360(r1)
	REX_STORE_U32(ctx.r1.u32 + 1360, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8211717C;
	sub_822009C8(ctx, base);
	// lwz r3,2840(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211719c
	if (ctx.cr6.eq) goto loc_8211719C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8211719C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211719C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// stw r6,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stw r7,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r6,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r7,r5,-17000
	ctx.r7.s64 = ctx.r5.s64 + -17000;
	// stw r6,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r7,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
	// addi r6,r11,-17152
	ctx.r6.s64 = ctx.r11.s64 + -17152;
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// addi r8,r3,-17208
	ctx.r8.s64 = ctx.r3.s64 + -17208;
	// addi r11,r11,-17052
	ctx.r11.s64 = ctx.r11.s64 + -17052;
	// stw r6,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// lwz r5,152(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r30,160(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r5,r5,-17024
	ctx.r5.s64 = ctx.r5.s64 + -17024;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,144(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r5,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r5.u32);
	// addi r7,r30,-17124
	ctx.r7.s64 = ctx.r30.s64 + -17124;
	// stw r11,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addi r5,r10,-17236
	ctx.r5.s64 = ctx.r10.s64 + -17236;
	// addi r11,r9,-17264
	ctx.r11.s64 = ctx.r9.s64 + -17264;
	// stw r7,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r7.u32);
	// addi r4,r4,-17180
	ctx.r4.s64 = ctx.r4.s64 + -17180;
	// stw r8,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// addi r3,r3,-17084
	ctx.r3.s64 = ctx.r3.s64 + -17084;
	// stw r5,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r5.u32);
	// addi r31,r31,-17100
	ctx.r31.s64 = ctx.r31.s64 + -17100;
	// stw r4,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r4.u32);
	// stw r3,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// lis r10,-32180
	ctx.r10.s64 = -2108948480;
	// stw r31,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// lis r9,-32180
	ctx.r9.s64 = -2108948480;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lis r7,-32180
	ctx.r7.s64 = -2108948480;
	// lis r6,-32180
	ctx.r6.s64 = -2108948480;
	// lis r31,-32180
	ctx.r31.s64 = -2108948480;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lis r8,-32180
	ctx.r8.s64 = -2108948480;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32241
	ctx.r23.s64 = -2112946176;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32241
	ctx.r21.s64 = -2112946176;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// lwz r18,136(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r26,r26,-17372
	ctx.r26.s64 = ctx.r26.s64 + -17372;
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// addi r5,r5,-17320
	ctx.r5.s64 = ctx.r5.s64 + -17320;
	// stw r23,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// addi r28,r28,-17356
	ctx.r28.s64 = ctx.r28.s64 + -17356;
	// lwz r14,240(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r4,r4,-17292
	ctx.r4.s64 = ctx.r4.s64 + -17292;
	// lwz r17,184(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r3,r3,-17340
	ctx.r3.s64 = ctx.r3.s64 + -17340;
	// lwz r15,232(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r24,r24,-17400
	ctx.r24.s64 = ctx.r24.s64 + -17400;
	// lwz r16,200(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r22,r22,-17428
	ctx.r22.s64 = ctx.r22.s64 + -17428;
	// stw r26,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// addi r26,r14,2632
	ctx.r26.s64 = ctx.r14.s64 + 2632;
	// stw r5,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// addi r20,r20,-17448
	ctx.r20.s64 = ctx.r20.s64 + -17448;
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// addi r5,r17,-23808
	ctx.r5.s64 = ctx.r17.s64 + -23808;
	// lwz r21,264(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r28,r15,-23808
	ctx.r28.s64 = ctx.r15.s64 + -23808;
	// lwz r23,272(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r17,r11,2632
	ctx.r17.s64 = ctx.r11.s64 + 2632;
	// stw r4,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r4.u32);
	// addi r4,r18,-23808
	ctx.r4.s64 = ctx.r18.s64 + -23808;
	// stw r3,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r16,-23808
	ctx.r3.s64 = ctx.r16.s64 + -23808;
	// stw r24,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r24,r21,-23808
	ctx.r24.s64 = ctx.r21.s64 + -23808;
	// stw r26,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r26.u32);
	// addi r23,r23,-23808
	ctx.r23.s64 = ctx.r23.s64 + -23808;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r26,r10,-23808
	ctx.r26.s64 = ctx.r10.s64 + -23808;
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stw r5,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r5.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// stw r28,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r28.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// lis r20,-32242
	ctx.r20.s64 = -2113011712;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r19,-17496
	ctx.r4.s64 = ctx.r19.s64 + -17496;
	// stw r3,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// addi r3,r1,2872
	ctx.r3.s64 = ctx.r1.s64 + 2872;
	// stw r24,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// addi r24,r9,-23808
	ctx.r24.s64 = ctx.r9.s64 + -23808;
	// stw r23,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r23.u32);
	// addi r23,r7,-23808
	ctx.r23.s64 = ctx.r7.s64 + -23808;
	// addi r19,r6,-23808
	ctx.r19.s64 = ctx.r6.s64 + -23808;
	// addi r31,r31,-23808
	ctx.r31.s64 = ctx.r31.s64 + -23808;
	// addi r18,r8,-23808
	ctx.r18.s64 = ctx.r8.s64 + -23808;
	// addi r30,r30,2632
	ctx.r30.s64 = ctx.r30.s64 + 2632;
	// addi r29,r29,3520
	ctx.r29.s64 = ctx.r29.s64 + 3520;
	// addi r27,r27,3136
	ctx.r27.s64 = ctx.r27.s64 + 3136;
	// addi r25,r25,21872
	ctx.r25.s64 = ctx.r25.s64 + 21872;
	// addi r16,r11,23696
	ctx.r16.s64 = ctx.r11.s64 + 23696;
	// addi r15,r10,23672
	ctx.r15.s64 = ctx.r10.s64 + 23672;
	// addi r21,r21,-17460
	ctx.r21.s64 = ctx.r21.s64 + -17460;
	// addi r28,r28,-17476
	ctx.r28.s64 = ctx.r28.s64 + -17476;
	// addi r22,r22,3080
	ctx.r22.s64 = ctx.r22.s64 + 3080;
	// addi r14,r5,1152
	ctx.r14.s64 = ctx.r5.s64 + 1152;
	// addi r20,r20,2048
	ctx.r20.s64 = ctx.r20.s64 + 2048;
	// bl 0x8211a2b0
	ctx.lr = 0x821173EC;
	sub_8211A2B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82125d78
	ctx.lr = 0x821173F8;
	sub_82125D78(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82125dc8
	ctx.lr = 0x82117404;
	sub_82125DC8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82125e30
	ctx.lr = 0x82117410;
	sub_82125E30(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82125e98
	ctx.lr = 0x8211741C;
	sub_82125E98(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82125f00
	ctx.lr = 0x82117428;
	sub_82125F00(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82125f68
	ctx.lr = 0x82117434;
	sub_82125F68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82125fd0
	ctx.lr = 0x82117440;
	sub_82125FD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82125d78
	ctx.lr = 0x8211744C;
	sub_82125D78(ctx, base);
	// lwz r29,200(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82126038
	ctx.lr = 0x8211745C;
	sub_82126038(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x821260a0
	ctx.lr = 0x82117468;
	sub_821260A0(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82126108
	ctx.lr = 0x82117474;
	sub_82126108(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82126170
	ctx.lr = 0x82117480;
	sub_82126170(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x821261d8
	ctx.lr = 0x8211748C;
	sub_821261D8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,312(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82126228
	ctx.lr = 0x82117498;
	sub_82126228(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82126290
	ctx.lr = 0x821174A4;
	sub_82126290(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x821262f8
	ctx.lr = 0x821174B0;
	sub_821262F8(ctx, base);
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r5,264(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x821262f8
	ctx.lr = 0x821174BC;
	sub_821262F8(ctx, base);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r5,272(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82126348
	ctx.lr = 0x821174C8;
	sub_82126348(ctx, base);
	// lwz r4,328(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r5,432(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82126398
	ctx.lr = 0x821174D4;
	sub_82126398(ctx, base);
	// lwz r4,376(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r5,408(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// bl 0x82126400
	ctx.lr = 0x821174E0;
	sub_82126400(ctx, base);
	// lwz r4,360(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r5,448(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82126400
	ctx.lr = 0x821174EC;
	sub_82126400(ctx, base);
	// lwz r4,424(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r5,480(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x821261d8
	ctx.lr = 0x821174F8;
	sub_821261D8(ctx, base);
	// lwz r4,472(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r5,464(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82126348
	ctx.lr = 0x82117504;
	sub_82126348(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r29,196(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1376
	ctx.r4.s64 = ctx.r1.s64 + 1376;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r8,1376(r1)
	REX_STORE_U32(ctx.r1.u32 + 1376, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82117530;
	sub_822009C8(ctx, base);
	// lwz r3,2872(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117550
	if (ctx.cr6.eq) goto loc_82117550;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117550;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117550:
	// lwz r28,192(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-9520
	ctx.r5.s64 = ctx.r11.s64 + -9520;
	// bl 0x82126450
	ctx.lr = 0x82117568;
	sub_82126450(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,32704
	ctx.r4.s64 = ctx.r10.s64 + 32704;
	// addi r3,r1,2904
	ctx.r3.s64 = ctx.r1.s64 + 2904;
	// bl 0x8211a390
	ctx.lr = 0x8211757C;
	sub_8211A390(ctx, base);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82202028
	ctx.lr = 0x8211758C;
	sub_82202028(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,0(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821175b0
	if (ctx.cr6.eq) goto loc_821175B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821175B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821175B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,1384
	ctx.r4.s64 = ctx.r1.s64 + 1384;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1384(r1)
	REX_STORE_U32(ctx.r1.u32 + 1384, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821175D0;
	sub_822009C8(ctx, base);
	// lwz r3,2904(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821175f0
	if (ctx.cr6.eq) goto loc_821175F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821175F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821175F0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// bl 0x82201b80
	ctx.lr = 0x82117600;
	sub_82201B80(ctx, base);
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// stw r10,1128(r1)
	REX_STORE_U32(ctx.r1.u32 + 1128, ctx.r10.u32);
	// bl 0x8211c5c0
	ctx.lr = 0x82117610;
	sub_8211C5C0(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// addi r3,r1,2152
	ctx.r3.s64 = ctx.r1.s64 + 2152;
	// bl 0x821264d0
	ctx.lr = 0x82117624;
	sub_821264D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,1128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1128);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82202028
	ctx.lr = 0x82117634;
	sub_82202028(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r30,1128(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 1128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117658
	if (ctx.cr6.eq) goto loc_82117658;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117658:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,29776
	ctx.r5.s64 = ctx.r11.s64 + 29776;
	// addi r4,r10,-16980
	ctx.r4.s64 = ctx.r10.s64 + -16980;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82126550
	ctx.lr = 0x82117670;
	sub_82126550(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1392
	ctx.r4.s64 = ctx.r1.s64 + 1392;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1392(r1)
	REX_STORE_U32(ctx.r1.u32 + 1392, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82117694;
	sub_822009C8(ctx, base);
	// lwz r3,1120(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821176b4
	if (ctx.cr6.eq) goto loc_821176B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821176B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821176B4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32226
	ctx.r8.s64 = -2111963136;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32226
	ctx.r6.s64 = -2111963136;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r30,-32226
	ctx.r30.s64 = -2111963136;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r4,r11,-16964
	ctx.r4.s64 = ctx.r11.s64 + -16964;
	// addi r3,r1,2936
	ctx.r3.s64 = ctx.r1.s64 + 2936;
	// addi r21,r9,-16852
	ctx.r21.s64 = ctx.r9.s64 + -16852;
	// addi r20,r7,-16872
	ctx.r20.s64 = ctx.r7.s64 + -16872;
	// addi r19,r5,-16892
	ctx.r19.s64 = ctx.r5.s64 + -16892;
	// addi r28,r28,-16912
	ctx.r28.s64 = ctx.r28.s64 + -16912;
	// addi r26,r26,-16924
	ctx.r26.s64 = ctx.r26.s64 + -16924;
	// addi r24,r24,-16936
	ctx.r24.s64 = ctx.r24.s64 + -16936;
	// addi r22,r22,-16948
	ctx.r22.s64 = ctx.r22.s64 + -16948;
	// addi r18,r10,11704
	ctx.r18.s64 = ctx.r10.s64 + 11704;
	// addi r17,r8,11584
	ctx.r17.s64 = ctx.r8.s64 + 11584;
	// addi r16,r6,11440
	ctx.r16.s64 = ctx.r6.s64 + 11440;
	// addi r30,r30,11296
	ctx.r30.s64 = ctx.r30.s64 + 11296;
	// addi r27,r27,15776
	ctx.r27.s64 = ctx.r27.s64 + 15776;
	// addi r25,r25,15648
	ctx.r25.s64 = ctx.r25.s64 + 15648;
	// addi r23,r23,15504
	ctx.r23.s64 = ctx.r23.s64 + 15504;
	// bl 0x8211a470
	ctx.lr = 0x82117734;
	sub_8211A470(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x821265b8
	ctx.lr = 0x82117740;
	sub_821265B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x821265b8
	ctx.lr = 0x8211774C;
	sub_821265B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82126608
	ctx.lr = 0x82117758;
	sub_82126608(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82126670
	ctx.lr = 0x82117764;
	sub_82126670(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x821266d8
	ctx.lr = 0x82117770;
	sub_821266D8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x82126740
	ctx.lr = 0x8211777C;
	sub_82126740(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x821267a8
	ctx.lr = 0x82117788;
	sub_821267A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,1400
	ctx.r4.s64 = ctx.r1.s64 + 1400;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1400(r1)
	REX_STORE_U32(ctx.r1.u32 + 1400, ctx.r10.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x821177AC;
	sub_822009C8(ctx, base);
	// lwz r3,2936(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2936);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821177cc
	if (ctx.cr6.eq) goto loc_821177CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821177CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821177CC:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r6,r5,-16104
	ctx.r6.s64 = ctx.r5.s64 + -16104;
	// stw r7,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r5,r4,-16276
	ctx.r5.s64 = ctx.r4.s64 + -16276;
	// stw r6,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// addi r4,r3,-16312
	ctx.r4.s64 = ctx.r3.s64 + -16312;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r5,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r5.u32);
	// addi r6,r11,-16116
	ctx.r6.s64 = ctx.r11.s64 + -16116;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r7,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r9,-16140
	ctx.r11.s64 = ctx.r9.s64 + -16140;
	// lwz r31,144(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r10,-16392
	ctx.r10.s64 = ctx.r10.s64 + -16392;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r7,r7,-16160
	ctx.r7.s64 = ctx.r7.s64 + -16160;
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r6,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r6.u32);
	// addi r6,r31,-16244
	ctx.r6.s64 = ctx.r31.s64 + -16244;
	// addi r5,r5,-16192
	ctx.r5.s64 = ctx.r5.s64 + -16192;
	// stw r8,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// addi r9,r9,-16208
	ctx.r9.s64 = ctx.r9.s64 + -16208;
	// stw r11,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r11.u32);
	// stw r7,680(r1)
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r7.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// stw r5,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r5.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r9,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r9.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r6,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r6.u32);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// stw r3,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r3.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r10.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r3,-16436
	ctx.r3.s64 = ctx.r3.s64 + -16436;
	// stw r20,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// addi r6,r6,-16412
	ctx.r6.s64 = ctx.r6.s64 + -16412;
	// lwz r18,160(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r9,15456
	ctx.r9.s64 = ctx.r9.s64 + 15456;
	// stw r3,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// addi r31,r31,-16448
	ctx.r31.s64 = ctx.r31.s64 + -16448;
	// addi r3,r18,-13768
	ctx.r3.s64 = ctx.r18.s64 + -13768;
	// stw r6,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r6.u32);
	// addi r6,r19,-16580
	ctx.r6.s64 = ctx.r19.s64 + -16580;
	// stw r9,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// stw r3,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r3.u32);
	// addi r3,r7,15728
	ctx.r3.s64 = ctx.r7.s64 + 15728;
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// addi r6,r11,15856
	ctx.r6.s64 = ctx.r11.s64 + 15856;
	// addi r11,r5,15584
	ctx.r11.s64 = ctx.r5.s64 + 15584;
	// stw r3,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r3.u32);
	// addi r29,r29,-16464
	ctx.r29.s64 = ctx.r29.s64 + -16464;
	// lwz r17,184(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r8,r8,15472
	ctx.r8.s64 = ctx.r8.s64 + 15472;
	// lwz r16,200(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r27,r27,-16488
	ctx.r27.s64 = ctx.r27.s64 + -16488;
	// lwz r15,232(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r25,r25,-16512
	ctx.r25.s64 = ctx.r25.s64 + -16512;
	// lwz r14,240(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r23,r23,-16536
	ctx.r23.s64 = ctx.r23.s64 + -16536;
	// lwz r20,264(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r22,272(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// addi r7,r4,15840
	ctx.r7.s64 = ctx.r4.s64 + 15840;
	// stw r11,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r11.u32);
	// addi r5,r10,15712
	ctx.r5.s64 = ctx.r10.s64 + 15712;
	// stw r31,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// addi r4,r30,15568
	ctx.r4.s64 = ctx.r30.s64 + 15568;
	// stw r29,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r31,r17,15760
	ctx.r31.s64 = ctx.r17.s64 + 15760;
	// stw r8,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r8.u32);
	// addi r29,r16,15616
	ctx.r29.s64 = ctx.r16.s64 + 15616;
	// stw r6,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r6.u32);
	// addi r10,r28,15440
	ctx.r10.s64 = ctx.r28.s64 + 15440;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r26,15824
	ctx.r8.s64 = ctx.r26.s64 + 15824;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r24,15696
	ctx.r6.s64 = ctx.r24.s64 + 15696;
	// addi r11,r3,15552
	ctx.r11.s64 = ctx.r3.s64 + 15552;
	// stw r27,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r27.u32);
	// addi r3,r9,15936
	ctx.r3.s64 = ctx.r9.s64 + 15936;
	// stw r25,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stw r23,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r23.u32);
	// addi r21,r21,-16564
	ctx.r21.s64 = ctx.r21.s64 + -16564;
	// addi r27,r15,15488
	ctx.r27.s64 = ctx.r15.s64 + 15488;
	// stw r31,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// addi r25,r14,15872
	ctx.r25.s64 = ctx.r14.s64 + 15872;
	// stw r29,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r29.u32);
	// addi r23,r20,15744
	ctx.r23.s64 = ctx.r20.s64 + 15744;
	// stw r7,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r7.u32);
	// addi r22,r22,15600
	ctx.r22.s64 = ctx.r22.s64 + 15600;
	// stw r5,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r5.u32);
	// stw r4,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r4.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r8,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r8.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r6,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r3,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stw r21,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r27,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r27.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r25,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r25.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r23,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r23.u32);
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// stw r22,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r22.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// addi r5,r5,-16600
	ctx.r5.s64 = ctx.r5.s64 + -16600;
	// addi r8,r8,-16628
	ctx.r8.s64 = ctx.r8.s64 + -16628;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r4,r4,-16648
	ctx.r4.s64 = ctx.r4.s64 + -16648;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r3,r3,-16668
	ctx.r3.s64 = ctx.r3.s64 + -16668;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// addi r8,r30,-16688
	ctx.r8.s64 = ctx.r30.s64 + -16688;
	// addi r5,r28,-16716
	ctx.r5.s64 = ctx.r28.s64 + -16716;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r16,-32245
	ctx.r16.s64 = -2113208320;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r19,-32179
	ctx.r19.s64 = -2108882944;
	// lis r17,-32227
	ctx.r17.s64 = -2112028672;
	// addi r30,r26,-16732
	ctx.r30.s64 = ctx.r26.s64 + -16732;
	// addi r28,r24,-16748
	ctx.r28.s64 = ctx.r24.s64 + -16748;
	// addi r4,r7,-16832
	ctx.r4.s64 = ctx.r7.s64 + -16832;
	// addi r3,r1,2968
	ctx.r3.s64 = ctx.r1.s64 + 2968;
	// addi r26,r22,-16764
	ctx.r26.s64 = ctx.r22.s64 + -16764;
	// addi r24,r20,-16780
	ctx.r24.s64 = ctx.r20.s64 + -16780;
	// addi r22,r18,-16796
	ctx.r22.s64 = ctx.r18.s64 + -16796;
	// addi r20,r16,-16812
	ctx.r20.s64 = ctx.r16.s64 + -16812;
	// addi r18,r9,15808
	ctx.r18.s64 = ctx.r9.s64 + 15808;
	// addi r16,r10,15680
	ctx.r16.s64 = ctx.r10.s64 + 15680;
	// addi r15,r6,15536
	ctx.r15.s64 = ctx.r6.s64 + 15536;
	// addi r14,r11,15920
	ctx.r14.s64 = ctx.r11.s64 + 15920;
	// addi r31,r31,21864
	ctx.r31.s64 = ctx.r31.s64 + 21864;
	// addi r29,r29,15792
	ctx.r29.s64 = ctx.r29.s64 + 15792;
	// addi r27,r27,15664
	ctx.r27.s64 = ctx.r27.s64 + 15664;
	// addi r25,r25,15520
	ctx.r25.s64 = ctx.r25.s64 + 15520;
	// addi r23,r23,15904
	ctx.r23.s64 = ctx.r23.s64 + 15904;
	// addi r21,r21,15776
	ctx.r21.s64 = ctx.r21.s64 + 15776;
	// addi r19,r19,-13520
	ctx.r19.s64 = ctx.r19.s64 + -13520;
	// addi r17,r17,23496
	ctx.r17.s64 = ctx.r17.s64 + 23496;
	// bl 0x8211a550
	ctx.lr = 0x82117B0C;
	sub_8211A550(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x82126810
	ctx.lr = 0x82117B18;
	sub_82126810(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x82126860
	ctx.lr = 0x82117B24;
	sub_82126860(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82126810
	ctx.lr = 0x82117B30;
	sub_82126810(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x821268b0
	ctx.lr = 0x82117B3C;
	sub_821268B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x821268b0
	ctx.lr = 0x82117B48;
	sub_821268B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821268b0
	ctx.lr = 0x82117B54;
	sub_821268B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82126900
	ctx.lr = 0x82117B60;
	sub_82126900(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82126950
	ctx.lr = 0x82117B6C;
	sub_82126950(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x821269b8
	ctx.lr = 0x82117B78;
	sub_821269B8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x821269b8
	ctx.lr = 0x82117B84;
	sub_821269B8(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82126a08
	ctx.lr = 0x82117B90;
	sub_82126A08(ctx, base);
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82126a70
	ctx.lr = 0x82117B9C;
	sub_82126A70(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82126ad8
	ctx.lr = 0x82117BA8;
	sub_82126AD8(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r5,232(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x821268b0
	ctx.lr = 0x82117BB4;
	sub_821268B0(ctx, base);
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,264(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82126900
	ctx.lr = 0x82117BC0;
	sub_82126900(ctx, base);
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r5,288(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82126900
	ctx.lr = 0x82117BCC;
	sub_82126900(ctx, base);
	// lwz r4,312(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r5,336(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82126900
	ctx.lr = 0x82117BD8;
	sub_82126900(ctx, base);
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r5,304(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82126900
	ctx.lr = 0x82117BE4;
	sub_82126900(ctx, base);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r5,328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82126900
	ctx.lr = 0x82117BF0;
	sub_82126900(ctx, base);
	// lwz r4,432(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r5,376(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x82126b28
	ctx.lr = 0x82117BFC;
	sub_82126B28(ctx, base);
	// lwz r4,408(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r5,360(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// bl 0x82126900
	ctx.lr = 0x82117C08;
	sub_82126900(ctx, base);
	// lwz r4,448(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r5,424(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x82126810
	ctx.lr = 0x82117C14;
	sub_82126810(ctx, base);
	// lwz r4,480(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r5,472(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// bl 0x82126900
	ctx.lr = 0x82117C20;
	sub_82126900(ctx, base);
	// lwz r4,464(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r5,544(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82126860
	ctx.lr = 0x82117C2C;
	sub_82126860(ctx, base);
	// lwz r4,536(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r5,560(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82126900
	ctx.lr = 0x82117C38;
	sub_82126900(ctx, base);
	// lwz r4,552(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r5,632(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// bl 0x82126900
	ctx.lr = 0x82117C44;
	sub_82126900(ctx, base);
	// lwz r4,616(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r5,640(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82126ad8
	ctx.lr = 0x82117C50;
	sub_82126AD8(ctx, base);
	// lwz r4,664(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r5,648(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// bl 0x82126900
	ctx.lr = 0x82117C5C;
	sub_82126900(ctx, base);
	// lwz r4,680(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r5,712(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// bl 0x82126860
	ctx.lr = 0x82117C68;
	sub_82126860(ctx, base);
	// lwz r4,696(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r5,720(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82126860
	ctx.lr = 0x82117C74;
	sub_82126860(ctx, base);
	// lwz r4,704(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r5,688(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82126900
	ctx.lr = 0x82117C80;
	sub_82126900(ctx, base);
	// lwz r4,672(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r5,656(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82126900
	ctx.lr = 0x82117C8C;
	sub_82126900(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,196(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,1408(r1)
	REX_STORE_U32(ctx.r1.u32 + 1408, ctx.r8.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x822009c8
	ctx.lr = 0x82117CB8;
	sub_822009C8(ctx, base);
	// lwz r3,2968(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117cd8
	if (ctx.cr6.eq) goto loc_82117CD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117CD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,9168
	ctx.r5.s64 = ctx.r11.s64 + 9168;
	// addi r4,r10,-16068
	ctx.r4.s64 = ctx.r10.s64 + -16068;
	// addi r3,r1,2160
	ctx.r3.s64 = ctx.r1.s64 + 2160;
	// bl 0x82126b90
	ctx.lr = 0x82117CF0;
	sub_82126B90(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r9,-16084
	ctx.r4.s64 = ctx.r9.s64 + -16084;
	// addi r3,r1,3000
	ctx.r3.s64 = ctx.r1.s64 + 3000;
	// bl 0x8211a630
	ctx.lr = 0x82117D04;
	sub_8211A630(ctx, base);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82202028
	ctx.lr = 0x82117D14;
	sub_82202028(ctx, base);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// beq cr6,0x82117d3c
	if (ctx.cr6.eq) goto loc_82117D3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82117D3C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r6,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// addi r6,r5,-15260
	ctx.r6.s64 = ctx.r5.s64 + -15260;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r5,r4,-15436
	ctx.r5.s64 = ctx.r4.s64 + -15436;
	// stw r6,760(r1)
	REX_STORE_U32(ctx.r1.u32 + 760, ctx.r6.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r5,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r5.u32);
	// addi r4,r3,-15460
	ctx.r4.s64 = ctx.r3.s64 + -15460;
	// stw r7,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// addi r3,r11,-15484
	ctx.r3.s64 = ctx.r11.s64 + -15484;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r4,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r4.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r3,680(r1)
	REX_STORE_U32(ctx.r1.u32 + 680, ctx.r3.u32);
	// stw r7,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r10,-15512
	ctx.r10.s64 = ctx.r10.s64 + -15512;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r6,r11,-15292
	ctx.r6.s64 = ctx.r11.s64 + -15292;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r11,r9,-15320
	ctx.r11.s64 = ctx.r9.s64 + -15320;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r7,r7,-15336
	ctx.r7.s64 = ctx.r7.s64 + -15336;
	// lwz r31,144(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r5,-15352
	ctx.r5.s64 = ctx.r5.s64 + -15352;
	// stw r6,800(r1)
	REX_STORE_U32(ctx.r1.u32 + 800, ctx.r6.u32);
	// addi r9,r9,-15372
	ctx.r9.s64 = ctx.r9.s64 + -15372;
	// addi r6,r31,-15404
	ctx.r6.s64 = ctx.r31.s64 + -15404;
	// stw r8,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// stw r11,808(r1)
	REX_STORE_U32(ctx.r1.u32 + 808, ctx.r11.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r7,752(r1)
	REX_STORE_U32(ctx.r1.u32 + 752, ctx.r7.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r5,768(r1)
	REX_STORE_U32(ctx.r1.u32 + 768, ctx.r5.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r9,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r9.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r6,672(r1)
	REX_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r10,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r10.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32242
	ctx.r24.s64 = -2113011712;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r3,-15572
	ctx.r3.s64 = ctx.r3.s64 + -15572;
	// stw r20,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// addi r6,r6,-15540
	ctx.r6.s64 = ctx.r6.s64 + -15540;
	// lwz r18,160(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r9,-15376
	ctx.r9.s64 = ctx.r9.s64 + -15376;
	// stw r3,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r3.u32);
	// addi r8,r8,-14976
	ctx.r8.s64 = ctx.r8.s64 + -14976;
	// addi r3,r18,29912
	ctx.r3.s64 = ctx.r18.s64 + 29912;
	// stw r6,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r6.u32);
	// addi r6,r19,-15732
	ctx.r6.s64 = ctx.r19.s64 + -15732;
	// stw r9,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r9.u32);
	// stw r3,744(r1)
	REX_STORE_U32(ctx.r1.u32 + 744, ctx.r3.u32);
	// addi r3,r7,-15144
	ctx.r3.s64 = ctx.r7.s64 + -15144;
	// stw r6,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// addi r6,r11,-15040
	ctx.r6.s64 = ctx.r11.s64 + -15040;
	// addi r11,r5,-15264
	ctx.r11.s64 = ctx.r5.s64 + -15264;
	// stw r3,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r3.u32);
	// addi r7,r4,-15480
	ctx.r7.s64 = ctx.r4.s64 + -15480;
	// lwz r17,184(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// addi r5,r10,-9520
	ctx.r5.s64 = ctx.r10.s64 + -9520;
	// stw r11,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
	// addi r31,r31,-15592
	ctx.r31.s64 = ctx.r31.s64 + -15592;
	// lwz r16,200(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r29,r29,-15612
	ctx.r29.s64 = ctx.r29.s64 + -15612;
	// lwz r15,232(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// addi r27,r27,-15636
	ctx.r27.s64 = ctx.r27.s64 + -15636;
	// lwz r14,240(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// addi r25,r25,-15664
	ctx.r25.s64 = ctx.r25.s64 + -15664;
	// lwz r20,264(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// addi r23,r23,-15688
	ctx.r23.s64 = ctx.r23.s64 + -15688;
	// lwz r22,272(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// stw r8,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r8.u32);
	// addi r4,r30,-18648
	ctx.r4.s64 = ctx.r30.s64 + -18648;
	// stw r6,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r6.u32);
	// addi r10,r28,-14768
	ctx.r10.s64 = ctx.r28.s64 + -14768;
	// addi r8,r26,-8976
	ctx.r8.s64 = ctx.r26.s64 + -8976;
	// stw r31,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r31.u32);
	// addi r6,r24,-9024
	ctx.r6.s64 = ctx.r24.s64 + -9024;
	// stw r29,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r29.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r21,r21,-15708
	ctx.r21.s64 = ctx.r21.s64 + -15708;
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r31,r17,-8640
	ctx.r31.s64 = ctx.r17.s64 + -8640;
	// addi r11,r3,21776
	ctx.r11.s64 = ctx.r3.s64 + 21776;
	// stw r27,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r27.u32);
	// addi r3,r9,21792
	ctx.r3.s64 = ctx.r9.s64 + 21792;
	// stw r25,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r23,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r23.u32);
	// stw r7,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r7.u32);
	// addi r29,r16,-8816
	ctx.r29.s64 = ctx.r16.s64 + -8816;
	// stw r5,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r5.u32);
	// addi r27,r15,-8824
	ctx.r27.s64 = ctx.r15.s64 + -8824;
	// addi r25,r14,-8832
	ctx.r25.s64 = ctx.r14.s64 + -8832;
	// stw r4,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r4.u32);
	// addi r23,r20,-8920
	ctx.r23.s64 = ctx.r20.s64 + -8920;
	// stw r10,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r10.u32);
	// addi r22,r22,-14848
	ctx.r22.s64 = ctx.r22.s64 + -14848;
	// stw r8,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r6,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r11,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r21,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r21.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r31.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r29,816(r1)
	REX_STORE_U32(ctx.r1.u32 + 816, ctx.r29.u32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r27,784(r1)
	REX_STORE_U32(ctx.r1.u32 + 784, ctx.r27.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r25,792(r1)
	REX_STORE_U32(ctx.r1.u32 + 792, ctx.r25.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r23,776(r1)
	REX_STORE_U32(ctx.r1.u32 + 776, ctx.r23.u32);
	// stw r22,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r22.u32);
	// stw r3,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// addi r9,r9,-15748
	ctx.r9.s64 = ctx.r9.s64 + -15748;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,288(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lwz r30,152(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r14,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r14.u32);
	// addi r10,r10,-15808
	ctx.r10.s64 = ctx.r10.s64 + -15808;
	// stw r9,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// addi r9,r7,-15828
	ctx.r9.s64 = ctx.r7.s64 + -15828;
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// lwz r28,120(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r10,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r14,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// stw r9,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r9.u32);
	// addi r5,r5,-15784
	ctx.r5.s64 = ctx.r5.s64 + -15784;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// addi r7,r4,-15852
	ctx.r7.s64 = ctx.r4.s64 + -15852;
	// stw r5,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r5.u32);
	// addi r10,r29,-15916
	ctx.r10.s64 = ctx.r29.s64 + -15916;
	// addi r9,r27,-15940
	ctx.r9.s64 = ctx.r27.s64 + -15940;
	// stw r7,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r10,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// lwz r24,144(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// addi r5,r8,-15872
	ctx.r5.s64 = ctx.r8.s64 + -15872;
	// stw r3,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r4,r31,-15892
	ctx.r4.s64 = ctx.r31.s64 + -15892;
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// addi r8,r25,-15956
	ctx.r8.s64 = ctx.r25.s64 + -15956;
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r21,-32240
	ctx.r21.s64 = -2112880640;
	// stw r5,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// lis r20,-32243
	ctx.r20.s64 = -2113077248;
	// stw r4,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r7,r23,-15976
	ctx.r7.s64 = ctx.r23.s64 + -15976;
	// addi r10,r22,-15992
	ctx.r10.s64 = ctx.r22.s64 + -15992;
	// lis r17,-32227
	ctx.r17.s64 = -2112028672;
	// stw r7,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lis r15,-32227
	ctx.r15.s64 = -2112028672;
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r14,-32245
	ctx.r14.s64 = -2113208320;
	// addi r27,r26,21816
	ctx.r27.s64 = ctx.r26.s64 + 21816;
	// addi r26,r24,20784
	ctx.r26.s64 = ctx.r24.s64 + 20784;
	// addi r25,r21,1160
	ctx.r25.s64 = ctx.r21.s64 + 1160;
	// addi r24,r20,27512
	ctx.r24.s64 = ctx.r20.s64 + 27512;
	// addi r23,r19,-18952
	ctx.r23.s64 = ctx.r19.s64 + -18952;
	// addi r22,r18,-15504
	ctx.r22.s64 = ctx.r18.s64 + -15504;
	// addi r4,r11,-16052
	ctx.r4.s64 = ctx.r11.s64 + -16052;
	// addi r5,r6,-8504
	ctx.r5.s64 = ctx.r6.s64 + -8504;
	// addi r31,r3,-16012
	ctx.r31.s64 = ctx.r3.s64 + -16012;
	// addi r29,r14,-16040
	ctx.r29.s64 = ctx.r14.s64 + -16040;
	// addi r30,r30,-8464
	ctx.r30.s64 = ctx.r30.s64 + -8464;
	// addi r28,r28,-15248
	ctx.r28.s64 = ctx.r28.s64 + -15248;
	// addi r21,r17,21832
	ctx.r21.s64 = ctx.r17.s64 + 21832;
	// addi r20,r16,-8872
	ctx.r20.s64 = ctx.r16.s64 + -8872;
	// addi r19,r15,21848
	ctx.r19.s64 = ctx.r15.s64 + 21848;
	// addi r18,r9,-18632
	ctx.r18.s64 = ctx.r9.s64 + -18632;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r17,r8,-18712
	ctx.r17.s64 = ctx.r8.s64 + -18712;
	// lwz r6,120(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r16,r7,-9192
	ctx.r16.s64 = ctx.r7.s64 + -9192;
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r15,r6,-9408
	ctx.r15.s64 = ctx.r6.s64 + -9408;
	// addi r14,r11,-9456
	ctx.r14.s64 = ctx.r11.s64 + -9456;
	// bl 0x82126c10
	ctx.lr = 0x8211812C;
	sub_82126C10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x82126c10
	ctx.lr = 0x82118138;
	sub_82126C10(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,604(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82126c60
	ctx.lr = 0x82118144;
	sub_82126C60(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82126c60
	ctx.lr = 0x82118150;
	sub_82126C60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// bl 0x82126c10
	ctx.lr = 0x8211815C;
	sub_82126C10(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82126c10
	ctx.lr = 0x82118168;
	sub_82126C10(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82126cb0
	ctx.lr = 0x82118174;
	sub_82126CB0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82126d00
	ctx.lr = 0x82118180;
	sub_82126D00(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,232(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82126d00
	ctx.lr = 0x8211818C;
	sub_82126D00(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82126d00
	ctx.lr = 0x82118198;
	sub_82126D00(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82126d50
	ctx.lr = 0x821181A4;
	sub_82126D50(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,272(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82126db8
	ctx.lr = 0x821181B0;
	sub_82126DB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,288(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82126e20
	ctx.lr = 0x821181BC;
	sub_82126E20(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,312(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82126e88
	ctx.lr = 0x821181C8;
	sub_82126E88(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,336(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82126ef0
	ctx.lr = 0x821181D4;
	sub_82126EF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,320(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82126cb0
	ctx.lr = 0x821181E0;
	sub_82126CB0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,304(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82126c10
	ctx.lr = 0x821181EC;
	sub_82126C10(ctx, base);
	// lwz r4,296(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r5,328(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82126c10
	ctx.lr = 0x821181F8;
	sub_82126C10(ctx, base);
	// lwz r4,432(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r5,376(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 376);
	// bl 0x82126f58
	ctx.lr = 0x82118204;
	sub_82126F58(ctx, base);
	// lwz r4,408(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r5,360(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// bl 0x82126fc0
	ctx.lr = 0x82118210;
	sub_82126FC0(ctx, base);
	// lwz r4,448(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r5,424(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x82126d00
	ctx.lr = 0x8211821C;
	sub_82126D00(ctx, base);
	// lwz r4,480(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r5,472(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 472);
	// bl 0x82127028
	ctx.lr = 0x82118228;
	sub_82127028(ctx, base);
	// lwz r4,464(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// lwz r5,544(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82126cb0
	ctx.lr = 0x82118234;
	sub_82126CB0(ctx, base);
	// lwz r4,536(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r5,560(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82127028
	ctx.lr = 0x82118240;
	sub_82127028(ctx, base);
	// lwz r4,552(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r5,632(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 632);
	// bl 0x82127078
	ctx.lr = 0x8211824C;
	sub_82127078(ctx, base);
	// lwz r4,616(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r5,640(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82127078
	ctx.lr = 0x82118258;
	sub_82127078(ctx, base);
	// lwz r4,664(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 664);
	// lwz r5,648(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 648);
	// bl 0x82127028
	ctx.lr = 0x82118264;
	sub_82127028(ctx, base);
	// lwz r4,680(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r5,712(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 712);
	// bl 0x821270c8
	ctx.lr = 0x82118270;
	sub_821270C8(ctx, base);
	// lwz r4,696(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r5,720(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 720);
	// bl 0x82126d00
	ctx.lr = 0x8211827C;
	sub_82126D00(ctx, base);
	// lwz r4,704(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r5,688(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// bl 0x82126c10
	ctx.lr = 0x82118288;
	sub_82126C10(ctx, base);
	// lwz r4,672(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r5,656(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 656);
	// bl 0x82127130
	ctx.lr = 0x82118294;
	sub_82127130(ctx, base);
	// lwz r4,736(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r5,776(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 776);
	// bl 0x82126c10
	ctx.lr = 0x821182A0;
	sub_82126C10(ctx, base);
	// lwz r4,768(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 768);
	// lwz r5,792(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 792);
	// bl 0x82126d00
	ctx.lr = 0x821182AC;
	sub_82126D00(ctx, base);
	// lwz r4,752(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 752);
	// lwz r5,784(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 784);
	// bl 0x82126d00
	ctx.lr = 0x821182B8;
	sub_82126D00(ctx, base);
	// lwz r4,808(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 808);
	// lwz r5,816(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 816);
	// bl 0x82126d00
	ctx.lr = 0x821182C4;
	sub_82126D00(ctx, base);
	// lwz r4,800(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r5,728(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 728);
	// bl 0x82127078
	ctx.lr = 0x821182D0;
	sub_82127078(ctx, base);
	// lwz r4,760(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 760);
	// lwz r5,744(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 744);
	// bl 0x82127198
	ctx.lr = 0x821182DC;
	sub_82127198(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r30,196(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,1416
	ctx.r4.s64 = ctx.r1.s64 + 1416;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r9,1416(r1)
	REX_STORE_U32(ctx.r1.u32 + 1416, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82118308;
	sub_822009C8(ctx, base);
	// lwz r3,3000(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118328
	if (ctx.cr6.eq) goto loc_82118328;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82118328:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r11,-9520
	ctx.r5.s64 = ctx.r11.s64 + -9520;
	// addi r4,r10,-15248
	ctx.r4.s64 = ctx.r10.s64 + -15248;
	// addi r3,r1,2168
	ctx.r3.s64 = ctx.r1.s64 + 2168;
	// bl 0x82127200
	ctx.lr = 0x82118348;
	sub_82127200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822009c8
	ctx.lr = 0x82118354;
	sub_822009C8(ctx, base);
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r9,-9520
	ctx.r5.s64 = ctx.r9.s64 + -9520;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r8,-15236
	ctx.r4.s64 = ctx.r8.s64 + -15236;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82127200
	ctx.lr = 0x82118374;
	sub_82127200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822009c8
	ctx.lr = 0x82118380;
	sub_822009C8(ctx, base);
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r7,-9520
	ctx.r5.s64 = ctx.r7.s64 + -9520;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r6,-15224
	ctx.r4.s64 = ctx.r6.s64 + -15224;
	// addi r3,r1,2184
	ctx.r3.s64 = ctx.r1.s64 + 2184;
	// bl 0x82127270
	ctx.lr = 0x821183A0;
	sub_82127270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822009c8
	ctx.lr = 0x821183AC;
	sub_822009C8(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r5,-8536
	ctx.r5.s64 = ctx.r5.s64 + -8536;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r4,-15196
	ctx.r4.s64 = ctx.r4.s64 + -15196;
	// addi r3,r1,2192
	ctx.r3.s64 = ctx.r1.s64 + 2192;
	// bl 0x821272f0
	ctx.lr = 0x821183CC;
	sub_821272F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822009c8
	ctx.lr = 0x821183D8;
	sub_822009C8(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// addi r4,r3,-15172
	ctx.r4.s64 = ctx.r3.s64 + -15172;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// addi r3,r1,3032
	ctx.r3.s64 = ctx.r1.s64 + 3032;
	// addi r26,r10,-15100
	ctx.r26.s64 = ctx.r10.s64 + -15100;
	// addi r25,r8,-15116
	ctx.r25.s64 = ctx.r8.s64 + -15116;
	// addi r24,r6,-15128
	ctx.r24.s64 = ctx.r6.s64 + -15128;
	// addi r29,r29,-15140
	ctx.r29.s64 = ctx.r29.s64 + -15140;
	// addi r27,r27,-15152
	ctx.r27.s64 = ctx.r27.s64 + -15152;
	// addi r23,r11,21704
	ctx.r23.s64 = ctx.r11.s64 + 21704;
	// addi r22,r9,21752
	ctx.r22.s64 = ctx.r9.s64 + 21752;
	// addi r21,r7,21760
	ctx.r21.s64 = ctx.r7.s64 + 21760;
	// addi r20,r5,21768
	ctx.r20.s64 = ctx.r5.s64 + 21768;
	// addi r28,r28,23392
	ctx.r28.s64 = ctx.r28.s64 + 23392;
	// bl 0x8211a710
	ctx.lr = 0x82118438;
	sub_8211A710(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82127370
	ctx.lr = 0x82118444;
	sub_82127370(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x821273d8
	ctx.lr = 0x82118450;
	sub_821273D8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82127440
	ctx.lr = 0x8211845C;
	sub_82127440(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x821274a8
	ctx.lr = 0x82118468;
	sub_821274A8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82127510
	ctx.lr = 0x82118474;
	sub_82127510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1424
	ctx.r4.s64 = ctx.r1.s64 + 1424;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1424(r1)
	REX_STORE_U32(ctx.r1.u32 + 1424, ctx.r10.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82118498;
	sub_822009C8(ctx, base);
	// lwz r3,3032(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821184b8
	if (ctx.cr6.eq) goto loc_821184B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821184B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821184B8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r11,-15028
	ctx.r9.s64 = ctx.r11.s64 + -15028;
	// addi r8,r10,-15048
	ctx.r8.s64 = ctx.r10.s64 + -15048;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r5,-15008
	ctx.r11.s64 = ctx.r5.s64 + -15008;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// addi r3,r1,3552
	ctx.r3.s64 = ctx.r1.s64 + 3552;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x821d5e18
	ctx.lr = 0x82118508;
	sub_821D5E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x821d5f60
	ctx.lr = 0x82118518;
	sub_821D5F60(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r3,r1,3064
	ctx.r3.s64 = ctx.r1.s64 + 3064;
	// addi r4,r9,-15084
	ctx.r4.s64 = ctx.r9.s64 + -15084;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x8211a7f0
	ctx.lr = 0x82118530;
	sub_8211A7F0(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x821713d0
	ctx.lr = 0x82118548;
	sub_821713D0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r4,r6,-15064
	ctx.r4.s64 = ctx.r6.s64 + -15064;
	// addi r5,r7,21576
	ctx.r5.s64 = ctx.r7.s64 + 21576;
	// addi r28,r10,-15056
	ctx.r28.s64 = ctx.r10.s64 + -15056;
	// addi r27,r11,20080
	ctx.r27.s64 = ctx.r11.s64 + 20080;
	// bl 0x82127578
	ctx.lr = 0x8211856C;
	sub_82127578(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82127578
	ctx.lr = 0x82118578;
	sub_82127578(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r29,r8,-14908
	ctx.r29.s64 = ctx.r8.s64 + -14908;
	// addi r23,r6,-14928
	ctx.r23.s64 = ctx.r6.s64 + -14928;
	// addi r22,r11,-14944
	ctx.r22.s64 = ctx.r11.s64 + -14944;
	// addi r28,r28,-14960
	ctx.r28.s64 = ctx.r28.s64 + -14960;
	// addi r27,r27,-14976
	ctx.r27.s64 = ctx.r27.s64 + -14976;
	// addi r26,r26,-14988
	ctx.r26.s64 = ctx.r26.s64 + -14988;
	// addi r21,r9,18184
	ctx.r21.s64 = ctx.r9.s64 + 18184;
	// addi r20,r7,18800
	ctx.r20.s64 = ctx.r7.s64 + 18800;
	// addi r19,r5,18808
	ctx.r19.s64 = ctx.r5.s64 + 18808;
	// addi r18,r10,18816
	ctx.r18.s64 = ctx.r10.s64 + 18816;
	// addi r25,r25,18824
	ctx.r25.s64 = ctx.r25.s64 + 18824;
	// addi r24,r24,18832
	ctx.r24.s64 = ctx.r24.s64 + 18832;
	// bl 0x82119cc8
	ctx.lr = 0x821185E8;
	sub_82119CC8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821275c8
	ctx.lr = 0x821185F4;
	sub_821275C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82127630
	ctx.lr = 0x82118600;
	sub_82127630(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x82127630
	ctx.lr = 0x8211860C;
	sub_82127630(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x82127680
	ctx.lr = 0x82118618;
	sub_82127680(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x82127680
	ctx.lr = 0x82118624;
	sub_82127680(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x821276d0
	ctx.lr = 0x82118630;
	sub_821276D0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,1432
	ctx.r4.s64 = ctx.r1.s64 + 1432;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1432(r1)
	REX_STORE_U32(ctx.r1.u32 + 1432, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x82118654;
	sub_822009C8(ctx, base);
	// lwz r3,3064(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3064);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118674
	if (ctx.cr6.eq) goto loc_82118674;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82118674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82118674:
	// addi r3,r1,3552
	ctx.r3.s64 = ctx.r1.s64 + 3552;
	// bl 0x821d5d58
	ctx.lr = 0x8211867C;
	sub_821D5D58(ctx, base);
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8240E660) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x8240E668;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82487a60
	ctx.lr = 0x8240E690;
	sub_82487A60(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240e6b4
	if (ctx.cr6.eq) goto loc_8240E6B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x8240E6B0;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8240E6B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x8240E6BC;
	sub_823CFE80(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x8240e6e0
	if (ctx.cr6.eq) goto loc_8240E6E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x823c8de0
	ctx.lr = 0x8240E6DC;
	sub_823C8DE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8240E6E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cfe80
	ctx.lr = 0x8240E6E8;
	sub_823CFE80(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824149F8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,15
	ctx.r7.s64 = 15;
	// slw r9,r5,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82414a28
	if (!ctx.cr6.eq) goto loc_82414A28;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82414A28:
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82415058) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8241506c
	if (ctx.cr0.eq) goto loc_8241506C;
loc_82415064:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8241506C:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824150a8
	if (ctx.cr0.eq) goto loc_824150A8;
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82415064
	if (ctx.cr0.eq) goto loc_82415064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f0,9568(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 9568);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82415094
	if (!ctx.cr6.gt) goto loc_82415094;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82415064
	if (ctx.cr0.eq) goto loc_82415064;
loc_82415094:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x824150b8
	if (!ctx.cr6.lt) goto loc_824150B8;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824150b8
	if (!ctx.cr0.eq) goto loc_824150B8;
	// b 0x82415064
	goto loc_82415064;
loc_824150A8:
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lfd f13,16(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82415064
	if (!ctx.cr6.eq) goto loc_82415064;
loc_824150B8:
	// stfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82417D78) {
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
	// lwz r31,16(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82417e38
	if (ctx.cr6.eq) goto loc_82417E38;
loc_82417D9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82417db4
	if (ctx.cr6.eq) goto loc_82417DB4;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82417d9c
	if (!ctx.cr6.eq) goto loc_82417D9C;
loc_82417DB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82417e38
	if (ctx.cr6.eq) goto loc_82417E38;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82417e38
	if (ctx.cr0.eq) goto loc_82417E38;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82415808
	ctx.lr = 0x82417E00;
	sub_82415808(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82417e38
	if (ctx.cr0.eq) goto loc_82417E38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// rlwinm r9,r11,19,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3FFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82417e38
	if (!ctx.cr6.lt) goto loc_82417E38;
	// rlwinm r10,r10,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r11,r11,0,19,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF8001FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82417E38:
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

DEFINE_REX_FUNC(sub_8241E1B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x8241E1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8241e28c
	if (!ctx.cr0.eq) goto loc_8241E28C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241e28c
	if (ctx.cr0.eq) goto loc_8241E28C;
loc_8241E1E4:
	// lwz r11,616(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 616);
	// li r10,68
	ctx.r10.s64 = 68;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8241e274
	if (ctx.cr0.eq) goto loc_8241E274;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_8241E218:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8241e274
	if (ctx.cr6.eq) goto loc_8241E274;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// addi r8,r8,21
	ctx.r8.s64 = ctx.r8.s64 + 21;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// srw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8241e24c
	if (ctx.cr0.eq) goto loc_8241E24C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8241e218
	goto loc_8241E218;
loc_8241E24C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8241e274
	if (ctx.cr6.eq) goto loc_8241E274;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823bc8c0
	ctx.lr = 0x8241E264;
	sub_823BC8C0(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_8241E274:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8241e28c
	if (!ctx.cr0.eq) goto loc_8241E28C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8241e1e4
	if (!ctx.cr6.eq) goto loc_8241E1E4;
loc_8241E28C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r28.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bne 0x8241e2c8
	if (!ctx.cr0.eq) goto loc_8241E2C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8241e2cc
	goto loc_8241E2CC;
loc_8241E2C8:
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
loc_8241E2CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241e2e8
	if (ctx.cr6.eq) goto loc_8241E2E8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8241e2e8
	if (!ctx.cr6.eq) goto loc_8241E2E8;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8241E2E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82432B20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x82432B28;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r16,1
	ctx.r16.s64 = 1;
	// li r17,8
	ctx.r17.s64 = 8;
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432c94
	if (ctx.cr0.eq) goto loc_82432C94;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82432c94
	if (!ctx.cr0.eq) goto loc_82432C94;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82432c94
	if (ctx.cr0.eq) goto loc_82432C94;
loc_82432B5C:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82432c78
	if (!ctx.cr0.eq) goto loc_82432C78;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82432c78
	if (ctx.cr0.eq) goto loc_82432C78;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x82432bb4
	if (ctx.cr6.eq) goto loc_82432BB4;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x82432bb4
	if (ctx.cr6.eq) goto loc_82432BB4;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x82432bb4
	if (ctx.cr6.eq) goto loc_82432BB4;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x82432bb4
	if (ctx.cr6.eq) goto loc_82432BB4;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x82432bb4
	if (ctx.cr6.eq) goto loc_82432BB4;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82432bb8
	if (!ctx.cr6.eq) goto loc_82432BB8;
loc_82432BB4:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82432BB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432c78
	if (ctx.cr0.eq) goto loc_82432C78;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc400
	ctx.lr = 0x82432BD0;
	sub_823BC400(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82432c78
	if (!ctx.cr0.eq) goto loc_82432C78;
	// rlwinm r8,r10,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x82432bf8
	if (ctx.cr6.eq) goto loc_82432BF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82432c78
	if (!ctx.cr6.eq) goto loc_82432C78;
loc_82432BF8:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
loc_82432BFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82432c1c
	if (ctx.cr6.eq) goto loc_82432C1C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82432c20
	if (!ctx.cr6.eq) goto loc_82432C20;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82432bfc
	goto loc_82432BFC;
loc_82432C1C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82432C20:
	// subf r9,r17,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r17.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82432c5c
	if (ctx.cr6.eq) goto loc_82432C5C;
	// not r8,r31
	ctx.r8.u64 = ~ctx.r31.u64;
	// rlwimi r8,r31,0,14,12
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r8.u64 & 0x40000);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwimi r7,r8,0,31,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r7.u64 & 0x2);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82432C5C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82432c78
	if (ctx.cr6.eq) goto loc_82432C78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823d0698
	ctx.lr = 0x82432C78;
	sub_823D0698(ctx, base);
loc_82432C78:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82432c94
	if (!ctx.cr0.eq) goto loc_82432C94;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82432b5c
	if (!ctx.cr6.eq) goto loc_82432B5C;
loc_82432C94:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432e54
	if (ctx.cr0.eq) goto loc_82432E54;
	// lwz r11,620(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 620);
	// lwz r31,616(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// mulli r11,r11,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82432e4c
	goto loc_82432E4C;
loc_82432CB4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432e38
	if (ctx.cr0.eq) goto loc_82432E38;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432cf8
	if (ctx.cr6.eq) goto loc_82432CF8;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432cf8
	if (ctx.cr0.eq) goto loc_82432CF8;
	// b 0x82432ce8
	goto loc_82432CE8;
loc_82432CDC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432cf4
	if (ctx.cr0.eq) goto loc_82432CF4;
loc_82432CE8:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82432cdc
	if (!ctx.cr6.eq) goto loc_82432CDC;
loc_82432CF4:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82432CF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432d30
	if (ctx.cr6.eq) goto loc_82432D30;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432d30
	if (ctx.cr0.eq) goto loc_82432D30;
	// b 0x82432d20
	goto loc_82432D20;
loc_82432D14:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432d2c
	if (ctx.cr0.eq) goto loc_82432D2C;
loc_82432D20:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82432d14
	if (!ctx.cr6.eq) goto loc_82432D14;
loc_82432D2C:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82432D30:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432d68
	if (ctx.cr6.eq) goto loc_82432D68;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432d68
	if (ctx.cr0.eq) goto loc_82432D68;
	// b 0x82432d58
	goto loc_82432D58;
loc_82432D4C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82432d64
	if (ctx.cr0.eq) goto loc_82432D64;
loc_82432D58:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82432d4c
	if (!ctx.cr6.eq) goto loc_82432D4C;
loc_82432D64:
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82432D68:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82432e38
	if (ctx.cr6.eq) goto loc_82432E38;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82432e38
	if (ctx.cr6.eq) goto loc_82432E38;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82432e38
	if (ctx.cr6.eq) goto loc_82432E38;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82432e38
	if (!ctx.cr0.eq) goto loc_82432E38;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432e38
	if (ctx.cr0.eq) goto loc_82432E38;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x82432e38
	if (!ctx.cr6.eq) goto loc_82432E38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8241e648
	ctx.lr = 0x82432DC4;
	sub_8241E648(ctx, base);
	// lwz r30,20(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82432e38
	if (ctx.cr0.eq) goto loc_82432E38;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82487a60
	ctx.lr = 0x82432DF4;
	sub_82487A60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x82487a60
	ctx.lr = 0x82432E20;
	sub_82487A60(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x823cff48
	ctx.lr = 0x82432E38;
	sub_823CFF48(ctx, base);
loc_82432E38:
	// lwz r10,620(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 620);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82432E4C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82432cb4
	if (ctx.cr6.lt) goto loc_82432CB4;
loc_82432E54:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc8c0
	ctx.lr = 0x82432E64;
	sub_823BC8C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r19,r23,4
	ctx.r19.s64 = ctx.r23.s64 + 4;
	// ori r11,r23,1
	ctx.r11.u64 = ctx.r23.u64 | 1;
	// ori r10,r19,1
	ctx.r10.u64 = ctx.r19.u64 | 1;
	// stw r11,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc8c0
	ctx.lr = 0x82432E8C;
	sub_823BC8C0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r20,r25,4
	ctx.r20.s64 = ctx.r25.s64 + 4;
	// addi r18,r22,4
	ctx.r18.s64 = ctx.r22.s64 + 4;
	// ori r11,r22,1
	ctx.r11.u64 = ctx.r22.u64 | 1;
	// ori r10,r18,1
	ctx.r10.u64 = ctx.r18.u64 | 1;
	// stw r11,4(r22)
	REX_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82432ebc
	if (!ctx.cr0.eq) goto loc_82432EBC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82432EBC:
	// lwz r11,108(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// ori r21,r25,1
	ctx.r21.u64 = ctx.r25.u64 | 1;
	// ori r10,r20,1
	ctx.r10.u64 = ctx.r20.u64 | 1;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// stw r21,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r21.u32);
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r24,108(r25)
	REX_STORE_U32(ctx.r25.u32 + 108, ctx.r24.u32);
loc_82432ED8:
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r21,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r24,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r24.u32);
	// lwz r30,40(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433010
	if (ctx.cr0.eq) goto loc_82433010;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82433010
	if (!ctx.cr0.eq) goto loc_82433010;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82433010
	if (ctx.cr0.eq) goto loc_82433010;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82432f68
	if (ctx.cr6.eq) goto loc_82432F68;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82432f68
	if (ctx.cr6.eq) goto loc_82432F68;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82432f68
	if (ctx.cr6.eq) goto loc_82432F68;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82432f68
	if (ctx.cr6.eq) goto loc_82432F68;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82432f68
	if (ctx.cr6.eq) goto loc_82432F68;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82432f6c
	if (!ctx.cr6.eq) goto loc_82432F6C;
loc_82432F68:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82432F6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433010
	if (ctx.cr0.eq) goto loc_82433010;
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
	ctx.lr = 0x82432F8C;
	sub_823BC400(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82433010
	if (!ctx.cr0.eq) goto loc_82433010;
	// rlwinm r8,r11,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x82432fb4
	if (ctx.cr6.eq) goto loc_82432FB4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82433010
	if (!ctx.cr6.eq) goto loc_82433010;
loc_82432FB4:
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
loc_82432FB8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82432fd8
	if (ctx.cr6.eq) goto loc_82432FD8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82432fdc
	if (!ctx.cr6.eq) goto loc_82432FDC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82432fb8
	goto loc_82432FB8;
loc_82432FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82432FDC:
	// subf r10,r17,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r17.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8243371c
	if (!ctx.cr6.eq) goto loc_8243371C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243371c
	if (ctx.cr6.eq) goto loc_8243371C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82433214
	if (!ctx.cr6.eq) goto loc_82433214;
loc_82433010:
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433214
	if (ctx.cr0.eq) goto loc_82433214;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243308c
	if (!ctx.cr0.eq) goto loc_8243308C;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8243308c
	if (ctx.cr0.eq) goto loc_8243308C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x8243308c
	if (!ctx.cr6.eq) goto loc_8243308C;
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
	ctx.lr = 0x8243305C;
	sub_823BC400(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_82433068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433084
	if (ctx.cr6.eq) goto loc_82433084;
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82433214
	if (!ctx.cr6.eq) goto loc_82433214;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82433068
	goto loc_82433068;
loc_82433084:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x82433214
	goto loc_82433214;
loc_8243308C:
	// addi r3,r27,84
	ctx.r3.s64 = ctx.r27.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82433098:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824331ac
	if (!ctx.cr6.eq) goto loc_824331AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82433098
	if (ctx.cr6.lt) goto loc_82433098;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824330B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433214
	if (ctx.cr0.eq) goto loc_82433214;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824330dc
	if (ctx.cr6.eq) goto loc_824330DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// bne cr6,0x824330e0
	if (!ctx.cr6.eq) goto loc_824330E0;
loc_824330DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824330E0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82433214
	if (ctx.cr0.eq) goto loc_82433214;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_824330F8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824331d8
	if (ctx.cr6.eq) goto loc_824331D8;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r8,r27,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r27.u64;
loc_82433110:
	// lwzx r31,r8,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x824331b4
	if (!ctx.cr6.eq) goto loc_824331B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82433110
	if (ctx.cr6.lt) goto loc_82433110;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
loc_82433134:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824331cc
	if (ctx.cr0.eq) goto loc_824331CC;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r16,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824331d0
	if (!ctx.cr0.eq) goto loc_824331D0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8243316C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824331c4
	if (ctx.cr6.eq) goto loc_824331C4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// clrlwi r31,r9,13
	ctx.r31.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r31,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r31,r31,27
	ctx.r31.u64 = ctx.r31.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r31,r16,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824331bc
	if (!ctx.cr0.eq) goto loc_824331BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8243316c
	goto loc_8243316C;
loc_824331AC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x824330b8
	goto loc_824330B8;
loc_824331B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82433134
	goto loc_82433134;
loc_824331BC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x824331d0
	goto loc_824331D0;
loc_824331C4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x824331d0
	goto loc_824331D0;
loc_824331CC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_824331D0:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x824330f8
	goto loc_824330F8;
loc_824331D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x824331e8
	if (!ctx.cr6.eq) goto loc_824331E8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82433214
	if (ctx.cr6.eq) goto loc_82433214;
loc_824331E8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82433208
	if (ctx.cr6.eq) goto loc_82433208;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82433200
	if (!ctx.cr6.eq) goto loc_82433200;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82433214
	if (ctx.cr6.eq) goto loc_82433214;
loc_82433200:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82433214
	goto loc_82433214;
loc_82433208:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82433214
	if (ctx.cr6.eq) goto loc_82433214;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_82433214:
	// lwz r29,12(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82433220:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824333bc
	if (ctx.cr6.eq) goto loc_824333BC;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82433374
	if (ctx.cr6.eq) goto loc_82433374;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r8,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433300
	if (ctx.cr0.eq) goto loc_82433300;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r9,r10,0,2,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFF8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82433280
	if (!ctx.cr0.eq) goto loc_82433280;
	// rlwinm r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_82433260:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82433280
	if (ctx.cr6.eq) goto loc_82433280;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r9,0,0,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000) | (ctx.r8.u64 & 0xFFFFFFFF00007FFF);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82433260
	goto loc_82433260;
loc_82433280:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-32768
	ctx.r9.s64 = ctx.r9.s64 + -32768;
	// rlwimi r9,r10,0,17,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0007FFF) | (ctx.r9.u64 & 0x3FFF8000);
	// rlwinm r10,r9,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82433374
	if (!ctx.cr0.eq) goto loc_82433374;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824332d8
	if (!ctx.cr0.eq) goto loc_824332D8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824332d8
	if (ctx.cr0.eq) goto loc_824332D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824332e4
	if (!ctx.cr6.gt) goto loc_824332E4;
loc_824332D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823f6380
	ctx.lr = 0x824332E4;
	sub_823F6380(ctx, base);
loc_824332E4:
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
	// b 0x82433374
	goto loc_82433374;
loc_82433300:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_82433304:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82433348
	if (ctx.cr6.eq) goto loc_82433348;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82433340
	if (ctx.cr6.eq) goto loc_82433340;
	// rlwinm r10,r8,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FFF;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r16,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433374
	if (ctx.cr0.eq) goto loc_82433374;
loc_82433340:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82433304
	goto loc_82433304;
loc_82433348:
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8243335c
	if (!ctx.cr6.eq) goto loc_8243335C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lis r30,4096
	ctx.r30.s64 = 268435456;
	// b 0x82433374
	goto loc_82433374;
loc_8243335C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8243337c
	if (!ctx.cr6.gt) goto loc_8243337C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82433370:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82433374:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x82433220
	goto loc_82433220;
loc_8243337C:
	// bne cr6,0x82433374
	if (!ctx.cr6.eq) goto loc_82433374;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_82433384:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433374
	if (ctx.cr6.eq) goto loc_82433374;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r8,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FFF;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r16,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82433370
	if (!ctx.cr0.eq) goto loc_82433370;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82433384
	goto loc_82433384;
loc_824333BC:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82433490
	if (!ctx.cr0.eq) goto loc_82433490;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82433490
	if (ctx.cr0.eq) goto loc_82433490;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x82433490
	if (!ctx.cr6.eq) goto loc_82433490;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc400
	ctx.lr = 0x824333FC;
	sub_823BC400(ctx, base);
	// addi r10,r31,-20
	ctx.r10.s64 = ctx.r31.s64 + -20;
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8243342c
	goto loc_8243342C;
loc_82433424:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8243342C:
	// beq 0x8243343c
	if (ctx.cr0.eq) goto loc_8243343C;
	// lwz r31,80(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82433424
	if (!ctx.cr6.eq) goto loc_82433424;
loc_8243343C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243346c
	if (!ctx.cr0.eq) goto loc_8243346C;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8243346c
	if (ctx.cr0.eq) goto loc_8243346C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82433478
	if (!ctx.cr6.gt) goto loc_82433478;
loc_8243346C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f6380
	ctx.lr = 0x82433478;
	sub_823F6380(ctx, base);
loc_82433478:
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
loc_82433490:
	// lwz r29,12(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
loc_82433494:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82433644
	if (ctx.cr6.eq) goto loc_82433644;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8243363c
	if (ctx.cr6.eq) goto loc_8243363C;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm. r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243363c
	if (!ctx.cr0.eq) goto loc_8243363C;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_824334BC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82433500
	if (ctx.cr6.eq) goto loc_82433500;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x824334f8
	if (ctx.cr6.eq) goto loc_824334F8;
	// rlwinm r10,r9,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3FFF;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r16,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243363c
	if (ctx.cr0.eq) goto loc_8243363C;
loc_824334F8:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x824334bc
	goto loc_824334BC;
loc_82433500:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824335e0
	if (!ctx.cr0.eq) goto loc_824335E0;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x824335e0
	if (ctx.cr0.eq) goto loc_824335E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x824335e0
	if (!ctx.cr6.eq) goto loc_824335E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bc400
	ctx.lr = 0x82433540;
	sub_823BC400(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r31,r11,-20
	ctx.r31.s64 = ctx.r11.s64 + -20;
	// bl 0x823bc400
	ctx.lr = 0x82433560;
	sub_823BC400(ctx, base);
	// lwzx r10,r31,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x8243358c
	goto loc_8243358C;
loc_82433584:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_8243358C:
	// beq 0x8243359c
	if (ctx.cr0.eq) goto loc_8243359C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82433584
	if (!ctx.cr6.eq) goto loc_82433584;
loc_8243359C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_824335A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824335c4
	if (ctx.cr6.eq) goto loc_824335C4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824335bc
	if (ctx.cr6.eq) goto loc_824335BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824335a0
	goto loc_824335A0;
loc_824335BC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// b 0x824335c8
	goto loc_824335C8;
loc_824335C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824335C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824335e0
	if (ctx.cr0.eq) goto loc_824335E0;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8243363c
	if (!ctx.cr6.eq) goto loc_8243363C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8243363c
	goto loc_8243363C;
loc_824335E0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8243363c
	if (ctx.cr6.eq) goto loc_8243363C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82433618
	if (!ctx.cr0.eq) goto loc_82433618;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82433618
	if (ctx.cr0.eq) goto loc_82433618;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82433624
	if (!ctx.cr6.gt) goto loc_82433624;
loc_82433618:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f6380
	ctx.lr = 0x82433624;
	sub_823F6380(ctx, base);
loc_82433624:
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
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
loc_8243363C:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x82433494
	goto loc_82433494;
loc_82433644:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82432ed8
	if (!ctx.cr6.eq) goto loc_82432ED8;
loc_82433650:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82433664
	if (!ctx.cr0.eq) goto loc_82433664;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x824336a8
	if (!ctx.cr0.eq) goto loc_824336A8;
loc_82433664:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82433728
	if (!ctx.cr0.eq) goto loc_82433728;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82433728
	if (ctx.cr0.eq) goto loc_82433728;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82433708
	if (!ctx.cr0.eq) goto loc_82433708;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// b 0x824336d4
	goto loc_824336D4;
loc_824336A8:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82433708
	if (!ctx.cr0.eq) goto loc_82433708;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_824336D4:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823a0e28
	ctx.lr = 0x82433708;
	sub_823A0E28(ctx, base);
loc_82433708:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82433650
	if (ctx.cr6.eq) goto loc_82433650;
	// b 0x82432ed8
	goto loc_82432ED8;
loc_8243371C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823a0e88
	ctx.lr = 0x82433728;
	sub_823A0E88(ctx, base);
loc_82433728:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824338a0
	if (!ctx.cr0.eq) goto loc_824338A0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824338a0
	if (ctx.cr0.eq) goto loc_824338A0;
loc_82433740:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243375c
	if (ctx.cr6.eq) goto loc_8243375C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne cr6,0x82433760
	if (!ctx.cr6.eq) goto loc_82433760;
loc_8243375C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82433760:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82433884
	if (ctx.cr0.eq) goto loc_82433884;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82433884
	if (!ctx.cr0.eq) goto loc_82433884;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82433884
	if (ctx.cr0.eq) goto loc_82433884;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x82433884
	if (!ctx.cr6.eq) goto loc_82433884;
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
	ctx.lr = 0x824337AC;
	sub_823BC400(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824337c8
	if (ctx.cr0.eq) goto loc_824337C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824337C8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82433884
	if (!ctx.cr6.eq) goto loc_82433884;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824337f4
	if (!ctx.cr0.eq) goto loc_824337F4;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x824337f4
	if (ctx.cr6.lt) goto loc_824337F4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82433884
	if (!ctx.cr6.gt) goto loc_82433884;
loc_824337F4:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8248c338
	ctx.lr = 0x82433804;
	sub_8248C338(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82433884
	if (ctx.cr0.eq) goto loc_82433884;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
loc_82433810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82433830
	if (ctx.cr6.eq) goto loc_82433830;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82433834
	if (!ctx.cr6.eq) goto loc_82433834;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82433810
	goto loc_82433810;
loc_82433830:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82433834:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82433850
	goto loc_82433850;
loc_82433848:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82433850:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82433848
	if (!ctx.cr6.eq) goto loc_82433848;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,31,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r10.u64 & 0x2);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82433884:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824338a0
	if (!ctx.cr0.eq) goto loc_824338A0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82433740
	if (!ctx.cr6.eq) goto loc_82433740;
loc_824338A0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824873E0) {
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
	// rlwimi r8,r7,5,24,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// andi. r10,r8,231
	ctx.r10.u64 = ctx.r8.u64 & 231;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// addi r10,r6,-5
	ctx.r10.s64 = ctx.r6.s64 + -5;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// rlwinm r11,r11,0,25,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE007F;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r11,0,13,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt cr6,0x82487580
	if (ctx.cr6.gt) goto loc_82487580;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,32672
	ctx.r12.s64 = ctx.r12.s64 + 32672;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32184
	ctx.r12.s64 = -2109210624;
	// addi r12,r12,29784
	ctx.r12.s64 = ctx.r12.s64 + 29784;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82487458;
	case 1:
		goto loc_82487458;
	case 2:
		goto loc_82487458;
	case 3:
		goto loc_82487458;
	case 4:
		goto loc_82487580;
	case 5:
		goto loc_82487474;
	case 6:
		goto loc_82487474;
	case 7:
		goto loc_82487580;
	case 8:
		goto loc_82487580;
	case 9:
		goto loc_82487580;
	case 10:
		goto loc_82487580;
	case 11:
		goto loc_82487580;
	case 12:
		goto loc_82487580;
	case 13:
		goto loc_82487580;
	case 14:
		goto loc_82487580;
	case 15:
		goto loc_82487580;
	case 16:
		goto loc_8248748C;
	case 17:
		goto loc_8248748C;
	case 18:
		goto loc_8248748C;
	case 19:
		goto loc_8248748C;
	case 20:
		goto loc_82487458;
	case 21:
		goto loc_82487458;
	case 22:
		goto loc_82487458;
	case 23:
		goto loc_82487458;
	case 24:
		goto loc_824874AC;
	case 25:
		goto loc_824874C4;
	case 26:
		goto loc_82487580;
	case 27:
		goto loc_82487580;
	case 28:
		goto loc_82487580;
	case 29:
		goto loc_82487580;
	case 30:
		goto loc_82487580;
	case 31:
		goto loc_82487580;
	case 32:
		goto loc_82487580;
	case 33:
		goto loc_82487580;
	case 34:
		goto loc_82487458;
	case 35:
		goto loc_82487458;
	case 36:
		goto loc_82487458;
	case 37:
		goto loc_82487458;
	case 38:
		goto loc_82487580;
	case 39:
		goto loc_82487474;
	case 40:
		goto loc_82487474;
	case 41:
		goto loc_82487580;
	case 42:
		goto loc_82487580;
	case 43:
		goto loc_82487580;
	case 44:
		goto loc_82487580;
	case 45:
		goto loc_82487580;
	case 46:
		goto loc_82487580;
	case 47:
		goto loc_824874E4;
	case 48:
		goto loc_824874E4;
	case 49:
		goto loc_824874E4;
	case 50:
		goto loc_824874C4;
	case 51:
		goto loc_824874C4;
	case 52:
		goto loc_82487580;
	case 53:
		goto loc_82487580;
	case 54:
		goto loc_8248748C;
	case 55:
		goto loc_8248748C;
	case 56:
		goto loc_8248748C;
	case 57:
		goto loc_8248748C;
	case 58:
		goto loc_8248748C;
	case 59:
		goto loc_8248748C;
	case 60:
		goto loc_8248748C;
	case 61:
		goto loc_8248748C;
	case 62:
		goto loc_82487458;
	case 63:
		goto loc_82487458;
	case 64:
		goto loc_82487458;
	case 65:
		goto loc_82487458;
	case 66:
		goto loc_82487458;
	case 67:
		goto loc_824874E4;
	case 68:
		goto loc_82487580;
	case 69:
		goto loc_82487580;
	case 70:
		goto loc_82487580;
	case 71:
		goto loc_82487580;
	case 72:
		goto loc_82487580;
	case 73:
		goto loc_82487580;
	case 74:
		goto loc_82487580;
	case 75:
		goto loc_82487580;
	case 76:
		goto loc_82487580;
	case 77:
		goto loc_82487580;
	case 78:
		goto loc_82487580;
	case 79:
		goto loc_82487580;
	case 80:
		goto loc_82487580;
	case 81:
		goto loc_824874FC;
	case 82:
		goto loc_824874FC;
	case 83:
		goto loc_82487580;
	case 84:
		goto loc_82487580;
	case 85:
		goto loc_82487580;
	case 86:
		goto loc_82487578;
	case 87:
		goto loc_82487578;
	case 88:
		goto loc_82487578;
	case 89:
		goto loc_82487578;
	case 90:
		goto loc_82487580;
	case 91:
		goto loc_8248750C;
	case 92:
		goto loc_82487538;
	case 93:
		goto loc_82487578;
	case 94:
		goto loc_82487538;
	case 95:
		goto loc_82487538;
	case 96:
		goto loc_82487578;
	case 97:
		goto loc_82487578;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82487458:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
loc_8248746C:
	// sth r11,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// b 0x82487580
	goto loc_82487580;
loc_82487474:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x8248746c
	goto loc_8248746C;
loc_8248748C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// andi. r9,r10,61166
	ctx.r9.u64 = ctx.r10.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,61166
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 61166, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r10,61166
	ctx.r11.u64 = ctx.r10.u64 | 61166;
	// b 0x8248746c
	goto loc_8248746C;
loc_824874AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// b 0x8248746c
	goto loc_8248746C;
loc_824874C4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r10,12
	ctx.r11.u64 = ctx.r10.u64 | 12;
	// b 0x8248746c
	goto loc_8248746C;
loc_824874E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,8738
	ctx.r10.u64 = ctx.r11.u64 & 8738;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,8738
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8738, ctx.xer);
	// beq cr6,0x82487580
	if (ctx.cr6.eq) goto loc_82487580;
	// ori r11,r11,8738
	ctx.r11.u64 = ctx.r11.u64 | 8738;
	// b 0x8248746c
	goto loc_8248746C;
loc_824874FC:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x82487580
	goto loc_82487580;
loc_8248750C:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x8248751C;
	sub_823BC400(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// li r10,57
	ctx.r10.s64 = 57;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r10,19,7,14
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FE0000) | (ctx.r9.u64 & 0xFFFFFFFFFE01FFFF);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x82487580
	goto loc_82487580;
loc_82487538:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x823bc400
	ctx.lr = 0x82487548;
	sub_823BC400(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// li r10,228
	ctx.r10.s64 = 228;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// oris r10,r8,3871
	ctx.r10.u64 = ctx.r8.u64 | 253689856;
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82487580
	goto loc_82487580;
loc_82487578:
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82487580:
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

DEFINE_REX_FUNC(sub_824952D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x824952D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,-25684(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -25684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82495300
	if (ctx.cr6.eq) goto loc_82495300;
	// bl 0x824951c8
	ctx.lr = 0x824952FC;
	sub_824951C8(ctx, base);
	// b 0x82495328
	goto loc_82495328;
loc_82495300:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82493880
	ctx.lr = 0x82495310;
	sub_82493880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82495328
	if (ctx.cr0.lt) goto loc_82495328;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82494a10
	ctx.lr = 0x82495328;
	sub_82494A10(ctx, base);
loc_82495328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82496780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82496788;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x824967c8
	if (!ctx.cr6.eq) goto loc_824967C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-27680
	ctx.r6.s64 = ctx.r11.s64 + -27680;
	// addi r5,r10,-10008
	ctx.r5.s64 = ctx.r10.s64 + -10008;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,1777
	ctx.r7.s64 = 1777;
	// bl 0x823afbd8
	ctx.lr = 0x824967C8;
	sub_823AFBD8(ctx, base);
loc_824967C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b5850
	ctx.lr = 0x824967D8;
	sub_823B5850(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82496840
	if (!ctx.cr6.eq) goto loc_82496840;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x824967fc
	if (ctx.cr6.eq) goto loc_824967FC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5b58
	ctx.lr = 0x824967FC;
	sub_823B5B58(ctx, base);
loc_824967FC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82496838
	if (ctx.cr6.eq) goto loc_82496838;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82496838
	if (ctx.cr6.eq) goto loc_82496838;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,10280
	ctx.r11.s64 = ctx.r11.s64 + 10280;
	// addi r4,r10,-27584
	ctx.r4.s64 = ctx.r10.s64 + -27584;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82496838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82496838:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249689c
	goto loc_8249689C;
loc_82496840:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8249685c
	if (ctx.cr6.eq) goto loc_8249685C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b5b58
	ctx.lr = 0x8249685C;
	sub_823B5B58(ctx, base);
loc_8249685C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82496898
	if (ctx.cr6.eq) goto loc_82496898;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82496898
	if (ctx.cr6.eq) goto loc_82496898;
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,10280
	ctx.r11.s64 = ctx.r11.s64 + 10280;
	// addi r4,r10,-27584
	ctx.r4.s64 = ctx.r10.s64 + -27584;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// lwz r5,140(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82496898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82496898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249689C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82499138) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,27856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824991B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82499748) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82499750;
	__savegprlr_27(ctx, base);
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82499790
	if (!ctx.cr6.eq) goto loc_82499790;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-27680
	ctx.r6.s64 = ctx.r11.s64 + -27680;
	// addi r5,r10,-10008
	ctx.r5.s64 = ctx.r10.s64 + -10008;
	// addi r4,r9,-10336
	ctx.r4.s64 = ctx.r9.s64 + -10336;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// bl 0x823afbd8
	ctx.lr = 0x82499790;
	sub_823AFBD8(ctx, base);
loc_82499790:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b5850
	ctx.lr = 0x824997A0;
	sub_823B5850(ctx, base);
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwimi r11,r3,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x824997f4
	if (ctx.cr6.eq) goto loc_824997F4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x824997f4
	if (ctx.cr6.eq) goto loc_824997F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82495338
	ctx.lr = 0x824997C8;
	sub_82495338(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,10280
	ctx.r11.s64 = ctx.r11.s64 + 10280;
	// addi r4,r10,-27332
	ctx.r4.s64 = ctx.r10.s64 + -27332;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,62
	ctx.r6.s64 = 62;
	// lwz r5,248(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x824997F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824997F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8249EFC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x8249EFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8249f044
	if (!ctx.cr6.eq) goto loc_8249F044;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x824b89c8
	ctx.lr = 0x8249EFE4;
	sub_824B89C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8247f618
	ctx.lr = 0x8249EFFC;
	sub_8247F618(ctx, base);
	// stw r3,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249ef18
	ctx.lr = 0x8249F008;
	sub_8249EF18(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8249f044
	if (ctx.cr6.lt) goto loc_8249F044;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8249F028:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,156(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stwx r8,r9,r7
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8249f028
	if (!ctx.cr0.eq) goto loc_8249F028;
loc_8249F044:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824A2930) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x824A2938;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a2964
	if (!ctx.cr6.lt) goto loc_824A2964;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2964:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2970
	if (!ctx.cr0.eq) goto loc_824A2970;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2970:
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r10.u32);
	// addi r10,r8,-22464
	ctx.r10.s64 = ctx.r8.s64 + -22464;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r20,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a29ac
	if (!ctx.cr0.eq) goto loc_824A29AC;
loc_824A29A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824a3938
	goto loc_824A3938;
loc_824A29AC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x824a29c4
	if (ctx.cr6.eq) goto loc_824A29C4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A29C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a29e8
	if (ctx.cr6.eq) goto loc_824A29E8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x824a29ac
	goto loc_824A29AC;
loc_824A29E8:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r16,r11,-9372
	ctx.r16.s64 = ctx.r11.s64 + -9372;
	// addi r15,r10,-22192
	ctx.r15.s64 = ctx.r10.s64 + -22192;
	// addi r19,r9,-10336
	ctx.r19.s64 = ctx.r9.s64 + -10336;
	// addi r14,r8,-22208
	ctx.r14.s64 = ctx.r8.s64 + -22208;
	// addi r18,r7,-22440
	ctx.r18.s64 = ctx.r7.s64 + -22440;
loc_824A2A18:
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a2a34
	if (!ctx.cr6.lt) goto loc_824A2A34;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2A34:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2a44
	if (!ctx.cr0.eq) goto loc_824A2A44;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2A44:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x824a2a58
	if (ctx.cr6.eq) goto loc_824A2A58;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x824a2a5c
	if (!ctx.cr6.eq) goto loc_824A2A5C;
loc_824A2A58:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2A5C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2bac
	if (!ctx.cr0.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2a74
	if (!ctx.cr6.lt) goto loc_824A2A74;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2A74:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2a84
	if (!ctx.cr0.eq) goto loc_824A2A84;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2A84:
	// cmpwi cr6,r10,83
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 83, ctx.xer);
	// beq cr6,0x824a2bac
	if (ctx.cr6.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2a9c
	if (!ctx.cr6.lt) goto loc_824A2A9C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2A9C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2aac
	if (!ctx.cr0.eq) goto loc_824A2AAC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2AAC:
	// cmpwi cr6,r10,113
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 113, ctx.xer);
	// beq cr6,0x824a2ac0
	if (ctx.cr6.eq) goto loc_824A2AC0;
	// cmpwi cr6,r10,114
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 114, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x824a2ac4
	if (!ctx.cr6.eq) goto loc_824A2AC4;
loc_824A2AC0:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2AC4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2bac
	if (!ctx.cr0.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2adc
	if (!ctx.cr6.lt) goto loc_824A2ADC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2ADC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2aec
	if (!ctx.cr0.eq) goto loc_824A2AEC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2AEC:
	// cmpwi cr6,r10,132
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 132, ctx.xer);
	// beq cr6,0x824a2bac
	if (ctx.cr6.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2b04
	if (!ctx.cr6.lt) goto loc_824A2B04;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2B04:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2b14
	if (!ctx.cr0.eq) goto loc_824A2B14;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2B14:
	// cmpwi cr6,r10,52
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 52, ctx.xer);
	// beq cr6,0x824a2b28
	if (ctx.cr6.eq) goto loc_824A2B28;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x824a2b2c
	if (!ctx.cr6.eq) goto loc_824A2B2C;
loc_824A2B28:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2B2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2bac
	if (!ctx.cr0.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2b44
	if (!ctx.cr6.lt) goto loc_824A2B44;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2B44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2b54
	if (!ctx.cr0.eq) goto loc_824A2B54;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2B54:
	// cmpwi cr6,r10,39
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 39, ctx.xer);
	// beq cr6,0x824a2bac
	if (ctx.cr6.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2b6c
	if (!ctx.cr6.lt) goto loc_824A2B6C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2B6C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2b7c
	if (!ctx.cr0.eq) goto loc_824A2B7C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2B7C:
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// beq cr6,0x824a2bac
	if (ctx.cr6.eq) goto loc_824A2BAC;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2b94
	if (!ctx.cr6.lt) goto loc_824A2B94;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2B94:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a2ba4
	if (!ctx.cr0.eq) goto loc_824A2BA4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A2BA4:
	// cmpwi cr6,r10,29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 29, ctx.xer);
	// bne cr6,0x824a3868
	if (!ctx.cr6.eq) goto loc_824A3868;
loc_824A2BAC:
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a2bc0
	if (!ctx.cr6.lt) goto loc_824A2BC0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2BC0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2bcc
	if (!ctx.cr0.eq) goto loc_824A2BCC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2BCC:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bgt cr6,0x824a30f0
	if (ctx.cr6.gt) goto loc_824A30F0;
	// beq cr6,0x824a3810
	if (ctx.cr6.eq) goto loc_824A3810;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x824a3020
	if (ctx.cr6.eq) goto loc_824A3020;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x824a2d8c
	if (ctx.cr6.eq) goto loc_824A2D8C;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x824a2d60
	if (ctx.cr6.eq) goto loc_824A2D60;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x824a2c5c
	if (ctx.cr6.eq) goto loc_824A2C5C;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x824a2c48
	if (ctx.cr6.eq) goto loc_824A2C48;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x824a3824
	if (!ctx.cr6.eq) goto loc_824A3824;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
loc_824A2C0C:
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a2c2c
	if (!ctx.cr6.lt) goto loc_824A2C2C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2C2C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2c38
	if (!ctx.cr0.eq) goto loc_824A2C38;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2C38:
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x824a3628
	if (ctx.cr6.eq) goto loc_824A3628;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x824a2c0c
	goto loc_824A2C0C;
loc_824A2C48:
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x824a2858
	ctx.lr = 0x824A2C50;
	sub_824A2858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a3820
	if (ctx.cr0.eq) goto loc_824A3820;
	// b 0x824a2d80
	goto loc_824A2D80;
loc_824A2C5C:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824a2c80
	if (!ctx.cr6.lt) goto loc_824A2C80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824a2c84
	goto loc_824A2C84;
loc_824A2C80:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2C84:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824a3820
	if (ctx.cr6.eq) goto loc_824A3820;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824a2d80
	if (!ctx.cr6.eq) goto loc_824A2D80;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_824A2C9C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824a2cd4
	if (!ctx.cr6.eq) goto loc_824A2CD4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a2cc0
	if (!ctx.cr6.lt) goto loc_824A2CC0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A2CC0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a2ccc
	if (!ctx.cr0.eq) goto loc_824A2CCC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2CCC:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x824a3824
	if (ctx.cr6.eq) goto loc_824A3824;
loc_824A2CD4:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x824a2cf0
	if (!ctx.cr6.lt) goto loc_824A2CF0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A2CF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x824a2d00
	if (!ctx.cr0.eq) goto loc_824A2D00;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2D00:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x824a2d14
	if (ctx.cr6.eq) goto loc_824A2D14;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x824a2d18
	if (!ctx.cr6.eq) goto loc_824A2D18;
loc_824A2D14:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A2D18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a2d28
	if (ctx.cr0.eq) goto loc_824A2D28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x824a2d54
	goto loc_824A2D54;
loc_824A2D28:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x824a2d38
	if (!ctx.cr6.lt) goto loc_824A2D38;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A2D38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x824a2d48
	if (!ctx.cr0.eq) goto loc_824A2D48;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A2D48:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x824a2d54
	if (!ctx.cr6.eq) goto loc_824A2D54;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_824A2D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A2D5C;
	sub_824A2338(ctx, base);
	// b 0x824a2c9c
	goto loc_824A2C9C;
loc_824A2D60:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// bl 0x824a2528
	ctx.lr = 0x824A2D80;
	sub_824A2528(ctx, base);
loc_824A2D80:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A2D88;
	sub_824A2338(ctx, base);
	// b 0x824a3824
	goto loc_824A3824;
loc_824A2D8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824a38c4
	if (ctx.cr6.gt) goto loc_824A38C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824A2DB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824a2ee0
	if (ctx.cr6.eq) goto loc_824A2EE0;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a2ddc
	if (ctx.cr6.eq) goto loc_824A2DDC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2db8
	if (!ctx.cr6.eq) goto loc_824A2DB8;
loc_824A2DDC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824A2DE0:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824A2DF0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824a2ee8
	if (ctx.cr6.eq) goto loc_824A2EE8;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a2e14
	if (ctx.cr6.eq) goto loc_824A2E14;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a2df0
	if (!ctx.cr6.eq) goto loc_824A2DF0;
loc_824A2E14:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824A2E18:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824a2ef0
	if (ctx.cr6.eq) goto loc_824A2EF0;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a2d80
	if (ctx.cr0.eq) goto loc_824A2D80;
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,20(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A2E38;
	sub_824B8C28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x8247f618
	ctx.lr = 0x824A2E58;
	sub_8247F618(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824b8c28
	ctx.lr = 0x824A2E6C;
	sub_824B8C28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r23,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r23,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r23.u8);
	// stb r23,9(r31)
	REX_STORE_U8(ctx.r31.u32 + 9, ctx.r23.u8);
	// stb r23,10(r31)
	REX_STORE_U8(ctx.r31.u32 + 10, ctx.r23.u8);
	// stb r23,11(r31)
	REX_STORE_U8(ctx.r31.u32 + 11, ctx.r23.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x824a3018
	goto loc_824A3018;
loc_824A2EE0:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x824a2de0
	goto loc_824A2DE0;
loc_824A2EE8:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x824a2e18
	goto loc_824A2E18;
loc_824A2EF0:
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r31,20(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A2F00;
	sub_824B8C28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x8247f618
	ctx.lr = 0x824A2F20;
	sub_8247F618(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824b8c28
	ctx.lr = 0x824A2F34;
	sub_824B8C28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stb r23,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r23,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r23,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,53
	ctx.r10.u64 = ctx.r10.u64 | 53;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// stb r23,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r23,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r23.u8);
	// stb r23,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r23,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// stb r23,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r23.u8);
	// stb r23,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r23.u8);
	// stb r23,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r23,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r23.u8);
	// stb r23,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r23.u8);
	// stb r23,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r23.u8);
	// stb r23,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r23.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_824A3018:
	// stw r31,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// b 0x824a3824
	goto loc_824A3824;
loc_824A3020:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824a38dc
	if (ctx.cr6.gt) goto loc_824A38DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a22d8
	ctx.lr = 0x824A3040;
	sub_824A22D8(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A3054;
	sub_824B8C28(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r10,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_824A306C:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a3088
	if (!ctx.cr6.lt) goto loc_824A3088;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A3088:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a3098
	if (!ctx.cr0.eq) goto loc_824A3098;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A3098:
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x824a3824
	if (ctx.cr6.eq) goto loc_824A3824;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a30b0
	if (!ctx.cr6.lt) goto loc_824A30B0;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A30B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a30bc
	if (!ctx.cr0.eq) goto loc_824A30BC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A30BC:
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bne cr6,0x824a30e4
	if (!ctx.cr6.eq) goto loc_824A30E4;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x824a3628
	if (ctx.cr6.eq) goto loc_824A3628;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_824A30E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A30EC;
	sub_824A2338(ctx, base);
	// b 0x824a306c
	goto loc_824A306C;
loc_824A30F0:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x824a3664
	if (ctx.cr6.eq) goto loc_824A3664;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// beq cr6,0x824a3594
	if (ctx.cr6.eq) goto loc_824A3594;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x824a34bc
	if (ctx.cr6.eq) goto loc_824A34BC;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x824a311c
	if (ctx.cr6.eq) goto loc_824A311C;
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x824a3824
	if (!ctx.cr6.eq) goto loc_824A3824;
	// b 0x824a2d80
	goto loc_824A2D80;
loc_824A311C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r9,1360(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x824a38f4
	if (ctx.cr6.gt) goto loc_824A38F4;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8247f618
	ctx.lr = 0x824A3140;
	sub_8247F618(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A3158;
	sub_824B8C28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a22d8
	ctx.lr = 0x824A3168;
	sub_824A22D8(ctx, base);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stb r23,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r23,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r10,53
	ctx.r10.u64 = ctx.r10.u64 | 53;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,7(r31)
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r3,1456(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x8247f618
	ctx.lr = 0x824A31D8;
	sub_8247F618(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r11,64
	ctx.r11.s64 = 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824A31EC:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824a31ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A31EC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824a21f8
	ctx.lr = 0x824A3204;
	sub_824A21F8(ctx, base);
	// lwz r25,20(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_824A3208:
	// lwz r28,20(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// bge cr6,0x824a3224
	if (!ctx.cr6.lt) goto loc_824A3224;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A3224:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x824a3234
	if (!ctx.cr0.eq) goto loc_824A3234;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A3234:
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x824a3248
	if (ctx.cr6.eq) goto loc_824A3248;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x824a324c
	if (!ctx.cr6.eq) goto loc_824A324C;
loc_824A3248:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A324C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a32a8
	if (ctx.cr0.eq) goto loc_824A32A8;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x824a3264
	if (!ctx.cr6.lt) goto loc_824A3264;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A3264:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a3270
	if (!ctx.cr0.eq) goto loc_824A3270;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_824A3270:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824a22d8
	ctx.lr = 0x824A3278;
	sub_824A22D8(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r29,114
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 114, ctx.xer);
	// bne cr6,0x824a3294
	if (!ctx.cr6.eq) goto loc_824A3294;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_824A3294:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x824a21f8
	ctx.lr = 0x824A32A8;
	sub_824A21F8(ctx, base);
loc_824A32A8:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a32c4
	if (!ctx.cr6.lt) goto loc_824A32C4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A32C4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a32d0
	if (!ctx.cr0.eq) goto loc_824A32D0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A32D0:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x824a3360
	if (!ctx.cr6.eq) goto loc_824A3360;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r7,r26
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x824a32ec
	if (!ctx.cr6.eq) goto loc_824A32EC;
	// lwz r17,20(r30)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_824A32EC:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_824A32F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x824a3310
	if (ctx.cr6.eq) goto loc_824A3310;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824a3324
	if (!ctx.cr6.eq) goto loc_824A3324;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_824A3310:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x824a32f8
	if (ctx.cr6.lt) goto loc_824A32F8;
	// b 0x824a3328
	goto loc_824A3328;
loc_824A3324:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
loc_824A3328:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x824a336c
	if (ctx.cr6.eq) goto loc_824A336C;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_824A3338:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x824a3358
	if (ctx.cr6.eq) goto loc_824A3358;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x824a3338
	if (ctx.cr6.lt) goto loc_824A3338;
	// b 0x824a3360
	goto loc_824A3360;
loc_824A3358:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r21.u32);
loc_824A3360:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A3368;
	sub_824A2338(ctx, base);
	// b 0x824a3208
	goto loc_824A3208;
loc_824A336C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r25,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r25,r28
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x824a33d0
	if (ctx.cr6.eq) goto loc_824A33D0;
loc_824A3380:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x824a2338
	ctx.lr = 0x824A338C;
	sub_824A2338(ctx, base);
	// b 0x824a33b8
	goto loc_824A33B8;
loc_824A3390:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824A33B8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a3390
	if (!ctx.cr6.eq) goto loc_824A3390;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824a3380
	if (!ctx.cr6.eq) goto loc_824A3380;
loc_824A33D0:
	// cmplw cr6,r28,r17
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x824a3458
	if (ctx.cr6.eq) goto loc_824A3458;
	// stb r23,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r23,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,39
	ctx.r11.u64 = ctx.r11.u64 | 39;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r17,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r17.u32);
	// bl 0x824a2338
	ctx.lr = 0x824A3404;
	sub_824A2338(ctx, base);
	// b 0x824a344c
	goto loc_824A344C;
loc_824A3408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x824a2338
	ctx.lr = 0x824A3414;
	sub_824A2338(ctx, base);
	// b 0x824a3440
	goto loc_824A3440;
loc_824A3418:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// stb r11,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 3);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_824A3440:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a3418
	if (!ctx.cr6.eq) goto loc_824A3418;
loc_824A344C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x824a3408
	if (!ctx.cr6.eq) goto loc_824A3408;
loc_824A3458:
	// stb r23,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// stb r23,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r23.u8);
	// stb r23,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r23.u8);
	// stb r23,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r23.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,41
	ctx.r11.u64 = ctx.r11.u64 | 41;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r23,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r23.u8);
	// stb r23,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r23.u8);
	// stb r23,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r23.u8);
	// stb r23,7(r31)
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r23.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r28,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A34A0;
	sub_824B8C28(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r24,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8247f7a0
	ctx.lr = 0x824A34B8;
	sub_8247F7A0(ctx, base);
	// b 0x824a3824
	goto loc_824A3824;
loc_824A34BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a22d8
	ctx.lr = 0x824A34C4;
	sub_824A22D8(ctx, base);
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x824a3584
	goto loc_824A3584;
loc_824A34D8:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a34f4
	if (!ctx.cr6.lt) goto loc_824A34F4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A34F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a3500
	if (!ctx.cr0.eq) goto loc_824A3500;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A3500:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x824a3528
	if (!ctx.cr6.eq) goto loc_824A3528;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x824a3824
	if (ctx.cr6.eq) goto loc_824A3824;
loc_824A3528:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x824a25e0
	ctx.lr = 0x824A3530;
	sub_824A25E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a3578
	if (ctx.cr0.eq) goto loc_824A3578;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_824A353C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A3544;
	sub_824A2338(ctx, base);
	// lwz r29,20(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a25e0
	ctx.lr = 0x824A3550;
	sub_824A25E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a355c
	if (ctx.cr0.eq) goto loc_824A355C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_824A355C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824a2578
	ctx.lr = 0x824A3564;
	sub_824A2578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a3570
	if (ctx.cr0.eq) goto loc_824A3570;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_824A3570:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x824a353c
	if (!ctx.cr6.gt) goto loc_824A353C;
loc_824A3578:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A3580;
	sub_824A2338(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_824A3584:
	// bl 0x824a2578
	ctx.lr = 0x824A3588;
	sub_824A2578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a34d8
	if (ctx.cr0.eq) goto loc_824A34D8;
	// b 0x824a3824
	goto loc_824A3824;
loc_824A3594:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a35b8
	if (!ctx.cr6.eq) goto loc_824A35B8;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,794
	ctx.r7.s64 = 794;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824A35B8;
	sub_823AFBD8(ctx, base);
loc_824A35B8:
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x824a2858
	ctx.lr = 0x824A35C0;
	sub_824A2858(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x824a35dc
	if (!ctx.cr6.lt) goto loc_824A35DC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A35DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a35e8
	if (!ctx.cr0.eq) goto loc_824A35E8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A35E8:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bne cr6,0x824a3634
	if (!ctx.cr6.eq) goto loc_824A3634;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824a361c
	if (ctx.cr6.gt) goto loc_824A361C;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,801
	ctx.r7.s64 = 801;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824A361C;
	sub_823AFBD8(ctx, base);
loc_824A361C:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_824A3628:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824a3858
	goto loc_824A3858;
loc_824A3634:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x824a3648
	if (!ctx.cr6.eq) goto loc_824A3648;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x824a3628
	goto loc_824A3628;
loc_824A3648:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r7,806
	ctx.r7.s64 = 806;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823afbd8
	ctx.lr = 0x824A3660;
	sub_823AFBD8(ctx, base);
	// b 0x824a3628
	goto loc_824A3628;
loc_824A3664:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824A3678:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824a37bc
	if (ctx.cr6.eq) goto loc_824A37BC;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824a369c
	if (ctx.cr6.eq) goto loc_824A369C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a3678
	if (!ctx.cr6.eq) goto loc_824A3678;
loc_824A369C:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824A36A0:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_824A36B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824a37c4
	if (ctx.cr6.eq) goto loc_824A37C4;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a36d4
	if (ctx.cr6.eq) goto loc_824A36D4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a36b0
	if (!ctx.cr6.eq) goto loc_824A36B0;
loc_824A36D4:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_824A36D8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824a3810
	if (ctx.cr6.eq) goto loc_824A3810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A36E8;
	sub_824A2338(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bne 0x824a3804
	if (!ctx.cr0.eq) goto loc_824A3804;
	// bl 0x824b8c28
	ctx.lr = 0x824A36FC;
	sub_824B8C28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_824A3708:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x824a3768
	if (!ctx.cr6.eq) goto loc_824A3768;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a372c
	if (!ctx.cr6.lt) goto loc_824A372C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A372C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a373c
	if (!ctx.cr0.eq) goto loc_824A373C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A373C:
	// cmpwi cr6,r10,39
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 39, ctx.xer);
	// beq cr6,0x824a3824
	if (ctx.cr6.eq) goto loc_824A3824;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a3754
	if (!ctx.cr6.lt) goto loc_824A3754;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A3754:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a3760
	if (!ctx.cr0.eq) goto loc_824A3760;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A3760:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x824a3824
	if (ctx.cr6.eq) goto loc_824A3824;
loc_824A3768:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// bge cr6,0x824a3784
	if (!ctx.cr6.lt) goto loc_824A3784;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A3784:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x824a3794
	if (!ctx.cr0.eq) goto loc_824A3794;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A3794:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x824a37a8
	if (ctx.cr6.eq) goto loc_824A37A8;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x824a37ac
	if (!ctx.cr6.eq) goto loc_824A37AC;
loc_824A37A8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A37AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a37cc
	if (ctx.cr0.eq) goto loc_824A37CC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x824a37f8
	goto loc_824A37F8;
loc_824A37BC:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x824a36a0
	goto loc_824A36A0;
loc_824A37C4:
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// b 0x824a36d8
	goto loc_824A36D8;
loc_824A37CC:
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x824a37dc
	if (!ctx.cr6.lt) goto loc_824A37DC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_824A37DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x824a37ec
	if (!ctx.cr0.eq) goto loc_824A37EC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A37EC:
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x824a37f8
	if (!ctx.cr6.eq) goto loc_824A37F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_824A37F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824a2338
	ctx.lr = 0x824A3800;
	sub_824A2338(ctx, base);
	// b 0x824a3708
	goto loc_824A3708;
loc_824A3804:
	// bl 0x824b8c28
	ctx.lr = 0x824A3808;
	sub_824B8C28(ctx, base);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// b 0x824a3824
	goto loc_824A3824;
loc_824A3810:
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x824b8c28
	ctx.lr = 0x824A381C;
	sub_824B8C28(ctx, base);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
loc_824A3820:
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
loc_824A3824:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x824a383c
	if (ctx.cr6.eq) goto loc_824A383C;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A383C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a3860
	if (ctx.cr6.eq) goto loc_824A3860;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824A3858:
	// stw r11,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x824a3824
	goto loc_824A3824;
loc_824A3860:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a2a18
	if (ctx.cr0.eq) goto loc_824A2A18;
loc_824A3868:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x824a3884
	if (!ctx.cr6.lt) goto loc_824A3884;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A3884:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x824a3894
	if (!ctx.cr0.eq) goto loc_824A3894;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_824A3894:
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// beq cr6,0x824a3924
	if (ctx.cr6.eq) goto loc_824A3924;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bge cr6,0x824a38ac
	if (!ctx.cr6.lt) goto loc_824A38AC;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_824A38AC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824a38b8
	if (!ctx.cr0.eq) goto loc_824A38B8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_824A38B8:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x824a3924
	if (ctx.cr6.eq) goto loc_824A3924;
	// b 0x824a29a4
	goto loc_824A29A4;
loc_824A38C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x825d4a30
	ctx.lr = 0x824A38DC;
	sub_825D4A30(ctx, base);
loc_824A38DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x825d4a30
	ctx.lr = 0x824A38F4;
	sub_825D4A30(ctx, base);
loc_824A38F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x825d4a30
	ctx.lr = 0x824A390C;
	sub_825D4A30(ctx, base);
loc_824A390C:
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x824a2858
	ctx.lr = 0x824A3914;
	sub_824A2858(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8247f7a0
	ctx.lr = 0x824A3924;
	sub_8247F7A0(ctx, base);
loc_824A3924:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a390c
	if (!ctx.cr6.eq) goto loc_824A390C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A3938:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824FCBE0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FDD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x824FDD28;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x825d7934
	ctx.lr = 0x824FDD34;
	__savevmx_124(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r5,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r5.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r4,220(r25)
	REX_STORE_U32(ctx.r25.u32 + 220, ctx.r4.u32);
loc_824FDD58:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDD6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824fdd98
	if (ctx.cr6.eq) goto loc_824FDD98;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDD88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x824fdd98
	if (ctx.cr6.eq) goto loc_824FDD98;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x824fdf54
	if (ctx.cr6.eq) goto loc_824FDF54;
loc_824FDD98:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDDB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x824fe140
	if (ctx.cr6.lt) goto loc_824FE140;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDDE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,92(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FDDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x820f5cb0
	ctx.lr = 0x824FDE00;
	sub_820F5CB0(ctx, base);
	// stw r3,232(r25)
	REX_STORE_U32(ctx.r25.u32 + 232, ctx.r3.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824ef528
	ctx.lr = 0x824FDE0C;
	sub_824EF528(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,236(r25)
	REX_STORE_U32(ctx.r25.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fde34
	if (ctx.cr6.eq) goto loc_824FDE34;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824FDE30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_824FDE34:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x824fded4
	if (!ctx.cr6.eq) goto loc_824FDED4;
	// lwz r11,52(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fde54
	if (!ctx.cr6.eq) goto loc_824FDE54;
	// lwz r11,56(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fded4
	if (ctx.cr6.eq) goto loc_824FDED4;
loc_824FDE54:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDE78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,68(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,52(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FDE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,72(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 72);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,56(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 56);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FDEB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fded4
	if (ctx.cr6.eq) goto loc_824FDED4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824FDED4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDEE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,224(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FDEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r6,264(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 264);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x824FDF14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,268(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FDF2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 264);
	// bl 0x825e6448
	ctx.lr = 0x824FDF34;
	sub_825E6448(ctx, base);
	// lwz r3,268(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 268);
	// bl 0x825e6448
	ctx.lr = 0x824FDF3C;
	sub_825E6448(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,240(r25)
	REX_STORE_U32(ctx.r25.u32 + 240, ctx.r30.u32);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824FDF54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824FDF54:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDF68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824fe0b0
	if (!ctx.cr6.eq) goto loc_824FE0B0;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// bne cr6,0x824fdf98
	if (!ctx.cr6.eq) goto loc_824FDF98;
	// li r4,3
	ctx.r4.s64 = 3;
loc_824FDF98:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821d5660
	ctx.lr = 0x824FDFC8;
	sub_821D5660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824fe014
	if (!ctx.cr6.eq) goto loc_824FE014;
loc_824FDFD0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FDFE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824fe78c
	if (!ctx.cr6.eq) goto loc_824FE78C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821d5660
	ctx.lr = 0x824FE00C;
	sub_821D5660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fdfd0
	if (ctx.cr6.eq) goto loc_824FDFD0;
loc_824FE014:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824fb158
	ctx.lr = 0x824FE01C;
	sub_824FB158(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r15)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FE04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x824fe174
	if (!ctx.cr6.eq) goto loc_824FE174;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824fe0ec
	if (ctx.cr6.eq) goto loc_824FE0EC;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fe0a8
	if (ctx.cr6.eq) goto loc_824FE0A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE0A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
loc_824FE0A8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x824fdd58
	goto loc_824FDD58;
loc_824FE0B0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 240);
	// lis r14,5734
	ctx.r14.s64 = 375783424;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r14,r14,38
	ctx.r14.u64 = ctx.r14.u64 | 38;
	// beq cr6,0x824fe140
	if (ctx.cr6.eq) goto loc_824FE140;
	// lwz r3,272(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 272);
	// bl 0x825e6448
	ctx.lr = 0x824FE0E4;
	sub_825E6448(ctx, base);
	// stw r22,240(r25)
	REX_STORE_U32(ctx.r25.u32 + 240, ctx.r22.u32);
	// b 0x824fe140
	goto loc_824FE140;
loc_824FE0EC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,268(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,240(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 240);
	// lis r14,5734
	ctx.r14.s64 = 375783424;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r14,r14,38
	ctx.r14.u64 = ctx.r14.u64 | 38;
loc_824FE114:
	// beq cr6,0x824fe124
	if (ctx.cr6.eq) goto loc_824FE124;
	// lwz r3,272(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 272);
	// bl 0x825e6448
	ctx.lr = 0x824FE120;
	sub_825E6448(ctx, base);
	// stw r22,240(r25)
	REX_STORE_U32(ctx.r25.u32 + 240, ctx.r22.u32);
loc_824FE124:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x824fe140
	if (ctx.cr6.eq) goto loc_824FE140;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824FE140:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fe15c
	if (ctx.cr6.eq) goto loc_824FE15C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE15C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824FE15C:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x825d7bcc
	ctx.lr = 0x824FE16C;
	__restvmx_124(ctx, base);
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
loc_824FE174:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824FE190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r25,288
	ctx.r11.s64 = ctx.r25.s64 + 288;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r7,288(r25)
	REX_STORE_U64(ctx.r25.u32 + 288, ctx.r7.u64);
	// lwz r6,0(r15)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r5,72(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x824FE1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f31,5272(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5272);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x824fe2f0
	if (!ctx.cr6.eq) goto loc_824FE2F0;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FE208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r31,r11,10
	ctx.r31.u64 = ctx.r11.u64 | 10;
loc_824FE210:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824f0008
	ctx.lr = 0x824FE218;
	sub_824F0008(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x824fe238
	if (!ctx.cr6.eq) goto loc_824FE238;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824fe210
	goto loc_824FE210;
loc_824FE238:
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE24C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fe270
	if (ctx.cr6.eq) goto loc_824FE270;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824FE270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824FE270:
	// lwz r3,44(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r4,288(r25)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r25.u32 + 288);
	// addi r31,r25,288
	ctx.r31.s64 = ctx.r25.s64 + 288;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,252(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 252);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FE2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x824fe6f4
	if (!ctx.cr6.eq) goto loc_824FE6F4;
	// lfs f0,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824fe2c8
	if (!ctx.cr6.gt) goto loc_824FE2C8;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bgt cr6,0x824fe6f4
	if (ctx.cr6.gt) goto loc_824FE6F4;
loc_824FE2C8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x824fe2d8
	if (!ctx.cr6.lt) goto loc_824FE2D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824fe6f4
	if (ctx.cr6.lt) goto loc_824FE6F4;
loc_824FE2D8:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fe6b8
	if (ctx.cr6.eq) goto loc_824FE6B8;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x824fe6f8
	goto loc_824FE6F8;
loc_824FE2F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824fe454
	if (!ctx.cr6.eq) goto loc_824FE454;
	// lwz r30,232(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 232);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fe6a4
	if (!ctx.cr6.eq) goto loc_824FE6A4;
	// lwz r24,236(r25)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r25.u32 + 236);
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fe6a4
	if (!ctx.cr6.eq) goto loc_824FE6A4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r31,r30,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,36(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r19,r24,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// mullw r23,r24,r30
	ctx.r23.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r30.s32);
	// lwz r8,44(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mullw r18,r19,r31
	ctx.r18.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r31.s32);
	// subf r26,r30,r10
	ctx.r26.u64 = ctx.r10.u64 - ctx.r30.u64;
	// subf r17,r31,r9
	ctx.r17.u64 = ctx.r9.u64 - ctx.r31.u64;
	// subf r16,r31,r8
	ctx.r16.u64 = ctx.r8.u64 - ctx.r31.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824FE358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r27,12(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// add r26,r29,r23
	ctx.r26.u64 = ctx.r29.u64 + ctx.r23.u64;
	// lwz r22,16(r28)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r20,20(r28)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// add r21,r26,r18
	ctx.r21.u64 = ctx.r26.u64 + ctx.r18.u64;
	// bne cr6,0x824fe38c
	if (!ctx.cr6.eq) goto loc_824FE38C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE388;
	sub_825D6E10(ctx, base);
	// b 0x824fe3b8
	goto loc_824FE3B8;
loc_824FE38C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x824fe3b8
	if (ctx.cr6.eq) goto loc_824FE3B8;
loc_824FE394:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE3A4;
	sub_825D6E10(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x824fe394
	if (!ctx.cr0.eq) goto loc_824FE394;
loc_824FE3B8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x824fe3d4
	if (!ctx.cr6.eq) goto loc_824FE3D4;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE3D0;
	sub_825D6E10(ctx, base);
	// b 0x824fe404
	goto loc_824FE404;
loc_824FE3D4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x824fe404
	if (ctx.cr6.eq) goto loc_824FE404;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_824FE3E0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE3F0;
	sub_825D6E10(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r26,r31
	ctx.r26.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bne 0x824fe3e0
	if (!ctx.cr0.eq) goto loc_824FE3E0;
loc_824FE404:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x824fe420
	if (!ctx.cr6.eq) goto loc_824FE420;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE41C;
	sub_825D6E10(ctx, base);
	// b 0x824fe270
	goto loc_824FE270;
loc_824FE420:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x824fe270
	if (ctx.cr6.eq) goto loc_824FE270;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_824FE42C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x825d6e10
	ctx.lr = 0x824FE43C;
	sub_825D6E10(ctx, base);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r21,r21,r31
	ctx.r21.u64 = ctx.r21.u64 + ctx.r31.u64;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bne 0x824fe42c
	if (!ctx.cr0.eq) goto loc_824FE42C;
	// b 0x824fe270
	goto loc_824FE270;
loc_824FE454:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bne cr6,0x824fe270
	if (!ctx.cr6.eq) goto loc_824FE270;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r6,232(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 232);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// lfs f0,5840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5840);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f11,31020(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 31020);
	ctx.f11.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f10,31016(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 31016);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f13,31012(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31012);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31008(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 31008);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v62 = vTemp;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r29,r31,30992
	ctx.r29.s64 = ctx.r31.s64 + 30992;
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vpermwi128 v61,v62,171
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x54));
	// clrlwi r27,r6,31
	ctx.r27.u64 = ctx.r6.u32 & 0x1;
	// addi r31,r25,232
	ctx.r31.s64 = ctx.r25.s64 + 232;
	// subf r30,r6,r4
	ctx.r30.u64 = ctx.r4.u64 - ctx.r6.u64;
	// lvx128 v127,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lvrx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v59,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v55,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vrlimi128 v58,v62,4,1
	simde_mm_store_ps(ctx.v58.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 147), 4));
	// vor128 v53,v54,v54
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_load_si128((simde__m128i*)ctx.v54.u8));
	// vsldoi128 v52,v54,v55,12
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 4));
	// vsldoi128 v51,v55,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 8));
	// vrlimi128 v53,v62,1,3
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 1));
	// vrlimi128 v52,v62,1,3
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 57), 1));
	// vmrghw128 v50,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrglw128 v48,v53,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// vmrghw128 v49,v52,v61
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrglw128 v47,v52,v61
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v52.u32)));
	// vmrghw128 v126,v50,v49
	simde_mm_store_si128((simde__m128i*)ctx.v126.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrglw128 v125,v50,v49
	simde_mm_store_si128((simde__m128i*)ctx.v125.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrghw128 v124,v48,v47
	simde_mm_store_si128((simde__m128i*)ctx.v124.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// bne cr6,0x824fe6a4
	if (!ctx.cr6.eq) goto loc_824FE6A4;
	// lwz r11,236(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 236);
	// addi r24,r25,236
	ctx.r24.s64 = ctx.r25.s64 + 236;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824fe6a4
	if (!ctx.cr6.eq) goto loc_824FE6A4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r26,r7,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r7,r6,8
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFFFF;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fe270
	if (ctx.cr6.eq) goto loc_824FE270;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r23,r30,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30672
	ctx.r30.s64 = ctx.r11.s64 + 30672;
	// addi r29,r9,7072
	ctx.r29.s64 = ctx.r9.s64 + 7072;
	// addi r28,r6,7056
	ctx.r28.s64 = ctx.r6.s64 + 7056;
loc_824FE5C8:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r27,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r26.s32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x824fe68c
	if (!ctx.cr6.gt) goto loc_824FE68C;
	// vspltisw128 v46,3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_set1_epi32(int(0x3)));
	// vcsxwfp128 v12,v46,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
loc_824FE5E8:
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r21,r8,r3
	ctx.r21.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r7,r7,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// lvx128 v0,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lvx128 v13,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r21,r21,16
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r21.u32, 16);
	// lvx128 v11,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,96
	ctx.r20.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r19,r4,r9
	ctx.r19.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// lbzx r9,r5,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// or r7,r19,r7
	ctx.r7.u64 = ctx.r19.u64 | ctx.r7.u64;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r7,r9,0,16,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | ctx.r21.u64;
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lvlx128 v45,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v44,v45,v45,4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 12));
	// vupkd3d128 v10,v44,0
	vTemp.u32[0] = ctx.v44.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v44.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v44.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v44.u8[2] | 0x3F800000;
	ctx.v10 = vTemp;
	// vmaddfp v9,v0,v10,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v43,v9,v127
	simde_mm_store_ps(ctx.v43.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v127.f32)));
	// vspltw128 v42,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0x55));
	// vspltw128 v41,v43,1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xAA));
	// vspltw128 v40,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// vmulfp128 v39,v42,v124
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v124.f32)));
	// vmaddfp128 v39,v41,v125,v39
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v125.f32)), simde_mm_load_ps(ctx.v39.f32)));
	// vmaddfp128 v39,v40,v126,v39
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v126.f32)), simde_mm_load_ps(ctx.v39.f32)));
	// vor128 v8,v39,v39
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// vnmsubfp v7,v8,v11,v12
	simde_mm_store_ps(ctx.v7.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor128 v38,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vpkd3d128 v38,v7,0,1,3
	vTemp.u32[0] = 0x404000FF;
	vTemp.f32[0] = !(ctx.v7.f32[0] >= 3.0f) ? 3.0f : (ctx.v7.f32[0] > vTemp.f32[0] ? vTemp.f32[0] : ctx.v7.f32[0]);
	temp.u32 = uint32_t(vTemp.u8[0]) << 24;
	vTemp.u32[1] = 0x404000FF;
	vTemp.f32[1] = !(ctx.v7.f32[1] >= 3.0f) ? 3.0f : (ctx.v7.f32[1] > vTemp.f32[1] ? vTemp.f32[1] : ctx.v7.f32[1]);
	temp.u32 |= uint32_t(vTemp.u8[4]) << 0;
	vTemp.u32[2] = 0x404000FF;
	vTemp.f32[2] = !(ctx.v7.f32[2] >= 3.0f) ? 3.0f : (ctx.v7.f32[2] > vTemp.f32[2] ? vTemp.f32[2] : ctx.v7.f32[2]);
	temp.u32 |= uint32_t(vTemp.u8[8]) << 8;
	vTemp.u32[3] = 0x404000FF;
	vTemp.f32[3] = !(ctx.v7.f32[3] >= 3.0f) ? 3.0f : (ctx.v7.f32[3] > vTemp.f32[3] ? vTemp.f32[3] : ctx.v7.f32[3]);
	temp.u32 |= uint32_t(vTemp.u8[12]) << 16;
	ctx.v38.u32[3] = temp.u32;
	// vspltw128 v37,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xFF));
	// stvewx128 v37,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824fe5e8
	if (ctx.cr6.lt) goto loc_824FE5E8;
loc_824FE68C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824fe5c8
	if (ctx.cr6.lt) goto loc_824FE5C8;
	// b 0x824fe270
	goto loc_824FE270;
loc_824FE6A4:
	// lwz r11,240(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 240);
	// lis r14,-32768
	ctx.r14.s64 = -2147483648;
	// ori r14,r14,16385
	ctx.r14.u64 = ctx.r14.u64 | 16385;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x824fe114
	goto loc_824FE114;
loc_824FE6B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824fb240
	ctx.lr = 0x824FE6C0;
	sub_824FB240(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,200(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 200);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824FE6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824fe718
	goto loc_824FE718;
loc_824FE6F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FE6F8:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x824FE714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_824FE718:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824FE72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x824fe760
	if (!ctx.cr6.eq) goto loc_824FE760;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x824fe760
	if (!ctx.cr6.gt) goto loc_824FE760;
	// lfs f0,280(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x824fe760
	if (!ctx.cr6.gt) goto loc_824FE760;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// bl 0x82266ab0
	ctx.lr = 0x824FE758;
	sub_82266AB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_824FE760:
	// lwz r10,420(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fe770
	if (ctx.cr6.eq) goto loc_824FE770;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_824FE770:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fe124
	if (ctx.cr6.eq) goto loc_824FE124;
	// lwz r3,76(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824FE788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824fe124
	goto loc_824FE124;
loc_824FE78C:
	// lis r14,5734
	ctx.r14.s64 = 375783424;
	// ori r14,r14,232
	ctx.r14.u64 = ctx.r14.u64 | 232;
	// b 0x824fe140
	goto loc_824FE140;
}

DEFINE_REX_FUNC(sub_825571A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x825571B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r31,2012
	ctx.r4.s64 = ctx.r31.s64 + 2012;
	// addi r6,r11,19344
	ctx.r6.s64 = ctx.r11.s64 + 19344;
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// bl 0x825a6af8
	ctx.lr = 0x825571D0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,14936
	ctx.r6.s64 = ctx.r11.s64 + 14936;
	// addi r4,r31,2024
	ctx.r4.s64 = ctx.r31.s64 + 2024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825571F4;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,25832
	ctx.r6.s64 = ctx.r11.s64 + 25832;
	// addi r4,r31,2140
	ctx.r4.s64 = ctx.r31.s64 + 2140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557218;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,25312
	ctx.r6.s64 = ctx.r11.s64 + 25312;
	// addi r4,r31,2152
	ctx.r4.s64 = ctx.r31.s64 + 2152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255723C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,23752
	ctx.r6.s64 = ctx.r11.s64 + 23752;
	// addi r4,r31,2168
	ctx.r4.s64 = ctx.r31.s64 + 2168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557260;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,24272
	ctx.r6.s64 = ctx.r11.s64 + 24272;
	// addi r4,r31,2180
	ctx.r4.s64 = ctx.r31.s64 + 2180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557284;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,24792
	ctx.r6.s64 = ctx.r11.s64 + 24792;
	// addi r4,r31,2192
	ctx.r4.s64 = ctx.r31.s64 + 2192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825572A8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r30,r31,2304
	ctx.r30.s64 = ctx.r31.s64 + 2304;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,28048
	ctx.r6.s64 = ctx.r11.s64 + 28048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825572D0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,2316
	ctx.r27.s64 = ctx.r31.s64 + 2316;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,28312
	ctx.r6.s64 = ctx.r11.s64 + 28312;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825572F8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,2328
	ctx.r28.s64 = ctx.r31.s64 + 2328;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557320;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,2340
	ctx.r29.s64 = ctx.r31.s64 + 2340;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,28840
	ctx.r6.s64 = ctx.r11.s64 + 28840;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557348;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r30.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r27,2408(r31)
	REX_STORE_U32(ctx.r31.u32 + 2408, ctx.r27.u32);
	// addi r30,r31,2352
	ctx.r30.s64 = ctx.r31.s64 + 2352;
	// stw r28,2412(r31)
	REX_STORE_U32(ctx.r31.u32 + 2412, ctx.r28.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2416(r31)
	REX_STORE_U32(ctx.r31.u32 + 2416, ctx.r29.u32);
	// addi r6,r11,29104
	ctx.r6.s64 = ctx.r11.s64 + 29104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557380;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,2364
	ctx.r27.s64 = ctx.r31.s64 + 2364;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,29400
	ctx.r6.s64 = ctx.r11.s64 + 29400;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825573A8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,2376
	ctx.r28.s64 = ctx.r31.s64 + 2376;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,29696
	ctx.r6.s64 = ctx.r11.s64 + 29696;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825573D0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,2388
	ctx.r29.s64 = ctx.r31.s64 + 2388;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,29992
	ctx.r6.s64 = ctx.r11.s64 + 29992;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825573F8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 22528);
	// stw r30,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r27.u32);
	// stw r28,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r28.u32);
	// stw r29,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r29.u32);
	// beq cr6,0x825574cc
	if (ctx.cr6.eq) goto loc_825574CC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,22584
	ctx.r27.s64 = ctx.r31.s64 + 22584;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,30288
	ctx.r6.s64 = ctx.r11.s64 + 30288;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255743C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,22596
	ctx.r28.s64 = ctx.r31.s64 + 22596;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,30592
	ctx.r6.s64 = ctx.r11.s64 + 30592;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557464;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,22608
	ctx.r29.s64 = ctx.r31.s64 + 22608;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,30896
	ctx.r6.s64 = ctx.r11.s64 + 30896;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255748C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r30,r31,22620
	ctx.r30.s64 = ctx.r31.s64 + 22620;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,31200
	ctx.r6.s64 = ctx.r11.s64 + 31200;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825574B4;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r27,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r27.u32);
	// stw r28,2424(r31)
	REX_STORE_U32(ctx.r31.u32 + 2424, ctx.r28.u32);
	// stw r29,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r29.u32);
	// stw r30,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r30.u32);
loc_825574CC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,31504
	ctx.r6.s64 = ctx.r11.s64 + 31504;
	// addi r4,r31,22572
	ctx.r4.s64 = ctx.r31.s64 + 22572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825574E8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31696
	ctx.r6.s64 = ctx.r11.s64 + 31696;
	// addi r4,r31,2464
	ctx.r4.s64 = ctx.r31.s64 + 2464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255750C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31632
	ctx.r6.s64 = ctx.r11.s64 + 31632;
	// addi r4,r31,2476
	ctx.r4.s64 = ctx.r31.s64 + 2476;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557530;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31568
	ctx.r6.s64 = ctx.r11.s64 + 31568;
	// addi r4,r31,2488
	ctx.r4.s64 = ctx.r31.s64 + 2488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557554;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,31760
	ctx.r6.s64 = ctx.r11.s64 + 31760;
	// addi r4,r31,2504
	ctx.r4.s64 = ctx.r31.s64 + 2504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557578;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,31832
	ctx.r6.s64 = ctx.r11.s64 + 31832;
	// addi r4,r31,2516
	ctx.r4.s64 = ctx.r31.s64 + 2516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255759C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,31904
	ctx.r6.s64 = ctx.r11.s64 + 31904;
	// addi r4,r31,2528
	ctx.r4.s64 = ctx.r31.s64 + 2528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825575C0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31972
	ctx.r6.s64 = ctx.r11.s64 + 31972;
	// addi r4,r31,2544
	ctx.r4.s64 = ctx.r31.s64 + 2544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825575E4;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,32008
	ctx.r6.s64 = ctx.r11.s64 + 32008;
	// addi r4,r31,2556
	ctx.r4.s64 = ctx.r31.s64 + 2556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557608;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,32044
	ctx.r6.s64 = ctx.r11.s64 + 32044;
	// addi r4,r31,2568
	ctx.r4.s64 = ctx.r31.s64 + 2568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255762C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82557ed0
	if (!ctx.cr6.eq) goto loc_82557ED0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r30,r31,21012
	ctx.r30.s64 = ctx.r31.s64 + 21012;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-32592
	ctx.r6.s64 = ctx.r11.s64 + -32592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557660;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21024
	ctx.r27.s64 = ctx.r31.s64 + 21024;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-32528
	ctx.r6.s64 = ctx.r11.s64 + -32528;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557688;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21036
	ctx.r28.s64 = ctx.r31.s64 + 21036;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-32464
	ctx.r6.s64 = ctx.r11.s64 + -32464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825576B0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21048
	ctx.r29.s64 = ctx.r31.s64 + 21048;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32400
	ctx.r6.s64 = ctx.r11.s64 + -32400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825576D8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,20996(r31)
	REX_STORE_U32(ctx.r31.u32 + 20996, ctx.r30.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r27,21000(r31)
	REX_STORE_U32(ctx.r31.u32 + 21000, ctx.r27.u32);
	// addi r30,r31,21076
	ctx.r30.s64 = ctx.r31.s64 + 21076;
	// stw r28,21004(r31)
	REX_STORE_U32(ctx.r31.u32 + 21004, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21008(r31)
	REX_STORE_U32(ctx.r31.u32 + 21008, ctx.r29.u32);
	// addi r6,r11,-32336
	ctx.r6.s64 = ctx.r11.s64 + -32336;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557710;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21088
	ctx.r27.s64 = ctx.r31.s64 + 21088;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32296
	ctx.r6.s64 = ctx.r11.s64 + -32296;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557738;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21100
	ctx.r28.s64 = ctx.r31.s64 + 21100;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32256
	ctx.r6.s64 = ctx.r11.s64 + -32256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557760;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21112
	ctx.r29.s64 = ctx.r31.s64 + 21112;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32216
	ctx.r6.s64 = ctx.r11.s64 + -32216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557788;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,21060(r31)
	REX_STORE_U32(ctx.r31.u32 + 21060, ctx.r30.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r27,21064(r31)
	REX_STORE_U32(ctx.r31.u32 + 21064, ctx.r27.u32);
	// addi r26,r31,21232
	ctx.r26.s64 = ctx.r31.s64 + 21232;
	// stw r28,21068(r31)
	REX_STORE_U32(ctx.r31.u32 + 21068, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21072(r31)
	REX_STORE_U32(ctx.r31.u32 + 21072, ctx.r29.u32);
	// addi r6,r11,-32176
	ctx.r6.s64 = ctx.r11.s64 + -32176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825577C0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r23,r31,21244
	ctx.r23.s64 = ctx.r31.s64 + 21244;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-31920
	ctx.r6.s64 = ctx.r11.s64 + -31920;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825577E8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r24,r31,21256
	ctx.r24.s64 = ctx.r31.s64 + 21256;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-31664
	ctx.r6.s64 = ctx.r11.s64 + -31664;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557810;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r25,r31,21268
	ctx.r25.s64 = ctx.r31.s64 + 21268;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-31408
	ctx.r6.s64 = ctx.r11.s64 + -31408;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557838;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21280
	ctx.r27.s64 = ctx.r31.s64 + 21280;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-31152
	ctx.r6.s64 = ctx.r11.s64 + -31152;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557860;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21292
	ctx.r28.s64 = ctx.r31.s64 + 21292;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-30896
	ctx.r6.s64 = ctx.r11.s64 + -30896;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557888;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21304
	ctx.r29.s64 = ctx.r31.s64 + 21304;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-30640
	ctx.r6.s64 = ctx.r11.s64 + -30640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825578B0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r30,r31,21316
	ctx.r30.s64 = ctx.r31.s64 + 21316;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-30384
	ctx.r6.s64 = ctx.r11.s64 + -30384;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825578D8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r26,21944(r31)
	REX_STORE_U32(ctx.r31.u32 + 21944, ctx.r26.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r23,21948(r31)
	REX_STORE_U32(ctx.r31.u32 + 21948, ctx.r23.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r24,21952(r31)
	REX_STORE_U32(ctx.r31.u32 + 21952, ctx.r24.u32);
	// addi r6,r11,-30128
	ctx.r6.s64 = ctx.r11.s64 + -30128;
	// stw r25,21956(r31)
	REX_STORE_U32(ctx.r31.u32 + 21956, ctx.r25.u32);
	// addi r4,r31,21328
	ctx.r4.s64 = ctx.r31.s64 + 21328;
	// stw r27,21960(r31)
	REX_STORE_U32(ctx.r31.u32 + 21960, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,21964(r31)
	REX_STORE_U32(ctx.r31.u32 + 21964, ctx.r28.u32);
	// stw r29,21968(r31)
	REX_STORE_U32(ctx.r31.u32 + 21968, ctx.r29.u32);
	// stw r30,21972(r31)
	REX_STORE_U32(ctx.r31.u32 + 21972, ctx.r30.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// bl 0x825a6af8
	ctx.lr = 0x8255791C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-29616
	ctx.r6.s64 = ctx.r11.s64 + -29616;
	// addi r4,r31,21340
	ctx.r4.s64 = ctx.r31.s64 + 21340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557940;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-29104
	ctx.r6.s64 = ctx.r11.s64 + -29104;
	// addi r4,r31,21352
	ctx.r4.s64 = ctx.r31.s64 + 21352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557964;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-28592
	ctx.r6.s64 = ctx.r11.s64 + -28592;
	// addi r4,r31,21364
	ctx.r4.s64 = ctx.r31.s64 + 21364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557988;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-28080
	ctx.r6.s64 = ctx.r11.s64 + -28080;
	// addi r4,r31,21376
	ctx.r4.s64 = ctx.r31.s64 + 21376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825579AC;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-27568
	ctx.r6.s64 = ctx.r11.s64 + -27568;
	// addi r4,r31,21388
	ctx.r4.s64 = ctx.r31.s64 + 21388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825579D0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-27056
	ctx.r6.s64 = ctx.r11.s64 + -27056;
	// addi r4,r31,21400
	ctx.r4.s64 = ctx.r31.s64 + 21400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x825579F4;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-26544
	ctx.r6.s64 = ctx.r11.s64 + -26544;
	// addi r4,r31,21412
	ctx.r4.s64 = ctx.r31.s64 + 21412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557A18;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-26032
	ctx.r6.s64 = ctx.r11.s64 + -26032;
	// addi r4,r31,21424
	ctx.r4.s64 = ctx.r31.s64 + 21424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557A3C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-25736
	ctx.r6.s64 = ctx.r11.s64 + -25736;
	// addi r4,r31,21436
	ctx.r4.s64 = ctx.r31.s64 + 21436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557A60;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-25440
	ctx.r6.s64 = ctx.r11.s64 + -25440;
	// addi r4,r31,21448
	ctx.r4.s64 = ctx.r31.s64 + 21448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557A84;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-25144
	ctx.r6.s64 = ctx.r11.s64 + -25144;
	// addi r4,r31,21460
	ctx.r4.s64 = ctx.r31.s64 + 21460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557AA8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r30,r31,21472
	ctx.r30.s64 = ctx.r31.s64 + 21472;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32148
	ctx.r6.s64 = ctx.r11.s64 + 32148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557AD0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r23,r31,21484
	ctx.r23.s64 = ctx.r31.s64 + 21484;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32244
	ctx.r6.s64 = ctx.r11.s64 + 32244;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557AF8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r24,r31,21496
	ctx.r24.s64 = ctx.r31.s64 + 21496;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32340
	ctx.r6.s64 = ctx.r11.s64 + 32340;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557B20;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r25,r31,21508
	ctx.r25.s64 = ctx.r31.s64 + 21508;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32436
	ctx.r6.s64 = ctx.r11.s64 + 32436;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557B48;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r26,r31,21520
	ctx.r26.s64 = ctx.r31.s64 + 21520;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32464
	ctx.r6.s64 = ctx.r11.s64 + 32464;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557B70;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21532
	ctx.r27.s64 = ctx.r31.s64 + 21532;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32492
	ctx.r6.s64 = ctx.r11.s64 + 32492;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557B98;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21544
	ctx.r28.s64 = ctx.r31.s64 + 21544;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32520
	ctx.r6.s64 = ctx.r11.s64 + 32520;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557BC0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21556
	ctx.r29.s64 = ctx.r31.s64 + 21556;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32548
	ctx.r6.s64 = ctx.r11.s64 + 32548;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557BE8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,21160(r31)
	REX_STORE_U32(ctx.r31.u32 + 21160, ctx.r30.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r23,21164(r31)
	REX_STORE_U32(ctx.r31.u32 + 21164, ctx.r23.u32);
	// addi r30,r31,21568
	ctx.r30.s64 = ctx.r31.s64 + 21568;
	// stw r24,21168(r31)
	REX_STORE_U32(ctx.r31.u32 + 21168, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,21172(r31)
	REX_STORE_U32(ctx.r31.u32 + 21172, ctx.r25.u32);
	// addi r6,r11,32576
	ctx.r6.s64 = ctx.r11.s64 + 32576;
	// stw r26,21176(r31)
	REX_STORE_U32(ctx.r31.u32 + 21176, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,21180(r31)
	REX_STORE_U32(ctx.r31.u32 + 21180, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,21184(r31)
	REX_STORE_U32(ctx.r31.u32 + 21184, ctx.r28.u32);
	// stw r29,21188(r31)
	REX_STORE_U32(ctx.r31.u32 + 21188, ctx.r29.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// bl 0x825a6af8
	ctx.lr = 0x82557C30;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r23,r31,21580
	ctx.r23.s64 = ctx.r31.s64 + 21580;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32612
	ctx.r6.s64 = ctx.r11.s64 + 32612;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557C58;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r24,r31,21592
	ctx.r24.s64 = ctx.r31.s64 + 21592;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32648
	ctx.r6.s64 = ctx.r11.s64 + 32648;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557C80;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r25,r31,21604
	ctx.r25.s64 = ctx.r31.s64 + 21604;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32684
	ctx.r6.s64 = ctx.r11.s64 + 32684;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557CA8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r26,r31,21616
	ctx.r26.s64 = ctx.r31.s64 + 21616;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32720
	ctx.r6.s64 = ctx.r11.s64 + 32720;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557CD0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21628
	ctx.r27.s64 = ctx.r31.s64 + 21628;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32756
	ctx.r6.s64 = ctx.r11.s64 + 32756;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557CF8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21640
	ctx.r28.s64 = ctx.r31.s64 + 21640;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32744
	ctx.r6.s64 = ctx.r11.s64 + -32744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557D20;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21652
	ctx.r29.s64 = ctx.r31.s64 + 21652;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32708
	ctx.r6.s64 = ctx.r11.s64 + -32708;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557D48;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,21128(r31)
	REX_STORE_U32(ctx.r31.u32 + 21128, ctx.r30.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r23,21132(r31)
	REX_STORE_U32(ctx.r31.u32 + 21132, ctx.r23.u32);
	// addi r30,r31,21664
	ctx.r30.s64 = ctx.r31.s64 + 21664;
	// stw r24,21136(r31)
	REX_STORE_U32(ctx.r31.u32 + 21136, ctx.r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,21140(r31)
	REX_STORE_U32(ctx.r31.u32 + 21140, ctx.r25.u32);
	// addi r6,r11,32080
	ctx.r6.s64 = ctx.r11.s64 + 32080;
	// stw r26,21144(r31)
	REX_STORE_U32(ctx.r31.u32 + 21144, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,21148(r31)
	REX_STORE_U32(ctx.r31.u32 + 21148, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,21152(r31)
	REX_STORE_U32(ctx.r31.u32 + 21152, ctx.r28.u32);
	// stw r29,21156(r31)
	REX_STORE_U32(ctx.r31.u32 + 21156, ctx.r29.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// bl 0x825a6af8
	ctx.lr = 0x82557D90;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21676
	ctx.r27.s64 = ctx.r31.s64 + 21676;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32176
	ctx.r6.s64 = ctx.r11.s64 + 32176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557DB8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21688
	ctx.r28.s64 = ctx.r31.s64 + 21688;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32272
	ctx.r6.s64 = ctx.r11.s64 + 32272;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557DE0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21700
	ctx.r29.s64 = ctx.r31.s64 + 21700;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32368
	ctx.r6.s64 = ctx.r11.s64 + 32368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557E08;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,21196(r31)
	REX_STORE_U32(ctx.r31.u32 + 21196, ctx.r30.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r27,21200(r31)
	REX_STORE_U32(ctx.r31.u32 + 21200, ctx.r27.u32);
	// addi r30,r31,21712
	ctx.r30.s64 = ctx.r31.s64 + 21712;
	// stw r28,21204(r31)
	REX_STORE_U32(ctx.r31.u32 + 21204, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21208(r31)
	REX_STORE_U32(ctx.r31.u32 + 21208, ctx.r29.u32);
	// addi r6,r11,-32672
	ctx.r6.s64 = ctx.r11.s64 + -32672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557E40;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r27,r31,21724
	ctx.r27.s64 = ctx.r31.s64 + 21724;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32652
	ctx.r6.s64 = ctx.r11.s64 + -32652;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557E68;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r28,r31,21736
	ctx.r28.s64 = ctx.r31.s64 + 21736;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32632
	ctx.r6.s64 = ctx.r11.s64 + -32632;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557E90;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// addi r29,r31,21748
	ctx.r29.s64 = ctx.r31.s64 + 21748;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-32612
	ctx.r6.s64 = ctx.r11.s64 + -32612;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557EB8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// stw r30,21216(r31)
	REX_STORE_U32(ctx.r31.u32 + 21216, ctx.r30.u32);
	// stw r27,21220(r31)
	REX_STORE_U32(ctx.r31.u32 + 21220, ctx.r27.u32);
	// stw r28,21224(r31)
	REX_STORE_U32(ctx.r31.u32 + 21224, ctx.r28.u32);
	// stw r29,21228(r31)
	REX_STORE_U32(ctx.r31.u32 + 21228, ctx.r29.u32);
loc_82557ED0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,26096
	ctx.r6.s64 = ctx.r11.s64 + 26096;
	// addi r4,r31,2064
	ctx.r4.s64 = ctx.r31.s64 + 2064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557EEC;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,26584
	ctx.r6.s64 = ctx.r11.s64 + 26584;
	// addi r4,r31,2076
	ctx.r4.s64 = ctx.r31.s64 + 2076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557F10;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,27072
	ctx.r6.s64 = ctx.r11.s64 + 27072;
	// addi r4,r31,2088
	ctx.r4.s64 = ctx.r31.s64 + 2088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557F34;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,27560
	ctx.r6.s64 = ctx.r11.s64 + 27560;
	// addi r4,r31,2100
	ctx.r4.s64 = ctx.r31.s64 + 2100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557F58;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,10176
	ctx.r6.s64 = ctx.r11.s64 + 10176;
	// addi r4,r31,2204
	ctx.r4.s64 = ctx.r31.s64 + 2204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557F7C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,10856
	ctx.r6.s64 = ctx.r11.s64 + 10856;
	// addi r4,r31,2216
	ctx.r4.s64 = ctx.r31.s64 + 2216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557FA0;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,11608
	ctx.r6.s64 = ctx.r11.s64 + 11608;
	// addi r4,r31,2228
	ctx.r4.s64 = ctx.r31.s64 + 2228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557FC4;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,12208
	ctx.r6.s64 = ctx.r11.s64 + 12208;
	// addi r4,r31,2240
	ctx.r4.s64 = ctx.r31.s64 + 2240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82557FE8;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,12744
	ctx.r6.s64 = ctx.r11.s64 + 12744;
	// addi r4,r31,2252
	ctx.r4.s64 = ctx.r31.s64 + 2252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x8255800C;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,13160
	ctx.r6.s64 = ctx.r11.s64 + 13160;
	// addi r4,r31,2264
	ctx.r4.s64 = ctx.r31.s64 + 2264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82558030;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,13576
	ctx.r6.s64 = ctx.r11.s64 + 13576;
	// addi r4,r31,2452
	ctx.r4.s64 = ctx.r31.s64 + 2452;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82558054;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82558080
	if (!ctx.cr6.eq) goto loc_82558080;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,14280
	ctx.r6.s64 = ctx.r11.s64 + 14280;
	// addi r4,r31,2276
	ctx.r4.s64 = ctx.r31.s64 + 2276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a6af8
	ctx.lr = 0x82558078;
	sub_825A6AF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8255808c
	if (ctx.cr6.eq) goto loc_8255808C;
loc_82558080:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
loc_8255808C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825968B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x825968B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32141
	ctx.r21.s64 = -2106392576;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r11,-26768(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825968F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r30,8
	ctx.r24.s64 = ctx.r30.s64 + 8;
	// lwz r10,-26768(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82596914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,-26768(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82596938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r23,r29,8
	ctx.r23.s64 = ctx.r29.s64 + 8;
	// lwz r8,-26768(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82596958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,-26768(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82596974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-26768(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -26768);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82596990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bgt cr6,0x825969ac
	if (ctx.cr6.gt) goto loc_825969AC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_825969AC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x825969c8
	if (ctx.cr6.gt) goto loc_825969C8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_825969C8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x825969e4
	if (ctx.cr6.gt) goto loc_825969E4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_825969E4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_825969F4:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,32
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32, ctx.xer);
	// bge cr6,0x82596a1c
	if (!ctx.cr6.lt) goto loc_82596A1C;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x82596a1c
	if (ctx.cr6.lt) goto loc_82596A1C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r10,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
loc_82596A1C:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x82596a2c
	if (!ctx.cr6.lt) goto loc_82596A2C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
loc_82596A2C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x825969f4
	if (ctx.cr6.lt) goto loc_825969F4;
	// lis r21,-32141
	ctx.r21.s64 = -2106392576;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r22,r22,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-26764(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82596A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,-26764(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82596A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,-26764(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82596A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,-26764(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82596AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,-26764(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82596ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,-26764(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + -26764);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82596AE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259E0E8) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8259e120
	if (ctx.cr6.eq) goto loc_8259E120;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// b 0x8259e128
	goto loc_8259E128;
loc_8259E120:
	// li r3,-8
	ctx.r3.s64 = -8;
	// rlwinm r30,r9,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_8259E128:
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x8259e1c0
	if (ctx.cr6.eq) goto loc_8259E1C0;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r9,-8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -8, ctx.xer);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// bge cr6,0x8259e160
	if (!ctx.cr6.lt) goto loc_8259E160;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// b 0x8259e174
	goto loc_8259E174;
loc_8259E160:
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x8259e174
	if (!ctx.cr6.gt) goto loc_8259E174;
	// subf r9,r9,r31
	ctx.r9.u64 = ctx.r31.u64 - ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8259E174:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8259e19c
	if (!ctx.cr6.lt) goto loc_8259E19C;
	// subf r9,r8,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8259E19C:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8259e1c4
	if (!ctx.cr6.gt) goto loc_8259E1C4;
	// subf r9,r8,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8259E1C0:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8259E1C4:
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A4AF0) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a4b70
	if (ctx.cr6.eq) goto loc_825A4B70;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825a4b70
	if (ctx.cr6.eq) goto loc_825A4B70;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x825a4b70
	if (ctx.cr6.lt) goto loc_825A4B70;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x825a4b30
	if (!ctx.cr6.eq) goto loc_825A4B30;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_825A4B30:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x825a4b50
	if (!ctx.cr6.eq) goto loc_825A4B50;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825A4B50:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_825A4B70:
	// li r3,-100
	ctx.r3.s64 = -100;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825A6AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825A6B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a6b48
	if (!ctx.cr6.gt) goto loc_825A6B48;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
loc_825A6B28:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825a6b3c
	if (!ctx.cr6.lt) goto loc_825A6B3C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825A6B3C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x825a6b28
	if (!ctx.cr0.eq) goto loc_825A6B28;
loc_825A6B48:
	// clrlwi r31,r8,24
	ctx.r31.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825a6b5c
	if (!ctx.cr6.gt) goto loc_825A6B5C;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_825A6B5C:
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x825a6b6c
	if (ctx.cr6.lt) goto loc_825A6B6C;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_825A6B6C:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r5,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r5.u32);
	// stb r31,8(r27)
	REX_STORE_U8(ctx.r27.u32 + 8, ctx.r31.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a6b8c
	if (ctx.cr6.eq) goto loc_825A6B8C;
	// bl 0x82558b88
	ctx.lr = 0x825A6B84;
	sub_82558B88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_825A6B8C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a6bc8
	if (ctx.cr6.eq) goto loc_825A6BC8;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFE;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r7.u32);
	// b 0x825a6bec
	goto loc_825A6BEC;
loc_825A6BC8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,27,5,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r9,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82558b78
	ctx.lr = 0x825A6BE8;
	sub_82558B78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825A6BEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825a6c18
	if (ctx.cr6.eq) goto loc_825A6C18;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a6930
	ctx.lr = 0x825A6C08;
	sub_825A6930(ctx, base);
	// stw r30,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_825A6C18:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825AABC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60fc
	ctx.lr = 0x825AABC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_825AABD8:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x825aac10
	if (ctx.cr6.gt) goto loc_825AAC10;
	// subfic r11,r31,40
	ctx.xer.ca = ctx.r31.u32 <= 40;
	ctx.r11.u64 = static_cast<uint64_t>(40) - ctx.r31.u64;
loc_825AABE4:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x825aabe4
	if (!ctx.cr6.gt) goto loc_825AABE4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x825aac84
	if (!ctx.cr6.lt) goto loc_825AAC84;
loc_825AAC10:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825aac64
	if (ctx.cr6.eq) goto loc_825AAC64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825626b0
	ctx.lr = 0x825AAC24;
	sub_825626B0(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825aac9c
	if (!ctx.cr6.eq) goto loc_825AAC9C;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825aabd8
	if (!ctx.cr6.lt) goto loc_825AABD8;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// rldicr r8,r11,0,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFF0000;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825AAC64:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16, ctx.xer);
	// bge cr6,0x825aac84
	if (!ctx.cr6.lt) goto loc_825AAC84;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r31,127
	ctx.r31.s64 = 127;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825aac84
	if (!ctx.cr6.eq) goto loc_825AAC84;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
loc_825AAC84:
	// stw r31,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r4.u32);
	// stw r5,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
loc_825AAC9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x825d614c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825ACC38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x825ACC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,24(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x825acc6c
	if (!ctx.cr6.gt) goto loc_825ACC6C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825acd1c
	goto loc_825ACD1C;
loc_825ACC6C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825acc7c
	if (!ctx.cr6.eq) goto loc_825ACC7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x825acd1c
	goto loc_825ACD1C;
loc_825ACC7C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825accdc
	if (!ctx.cr6.gt) goto loc_825ACCDC;
loc_825ACC84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825accdc
	if (ctx.cr6.eq) goto loc_825ACCDC;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bge 0x825acccc
	if (!ctx.cr0.lt) goto loc_825ACCCC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562a68
	ctx.lr = 0x825ACCCC;
	sub_82562A68(ctx, base);
loc_825ACCCC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x825acc84
	if (ctx.cr6.gt) goto loc_825ACC84;
loc_825ACCDC:
	// subfic r11,r29,64
	ctx.xer.ca = ctx.r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r29.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r8,r29,32
	ctx.r8.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r10,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// sld r4,r10,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r4.u64);
	// bge 0x825acd18
	if (!ctx.cr0.lt) goto loc_825ACD18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82562a68
	ctx.lr = 0x825ACD18;
	sub_82562A68(ctx, base);
loc_825ACD18:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_825ACD1C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// mullw r10,r6,r10
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825acd4c
	if (!ctx.cr6.eq) goto loc_825ACD4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
loc_825ACD4C:
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825acdc4
	if (!ctx.cr6.gt) goto loc_825ACDC4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_825ACD60:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r7,r6,28
	ctx.r7.u64 = ctx.r6.u32 & 0xF;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r6,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// rlwimi r5,r4,0,0,25
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r5.u64 & 0xFFFFFFFF0000003F);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r3,r7,0,0,25
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r3.u64 & 0xFFFFFFFF0000003F);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x825acd60
	if (ctx.cr6.lt) goto loc_825ACD60;
loc_825ACDC4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x825ac5e0
	ctx.lr = 0x825ACDD0;
	sub_825AC5E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,6
	ctx.r6.s64 = 6;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825a6c28
	ctx.lr = 0x825ACDE8;
	sub_825A6C28(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r9,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825BBE00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x825BBE08;
	__savegprlr_24(ctx, base);
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// beq cr6,0x825bbe24
	if (ctx.cr6.eq) goto loc_825BBE24;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825bbe28
	if (ctx.cr6.eq) goto loc_825BBE28;
loc_825BBE24:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_825BBE28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825bbe34
	if (!ctx.cr6.eq) goto loc_825BBE34;
	// subf r6,r7,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_825BBE34:
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// lvlx128 v62,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r31,r7
	ctx.r3.u64 = ctx.r31.u64 + ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvlx128 v61,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v22,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v63,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v22.u8)));
	// lvrx v5,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lvrx v27,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvrx v30,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v62,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// vor128 v6,v61,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v30.u8)));
	// lvlx128 v59,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v4,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vor128 v26,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvlx128 v58,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v3,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vor128 v25,v58,v3
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvlx128 v57,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v2,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vor128 v24,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvrx v1,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v56,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v23,v56,v1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// bne cr6,0x825bbf14
	if (!ctx.cr6.eq) goto loc_825BBF14;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-208
	ctx.r29.s64 = ctx.r1.s64 + -208;
	// addi r28,r1,-224
	ctx.r28.s64 = ctx.r1.s64 + -224;
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// lvlx128 v55,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// lvrx v21,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vor128 v54,v55,v21
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v21.u8)));
	// lvrx128 v63,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v53,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// vor128 v52,v53,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v63,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v63,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v51,r3,r6
	temp.u32 = ctx.r3.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v50,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvx128 v52,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x825bbf1c
	goto loc_825BBF1C;
loc_825BBF14:
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// lvx128 v21,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_825BBF1C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825bc42c
	if (ctx.cr6.eq) goto loc_825BC42C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825bc42c
	if (!ctx.cr6.eq) goto loc_825BC42C;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// addi r6,r1,-208
	ctx.r6.s64 = ctx.r1.s64 + -208;
	// addi r3,r1,-224
	ctx.r3.s64 = ctx.r1.s64 + -224;
	// addi r30,r1,-192
	ctx.r30.s64 = ctx.r1.s64 + -192;
	// vmrghb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v20,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v19,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v26,v0,v19
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v20,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v24,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// bne cr6,0x825bc32c
	if (!ctx.cr6.eq) goto loc_825BC32C;
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// addi r6,r1,-240
	ctx.r6.s64 = ctx.r1.s64 + -240;
	// addi r3,r1,-240
	ctx.r3.s64 = ctx.r1.s64 + -240;
	// addi r30,r1,-240
	ctx.r30.s64 = ctx.r1.s64 + -240;
	// lvx128 v20,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-240
	ctx.r29.s64 = ctx.r1.s64 + -240;
	// lvx128 v19,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// lvx128 v18,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_825BBFC4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vaddshs v25,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r10,r1,-240
	ctx.r10.s64 = ctx.r1.s64 + -240;
	// vor128 v33,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v32,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vaddshs v2,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// vaddshs v1,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r9,r1,-240
	ctx.r9.s64 = ctx.r1.s64 + -240;
	// vor128 v63,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// addi r3,r1,-240
	ctx.r3.s64 = ctx.r1.s64 + -240;
	// stvx128 v25,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v29,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v31,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vor128 v34,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v30,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// vor128 v36,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// stvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v37,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// lvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// vaddshs v5,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v62,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// vslh v27,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v9,v25,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vaddshs v10,v27,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v31,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vaddshs v25,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// stvx128 v9,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v9,v4,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v4,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v2,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vsubshs v9,v28,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v28,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v26,v8,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v28,v28,v10
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v8,v31,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// stvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v8,v28,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v28,v7,v24
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v24,v31,v9
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v25,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v9,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v7,v24,v28
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// vsubshs v8,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// lvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v29,v10,v31
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vaddshs v10,v29,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v28,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// vaddshs v25,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v10,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v29,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v28,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v6,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v9,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v31,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v10,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v28,v26,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v29,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v8,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v7,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v5,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// vor128 v4,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vor128 v3,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// vor128 v2,v33,v33
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v33.u8));
	// vor128 v1,v32,v32
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v32.u8));
	// lvx128 v6,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v30,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmaxsh v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v27,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// beq cr6,0x825bc32c
	if (ctx.cr6.eq) goto loc_825BC32C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825bc1e0
	if (!ctx.cr6.eq) goto loc_825BC1E0;
	// addi r11,r1,-224
	ctx.r11.s64 = ctx.r1.s64 + -224;
	// vor v22,v20,v20
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_load_si128((simde__m128i*)ctx.v20.u8));
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// vor v27,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// vor v30,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v18.u8));
	// addi r8,r1,-144
	ctx.r8.s64 = ctx.r1.s64 + -144;
	// vor v5,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// vor v4,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v3,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v2,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// lvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// stvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_825BC1E0:
	// vaddshs v26,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// vaddshs v25,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// vaddshs v24,v22,v5
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v23,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vor v5,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// vaddshs v26,v27,v30
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v22,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v20,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v27,v4
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v18,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v15,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v14,v18,v5
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vaddshs v4,v17,v26
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vaddshs v25,v3,v21
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v30,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v4,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// vaddshs v24,v1,v21
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v27,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v18,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v22.u8));
	// vaddshs v17,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v14,v19
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vaddshs v14,v21,v3
	simde_mm_store_si128((simde__m128i*)ctx.v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v22,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v18,v30
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v30.s16)));
	// vaddshs v19,v26,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vsrah v18,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v17,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v4,v19,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vslh v15,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmaxsh v23,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v2,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v30,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v26,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v27.u8));
	// vsrah v2,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v4,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vslh v21,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmaxsh v19,v18,v0
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v15,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v17,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v16,v21,v5
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vmaxsh v18,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v1,v20
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vsubshs v4,v16,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vavgsh v29,v29,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vsrah v2,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v26,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v30,v5
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor v5,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v14.u8));
	// vavgsh v31,v31,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v24,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v4,v25,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vslh v22,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vavgsh v28,v28,v23
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vavgsh v10,v10,v15
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vaddshs v20,v4,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v19,v22,v5
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmaxsh v27,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v23,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v17,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v18,v19,v21
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vavgsh v9,v9,v27
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vavgsh v8,v8,v23
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vmaxsh v15,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v16,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vavgsh v7,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsrah v14,v16,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v13,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vavgsh v6,v6,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
loc_825BC32C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825bc3d4
	if (ctx.cr6.eq) goto loc_825BC3D4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r5,32
	ctx.r10.s64 = ctx.r5.s64 + 32;
	// addi r9,r5,64
	ctx.r9.s64 = ctx.r5.s64 + 64;
	// addi r8,r5,96
	ctx.r8.s64 = ctx.r5.s64 + 96;
	// addi r6,r5,128
	ctx.r6.s64 = ctx.r5.s64 + 128;
	// addi r3,r5,160
	ctx.r3.s64 = ctx.r5.s64 + 160;
	// lvx128 v58,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r5,192
	ctx.r30.s64 = ctx.r5.s64 + 192;
	// lvx128 v57,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r5,224
	ctx.r29.s64 = ctx.r5.s64 + 224;
	// lvx128 v56,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v13,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// lvx128 v54,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v28,v28,v13
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvx128 v50,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v12,v57,v50
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.s32), simde_mm_load_si128((simde__m128i*)ctx.v57.s32)));
	// lvx128 v48,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v11,v56,v49
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// lvx128 v47,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v5,v55,v48
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v55.s32)));
	// lvx128 v46,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v4,v54,v47
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v54.s32)));
	// lvx128 v45,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v3,v53,v46
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s32), simde_mm_load_si128((simde__m128i*)ctx.v53.s32)));
	// lvx128 v44,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v2,v52,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v52.s32)));
	// vpkswss128 v1,v51,v44
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v51.s32)));
	// vaddshs v29,v29,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
loc_825BC3D4:
	// vpkshus128 v43,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v28.s16)));
	// add r11,r31,r7
	ctx.r11.u64 = ctx.r31.u64 + ctx.r7.u64;
	// vpkshus128 v42,v29,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vpkshus128 v41,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vpkshus128 v40,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vpkshus128 v39,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v38,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v37,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvlx128 v43,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// vpkshus128 v36,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvlx128 v42,r4,r7
	ea = ctx.r4.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v41,r4,r31
	ea = ctx.r4.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v40,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvlx128 v39,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvlx128 v38,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvlx128 v37,r4,r11
	ea = ctx.r4.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v36,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
loc_825BC42C:
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v19,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v29,v10,v5,6
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 10));
	// vsldoi v22,v10,v5,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 14));
	// vsldoi v20,v10,v5,4
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), 12));
	// vor128 v48,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v21,v10,v29
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v29.s16)));
	// vmrglb v14,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrghb v15,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v9,v22,v20
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v20.s16)));
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v18,v10,v3,6
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 10));
	// vsldoi v27,v10,v3,2
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 14));
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v19,v10,v3,4
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 12));
	// vor128 v49,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v28,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v16,v10,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vmrghb v26,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrglb v23,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v17,v27,v19
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v19.s16)));
	// vmrglb v29,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v8,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi v7,v10,v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 10));
	// vor128 v47,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vor v9,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v17.u8));
	// vsldoi v30,v10,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vsldoi v18,v10,v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 12));
	// vsubshs v8,v8,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vaddshs v3,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v30,v18
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v18.s16)));
	// vor v10,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v31.u8));
	// vaddshs v31,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vsldoi128 v25,v10,v49,6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 10));
	// vsldoi128 v5,v10,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 14));
	// vsldoi128 v17,v10,v49,4
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 12));
	// vsubshs v7,v2,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v8,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vor v10,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v28.u8));
	// vaddshs v16,v5,v17
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vaddshs v6,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v28,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi128 v4,v10,v48,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 14));
	// vor v9,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v16.u8));
	// vsldoi128 v16,v10,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// vsubshs v6,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi128 v21,v10,v48,6
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 10));
	// vslh v25,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v7,v4,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v16.s16)));
	// vaddshs v1,v10,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v21.s16)));
	// vor v10,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v15.u8));
	// vaddshs v3,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vaddshs v25,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v15,v10,v14,4
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8), 12));
	// vsubshs v2,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi v3,v10,v14,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8), 14));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v14,v10,v14,6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v14.u8), 10));
	// vaddshs v8,v21,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v9,v3,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vaddshs v7,v10,v14
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vmrghb v10,v0,v24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v24,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubshs v1,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v6,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v1,v11
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v14,v10,v29,6
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 10));
	// addi r11,r1,-176
	ctx.r11.s64 = ctx.r1.s64 + -176;
	// vsldoi v2,v10,v29,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 14));
	// vaddshs v8,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi v23,v10,v29,4
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8), 12));
	// vsrah v6,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v10,v10,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vsubshs v8,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v9,v2,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v23.s16)));
	// vmaxsh v28,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// vmaxsh v29,v31,v0
	simde_mm_store_si128((simde__m128i*)ctx.v29.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v7,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v25,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v1,v10,v47,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 14));
	// vsrah v21,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsldoi128 v14,v10,v47,4
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 12));
	// vsrah v24,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v31,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi128 v26,v10,v47,6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 10));
	// vaddshs v8,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v9,v21,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v1,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v14.s16)));
	// vaddshs v26,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v10,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsrah v8,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v7,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v6,v31,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmaxsh v31,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v31.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vslh v25,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmaxsh v8,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v21,v25,v7
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v7,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubshs v6,v21,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vmaxsh v7,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v26,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v25,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v6,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// bne cr6,0x825bc79c
	if (!ctx.cr6.eq) goto loc_825BC79C;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// vor128 v46,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// vor128 v40,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r27,r1,-176
	ctx.r27.s64 = ctx.r1.s64 + -176;
	// vor128 v42,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// vor128 v38,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r3,r1,-176
	ctx.r3.s64 = ctx.r1.s64 + -176;
	// lvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,-176
	ctx.r25.s64 = ctx.r1.s64 + -176;
	// vmrghb v26,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r24,r1,-224
	ctx.r24.s64 = ctx.r1.s64 + -224;
	// vmrglb v24,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v21,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r29,r1,-224
	ctx.r29.s64 = ctx.r1.s64 + -224;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// addi r28,r1,-208
	ctx.r28.s64 = ctx.r1.s64 + -208;
	// addi r26,r1,-160
	ctx.r26.s64 = ctx.r1.s64 + -160;
	// stvx128 v21,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v21,v26,v24,2
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 14));
	// stvx128 v25,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// vmrghb v10,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v45,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v25,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v43,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-240
	ctx.r24.s64 = ctx.r1.s64 + -240;
	// addi r27,r1,-208
	ctx.r27.s64 = ctx.r1.s64 + -208;
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v26,v24,4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 12));
	// lvx128 v44,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v24,v26,v24,6
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v24.u8), 10));
	// addi r25,r1,-192
	ctx.r25.s64 = ctx.r1.s64 + -192;
	// vaddshs v26,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v24.s16)));
	// stvx128 v25,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v21,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vslh v24,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r3,r1,-224
	ctx.r3.s64 = ctx.r1.s64 + -224;
	// stvx128 v24,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v26,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// vsldoi128 v9,v26,v45,6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 10));
	// vsldoi128 v41,v26,v45,4
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 12));
	// vsldoi128 v24,v26,v45,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vaddshs v9,v26,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v8,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsldoi128 v39,v26,v44,4
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// stvx128 v24,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubshs v25,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v25,v26,v44,6
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 10));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-240
	ctx.r11.s64 = ctx.r1.s64 + -240;
	// stvx128 v39,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsldoi128 v24,v26,v44,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// stvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vor v25,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v10,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v10,v24,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// stvx128 v24,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v24,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v10,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v8,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v25,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v25.s16)));
	// vsrah v24,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v10,v8,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v26.s16)));
	// vsubshs v25,v25,v9
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmaxsh v26,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v24,v10,v7
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vor128 v9,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vaddshs v25,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v8,v40,v40
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// vaddshs v24,v24,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v7,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// vsrah v25,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmaxsh v24,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v24.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vmaxsh v25,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v25.s16, simde_mm_max_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vor128 v10,v46,v46
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v46.u8));
	// stvx128 v25,r0,r25
	ea = (ctx.r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x825bbfc4
	goto loc_825BBFC4;
loc_825BC79C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825bc32c
	if (ctx.cr6.eq) goto loc_825BC32C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825bc7d0
	if (ctx.cr6.eq) goto loc_825BC7D0;
	// vavgsh v28,v28,v22
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vavgsh v29,v29,v27
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vavgsh v31,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vavgsh v10,v10,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vavgsh v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vavgsh v8,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vavgsh v7,v7,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vavgsh v6,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// b 0x825bc32c
	goto loc_825BC32C;
loc_825BC7D0:
	// vavgsh v28,v28,v20
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vavgsh v29,v29,v19
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vavgsh v31,v31,v18
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vavgsh v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vavgsh v9,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vavgsh v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vavgsh v7,v7,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vavgsh v6,v6,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, rex::ppc::simde_mm_avg_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// b 0x825bc32c
	goto loc_825BC32C;
}

DEFINE_REX_FUNC(sub_826340C8) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// addic r1,r1,-56
	ctx.xer.ca = ctx.r1.u32 > 55;
	ctx.r1.s64 = ctx.r1.s64 + -56;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r12,56(r1)
	REX_STORE_U32(ctx.r1.u32 + 56, ctx.r12.u32);
	// std r31,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r31.u64);
	// std r30,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r30.u64);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,0(r1)
	REX_STORE_U32(ctx.r1.u32 + 0, ctx.r3.u32);
	// stw r4,8(r1)
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r4.u32);
	// stw r5,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, ctx.r5.u32);
	// stw r6,24(r1)
	REX_STORE_U32(ctx.r1.u32 + 24, ctx.r6.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r12,8(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r12,1
	ctx.r5.s64 = ctx.r12.s64 + 1;
	// lwz r2,4(r4)
	ctx.r2.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,36(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
loc_82634120:
	// rldicl r11,r7,10,54
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 10) & 0x3FF;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrldi r11,r8,60
	ctx.r11.u64 = ctx.r8.u64 & 0xF;
	// blt cr6,0x826342b4
	if (ctx.cr6.lt) goto loc_826342B4;
	// sld r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r11.u8 & 0x7F));
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// subf. r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x826341d4
	if (ctx.cr0.lt) goto loc_826341D4;
loc_8263414C:
	// rldicl r11,r7,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0x1;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rldicr r7,r7,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// blt 0x82634320
	if (ctx.cr0.lt) goto loc_82634320;
loc_8263415C:
	// rldicr r12,r8,1,62
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r11,r11,7,56
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// cmpw cr6,r8,r2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// cmpw cr5,r8,r5
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// lhzx r12,r31,r12
	ctx.r12.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r12.u32);
	// or r12,r12,r11
	ctx.r12.u64 = ctx.r12.u64 | ctx.r11.u64;
	// sth r12,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r12.u16);
	// clrldi r12,r12,57
	ctx.r12.u64 = ctx.r12.u64 & 0x7F;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r12,r12,1
	ctx.r12.s64 = ctx.r12.s64 + 1;
	// subf. r10,r12,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cror 4*cr1+eq,lt,4*cr6+eq
	ctx.cr1.eq = ctx.cr0.lt | ctx.cr6.eq;
	// crorc eq,4*cr1+eq,4*cr5+lt
	ctx.cr0.eq = ctx.cr1.eq | !(ctx.cr5.lt);
	// bne 0x82634120
	if (!ctx.cr0.eq) goto loc_82634120;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// blt cr6,0x8263446c
	if (ctx.cr6.lt) goto loc_8263446C;
	// cmpw cr5,r8,r2
	ctx.cr5.compare<int32_t>(ctx.r8.s32, ctx.r2.s32, ctx.xer);
	// beq cr5,0x82634390
	if (ctx.cr5.eq) goto loc_82634390;
loc_826341AC:
	// lwz r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// subf r3,r4,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// ld r31,48(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | ctx.r30.u64;
	// ld r30,40(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	return;
loc_826341D4:
	// lwz r12,12(r4)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r11,r12,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r12.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x8263427c
	if (ctx.cr6.gt) goto loc_8263427C;
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
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
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// addi r1,r1,-48
	ctx.r1.s64 = ctx.r1.s64 + -48;
	// bl 0x825629a8
	ctx.lr = 0x8263422C;
	sub_825629A8(ctx, base);
	// addi r1,r1,48
	ctx.r1.s64 = ctx.r1.s64 + 48;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r12,r3
	ctx.r12.u64 = ctx.r3.u64;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// cmpwi cr6,r12,1
	ctx.cr6.compare<int32_t>(ctx.r12.s32, 1, ctx.xer);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// bne cr6,0x8263414c
	if (!ctx.cr6.eq) goto loc_8263414C;
	// b 0x826341d4
	goto loc_826341D4;
loc_8263427C:
	// lhz r11,0(r12)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r12.u32 + 0);
	// lhz r0,2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + 2);
	// addi r12,r12,6
	ctx.r12.s64 = ctx.r12.s64 + 6;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r0,r0,16,47
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u64, 16) & 0xFFFFFFFFFFFF0000;
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// lhz r0,-2(r12)
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + -2);
	// stw r12,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r12.u32);
	// neg r12,r6
	ctx.r12.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// add r11,r11,r0
	ctx.r11.u64 = ctx.r11.u64 + ctx.r0.u64;
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// sld r11,r11,r12
	ctx.r11.u64 = ctx.r12.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r12.u8 & 0x7F));
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x8263414c
	goto loc_8263414C;
loc_826342B4:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r1,r1,-72
	ctx.r1.s64 = ctx.r1.s64 + -72;
	// bl 0x82633f10
	ctx.lr = 0x826342EC;
	sub_82633F10(ctx, base);
	// addi r1,r1,72
	ctx.r1.s64 = ctx.r1.s64 + 72;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// b 0x8263414c
	goto loc_8263414C;
loc_82634320:
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r1,r1,-48
	ctx.r1.s64 = ctx.r1.s64 + -48;
	// bl 0x82633e40
	ctx.lr = 0x82634358;
	sub_82633E40(ctx, base);
	// addi r1,r1,48
	ctx.r1.s64 = ctx.r1.s64 + 48;
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x8263415c
	goto loc_8263415C;
loc_82634390:
	// lwz r6,0(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r7,8(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// addi r1,r1,-96
	ctx.r1.s64 = ctx.r1.s64 + -96;
	// std r2,8(r1)
	REX_STORE_U64(ctx.r1.u32 + 8, ctx.r2.u64);
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// rlwinm r5,r11,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
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
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r12.u64);
	// addi r1,r1,-64
	ctx.r1.s64 = ctx.r1.s64 + -64;
	// bl 0x8261ca08
	ctx.lr = 0x826343DC;
	sub_8261CA08(ctx, base);
	// addi r1,r1,64
	ctx.r1.s64 = ctx.r1.s64 + 64;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// addic. r8,r3,0
	ctx.xer.ca = ctx.r3.u32 > 4294967295;
	ctx.r8.s64 = ctx.r3.s64 + 0;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ld r2,8(r1)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// ld r10,72(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 72);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ld r12,88(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r3,16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blt 0x8263446c
	if (ctx.cr0.lt) goto loc_8263446C;
	// clrldi r11,r8,57
	ctx.r11.u64 = ctx.r8.u64 & 0x7F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r12,r11,r12
	ctx.r12.u64 = ctx.r12.u64 - ctx.r11.u64;
	// rlwinm r11,r8,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xF;
	// add r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 + ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263444c
	if (ctx.cr6.eq) goto loc_8263444C;
	// ori r12,r8,64
	ctx.r12.u64 = ctx.r8.u64 | 64;
	// li r30,128
	ctx.r30.s64 = 128;
	// sth r12,-2(r3)
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r12.u16);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82634450
	goto loc_82634450;
loc_8263444C:
	// sth r8,-2(r3)
	REX_STORE_U16(ctx.r3.u32 + -2, ctx.r8.u16);
loc_82634450:
	// lwz r6,8(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r8,r8,16,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFF;
	// ld r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82634120
	if (ctx.cr6.lt) goto loc_82634120;
	// b 0x826341ac
	goto loc_826341AC;
loc_8263446C:
	// lwz r12,56(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// li r3,-1
	ctx.r3.s64 = -1;
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,48(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r30,40(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addic r1,r1,56
	ctx.xer.ca = ctx.r1.u32 > 4294967239;
	ctx.r1.s64 = ctx.r1.s64 + 56;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641280) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82641288;
	__savegprlr_25(ctx, base);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v11,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,-80
	ctx.r28.s64 = ctx.r1.s64 + -80;
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v58,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v60,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v58,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v8,v56,v57,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r31,r30,r5
	ctx.r31.u64 = ctx.r30.u64 + ctx.r5.u64;
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v26,v11,v4,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 14));
	// vor v8,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v24,v9,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v8,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v9
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsubshs v19,v22,v8
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v4,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v55,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vpkshus128 v54,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvx128 v55,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,-88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// lwz r29,-96(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stvx128 v54,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r28,-80(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r27,-72(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r28,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r27,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u32);
	// bne cr6,0x826413d8
	if (!ctx.cr6.eq) goto loc_826413D8;
	// lwz r7,-92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r29,-84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r28,-76(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r27,-68(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
loc_826413D8:
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x82641520
	if (!ctx.cr6.eq) goto loc_82641520;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,-96
	ctx.r29.s64 = ctx.r1.s64 + -96;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r1,-80
	ctx.r3.s64 = ctx.r1.s64 + -80;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v53,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v52,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v52,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v50,v51,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lvx128 v46,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v8,v46,v47,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// vmrglb v1,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vmrglb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vsldoi v26,v11,v1,2
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), 14));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v25,v10,v31,2
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8), 14));
	// vsldoi v24,v0,v28,2
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8), 14));
	// vsubshs v23,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v22,v9,v27,2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8), 14));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v19,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v18,v23,v12
	simde_mm_store_si128((simde__m128i*)ctx.v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v17,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v16,v20,v12
	simde_mm_store_si128((simde__m128i*)ctx.v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v15,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v14,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v8,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v7,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v6,v14,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v45,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v44,v4,v3
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v45,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r25,-92(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r30,-88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -88);
	// stvx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r27,-72(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r26,-68(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r7,-96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -96);
	// stwx r7,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r7.u32);
	// lwz r29,-84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r28,-76(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
	// stwx r30,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r29.u32);
	// stwx r3,r4,r31
	REX_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r3.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stwx r27,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r27.u32);
	// stw r26,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r26.u32);
loc_82641520:
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265EBB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8265EBB8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r27,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// lwz r11,220(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 220);
	// lwz r10,3744(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 3744);
	// lwz r9,3748(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 3748);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,224(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 224);
	// lwz r8,3752(r20)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r20.u32 + 3752);
	// lwz r10,3756(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 3756);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r31,268(r20)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r20.u32 + 268);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265ec04
	if (ctx.cr6.eq) goto loc_8265EC04;
	// lwz r30,3780(r20)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r20.u32 + 3780);
	// b 0x8265ec08
	goto loc_8265EC08;
loc_8265EC04:
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_8265EC08:
	// lwz r11,3760(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 3760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ec20
	if (ctx.cr6.eq) goto loc_8265EC20;
	// lwz r10,224(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 224);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8265ec24
	goto loc_8265EC24;
loc_8265EC20:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8265EC24:
	// lwz r11,3764(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 3764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ec3c
	if (ctx.cr6.eq) goto loc_8265EC3C;
	// lwz r10,224(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 224);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8265ec40
	goto loc_8265EC40;
loc_8265EC3C:
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8265EC40:
	// lhz r11,50(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 50);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lhz r10,74(r23)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r23.u32 + 74);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// rlwinm r15,r11,31,1,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r9,76(r23)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r23.u32 + 76);
	// rotlwi r29,r10,4
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// mullw r11,r15,r7
	ctx.r11.s64 = int64_t(ctx.r15.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r9,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r10,r29,r7
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r9,r26,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r10,r5
	ctx.r21.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r14,r9,r31
	ctx.r14.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r22,r11,r4
	ctx.r22.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r19,r11,r3
	ctx.r19.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r18,r10,r30
	ctx.r18.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r17,r11,r6
	ctx.r17.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r16,r11,r8
	ctx.r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bge cr6,0x8265ed80
	if (!ctx.cr6.lt) goto loc_8265ED80;
loc_8265EC98:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8265ed54
	if (ctx.cr6.eq) goto loc_8265ED54;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// subf r27,r22,r19
	ctx.r27.u64 = ctx.r19.u64 - ctx.r22.u64;
	// subf r26,r22,r16
	ctx.r26.u64 = ctx.r16.u64 - ctx.r22.u64;
	// subf r25,r22,r17
	ctx.r25.u64 = ctx.r17.u64 - ctx.r22.u64;
	// subf r24,r21,r18
	ctx.r24.u64 = ctx.r18.u64 - ctx.r21.u64;
loc_8265ECBC:
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r11,r11,24,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8265ed38
	if (ctx.cr6.eq) goto loc_8265ED38;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// add r8,r26,r31
	ctx.r8.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r7,r25,r31
	ctx.r7.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r6,r24,r30
	ctx.r6.u64 = ctx.r24.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// blt cr6,0x8265ed2c
	if (ctx.cr6.lt) goto loc_8265ED2C;
	// beq cr6,0x8265ed1c
	if (ctx.cr6.eq) goto loc_8265ED1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// blt cr6,0x8265ed10
	if (ctx.cr6.lt) goto loc_8265ED10;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8265db68
	ctx.lr = 0x8265ED0C;
	sub_8265DB68(ctx, base);
	// b 0x8265ed38
	goto loc_8265ED38;
loc_8265ED10:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8265c300
	ctx.lr = 0x8265ED18;
	sub_8265C300(ctx, base);
	// b 0x8265ed38
	goto loc_8265ED38;
loc_8265ED1C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8265cb48
	ctx.lr = 0x8265ED28;
	sub_8265CB48(ctx, base);
	// b 0x8265ed38
	goto loc_8265ED38;
loc_8265ED2C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8265be58
	ctx.lr = 0x8265ED38;
	sub_8265BE58(ctx, base);
loc_8265ED38:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r14,r14,24
	ctx.r14.s64 = ctx.r14.s64 + 24;
	// cmplw cr6,r29,r15
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8265ecbc
	if (ctx.cr6.lt) goto loc_8265ECBC;
	// lwz r27,300(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_8265ED54:
	// lwz r11,232(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 232);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,228(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 228);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// add r21,r10,r21
	ctx.r21.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r18,r10,r18
	ctx.r18.u64 = ctx.r10.u64 + ctx.r18.u64;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
	// add r16,r11,r16
	ctx.r16.u64 = ctx.r11.u64 + ctx.r16.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8265ec98
	if (ctx.cr6.lt) goto loc_8265EC98;
loc_8265ED80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x825d6110
	__restgprlr_14(ctx, base);
	return;
}

