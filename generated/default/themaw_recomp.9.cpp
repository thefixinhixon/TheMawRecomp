#include "themaw_funcs.9.h"

DEFINE_REX_FUNC(sub_820D07D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820D5798) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x820D57A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r11,-32149
	ctx.r11.s64 = -2106916864;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// addi r31,r11,31228
	ctx.r31.s64 = ctx.r11.s64 + 31228;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r10,31264
	ctx.r30.s64 = ctx.r10.s64 + 31264;
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,104(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,4(r9)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r26,4(r8)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x820d5840
	if (ctx.cr6.eq) goto loc_820D5840;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d5840
	if (!ctx.cr6.eq) goto loc_820D5840;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825cfd98
	ctx.lr = 0x820D57F8;
	sub_825CFD98(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5840
	if (ctx.cr6.eq) goto loc_820D5840;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x820d5820
	if (!ctx.cr6.eq) goto loc_820D5820;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5820
	if (ctx.cr6.eq) goto loc_820D5820;
	// li r27,9
	ctx.r27.s64 = 9;
	// b 0x820d5840
	goto loc_820D5840;
loc_820D5820:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d5840
	if (ctx.cr6.eq) goto loc_820D5840;
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// bne cr6,0x820d5840
	if (!ctx.cr6.eq) goto loc_820D5840;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d5840
	if (!ctx.cr6.eq) goto loc_820D5840;
	// li r27,4
	ctx.r27.s64 = 4;
loc_820D5840:
	// lwz r3,104(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820d58b4
	if (ctx.cr6.eq) goto loc_820D58B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d58b4
	if (!ctx.cr6.eq) goto loc_820D58B4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825cfd98
	ctx.lr = 0x820D586C;
	sub_825CFD98(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d58b4
	if (ctx.cr6.eq) goto loc_820D58B4;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bne cr6,0x820d5894
	if (!ctx.cr6.eq) goto loc_820D5894;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d5894
	if (ctx.cr6.eq) goto loc_820D5894;
	// li r26,9
	ctx.r26.s64 = 9;
	// b 0x820d58b4
	goto loc_820D58B4;
loc_820D5894:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d58b4
	if (ctx.cr6.eq) goto loc_820D58B4;
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// bne cr6,0x820d58b4
	if (!ctx.cr6.eq) goto loc_820D58B4;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d58b4
	if (!ctx.cr6.eq) goto loc_820D58B4;
	// li r26,4
	ctx.r26.s64 = 4;
loc_820D58B4:
	// cmpwi cr6,r27,9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 9, ctx.xer);
	// blt cr6,0x820d58c8
	if (ctx.cr6.lt) goto loc_820D58C8;
	// cmpwi cr6,r27,11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 11, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// ble cr6,0x820d58cc
	if (!ctx.cr6.gt) goto loc_820D58CC;
loc_820D58C8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_820D58CC:
	// cmpwi cr6,r26,9
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 9, ctx.xer);
	// blt cr6,0x820d58e0
	if (ctx.cr6.lt) goto loc_820D58E0;
	// cmpwi cr6,r26,11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 11, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x820d58e4
	if (!ctx.cr6.gt) goto loc_820D58E4;
loc_820D58E0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_820D58E4:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820d5948
	if (!ctx.cr6.eq) goto loc_820D5948;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d5978
	if (!ctx.cr6.eq) goto loc_820D5978;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820d5948
	if (ctx.cr6.eq) goto loc_820D5948;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820d5948
	if (ctx.cr6.eq) goto loc_820D5948;
	// lfs f0,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lfs f13,96(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x820d5940
	if (!ctx.cr6.eq) goto loc_820D5940;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x820d5984
	if (ctx.cr6.gt) goto loc_820D5984;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_820D5940:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// b 0x820d5978
	goto loc_820D5978;
loc_820D5948:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x820d5974
	if (!ctx.cr6.eq) goto loc_820D5974;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bne cr6,0x820d5974
	if (!ctx.cr6.eq) goto loc_820D5974;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_820D5974:
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
loc_820D5978:
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x820d5984
	if (ctx.cr6.lt) goto loc_820D5984;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820D5984:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E27C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E4D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e4
	ctx.lr = 0x820E4DA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r31,16(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e4f6c
	if (!ctx.cr6.gt) goto loc_820E4F6C;
	// addi r24,r30,2568
	ctx.r24.s64 = ctx.r30.s64 + 2568;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_820E4DD4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4578
	ctx.lr = 0x820E4DE8;
	sub_820E4578(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4dfc
	if (ctx.cr6.eq) goto loc_820E4DFC;
	// stw r31,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_820E4DFC:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x820e4dd4
	if (!ctx.cr0.eq) goto loc_820E4DD4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820e4f6c
	if (!ctx.cr6.gt) goto loc_820E4F6C;
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r26,r30,6664
	ctx.r26.s64 = ctx.r30.s64 + 6664;
	// addi r3,r3,6664
	ctx.r3.s64 = ctx.r3.s64 + 6664;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r27,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r27.u32);
	// stw r23,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r23.u32);
	// stw r25,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r25.u32);
	// stw r24,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r24.u32);
	// stw r26,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r26.u32);
	// stw r29,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r29.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E4E44:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820e4e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4E44;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E4E70:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820e4e70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4E70;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E4E9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820e4e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4E9C;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E4EC8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x820e4ec8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E4EC8;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r11,14
	ctx.r11.s64 = 917504;
	// ori r28,r11,62700
	ctx.r28.u64 = ctx.r11.u64 | 62700;
	// lwz r11,9108(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 9108);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820E4F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// li r31,3
	ctx.r31.s64 = 3;
loc_820E4F0C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82266a38
	ctx.lr = 0x820E4F14;
	sub_82266A38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// bne 0x820e4f0c
	if (!ctx.cr0.eq) goto loc_820E4F0C;
	// lwz r11,9108(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 9108);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x820db1d8
	ctx.lr = 0x820E4F34;
	sub_820DB1D8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x820e4f6c
	if (!ctx.cr6.gt) goto loc_820E4F6C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820E4F44:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e4f5c
	if (!ctx.cr6.eq) goto loc_820E4F5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820e4770
	ctx.lr = 0x820E4F5C;
	sub_820E4770(ctx, base);
loc_820E4F5C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bne 0x820e4f44
	if (!ctx.cr0.eq) goto loc_820E4F44;
loc_820E4F6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6134
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F2618) {
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
	// lwz r31,80(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f2654
	if (ctx.cr6.eq) goto loc_820F2654;
loc_820F263C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820f2618
	ctx.lr = 0x820F2648;
	sub_820F2618(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820f263c
	if (!ctx.cr6.eq) goto loc_820F263C;
loc_820F2654:
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

DEFINE_REX_FUNC(sub_820F3DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820f3db8
	if (ctx.cr6.lt) goto loc_820F3DB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F3DB8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r8,r10,400
	ctx.r8.s64 = ctx.r10.s64 + 400;
	// lwz r7,400(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 400);
	// lwz r6,404(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 404);
	// lwz r5,408(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 408);
	// lfs f0,392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,412(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 412);
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r3,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r3.u32);
	// lfs f13,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F8C48) {
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
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820f8c84
	if (ctx.cr6.gt) goto loc_820F8C84;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
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
	// fsel f0,f13,f1,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_820F8C84:
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f13,-1160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -1160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9592);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f7,f0,f13,f12
	ctx.f7.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmadds f5,f8,f6,f10
	ctx.f5.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f10.f64)));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f4,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmadds f1,f2,f6,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f4.f64)));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f6,f0
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f0.f64)));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f10,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f6,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f10.f64)));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFE00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,9
	ctx.r4.s64 = 9;
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

DEFINE_REX_FUNC(sub_82100060) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000ac
	if (ctx.cr6.eq) goto loc_821000AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8210008c
	if (!ctx.cr6.eq) goto loc_8210008C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_8210008C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821000ac
	if (ctx.cr6.eq) goto loc_821000AC;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,9868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_821000AC:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lfs f0,9868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82103AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x82103AF8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103c1c
	if (ctx.cr6.eq) goto loc_82103C1C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f1,9608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9608);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821dc0d8
	ctx.lr = 0x82103B40;
	sub_821DC0D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x821dc0d8
	ctx.lr = 0x82103B54;
	sub_821DC0D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82103bb0
	if (ctx.cr6.eq) goto loc_82103BB0;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f31
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f0,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f5.f64)));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f6.f64, ctx.f4.f64)));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x82103bb0
	if (!ctx.cr6.gt) goto loc_82103BB0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82103BB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82103bd8
	if (ctx.cr6.eq) goto loc_82103BD8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82103bd8
	if (ctx.cr6.eq) goto loc_82103BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103030
	ctx.lr = 0x82103BC8;
	sub_82103030(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821030e0
	ctx.lr = 0x82103BD0;
	sub_821030E0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x82103bdc
	goto loc_82103BDC;
loc_82103BD8:
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_82103BDC:
	// lwz r29,16(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82103c14
	if (ctx.cr6.eq) goto loc_82103C14;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r27,1536
	ctx.r5.s64 = ctx.r27.s64 + 1536;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103830
	ctx.lr = 0x82103C04;
	sub_82103830(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_82103C14:
	// stw r26,1536(r27)
	REX_STORE_U32(ctx.r27.u32 + 1536, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82103C1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210C000) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-56
	ctx.r3.s64 = ctx.r3.s64 + -56;
	// b 0x82108bf0
	sub_82108BF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210C038) {
	REX_FUNC_PROLOGUE();
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210C128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c0
	ctx.lr = 0x8210C130;
	__savegprlr_14(ctx, base);
	// stwu r1,-3728(r1)
	ea = -3728 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,24
	ctx.r20.s64 = 24;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r20,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r20.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r29,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r4,r11,-30004
	ctx.r4.s64 = ctx.r11.s64 + -30004;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r4,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r4.u32);
	// li r20,21
	ctx.r20.s64 = 21;
	// addi r3,r10,-30028
	ctx.r3.s64 = ctx.r10.s64 + -30028;
	// addi r11,r9,-30052
	ctx.r11.s64 = ctx.r9.s64 + -30052;
	// stw r20,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r20.u32);
	// li r19,23
	ctx.r19.s64 = 23;
	// stw r3,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r3.u32);
	// li r18,22
	ctx.r18.s64 = 22;
	// stw r11,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// addi r10,r8,-30072
	ctx.r10.s64 = ctx.r8.s64 + -30072;
	// stw r19,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r19.u32);
	// addi r9,r7,-30092
	ctx.r9.s64 = ctx.r7.s64 + -30092;
	// stw r18,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r18.u32);
	// addi r8,r6,-30116
	ctx.r8.s64 = ctx.r6.s64 + -30116;
	// stw r10,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r10.u32);
	// addi r7,r5,-30136
	ctx.r7.s64 = ctx.r5.s64 + -30136;
	// stw r9,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r9.u32);
	// li r20,18
	ctx.r20.s64 = 18;
	// stw r8,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r8.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r7,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r7.u32);
	// li r19,20
	ctx.r19.s64 = 20;
	// stw r20,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r20.u32);
	// li r18,19
	ctx.r18.s64 = 19;
	// lis r31,-32245
	ctx.r31.s64 = -2113208320;
	// stw r19,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r19.u32);
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r18,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r18.u32);
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
	// lis r25,-32245
	ctx.r25.s64 = -2113208320;
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
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
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// addi r20,r11,-30236
	ctx.r20.s64 = ctx.r11.s64 + -30236;
	// addi r19,r31,-30300
	ctx.r19.s64 = ctx.r31.s64 + -30300;
	// addi r18,r30,-30324
	ctx.r18.s64 = ctx.r30.s64 + -30324;
	// addi r17,r28,-30348
	ctx.r17.s64 = ctx.r28.s64 + -30348;
	// addi r16,r27,-30372
	ctx.r16.s64 = ctx.r27.s64 + -30372;
	// addi r15,r26,-30396
	ctx.r15.s64 = ctx.r26.s64 + -30396;
	// addi r14,r25,-30416
	ctx.r14.s64 = ctx.r25.s64 + -30416;
	// addi r11,r24,-30432
	ctx.r11.s64 = ctx.r24.s64 + -30432;
	// addi r6,r6,-30156
	ctx.r6.s64 = ctx.r6.s64 + -30156;
	// addi r5,r5,-30176
	ctx.r5.s64 = ctx.r5.s64 + -30176;
	// addi r4,r4,-30200
	ctx.r4.s64 = ctx.r4.s64 + -30200;
	// addi r3,r3,-30220
	ctx.r3.s64 = ctx.r3.s64 + -30220;
	// addi r10,r10,-30252
	ctx.r10.s64 = ctx.r10.s64 + -30252;
	// addi r9,r9,-30264
	ctx.r9.s64 = ctx.r9.s64 + -30264;
	// addi r8,r8,-30276
	ctx.r8.s64 = ctx.r8.s64 + -30276;
	// addi r7,r7,-30288
	ctx.r7.s64 = ctx.r7.s64 + -30288;
	// addi r23,r23,-30452
	ctx.r23.s64 = ctx.r23.s64 + -30452;
	// addi r22,r22,-30472
	ctx.r22.s64 = ctx.r22.s64 + -30472;
	// addi r30,r21,-30492
	ctx.r30.s64 = ctx.r21.s64 + -30492;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r4,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r4.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// li r21,17
	ctx.r21.s64 = 17;
	// stw r3,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r30,r11,-13496
	ctx.r30.s64 = ctx.r11.s64 + -13496;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// stw r31,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r31.u32);
	// stw r31,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r31.u32);
	// stw r31,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// std r29,464(r1)
	REX_STORE_U64(ctx.r1.u32 + 464, ctx.r29.u64);
	// li r29,15
	ctx.r29.s64 = 15;
	// std r24,472(r1)
	REX_STORE_U64(ctx.r1.u32 + 472, ctx.r24.u64);
	// li r24,14
	ctx.r24.s64 = 14;
	// stw r10,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r10.u32);
	// stw r9,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// stw r8,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// stw r6,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r5,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r5.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r11,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// li r11,9
	ctx.r11.s64 = 9;
	// std r30,480(r1)
	REX_STORE_U64(ctx.r1.u32 + 480, ctx.r30.u64);
	// li r30,13
	ctx.r30.s64 = 13;
	// stw r21,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r21.u32);
	// li r21,11
	ctx.r21.s64 = 11;
	// stw r29,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// li r29,7
	ctx.r29.s64 = 7;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,604(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 604);
	// stw r24,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r24.u32);
	// li r24,5
	ctx.r24.s64 = 5;
	// stw r20,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r20.u32);
	// stw r30,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// stw r6,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r6.u32);
	// stw r21,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r5,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// stw r7,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r19,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r19.u32);
	// stw r10,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// stw r18,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// stw r29,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stw r17,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r16,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// stw r24,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r15,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r14.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r23.u32);
	// stw r25,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r22,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// bl 0x821d5f60
	ctx.lr = 0x8210C38C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C398;
	sub_821D5F60(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3A4;
	sub_821D5F60(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3B0;
	sub_821D5F60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3BC;
	sub_821D5F60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3C8;
	sub_821D5F60(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3D4;
	sub_821D5F60(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3E0;
	sub_821D5F60(ctx, base);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3EC;
	sub_821D5F60(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C3F8;
	sub_821D5F60(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C404;
	sub_821D5F60(ctx, base);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C410;
	sub_821D5F60(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C41C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C428;
	sub_821D5F60(ctx, base);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C434;
	sub_821D5F60(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C440;
	sub_821D5F60(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C44C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C458;
	sub_821D5F60(ctx, base);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C464;
	sub_821D5F60(ctx, base);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C470;
	sub_821D5F60(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C47C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C488;
	sub_821D5F60(ctx, base);
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C494;
	sub_821D5F60(ctx, base);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C4A0;
	sub_821D5F60(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C4AC;
	sub_821D5F60(ctx, base);
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,580
	ctx.r3.s64 = ctx.r1.s64 + 580;
	// bl 0x821d5f60
	ctx.lr = 0x8210C4B8;
	sub_821D5F60(ctx, base);
	// ld r30,480(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + 480);
	// ld r24,472(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 472);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r31,840(r1)
	REX_STORE_U32(ctx.r1.u32 + 840, ctx.r31.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r31,844(r1)
	REX_STORE_U32(ctx.r1.u32 + 844, ctx.r31.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r31,848(r1)
	REX_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stw r30,832(r1)
	REX_STORE_U32(ctx.r1.u32 + 832, ctx.r30.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r7,-30604
	ctx.r10.s64 = ctx.r7.s64 + -30604;
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r9,r6,-30524
	ctx.r9.s64 = ctx.r6.s64 + -30524;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r8,r5,-30536
	ctx.r8.s64 = ctx.r5.s64 + -30536;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r7,r4,-30552
	ctx.r7.s64 = ctx.r4.s64 + -30552;
	// addi r6,r3,-30568
	ctx.r6.s64 = ctx.r3.s64 + -30568;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r5,r11,-30588
	ctx.r5.s64 = ctx.r11.s64 + -30588;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// stw r6,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// stw r5,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r25,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// bl 0x821d5f60
	ctx.lr = 0x8210C53C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x821d5f60
	ctx.lr = 0x8210C548;
	sub_821D5F60(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x821d5f60
	ctx.lr = 0x8210C554;
	sub_821D5F60(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x821d5f60
	ctx.lr = 0x8210C560;
	sub_821D5F60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x821d5f60
	ctx.lr = 0x8210C56C;
	sub_821D5F60(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,836
	ctx.r3.s64 = ctx.r1.s64 + 836;
	// bl 0x821d5f60
	ctx.lr = 0x8210C578;
	sub_821D5F60(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r3,r1,2680
	ctx.r3.s64 = ctx.r1.s64 + 2680;
	// addi r4,r4,-30620
	ctx.r4.s64 = ctx.r4.s64 + -30620;
	// bl 0x82118688
	ctx.lr = 0x8210C588;
	sub_82118688(ctx, base);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82119cc8
	ctx.lr = 0x8210C598;
	sub_82119CC8(ctx, base);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r11,r3,-8504
	ctx.r11.s64 = ctx.r3.s64 + -8504;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stw r11,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
	// bl 0x82119cc8
	ctx.lr = 0x8210C5B4;
	sub_82119CC8(ctx, base);
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-29980
	ctx.r4.s64 = ctx.r7.s64 + -29980;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,604
	ctx.r5.s64 = ctx.r1.s64 + 604;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82140e30
	ctx.lr = 0x8210C5E8;
	sub_82140E30(ctx, base);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r4,-8488
	ctx.r10.s64 = ctx.r4.s64 + -8488;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-29968
	ctx.r4.s64 = ctx.r9.s64 + -29968;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82140e30
	ctx.lr = 0x8210C628;
	sub_82140E30(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r6,-8456
	ctx.r4.s64 = ctx.r6.s64 + -8456;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r4,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r4.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-29960
	ctx.r4.s64 = ctx.r11.s64 + -29960;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82140e30
	ctx.lr = 0x8210C668;
	sub_82140E30(ctx, base);
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r5,r8,-8432
	ctx.r5.s64 = ctx.r8.s64 + -8432;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r5,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r4,-29952
	ctx.r4.s64 = ctx.r4.s64 + -29952;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82140e30
	ctx.lr = 0x8210C6A8;
	sub_82140E30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,1516
	ctx.r4.s64 = ctx.r1.s64 + 1516;
	// ld r29,464(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,1516(r1)
	REX_STORE_U32(ctx.r1.u32 + 1516, ctx.r10.u32);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210C6D0;
	sub_822009C8(ctx, base);
	// lwz r3,2680(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2680);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210c6f0
	if (ctx.cr6.eq) goto loc_8210C6F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210C6F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210C6F0:
	// lwz r3,840(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 840);
	// stw r30,832(r1)
	REX_STORE_U32(ctx.r1.u32 + 832, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210c704
	if (ctx.cr6.eq) goto loc_8210C704;
	// bl 0x825d0418
	ctx.lr = 0x8210C704;
	sub_825D0418(ctx, base);
loc_8210C704:
	// lwz r3,584(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 584);
	// stw r30,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// stw r31,840(r1)
	REX_STORE_U32(ctx.r1.u32 + 840, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,844(r1)
	REX_STORE_U32(ctx.r1.u32 + 844, ctx.r31.u32);
	// stw r31,848(r1)
	REX_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// beq cr6,0x8210c724
	if (ctx.cr6.eq) goto loc_8210C724;
	// bl 0x825d0418
	ctx.lr = 0x8210C724;
	sub_825D0418(ctx, base);
loc_8210C724:
	// li r16,34
	ctx.r16.s64 = 34;
	// stw r31,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r31.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r31,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r31.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r16,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r16.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
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
	// addi r4,r4,-29172
	ctx.r4.s64 = ctx.r4.s64 + -29172;
	// addi r3,r3,-29196
	ctx.r3.s64 = ctx.r3.s64 + -29196;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r4,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r3,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r3.u32);
	// li r16,30
	ctx.r16.s64 = 30;
	// addi r11,r11,-28984
	ctx.r11.s64 = ctx.r11.s64 + -28984;
	// addi r10,r10,-29012
	ctx.r10.s64 = ctx.r10.s64 + -29012;
	// stw r16,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r16.u32);
	// addi r9,r9,-29048
	ctx.r9.s64 = ctx.r9.s64 + -29048;
	// stw r11,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
	// addi r8,r8,-29068
	ctx.r8.s64 = ctx.r8.s64 + -29068;
	// stw r10,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r10.u32);
	// addi r7,r7,-29096
	ctx.r7.s64 = ctx.r7.s64 + -29096;
	// stw r9,632(r1)
	REX_STORE_U32(ctx.r1.u32 + 632, ctx.r9.u32);
	// addi r6,r6,-29116
	ctx.r6.s64 = ctx.r6.s64 + -29116;
	// stw r8,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r8.u32);
	// addi r5,r5,-29144
	ctx.r5.s64 = ctx.r5.s64 + -29144;
	// stw r7,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r7.u32);
	// lis r24,-32245
	ctx.r24.s64 = -2113208320;
	// stw r6,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r6.u32);
	// lis r23,-32245
	ctx.r23.s64 = -2113208320;
	// stw r5,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r5.u32);
	// li r15,33
	ctx.r15.s64 = 33;
	// li r14,31
	ctx.r14.s64 = 31;
	// lis r22,-32245
	ctx.r22.s64 = -2113208320;
	// stw r15,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r15.u32);
	// lis r21,-32245
	ctx.r21.s64 = -2113208320;
	// stw r14,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r14.u32);
	// lis r20,-32245
	ctx.r20.s64 = -2113208320;
	// lis r19,-32245
	ctx.r19.s64 = -2113208320;
	// addi r4,r30,-29428
	ctx.r4.s64 = ctx.r30.s64 + -29428;
	// addi r3,r29,-29464
	ctx.r3.s64 = ctx.r29.s64 + -29464;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// li r16,28
	ctx.r16.s64 = 28;
	// addi r30,r24,-29496
	ctx.r30.s64 = ctx.r24.s64 + -29496;
	// addi r29,r23,-29524
	ctx.r29.s64 = ctx.r23.s64 + -29524;
	// stw r16,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r16.u32);
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
	// li r15,32
	ctx.r15.s64 = 32;
	// li r14,29
	ctx.r14.s64 = 29;
	// addi r24,r22,-29548
	ctx.r24.s64 = ctx.r22.s64 + -29548;
	// stw r15,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r15.u32);
	// addi r23,r21,-29572
	ctx.r23.s64 = ctx.r21.s64 + -29572;
	// stw r14,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r14.u32);
	// addi r22,r20,-29600
	ctx.r22.s64 = ctx.r20.s64 + -29600;
	// addi r21,r19,-29624
	ctx.r21.s64 = ctx.r19.s64 + -29624;
	// addi r20,r18,-29656
	ctx.r20.s64 = ctx.r18.s64 + -29656;
	// addi r19,r17,-29680
	ctx.r19.s64 = ctx.r17.s64 + -29680;
	// addi r11,r11,-29216
	ctx.r11.s64 = ctx.r11.s64 + -29216;
	// addi r10,r10,-29236
	ctx.r10.s64 = ctx.r10.s64 + -29236;
	// addi r9,r9,-29268
	ctx.r9.s64 = ctx.r9.s64 + -29268;
	// addi r8,r8,-29292
	ctx.r8.s64 = ctx.r8.s64 + -29292;
	// addi r7,r7,-29324
	ctx.r7.s64 = ctx.r7.s64 + -29324;
	// addi r6,r6,-29356
	ctx.r6.s64 = ctx.r6.s64 + -29356;
	// addi r5,r5,-29392
	ctx.r5.s64 = ctx.r5.s64 + -29392;
	// lis r18,-32245
	ctx.r18.s64 = -2113208320;
	// lis r17,-32245
	ctx.r17.s64 = -2113208320;
	// li r16,27
	ctx.r16.s64 = 27;
	// stw r9,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r9.u32);
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r8,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r9,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r6,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r6.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// stw r16,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r16.u32);
	// li r16,26
	ctx.r16.s64 = 26;
	// stw r9,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r4,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r4.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// stw r8,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r10,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r5,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r5.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r7.u32);
	// li r7,18
	ctx.r7.s64 = 18;
	// stw r16,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r16.u32);
	// li r16,23
	ctx.r16.s64 = 23;
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r29,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// li r29,12
	ctx.r29.s64 = 12;
	// stw r4,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// addi r4,r11,-29728
	ctx.r4.s64 = ctx.r11.s64 + -29728;
	// stw r8,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// lis r15,-32245
	ctx.r15.s64 = -2113208320;
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// addi r8,r18,-29916
	ctx.r8.s64 = ctx.r18.s64 + -29916;
	// addi r11,r10,-29752
	ctx.r11.s64 = ctx.r10.s64 + -29752;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// stw r7,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// addi r18,r17,-29932
	ctx.r18.s64 = ctx.r17.s64 + -29932;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r16,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r16.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r3,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// li r16,20
	ctx.r16.s64 = 20;
	// stw r24,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r30,-32245
	ctx.r30.s64 = -2113208320;
	// stw r6,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// addi r9,r15,-29704
	ctx.r9.s64 = ctx.r15.s64 + -29704;
	// stw r10,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// li r17,11
	ctx.r17.s64 = 11;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r16,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r16.u32);
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// stw r23,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r23.u32);
	// addi r6,r5,-29872
	ctx.r6.s64 = ctx.r5.s64 + -29872;
	// stw r22,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r22.u32);
	// stw r21,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r21.u32);
	// addi r7,r7,-29780
	ctx.r7.s64 = ctx.r7.s64 + -29780;
	// stw r17,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r17.u32);
	// addi r10,r3,-29804
	ctx.r10.s64 = ctx.r3.s64 + -29804;
	// stw r20,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r20.u32);
	// addi r30,r30,-29848
	ctx.r30.s64 = ctx.r30.s64 + -29848;
	// stw r19,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// addi r8,r29,-29896
	ctx.r8.s64 = ctx.r29.s64 + -29896;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r18,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r18.u32);
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r5,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// li r22,6
	ctx.r22.s64 = 6;
	// stw r7,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r4,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// li r23,5
	ctx.r23.s64 = 5;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r22,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r25,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// bl 0x821d5e18
	ctx.lr = 0x8210C9FC;
	sub_821D5E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA10;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA1C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA28;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA34;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA40;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA4C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA58;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA64;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA70;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA7C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA88;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x821d5f60
	ctx.lr = 0x8210CA94;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAA0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAAC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAB8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAC4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAD0;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// bl 0x821d5f60
	ctx.lr = 0x8210CADC;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAE8;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// bl 0x821d5f60
	ctx.lr = 0x8210CAF4;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,408
	ctx.r4.s64 = ctx.r1.s64 + 408;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB00;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB0C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB18;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB24;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB30;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,472
	ctx.r4.s64 = ctx.r1.s64 + 472;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB3C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB48;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB54;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,536
	ctx.r4.s64 = ctx.r1.s64 + 536;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB60;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB6C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,552
	ctx.r4.s64 = ctx.r1.s64 + 552;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB78;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,632
	ctx.r4.s64 = ctx.r1.s64 + 632;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB84;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,616
	ctx.r4.s64 = ctx.r1.s64 + 616;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB90;
	sub_821D5F60(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x8210CB9C;
	sub_821D5F60(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,3096
	ctx.r3.s64 = ctx.r1.s64 + 3096;
	// addi r4,r11,-29948
	ctx.r4.s64 = ctx.r11.s64 + -29948;
	// bl 0x82118768
	ctx.lr = 0x8210CBAC;
	sub_82118768(ctx, base);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r29,r10,-28956
	ctx.r29.s64 = ctx.r10.s64 + -28956;
	// addi r30,r11,-28948
	ctx.r30.s64 = ctx.r11.s64 + -28948;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r30,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r21,r10,15504
	ctx.r21.s64 = ctx.r10.s64 + 15504;
	// addi r20,r9,15888
	ctx.r20.s64 = ctx.r9.s64 + 15888;
	// bl 0x82119cc8
	ctx.lr = 0x8210CBE4;
	sub_82119CC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211c890
	ctx.lr = 0x8210CBF0;
	sub_8211C890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211c890
	ctx.lr = 0x8210CBFC;
	sub_8211C890(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r21,196(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r4,r1,1308
	ctx.r4.s64 = ctx.r1.s64 + 1308;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stw r7,1308(r1)
	REX_STORE_U32(ctx.r1.u32 + 1308, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210CC24;
	sub_822009C8(ctx, base);
	// lwz r3,3096(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cc44
	if (ctx.cr6.eq) goto loc_8210CC44;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210CC44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210CC44:
	// addi r3,r1,3296
	ctx.r3.s64 = ctx.r1.s64 + 3296;
	// bl 0x821d5d58
	ctx.lr = 0x8210CC4C;
	sub_821D5D58(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210CC58;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cc90
	if (ctx.cr6.eq) goto loc_8210CC90;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r8,r11,-13752
	ctx.r8.s64 = ctx.r11.s64 + -13752;
	// addi r7,r10,-28828
	ctx.r7.s64 = ctx.r10.s64 + -28828;
	// addi r6,r9,25984
	ctx.r6.s64 = ctx.r9.s64 + 25984;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210cc94
	goto loc_8210CC94;
loc_8210CC90:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210CC94:
	// stw r11,864(r1)
	REX_STORE_U32(ctx.r1.u32 + 864, ctx.r11.u32);
	// addi r4,r1,1820
	ctx.r4.s64 = ctx.r1.s64 + 1820;
	// stw r11,1820(r1)
	REX_STORE_U32(ctx.r1.u32 + 1820, ctx.r11.u32);
	// addi r3,r1,1316
	ctx.r3.s64 = ctx.r1.s64 + 1316;
	// stw r31,864(r1)
	REX_STORE_U32(ctx.r1.u32 + 864, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210CCAC;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1524(r1)
	REX_STORE_U32(ctx.r1.u32 + 1524, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210ccd8
	if (ctx.cr6.eq) goto loc_8210CCD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210CCD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210CCD8:
	// lwz r3,864(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210ccf8
	if (ctx.cr6.eq) goto loc_8210CCF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210CCF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210CCF8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,26096
	ctx.r5.s64 = ctx.r11.s64 + 26096;
	// addi r4,r10,-28804
	ctx.r4.s64 = ctx.r10.s64 + -28804;
	// addi r3,r1,2256
	ctx.r3.s64 = ctx.r1.s64 + 2256;
	// bl 0x8211c950
	ctx.lr = 0x8210CD10;
	sub_8211C950(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r8,-28848
	ctx.r4.s64 = ctx.r8.s64 + -28848;
	// addi r5,r9,23848
	ctx.r5.s64 = ctx.r9.s64 + 23848;
	// addi r3,r1,2200
	ctx.r3.s64 = ctx.r1.s64 + 2200;
	// addi r29,r1,1524
	ctx.r29.s64 = ctx.r1.s64 + 1524;
	// bl 0x8211c8e0
	ctx.lr = 0x8210CD30;
	sub_8211C8E0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r6,-28868
	ctx.r4.s64 = ctx.r6.s64 + -28868;
	// addi r5,r7,23856
	ctx.r5.s64 = ctx.r7.s64 + 23856;
	// addi r3,r1,2208
	ctx.r3.s64 = ctx.r1.s64 + 2208;
	// bl 0x8211c8e0
	ctx.lr = 0x8210CD4C;
	sub_8211C8E0(ctx, base);
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r4,r4,-28880
	ctx.r4.s64 = ctx.r4.s64 + -28880;
	// addi r5,r5,23864
	ctx.r5.s64 = ctx.r5.s64 + 23864;
	// addi r3,r1,2216
	ctx.r3.s64 = ctx.r1.s64 + 2216;
	// bl 0x8211c950
	ctx.lr = 0x8210CD68;
	sub_8211C950(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r4,r10,-28892
	ctx.r4.s64 = ctx.r10.s64 + -28892;
	// addi r5,r11,23872
	ctx.r5.s64 = ctx.r11.s64 + 23872;
	// addi r3,r1,2224
	ctx.r3.s64 = ctx.r1.s64 + 2224;
	// bl 0x8211c8e0
	ctx.lr = 0x8210CD84;
	sub_8211C8E0(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r4,r8,-28904
	ctx.r4.s64 = ctx.r8.s64 + -28904;
	// addi r5,r9,23880
	ctx.r5.s64 = ctx.r9.s64 + 23880;
	// addi r3,r1,2232
	ctx.r3.s64 = ctx.r1.s64 + 2232;
	// bl 0x8211c8e0
	ctx.lr = 0x8210CDA0;
	sub_8211C8E0(ctx, base);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r4,r6,-28916
	ctx.r4.s64 = ctx.r6.s64 + -28916;
	// addi r5,r7,23888
	ctx.r5.s64 = ctx.r7.s64 + 23888;
	// addi r3,r1,2240
	ctx.r3.s64 = ctx.r1.s64 + 2240;
	// bl 0x8211c8e0
	ctx.lr = 0x8210CDBC;
	sub_8211C8E0(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r4,r5,-28936
	ctx.r4.s64 = ctx.r5.s64 + -28936;
	// addi r3,r1,3128
	ctx.r3.s64 = ctx.r1.s64 + 3128;
	// bl 0x82118848
	ctx.lr = 0x8210CDD0;
	sub_82118848(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CDDC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CDE8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CDF4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CE00;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CE0C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CE18;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CE24;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8210CE30;
	sub_82118928(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r4,1324(r1)
	REX_STORE_U32(ctx.r1.u32 + 1324, ctx.r4.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r4,r1,1324
	ctx.r4.s64 = ctx.r1.s64 + 1324;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822009c8
	ctx.lr = 0x8210CE50;
	sub_822009C8(ctx, base);
	// lwz r3,3128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210ce70
	if (ctx.cr6.eq) goto loc_8210CE70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210CE70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210CE70:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r24,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r9,r11,-28760
	ctx.r9.s64 = ctx.r11.s64 + -28760;
	// stw r22,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// addi r8,r10,-28776
	ctx.r8.s64 = ctx.r10.s64 + -28776;
	// stw r23,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r23.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// addi r9,r6,-28680
	ctx.r9.s64 = ctx.r6.s64 + -28680;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r6,r3,-28724
	ctx.r6.s64 = ctx.r3.s64 + -28724;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r25,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// addi r3,r11,-28744
	ctx.r3.s64 = ctx.r11.s64 + -28744;
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r10,r7,-28668
	ctx.r10.s64 = ctx.r7.s64 + -28668;
	// addi r8,r5,-28692
	ctx.r8.s64 = ctx.r5.s64 + -28692;
	// addi r7,r4,-28708
	ctx.r7.s64 = ctx.r4.s64 + -28708;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// addi r3,r1,3456
	ctx.r3.s64 = ctx.r1.s64 + 3456;
	// bl 0x821d5e18
	ctx.lr = 0x8210CF00;
	sub_821D5E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF14;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF20;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF2C;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF38;
	sub_821D5F60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF44;
	sub_821D5F60(ctx, base);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d5f60
	ctx.lr = 0x8210CF50;
	sub_821D5F60(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r1,3176
	ctx.r3.s64 = ctx.r1.s64 + 3176;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// bl 0x82118988
	ctx.lr = 0x8210CF60;
	sub_82118988(ctx, base);
	// stw r3,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82119cc8
	ctx.lr = 0x8210CF70;
	sub_82119CC8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r4,r1,1724
	ctx.r4.s64 = ctx.r1.s64 + 1724;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,1724(r1)
	REX_STORE_U32(ctx.r1.u32 + 1724, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210CF94;
	sub_822009C8(ctx, base);
	// lwz r3,3176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cfb4
	if (ctx.cr6.eq) goto loc_8210CFB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210CFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210CFB4:
	// addi r3,r1,3456
	ctx.r3.s64 = ctx.r1.s64 + 3456;
	// bl 0x821d5d58
	ctx.lr = 0x8210CFBC;
	sub_821D5D58(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,2728
	ctx.r3.s64 = ctx.r1.s64 + 2728;
	// addi r4,r10,-28652
	ctx.r4.s64 = ctx.r10.s64 + -28652;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x82118a68
	ctx.lr = 0x8210CFDC;
	sub_82118A68(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// bl 0x82141240
	ctx.lr = 0x8210CFF4;
	sub_82141240(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r5,7040
	ctx.r10.s64 = ctx.r5.s64 + 7040;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-28636
	ctx.r4.s64 = ctx.r9.s64 + -28636;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141320
	ctx.lr = 0x8210D034;
	sub_82141320(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-28620
	ctx.r4.s64 = ctx.r11.s64 + -28620;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r4,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r30,r11,-28612
	ctx.r30.s64 = ctx.r11.s64 + -28612;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r30,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r9,r8,7144
	ctx.r9.s64 = ctx.r8.s64 + 7144;
	// addi r5,r7,23832
	ctx.r5.s64 = ctx.r7.s64 + 23832;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r29,r11,-28600
	ctx.r29.s64 = ctx.r11.s64 + -28600;
	// addi r28,r6,7064
	ctx.r28.s64 = ctx.r6.s64 + 7064;
	// addi r27,r10,7048
	ctx.r27.s64 = ctx.r10.s64 + 7048;
	// bl 0x8211c9c0
	ctx.lr = 0x8210D07C;
	sub_8211C9C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8211c9c0
	ctx.lr = 0x8210D088;
	sub_8211C9C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211c9c0
	ctx.lr = 0x8210D094;
	sub_8211C9C0(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-28592
	ctx.r4.s64 = ctx.r11.s64 + -28592;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141718
	ctx.lr = 0x8210D0CC;
	sub_82141718(ctx, base);
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r8,r10,23824
	ctx.r8.s64 = ctx.r10.s64 + 23824;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r7,-28580
	ctx.r4.s64 = ctx.r7.s64 + -28580;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141908
	ctx.lr = 0x8210D10C;
	sub_82141908(ctx, base);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r4,23576
	ctx.r10.s64 = ctx.r4.s64 + 23576;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r9,-28564
	ctx.r4.s64 = ctx.r9.s64 + -28564;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141908
	ctx.lr = 0x8210D14C;
	sub_82141908(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r6,23784
	ctx.r10.s64 = ctx.r6.s64 + 23784;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r9,-28548
	ctx.r4.s64 = ctx.r9.s64 + -28548;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141908
	ctx.lr = 0x8210D18C;
	sub_82141908(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r11,r5,7080
	ctx.r11.s64 = ctx.r5.s64 + 7080;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r4,r4,-28528
	ctx.r4.s64 = ctx.r4.s64 + -28528;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141af8
	ctx.lr = 0x8210D1CC;
	sub_82141AF8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r1,1532
	ctx.r4.s64 = ctx.r1.s64 + 1532;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r9,1532(r1)
	REX_STORE_U32(ctx.r1.u32 + 1532, ctx.r9.u32);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210D1F0;
	sub_822009C8(ctx, base);
	// lwz r3,2728(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d210
	if (ctx.cr6.eq) goto loc_8210D210;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D210:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D21C;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d254
	if (ctx.cr6.eq) goto loc_8210D254;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-13680
	ctx.r8.s64 = ctx.r11.s64 + -13680;
	// addi r7,r10,-28428
	ctx.r7.s64 = ctx.r10.s64 + -28428;
	// addi r6,r9,6832
	ctx.r6.s64 = ctx.r9.s64 + 6832;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210d258
	goto loc_8210D258;
loc_8210D254:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D258:
	// stw r11,872(r1)
	REX_STORE_U32(ctx.r1.u32 + 872, ctx.r11.u32);
	// addi r4,r1,1540
	ctx.r4.s64 = ctx.r1.s64 + 1540;
	// stw r11,1540(r1)
	REX_STORE_U32(ctx.r1.u32 + 1540, ctx.r11.u32);
	// addi r3,r1,1356
	ctx.r3.s64 = ctx.r1.s64 + 1356;
	// stw r31,872(r1)
	REX_STORE_U32(ctx.r1.u32 + 872, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D270;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1428(r1)
	REX_STORE_U32(ctx.r1.u32 + 1428, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1356(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d29c
	if (ctx.cr6.eq) goto loc_8210D29C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D29C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D29C:
	// lwz r3,872(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 872);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d2bc
	if (ctx.cr6.eq) goto loc_8210D2BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D2BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D2BC:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D2C8;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d300
	if (ctx.cr6.eq) goto loc_8210D300;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-13692
	ctx.r8.s64 = ctx.r11.s64 + -13692;
	// addi r7,r10,-28440
	ctx.r7.s64 = ctx.r10.s64 + -28440;
	// addi r6,r9,6816
	ctx.r6.s64 = ctx.r9.s64 + 6816;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210d304
	goto loc_8210D304;
loc_8210D300:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D304:
	// stw r11,880(r1)
	REX_STORE_U32(ctx.r1.u32 + 880, ctx.r11.u32);
	// addi r4,r1,1740
	ctx.r4.s64 = ctx.r1.s64 + 1740;
	// stw r11,1740(r1)
	REX_STORE_U32(ctx.r1.u32 + 1740, ctx.r11.u32);
	// addi r3,r1,1364
	ctx.r3.s64 = ctx.r1.s64 + 1364;
	// stw r31,880(r1)
	REX_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D31C;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1168(r1)
	REX_STORE_U32(ctx.r1.u32 + 1168, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1364(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d348
	if (ctx.cr6.eq) goto loc_8210D348;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D348:
	// lwz r3,880(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 880);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d368
	if (ctx.cr6.eq) goto loc_8210D368;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D368:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D374;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d3ac
	if (ctx.cr6.eq) goto loc_8210D3AC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-13716
	ctx.r8.s64 = ctx.r11.s64 + -13716;
	// addi r7,r10,-28472
	ctx.r7.s64 = ctx.r10.s64 + -28472;
	// addi r6,r9,6656
	ctx.r6.s64 = ctx.r9.s64 + 6656;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210d3b0
	goto loc_8210D3B0;
loc_8210D3AC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D3B0:
	// stw r11,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r11.u32);
	// addi r4,r1,1556
	ctx.r4.s64 = ctx.r1.s64 + 1556;
	// stw r11,1556(r1)
	REX_STORE_U32(ctx.r1.u32 + 1556, ctx.r11.u32);
	// addi r3,r1,1372
	ctx.r3.s64 = ctx.r1.s64 + 1372;
	// stw r31,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D3C8;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1520(r1)
	REX_STORE_U32(ctx.r1.u32 + 1520, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1372(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1372);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d3f4
	if (ctx.cr6.eq) goto loc_8210D3F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D3F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D3F4:
	// lwz r3,852(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d414
	if (ctx.cr6.eq) goto loc_8210D414;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D414:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D420;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d458
	if (ctx.cr6.eq) goto loc_8210D458;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-13728
	ctx.r8.s64 = ctx.r11.s64 + -13728;
	// addi r7,r10,-28488
	ctx.r7.s64 = ctx.r10.s64 + -28488;
	// addi r6,r9,6512
	ctx.r6.s64 = ctx.r9.s64 + 6512;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210d45c
	goto loc_8210D45C;
loc_8210D458:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D45C:
	// stw r11,876(r1)
	REX_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
	// addi r4,r1,1836
	ctx.r4.s64 = ctx.r1.s64 + 1836;
	// stw r11,1836(r1)
	REX_STORE_U32(ctx.r1.u32 + 1836, ctx.r11.u32);
	// addi r3,r1,1380
	ctx.r3.s64 = ctx.r1.s64 + 1380;
	// stw r31,876(r1)
	REX_STORE_U32(ctx.r1.u32 + 876, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D474;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1148(r1)
	REX_STORE_U32(ctx.r1.u32 + 1148, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1380(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d4a0
	if (ctx.cr6.eq) goto loc_8210D4A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D4A0:
	// lwz r3,876(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 876);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d4c0
	if (ctx.cr6.eq) goto loc_8210D4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D4C0:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D4CC;
	sub_825D0430(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d504
	if (ctx.cr6.eq) goto loc_8210D504;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r11,-13740
	ctx.r8.s64 = ctx.r11.s64 + -13740;
	// addi r7,r10,-28500
	ctx.r7.s64 = ctx.r10.s64 + -28500;
	// addi r6,r9,6504
	ctx.r6.s64 = ctx.r9.s64 + 6504;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// b 0x8210d508
	goto loc_8210D508;
loc_8210D504:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D508:
	// stw r11,868(r1)
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r11.u32);
	// addi r4,r1,1572
	ctx.r4.s64 = ctx.r1.s64 + 1572;
	// stw r11,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// addi r3,r1,1388
	ctx.r3.s64 = ctx.r1.s64 + 1388;
	// stw r31,868(r1)
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D520;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1268(r1)
	REX_STORE_U32(ctx.r1.u32 + 1268, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d54c
	if (ctx.cr6.eq) goto loc_8210D54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D54C:
	// lwz r3,868(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d56c
	if (ctx.cr6.eq) goto loc_8210D56C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D56C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D56C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r11,6736
	ctx.r5.s64 = ctx.r11.s64 + 6736;
	// addi r4,r10,-28456
	ctx.r4.s64 = ctx.r10.s64 + -28456;
	// addi r3,r1,2248
	ctx.r3.s64 = ctx.r1.s64 + 2248;
	// addi r30,r1,1428
	ctx.r30.s64 = ctx.r1.s64 + 1428;
	// addi r29,r1,1168
	ctx.r29.s64 = ctx.r1.s64 + 1168;
	// bl 0x8211ca10
	ctx.lr = 0x8210D58C;
	sub_8211CA10(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r9,-28520
	ctx.r4.s64 = ctx.r9.s64 + -28520;
	// addi r3,r1,3080
	ctx.r3.s64 = ctx.r1.s64 + 3080;
	// addi r27,r1,1520
	ctx.r27.s64 = ctx.r1.s64 + 1520;
	// addi r26,r1,1148
	ctx.r26.s64 = ctx.r1.s64 + 1148;
	// addi r25,r1,1268
	ctx.r25.s64 = ctx.r1.s64 + 1268;
	// bl 0x82118b48
	ctx.lr = 0x8210D5AC;
	sub_82118B48(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5B8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5C4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5D0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5DC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5E8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D5F4;
	sub_82118928(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addi r4,r1,1500
	ctx.r4.s64 = ctx.r1.s64 + 1500;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,1500(r1)
	REX_STORE_U32(ctx.r1.u32 + 1500, ctx.r7.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210D618;
	sub_822009C8(ctx, base);
	// lwz r3,3080(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d638
	if (ctx.cr6.eq) goto loc_8210D638;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D638:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// bl 0x825d0430
	ctx.lr = 0x8210D65C;
	sub_825D0430(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-28184
	ctx.r28.s64 = ctx.r11.s64 + -28184;
	// stw r28,624(r1)
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r28.u32);
	// beq cr6,0x8210d698
	if (ctx.cr6.eq) goto loc_8210D698;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-13596
	ctx.r9.s64 = ctx.r11.s64 + -13596;
	// addi r8,r10,-26680
	ctx.r8.s64 = ctx.r10.s64 + -26680;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x8210d69c
	goto loc_8210D69C;
loc_8210D698:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D69C:
	// stw r11,856(r1)
	REX_STORE_U32(ctx.r1.u32 + 856, ctx.r11.u32);
	// addi r4,r1,1276
	ctx.r4.s64 = ctx.r1.s64 + 1276;
	// stw r11,1276(r1)
	REX_STORE_U32(ctx.r1.u32 + 1276, ctx.r11.u32);
	// addi r3,r1,1868
	ctx.r3.s64 = ctx.r1.s64 + 1868;
	// stw r31,856(r1)
	REX_STORE_U32(ctx.r1.u32 + 856, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D6B4;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1708(r1)
	REX_STORE_U32(ctx.r1.u32 + 1708, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1868(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1868);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d6e0
	if (ctx.cr6.eq) goto loc_8210D6E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D6E0:
	// lwz r3,856(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d700
	if (ctx.cr6.eq) goto loc_8210D700;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D700:
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x825d0430
	ctx.lr = 0x8210D70C;
	sub_825D0430(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r10,r11,-28232
	ctx.r10.s64 = ctx.r11.s64 + -28232;
	// stw r10,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// beq cr6,0x8210d748
	if (ctx.cr6.eq) goto loc_8210D748;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r11,-13644
	ctx.r8.s64 = ctx.r11.s64 + -13644;
	// addi r7,r9,-27464
	ctx.r7.s64 = ctx.r9.s64 + -27464;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// b 0x8210d74c
	goto loc_8210D74C;
loc_8210D748:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8210D74C:
	// stw r11,860(r1)
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r11.u32);
	// addi r4,r1,1284
	ctx.r4.s64 = ctx.r1.s64 + 1284;
	// stw r11,1284(r1)
	REX_STORE_U32(ctx.r1.u32 + 1284, ctx.r11.u32);
	// addi r3,r1,1508
	ctx.r3.s64 = ctx.r1.s64 + 1508;
	// stw r31,860(r1)
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r31.u32);
	// bl 0x82200908
	ctx.lr = 0x8210D764;
	sub_82200908(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1292(r1)
	REX_STORE_U32(ctx.r1.u32 + 1292, ctx.r11.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,1508(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d790
	if (ctx.cr6.eq) goto loc_8210D790;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D790;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D790:
	// lwz r3,860(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 860);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d7b0
	if (ctx.cr6.eq) goto loc_8210D7B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210D7B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210D7B0:
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// addi r5,r9,23720
	ctx.r5.s64 = ctx.r9.s64 + 23720;
	// addi r3,r1,1924
	ctx.r3.s64 = ctx.r1.s64 + 1924;
	// stw r4,500(r1)
	REX_STORE_U32(ctx.r1.u32 + 500, ctx.r4.u32);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x8211cc30
	ctx.lr = 0x8210D7D4;
	sub_8211CC30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r4,r11,-28344
	ctx.r4.s64 = ctx.r11.s64 + -28344;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r8,23736
	ctx.r5.s64 = ctx.r8.s64 + 23736;
	// stw r4,508(r1)
	REX_STORE_U32(ctx.r1.u32 + 508, ctx.r4.u32);
	// addi r3,r1,2264
	ctx.r3.s64 = ctx.r1.s64 + 2264;
	// bl 0x8211cc30
	ctx.lr = 0x8210D7F4;
	sub_8211CC30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r4,r11,-28360
	ctx.r4.s64 = ctx.r11.s64 + -28360;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r7,23752
	ctx.r5.s64 = ctx.r7.s64 + 23752;
	// stw r4,516(r1)
	REX_STORE_U32(ctx.r1.u32 + 516, ctx.r4.u32);
	// addi r3,r1,2272
	ctx.r3.s64 = ctx.r1.s64 + 2272;
	// bl 0x8211cc30
	ctx.lr = 0x8210D814;
	sub_8211CC30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r4,r11,-28376
	ctx.r4.s64 = ctx.r11.s64 + -28376;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r6,23768
	ctx.r5.s64 = ctx.r6.s64 + 23768;
	// stw r4,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r4.u32);
	// addi r3,r1,2280
	ctx.r3.s64 = ctx.r1.s64 + 2280;
	// bl 0x8211cc30
	ctx.lr = 0x8210D834;
	sub_8211CC30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r30,r11,-28384
	ctx.r30.s64 = ctx.r11.s64 + -28384;
	// addi r29,r10,-28392
	ctx.r29.s64 = ctx.r10.s64 + -28392;
	// addi r4,r5,-28404
	ctx.r4.s64 = ctx.r5.s64 + -28404;
	// stw r30,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// addi r3,r1,2760
	ctx.r3.s64 = ctx.r1.s64 + 2760;
	// stw r29,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r29.u32);
	// bl 0x82118c28
	ctx.lr = 0x8210D860;
	sub_82118C28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8211ca80
	ctx.lr = 0x8210D86C;
	sub_8211CA80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x8211ca80
	ctx.lr = 0x8210D878;
	sub_8211CA80(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D884;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D890;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D89C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x8210D8A8;
	sub_82118928(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82141d00
	ctx.lr = 0x8210D8C0;
	sub_82141D00(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x82141de0
	ctx.lr = 0x8210D8E0;
	sub_82141DE0(ctx, base);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// bl 0x82141ec8
	ctx.lr = 0x8210D900;
	sub_82141EC8(ctx, base);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r10,r4,-27704
	ctx.r10.s64 = ctx.r4.s64 + -27704;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-28304
	ctx.r4.s64 = ctx.r11.s64 + -28304;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r4,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82141fb0
	ctx.lr = 0x8210D944;
	sub_82141FB0(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r5,r6,-27656
	ctx.r5.s64 = ctx.r6.s64 + -27656;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r4,r11,-28296
	ctx.r4.s64 = ctx.r11.s64 + -28296;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r4,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821421c0
	ctx.lr = 0x8210D988;
	sub_821421C0(ctx, base);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r6,r7,-27632
	ctx.r6.s64 = ctx.r7.s64 + -27632;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r4,r11,-28288
	ctx.r4.s64 = ctx.r11.s64 + -28288;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r4,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821421c0
	ctx.lr = 0x8210D9CC;
	sub_821421C0(ctx, base);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r7,-27608
	ctx.r6.s64 = ctx.r7.s64 + -27608;
	// addi r30,r11,-28272
	ctx.r30.s64 = ctx.r11.s64 + -28272;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,520(r1)
	REX_STORE_U32(ctx.r1.u32 + 520, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821423b0
	ctx.lr = 0x8210DA14;
	sub_821423B0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r9,-27568
	ctx.r7.s64 = ctx.r9.s64 + -27568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-27608
	ctx.r5.s64 = ctx.r8.s64 + -27608;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r1,2288
	ctx.r3.s64 = ctx.r1.s64 + 2288;
	// bl 0x8211cca0
	ctx.lr = 0x8210DA38;
	sub_8211CCA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210DA44;
	sub_82118928(ctx, base);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r30,r11,-28260
	ctx.r30.s64 = ctx.r11.s64 + -28260;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821423b0
	ctx.lr = 0x8210DA80;
	sub_821423B0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r9,-27528
	ctx.r7.s64 = ctx.r9.s64 + -27528;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-27568
	ctx.r5.s64 = ctx.r8.s64 + -27568;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r1,2296
	ctx.r3.s64 = ctx.r1.s64 + 2296;
	// bl 0x8211cca0
	ctx.lr = 0x8210DAA4;
	sub_8211CCA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210DAB0;
	sub_82118928(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r30,r11,-28240
	ctx.r30.s64 = ctx.r11.s64 + -28240;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stw r30,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821423b0
	ctx.lr = 0x8210DAEC;
	sub_821423B0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r29,r11,-28172
	ctx.r29.s64 = ctx.r11.s64 + -28172;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r9,-26800
	ctx.r7.s64 = ctx.r9.s64 + -26800;
	// stw r29,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-26856
	ctx.r5.s64 = ctx.r8.s64 + -26856;
	// stw r7,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r7.u32);
	// addi r3,r1,2304
	ctx.r3.s64 = ctx.r1.s64 + 2304;
	// bl 0x8211cf30
	ctx.lr = 0x8210DB1C;
	sub_8211CF30(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r6,-26984
	ctx.r5.s64 = ctx.r6.s64 + -26984;
	// addi r3,r1,2312
	ctx.r3.s64 = ctx.r1.s64 + 2312;
	// addi r25,r11,-26912
	ctx.r25.s64 = ctx.r11.s64 + -26912;
	// bl 0x8211cf30
	ctx.lr = 0x8210DB3C;
	sub_8211CF30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r27,r11,-28196
	ctx.r27.s64 = ctx.r11.s64 + -28196;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r27,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r27.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r10,-27192
	ctx.r5.s64 = ctx.r10.s64 + -27192;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// addi r23,r9,-27056
	ctx.r23.s64 = ctx.r9.s64 + -27056;
	// bl 0x8211ce70
	ctx.lr = 0x8210DB68;
	sub_8211CE70(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r4,r11,-28204
	ctx.r4.s64 = ctx.r11.s64 + -28204;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r4.u32);
	// addi r5,r8,-27256
	ctx.r5.s64 = ctx.r8.s64 + -27256;
	// addi r3,r1,2328
	ctx.r3.s64 = ctx.r1.s64 + 2328;
	// addi r21,r7,-27208
	ctx.r21.s64 = ctx.r7.s64 + -27208;
	// bl 0x8211ce70
	ctx.lr = 0x8210DB90;
	sub_8211CE70(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r4,r11,-28216
	ctx.r4.s64 = ctx.r11.s64 + -28216;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r5,r6,-27360
	ctx.r5.s64 = ctx.r6.s64 + -27360;
	// addi r3,r1,2336
	ctx.r3.s64 = ctx.r1.s64 + 2336;
	// addi r19,r11,-27304
	ctx.r19.s64 = ctx.r11.s64 + -27304;
	// bl 0x8211cdb0
	ctx.lr = 0x8210DBB8;
	sub_8211CDB0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r11,-28224
	ctx.r4.s64 = ctx.r11.s64 + -28224;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r4,528(r1)
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r4.u32);
	// addi r5,r10,-27440
	ctx.r5.s64 = ctx.r10.s64 + -27440;
	// addi r3,r1,2344
	ctx.r3.s64 = ctx.r1.s64 + 2344;
	// addi r17,r9,-27416
	ctx.r17.s64 = ctx.r9.s64 + -27416;
	// bl 0x8211cdb0
	ctx.lr = 0x8210DBE0;
	sub_8211CDB0(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-27496
	ctx.r5.s64 = ctx.r8.s64 + -27496;
	// addi r3,r1,2352
	ctx.r3.s64 = ctx.r1.s64 + 2352;
	// addi r30,r7,-27440
	ctx.r30.s64 = ctx.r7.s64 + -27440;
	// addi r15,r1,1292
	ctx.r15.s64 = ctx.r1.s64 + 1292;
	// addi r14,r6,-27464
	ctx.r14.s64 = ctx.r6.s64 + -27464;
	// bl 0x8211cca0
	ctx.lr = 0x8210DC0C;
	sub_8211CCA0(ctx, base);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210DC1C;
	sub_82118928(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r4,368(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x8211cd10
	ctx.lr = 0x8210DC28;
	sub_8211CD10(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DC34;
	sub_82118928(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,528(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x8211cd60
	ctx.lr = 0x8210DC40;
	sub_8211CD60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DC4C;
	sub_82118928(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// bl 0x8211cd10
	ctx.lr = 0x8210DC58;
	sub_8211CD10(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DC64;
	sub_82118928(ctx, base);
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x8211ce20
	ctx.lr = 0x8210DC70;
	sub_8211CE20(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DC7C;
	sub_82118928(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211ce20
	ctx.lr = 0x8210DC88;
	sub_8211CE20(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DC94;
	sub_82118928(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8211cee0
	ctx.lr = 0x8210DCA0;
	sub_8211CEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DCAC;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8211cee0
	ctx.lr = 0x8210DCB8;
	sub_8211CEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DCC4;
	sub_82118928(ctx, base);
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,388
	ctx.r5.s64 = ctx.r1.s64 + 388;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82142de0
	ctx.lr = 0x8210DCF4;
	sub_82142DE0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r30,r11,-28112
	ctx.r30.s64 = ctx.r11.s64 + -28112;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// addi r6,r8,-26032
	ctx.r6.s64 = ctx.r8.s64 + -26032;
	// addi r5,r7,-26072
	ctx.r5.s64 = ctx.r7.s64 + -26072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r3,r1,2360
	ctx.r3.s64 = ctx.r1.s64 + 2360;
	// bl 0x8211d060
	ctx.lr = 0x8210DD24;
	sub_8211D060(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-26152
	ctx.r5.s64 = ctx.r5.s64 + -26152;
	// addi r3,r1,2368
	ctx.r3.s64 = ctx.r1.s64 + 2368;
	// addi r24,r11,-26112
	ctx.r24.s64 = ctx.r11.s64 + -26112;
	// bl 0x8211cfa0
	ctx.lr = 0x8210DD44;
	sub_8211CFA0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r29,r11,-28124
	ctx.r29.s64 = ctx.r11.s64 + -28124;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r29,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r10,-26224
	ctx.r5.s64 = ctx.r10.s64 + -26224;
	// addi r3,r1,2376
	ctx.r3.s64 = ctx.r1.s64 + 2376;
	// addi r22,r9,-26192
	ctx.r22.s64 = ctx.r9.s64 + -26192;
	// bl 0x8211d060
	ctx.lr = 0x8210DD70;
	sub_8211D060(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r8,-26296
	ctx.r5.s64 = ctx.r8.s64 + -26296;
	// addi r3,r1,2384
	ctx.r3.s64 = ctx.r1.s64 + 2384;
	// addi r20,r7,-26256
	ctx.r20.s64 = ctx.r7.s64 + -26256;
	// bl 0x8211cfa0
	ctx.lr = 0x8210DD90;
	sub_8211CFA0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r4,r11,-28136
	ctx.r4.s64 = ctx.r11.s64 + -28136;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r4,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r4.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r5,r6,-26376
	ctx.r5.s64 = ctx.r6.s64 + -26376;
	// addi r3,r1,2392
	ctx.r3.s64 = ctx.r1.s64 + 2392;
	// addi r18,r11,-26336
	ctx.r18.s64 = ctx.r11.s64 + -26336;
	// bl 0x8211cfa0
	ctx.lr = 0x8210DDB8;
	sub_8211CFA0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r11,-28144
	ctx.r4.s64 = ctx.r11.s64 + -28144;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r4,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r4.u32);
	// addi r5,r10,-26456
	ctx.r5.s64 = ctx.r10.s64 + -26456;
	// addi r3,r1,2400
	ctx.r3.s64 = ctx.r1.s64 + 2400;
	// addi r16,r9,-26416
	ctx.r16.s64 = ctx.r9.s64 + -26416;
	// bl 0x8211cfa0
	ctx.lr = 0x8210DDE0;
	sub_8211CFA0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// addi r5,r8,-26528
	ctx.r5.s64 = ctx.r8.s64 + -26528;
	// addi r3,r1,2408
	ctx.r3.s64 = ctx.r1.s64 + 2408;
	// addi r14,r7,-26496
	ctx.r14.s64 = ctx.r7.s64 + -26496;
	// bl 0x8211cdb0
	ctx.lr = 0x8210DE08;
	sub_8211CDB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// addi r4,r1,1708
	ctx.r4.s64 = ctx.r1.s64 + 1708;
	// addi r27,r6,-26560
	ctx.r27.s64 = ctx.r6.s64 + -26560;
	// bl 0x82118928
	ctx.lr = 0x8210DE20;
	sub_82118928(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8211cd10
	ctx.lr = 0x8210DE2C;
	sub_8211CD10(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DE38;
	sub_82118928(ctx, base);
	// lwz r26,492(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8211cd60
	ctx.lr = 0x8210DE48;
	sub_8211CD60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DE54;
	sub_82118928(ctx, base);
	// lwz r27,496(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8211cd60
	ctx.lr = 0x8210DE64;
	sub_8211CD60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DE70;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x8211cd60
	ctx.lr = 0x8210DE7C;
	sub_8211CD60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DE88;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211d010
	ctx.lr = 0x8210DE94;
	sub_8211D010(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DEA0;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x8211cd60
	ctx.lr = 0x8210DEAC;
	sub_8211CD60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DEB8;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8211d010
	ctx.lr = 0x8210DEC4;
	sub_8211D010(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210DED0;
	sub_82118928(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r4,r11,-28104
	ctx.r4.s64 = ctx.r11.s64 + -28104;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r4,512(r1)
	REX_STORE_U32(ctx.r1.u32 + 512, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821431f0
	ctx.lr = 0x8210DF08;
	sub_821431F0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1300
	ctx.r4.s64 = ctx.r1.s64 + 1300;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,1300(r1)
	REX_STORE_U32(ctx.r1.u32 + 1300, ctx.r6.u32);
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210DF30;
	sub_822009C8(ctx, base);
	// lwz r3,2760(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210df50
	if (ctx.cr6.eq) goto loc_8210DF50;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210DF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210DF50:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r8,23688
	ctx.r5.s64 = ctx.r8.s64 + 23688;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r4,r7,-27960
	ctx.r4.s64 = ctx.r7.s64 + -27960;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r3,r1,2416
	ctx.r3.s64 = ctx.r1.s64 + 2416;
	// lbz r6,81(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// bl 0x8211d280
	ctx.lr = 0x8210DF88;
	sub_8211D280(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r4,-27980
	ctx.r4.s64 = ctx.r4.s64 + -27980;
	// addi r5,r5,18856
	ctx.r5.s64 = ctx.r5.s64 + 18856;
	// addi r3,r1,2424
	ctx.r3.s64 = ctx.r1.s64 + 2424;
	// bl 0x8211d280
	ctx.lr = 0x8210DFA4;
	sub_8211D280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r10,-28000
	ctx.r4.s64 = ctx.r10.s64 + -28000;
	// addi r5,r11,18840
	ctx.r5.s64 = ctx.r11.s64 + 18840;
	// addi r3,r1,2432
	ctx.r3.s64 = ctx.r1.s64 + 2432;
	// bl 0x8211d280
	ctx.lr = 0x8210DFC0;
	sub_8211D280(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r8,-28016
	ctx.r4.s64 = ctx.r8.s64 + -28016;
	// addi r5,r9,23704
	ctx.r5.s64 = ctx.r9.s64 + 23704;
	// addi r3,r1,2440
	ctx.r3.s64 = ctx.r1.s64 + 2440;
	// bl 0x8211d280
	ctx.lr = 0x8210DFDC;
	sub_8211D280(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r4,r6,-28032
	ctx.r4.s64 = ctx.r6.s64 + -28032;
	// addi r5,r7,-16264
	ctx.r5.s64 = ctx.r7.s64 + -16264;
	// addi r3,r1,2448
	ctx.r3.s64 = ctx.r1.s64 + 2448;
	// bl 0x8211d280
	ctx.lr = 0x8210DFF8;
	sub_8211D280(ctx, base);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r4,-28048
	ctx.r4.s64 = ctx.r4.s64 + -28048;
	// addi r5,r5,23680
	ctx.r5.s64 = ctx.r5.s64 + 23680;
	// addi r3,r1,2456
	ctx.r3.s64 = ctx.r1.s64 + 2456;
	// bl 0x8211d280
	ctx.lr = 0x8210E014;
	sub_8211D280(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-28068
	ctx.r4.s64 = ctx.r11.s64 + -28068;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// addi r5,r10,-30608
	ctx.r5.s64 = ctx.r10.s64 + -30608;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r3,r1,2464
	ctx.r3.s64 = ctx.r1.s64 + 2464;
	// bl 0x8211d280
	ctx.lr = 0x8210E034;
	sub_8211D280(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r4,500(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r5,r9,-30592
	ctx.r5.s64 = ctx.r9.s64 + -30592;
	// addi r3,r1,2472
	ctx.r3.s64 = ctx.r1.s64 + 2472;
	// bl 0x8211d280
	ctx.lr = 0x8210E04C;
	sub_8211D280(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r4,508(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r5,r8,-30576
	ctx.r5.s64 = ctx.r8.s64 + -30576;
	// addi r3,r1,2676
	ctx.r3.s64 = ctx.r1.s64 + 2676;
	// bl 0x8211d280
	ctx.lr = 0x8210E064;
	sub_8211D280(ctx, base);
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r4,516(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r5,r7,-16280
	ctx.r5.s64 = ctx.r7.s64 + -16280;
	// addi r3,r1,2664
	ctx.r3.s64 = ctx.r1.s64 + 2664;
	// bl 0x8211d280
	ctx.lr = 0x8210E07C;
	sub_8211D280(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r5,r6,-30560
	ctx.r5.s64 = ctx.r6.s64 + -30560;
	// addi r3,r1,1932
	ctx.r3.s64 = ctx.r1.s64 + 1932;
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// bl 0x8211d280
	ctx.lr = 0x8210E094;
	sub_8211D280(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r25,r11,-28076
	ctx.r25.s64 = ctx.r11.s64 + -28076;
	// addi r4,r5,-28088
	ctx.r4.s64 = ctx.r5.s64 + -28088;
	// addi r3,r1,3208
	ctx.r3.s64 = ctx.r1.s64 + 3208;
	// stw r25,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r25.u32);
	// bl 0x82118d08
	ctx.lr = 0x8210E0B4;
	sub_82118D08(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x8211d0d0
	ctx.lr = 0x8210E0C0;
	sub_8211D0D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,440(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8211d0d0
	ctx.lr = 0x8210E0CC;
	sub_8211D0D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x8211d0d0
	ctx.lr = 0x8210E0D8;
	sub_8211D0D0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E0E4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E0F0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E0FC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E108;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E114;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E120;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E12C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E138;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E144;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E150;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E15C;
	sub_82118928(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x821433e0
	ctx.lr = 0x8210E174;
	sub_821433E0(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x821434c0
	ctx.lr = 0x8210E194;
	sub_821434C0(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// bl 0x821435a8
	ctx.lr = 0x8210E1B4;
	sub_821435A8(ctx, base);
	// lwz r4,600(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r9,r11,7176
	ctx.r9.s64 = ctx.r11.s64 + 7176;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143690
	ctx.lr = 0x8210E1F0;
	sub_82143690(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// addi r10,r6,7240
	ctx.r10.s64 = ctx.r6.s64 + 7240;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821438a0
	ctx.lr = 0x8210E22C;
	sub_821438A0(ctx, base);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// addi r10,r7,7272
	ctx.r10.s64 = ctx.r7.s64 + 7272;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821438a0
	ctx.lr = 0x8210E268;
	sub_821438A0(ctx, base);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r7,7304
	ctx.r10.s64 = ctx.r7.s64 + 7304;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r4,r9,-27940
	ctx.r4.s64 = ctx.r9.s64 + -27940;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143a90
	ctx.lr = 0x8210E2A8;
	sub_82143A90(ctx, base);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r24,520(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r6,7376
	ctx.r10.s64 = ctx.r6.s64 + 7376;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143c80
	ctx.lr = 0x8210E2E8;
	sub_82143C80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r9,7432
	ctx.r7.s64 = ctx.r9.s64 + 7432;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r8,7376
	ctx.r5.s64 = ctx.r8.s64 + 7376;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r1,2580
	ctx.r3.s64 = ctx.r1.s64 + 2580;
	// bl 0x8211d2f0
	ctx.lr = 0x8210E30C;
	sub_8211D2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E318;
	sub_82118928(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r24,488(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143c80
	ctx.lr = 0x8210E34C;
	sub_82143C80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r9,7488
	ctx.r7.s64 = ctx.r9.s64 + 7488;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r8,7432
	ctx.r5.s64 = ctx.r8.s64 + 7432;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r3,r1,1940
	ctx.r3.s64 = ctx.r1.s64 + 1940;
	// bl 0x8211d2f0
	ctx.lr = 0x8210E370;
	sub_8211D2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E37C;
	sub_82118928(ctx, base);
	// addi r6,r1,83
	ctx.r6.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r24,r4,-27932
	ctx.r24.s64 = ctx.r4.s64 + -27932;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143e90
	ctx.lr = 0x8210E3B4;
	sub_82143E90(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r8,r10,7672
	ctx.r8.s64 = ctx.r10.s64 + 7672;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r9,7496
	ctx.r5.s64 = ctx.r9.s64 + 7496;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r3,r1,2404
	ctx.r3.s64 = ctx.r1.s64 + 2404;
	// bl 0x8211d360
	ctx.lr = 0x8210E3D8;
	sub_8211D360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E3E4;
	sub_82118928(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r24,r4,-27912
	ctx.r24.s64 = ctx.r4.s64 + -27912;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143e90
	ctx.lr = 0x8210E41C;
	sub_82143E90(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r8,r10,7848
	ctx.r8.s64 = ctx.r10.s64 + 7848;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r9,7680
	ctx.r5.s64 = ctx.r9.s64 + 7680;
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r3,r1,1948
	ctx.r3.s64 = ctx.r1.s64 + 1948;
	// bl 0x8211d360
	ctx.lr = 0x8210E440;
	sub_8211D360(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E44C;
	sub_82118928(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r24,392(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82143c80
	ctx.lr = 0x8210E480;
	sub_82143C80(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r23,368(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r9,7912
	ctx.r7.s64 = ctx.r9.s64 + 7912;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r8,7888
	ctx.r5.s64 = ctx.r8.s64 + 7888;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// addi r3,r1,2588
	ctx.r3.s64 = ctx.r1.s64 + 2588;
	// bl 0x8211d420
	ctx.lr = 0x8210E4A8;
	sub_8211D420(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r5,-27868
	ctx.r4.s64 = ctx.r5.s64 + -27868;
	// addi r5,r6,10744
	ctx.r5.s64 = ctx.r6.s64 + 10744;
	// addi r3,r1,1956
	ctx.r3.s64 = ctx.r1.s64 + 1956;
	// addi r21,r11,7888
	ctx.r21.s64 = ctx.r11.s64 + 7888;
	// bl 0x8211d360
	ctx.lr = 0x8210E4CC;
	sub_8211D360(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r9,-27884
	ctx.r4.s64 = ctx.r9.s64 + -27884;
	// addi r5,r10,10592
	ctx.r5.s64 = ctx.r10.s64 + 10592;
	// addi r3,r1,2412
	ctx.r3.s64 = ctx.r1.s64 + 2412;
	// bl 0x8211d2f0
	ctx.lr = 0x8210E4E8;
	sub_8211D2F0(ctx, base);
	// lis r8,-32177
	ctx.r8.s64 = -2108751872;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r8,-14088
	ctx.r5.s64 = ctx.r8.s64 + -14088;
	// addi r3,r1,1964
	ctx.r3.s64 = ctx.r1.s64 + 1964;
	// bl 0x8211d2f0
	ctx.lr = 0x8210E500;
	sub_8211D2F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E50C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E518;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E524;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211d3d0
	ctx.lr = 0x8210E530;
	sub_8211D3D0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E53C;
	sub_82118928(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r4,r11,-27848
	ctx.r4.s64 = ctx.r11.s64 + -27848;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// stw r4,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821442a0
	ctx.lr = 0x8210E574;
	sub_821442A0(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r25,396(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r7,r9,7928
	ctx.r7.s64 = ctx.r9.s64 + 7928;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r8,7936
	ctx.r5.s64 = ctx.r8.s64 + 7936;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// bl 0x8211d4f0
	ctx.lr = 0x8210E59C;
	sub_8211D4F0(ctx, base);
	// lwz r24,528(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r6,14784
	ctx.r5.s64 = ctx.r6.s64 + 14784;
	// addi r3,r1,1972
	ctx.r3.s64 = ctx.r1.s64 + 1972;
	// addi r21,r11,7928
	ctx.r21.s64 = ctx.r11.s64 + 7928;
	// bl 0x8211d4f0
	ctx.lr = 0x8210E5C0;
	sub_8211D4F0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r10,14784
	ctx.r5.s64 = ctx.r10.s64 + 14784;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210E5D8;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E5E4;
	sub_82118928(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211d3d0
	ctx.lr = 0x8210E5F0;
	sub_8211D3D0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E5FC;
	sub_82118928(ctx, base);
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r24,r7,-27840
	ctx.r24.s64 = ctx.r7.s64 + -27840;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x821446d0
	ctx.lr = 0x8210E634;
	sub_821446D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r10,11248
	ctx.r7.s64 = ctx.r10.s64 + 11248;
	// addi r4,r8,-27808
	ctx.r4.s64 = ctx.r8.s64 + -27808;
	// addi r5,r9,8768
	ctx.r5.s64 = ctx.r9.s64 + 8768;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// addi r3,r1,2420
	ctx.r3.s64 = ctx.r1.s64 + 2420;
	// bl 0x8211d710
	ctx.lr = 0x8210E65C;
	sub_8211D710(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r4,384(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// addi r5,r6,8616
	ctx.r5.s64 = ctx.r6.s64 + 8616;
	// addi r3,r1,1980
	ctx.r3.s64 = ctx.r1.s64 + 1980;
	// bl 0x8211d6a0
	ctx.lr = 0x8210E674;
	sub_8211D6A0(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r5,8536
	ctx.r5.s64 = ctx.r5.s64 + 8536;
	// addi r3,r1,2604
	ctx.r3.s64 = ctx.r1.s64 + 2604;
	// addi r21,r11,8600
	ctx.r21.s64 = ctx.r11.s64 + 8600;
	// bl 0x8211d6a0
	ctx.lr = 0x8210E694;
	sub_8211D6A0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r20,r10,-27820
	ctx.r20.s64 = ctx.r10.s64 + -27820;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r9,8376
	ctx.r5.s64 = ctx.r9.s64 + 8376;
	// addi r3,r1,1988
	ctx.r3.s64 = ctx.r1.s64 + 1988;
	// addi r18,r8,8472
	ctx.r18.s64 = ctx.r8.s64 + 8472;
	// bl 0x8211d5e0
	ctx.lr = 0x8210E6BC;
	sub_8211D5E0(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r17,r7,-27828
	ctx.r17.s64 = ctx.r7.s64 + -27828;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r5,r6,8224
	ctx.r5.s64 = ctx.r6.s64 + 8224;
	// addi r3,r1,2428
	ctx.r3.s64 = ctx.r1.s64 + 2428;
	// addi r15,r11,8288
	ctx.r15.s64 = ctx.r11.s64 + 8288;
	// bl 0x8211d5e0
	ctx.lr = 0x8210E6E4;
	sub_8211D5E0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r10,7944
	ctx.r5.s64 = ctx.r10.s64 + 7944;
	// addi r3,r1,1996
	ctx.r3.s64 = ctx.r1.s64 + 1996;
	// addi r24,r9,8160
	ctx.r24.s64 = ctx.r9.s64 + 8160;
	// bl 0x8211d560
	ctx.lr = 0x8210E704;
	sub_8211D560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E710;
	sub_82118928(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210E71C;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E728;
	sub_82118928(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210E734;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E740;
	sub_82118928(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x8211d650
	ctx.lr = 0x8210E74C;
	sub_8211D650(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E758;
	sub_82118928(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,384(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x8211d650
	ctx.lr = 0x8210E764;
	sub_8211D650(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E770;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E77C;
	sub_82118928(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r24,r6,-27796
	ctx.r24.s64 = ctx.r6.s64 + -27796;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82144ae0
	ctx.lr = 0x8210E7B4;
	sub_82144AE0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r23,r10,-27776
	ctx.r23.s64 = ctx.r10.s64 + -27776;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r9,11720
	ctx.r7.s64 = ctx.r9.s64 + 11720;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r8,11536
	ctx.r5.s64 = ctx.r8.s64 + 11536;
	// stw r7,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// addi r3,r1,2612
	ctx.r3.s64 = ctx.r1.s64 + 2612;
	// bl 0x8211d6a0
	ctx.lr = 0x8210E7E0;
	sub_8211D6A0(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r6,11272
	ctx.r5.s64 = ctx.r6.s64 + 11272;
	// addi r3,r1,2004
	ctx.r3.s64 = ctx.r1.s64 + 2004;
	// addi r24,r11,11520
	ctx.r24.s64 = ctx.r11.s64 + 11520;
	// bl 0x8211d790
	ctx.lr = 0x8210E800;
	sub_8211D790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E80C;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8211d650
	ctx.lr = 0x8210E818;
	sub_8211D650(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E824;
	sub_82118928(ctx, base);
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// addi r23,r7,-27756
	ctx.r23.s64 = ctx.r7.s64 + -27756;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82144d20
	ctx.lr = 0x8210E85C;
	sub_82144D20(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lwz r24,284(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r6,9512
	ctx.r3.s64 = ctx.r6.s64 + 9512;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r3,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r5,9408
	ctx.r5.s64 = ctx.r5.s64 + 9408;
	// addi r3,r1,2436
	ctx.r3.s64 = ctx.r1.s64 + 2436;
	// bl 0x8211d950
	ctx.lr = 0x8210E884;
	sub_8211D950(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,9000
	ctx.r5.s64 = ctx.r11.s64 + 9000;
	// addi r3,r1,2012
	ctx.r3.s64 = ctx.r1.s64 + 2012;
	// addi r21,r10,9304
	ctx.r21.s64 = ctx.r10.s64 + 9304;
	// bl 0x8211d950
	ctx.lr = 0x8210E8A4;
	sub_8211D950(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r4,r8,-27740
	ctx.r4.s64 = ctx.r8.s64 + -27740;
	// addi r5,r9,11984
	ctx.r5.s64 = ctx.r9.s64 + 11984;
	// addi r3,r1,2620
	ctx.r3.s64 = ctx.r1.s64 + 2620;
	// addi r19,r7,8872
	ctx.r19.s64 = ctx.r7.s64 + 8872;
	// bl 0x8211d880
	ctx.lr = 0x8210E8C8;
	sub_8211D880(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r6,11736
	ctx.r5.s64 = ctx.r6.s64 + 11736;
	// addi r3,r1,2020
	ctx.r3.s64 = ctx.r1.s64 + 2020;
	// bl 0x8211d800
	ctx.lr = 0x8210E8E0;
	sub_8211D800(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210E8EC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E8F8;
	sub_82118928(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x8211d900
	ctx.lr = 0x8210E904;
	sub_8211D900(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E910;
	sub_82118928(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211d900
	ctx.lr = 0x8210E91C;
	sub_8211D900(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210E928;
	sub_82118928(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82145158
	ctx.lr = 0x8210E958;
	sub_82145158(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r3.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// addi r6,r9,12488
	ctx.r6.s64 = ctx.r9.s64 + 12488;
	// addi r4,r7,-27692
	ctx.r4.s64 = ctx.r7.s64 + -27692;
	// addi r5,r8,12088
	ctx.r5.s64 = ctx.r8.s64 + 12088;
	// stw r6,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// addi r3,r1,2444
	ctx.r3.s64 = ctx.r1.s64 + 2444;
	// bl 0x8211db00
	ctx.lr = 0x8210E980;
	sub_8211DB00(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r3,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r5,r5,11880
	ctx.r5.s64 = ctx.r5.s64 + 11880;
	// addi r4,r4,-27708
	ctx.r4.s64 = ctx.r4.s64 + -27708;
	// addi r3,r1,2028
	ctx.r3.s64 = ctx.r1.s64 + 2028;
	// bl 0x8211d790
	ctx.lr = 0x8210E99C;
	sub_8211D790(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r3,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,10536
	ctx.r5.s64 = ctx.r11.s64 + 10536;
	// addi r3,r1,2628
	ctx.r3.s64 = ctx.r1.s64 + 2628;
	// bl 0x8211da90
	ctx.lr = 0x8210E9B4;
	sub_8211DA90(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r3,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r3.u32);
	// addi r8,r10,10480
	ctx.r8.s64 = ctx.r10.s64 + 10480;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,10424
	ctx.r5.s64 = ctx.r9.s64 + 10424;
	// stw r8,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r8.u32);
	// addi r3,r1,2036
	ctx.r3.s64 = ctx.r1.s64 + 2036;
	// bl 0x8211d5e0
	ctx.lr = 0x8210E9D8;
	sub_8211D5E0(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r3,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,10328
	ctx.r5.s64 = ctx.r7.s64 + 10328;
	// addi r3,r1,2452
	ctx.r3.s64 = ctx.r1.s64 + 2452;
	// addi r31,r6,10368
	ctx.r31.s64 = ctx.r6.s64 + 10368;
	// bl 0x8211da90
	ctx.lr = 0x8210E9F8;
	sub_8211DA90(ctx, base);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,10232
	ctx.r5.s64 = ctx.r5.s64 + 10232;
	// addi r3,r1,2044
	ctx.r3.s64 = ctx.r1.s64 + 2044;
	// addi r29,r11,10288
	ctx.r29.s64 = ctx.r11.s64 + 10288;
	// bl 0x8211d5e0
	ctx.lr = 0x8210EA18;
	sub_8211D5E0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r10,10120
	ctx.r5.s64 = ctx.r10.s64 + 10120;
	// addi r3,r1,2636
	ctx.r3.s64 = ctx.r1.s64 + 2636;
	// addi r24,r9,10176
	ctx.r24.s64 = ctx.r9.s64 + 10176;
	// bl 0x8211d6a0
	ctx.lr = 0x8210EA38;
	sub_8211D6A0(ctx, base);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r8,10008
	ctx.r5.s64 = ctx.r8.s64 + 10008;
	// addi r3,r1,2052
	ctx.r3.s64 = ctx.r1.s64 + 2052;
	// addi r22,r7,10064
	ctx.r22.s64 = ctx.r7.s64 + 10064;
	// bl 0x8211d5e0
	ctx.lr = 0x8210EA58;
	sub_8211D5E0(ctx, base);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r6,9896
	ctx.r5.s64 = ctx.r6.s64 + 9896;
	// addi r3,r1,2460
	ctx.r3.s64 = ctx.r1.s64 + 2460;
	// addi r20,r11,9952
	ctx.r20.s64 = ctx.r11.s64 + 9952;
	// bl 0x8211d6a0
	ctx.lr = 0x8210EA78;
	sub_8211D6A0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r10,9784
	ctx.r5.s64 = ctx.r10.s64 + 9784;
	// addi r3,r1,2060
	ctx.r3.s64 = ctx.r1.s64 + 2060;
	// addi r19,r9,9840
	ctx.r19.s64 = ctx.r9.s64 + 9840;
	// bl 0x8211d5e0
	ctx.lr = 0x8210EA98;
	sub_8211D5E0(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// addi r5,r8,14856
	ctx.r5.s64 = ctx.r8.s64 + 14856;
	// addi r3,r1,2644
	ctx.r3.s64 = ctx.r1.s64 + 2644;
	// addi r17,r7,9728
	ctx.r17.s64 = ctx.r7.s64 + 9728;
	// bl 0x8211d4f0
	ctx.lr = 0x8210EAB8;
	sub_8211D4F0(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// addi r26,r6,-27724
	ctx.r26.s64 = ctx.r6.s64 + -27724;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r5,9216
	ctx.r5.s64 = ctx.r5.s64 + 9216;
	// addi r3,r1,2068
	ctx.r3.s64 = ctx.r1.s64 + 2068;
	// addi r15,r11,-1896
	ctx.r15.s64 = ctx.r11.s64 + -1896;
	// bl 0x8211d5e0
	ctx.lr = 0x8210EAE0;
	sub_8211D5E0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r10,9528
	ctx.r5.s64 = ctx.r10.s64 + 9528;
	// addi r3,r1,2468
	ctx.r3.s64 = ctx.r1.s64 + 2468;
	// addi r28,r9,9128
	ctx.r28.s64 = ctx.r9.s64 + 9128;
	// bl 0x8211d9c0
	ctx.lr = 0x8210EB00;
	sub_8211D9C0(ctx, base);
	// lwz r8,284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210EB10;
	sub_82118928(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210EB1C;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EB28;
	sub_82118928(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8211d3d0
	ctx.lr = 0x8210EB34;
	sub_8211D3D0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EB40;
	sub_82118928(ctx, base);
	// lwz r26,492(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210EB50;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EB5C;
	sub_82118928(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x8211d650
	ctx.lr = 0x8210EB68;
	sub_8211D650(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EB74;
	sub_82118928(ctx, base);
	// lwz r27,496(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210EB84;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EB90;
	sub_82118928(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x8211d650
	ctx.lr = 0x8210EB9C;
	sub_8211D650(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EBA8;
	sub_82118928(ctx, base);
	// lwz r28,596(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210EBB8;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EBC4;
	sub_82118928(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8211da40
	ctx.lr = 0x8210EBD0;
	sub_8211DA40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EBDC;
	sub_82118928(ctx, base);
	// lwz r29,608(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211d4a0
	ctx.lr = 0x8210EBEC;
	sub_8211D4A0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,220(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82118928
	ctx.lr = 0x8210EBF8;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,524(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x8211da40
	ctx.lr = 0x8210EC04;
	sub_8211DA40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// bl 0x82118928
	ctx.lr = 0x8210EC10;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,352(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82118928
	ctx.lr = 0x8210EC1C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82118928
	ctx.lr = 0x8210EC28;
	sub_82118928(ctx, base);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r4,512(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82145568
	ctx.lr = 0x8210EC5C;
	sub_82145568(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1332
	ctx.r4.s64 = ctx.r1.s64 + 1332;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,1332(r1)
	REX_STORE_U32(ctx.r1.u32 + 1332, ctx.r7.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210EC84;
	sub_822009C8(ctx, base);
	// lwz r3,3208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210eca4
	if (ctx.cr6.eq) goto loc_8210ECA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210ECA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210ECA4:
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r7,23608
	ctx.r5.s64 = ctx.r7.s64 + 23608;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r4,r6,-27644
	ctx.r4.s64 = ctx.r6.s64 + -27644;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r3,r1,2076
	ctx.r3.s64 = ctx.r1.s64 + 2076;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// bl 0x8211dd30
	ctx.lr = 0x8210ECE4;
	sub_8211DD30(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r10,23624
	ctx.r5.s64 = ctx.r10.s64 + 23624;
	// addi r3,r1,2652
	ctx.r3.s64 = ctx.r1.s64 + 2652;
	// bl 0x8211dd30
	ctx.lr = 0x8210ECFC;
	sub_8211DD30(ctx, base);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r4,500(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// addi r5,r9,23640
	ctx.r5.s64 = ctx.r9.s64 + 23640;
	// addi r3,r1,2084
	ctx.r3.s64 = ctx.r1.s64 + 2084;
	// bl 0x8211dd30
	ctx.lr = 0x8210ED14;
	sub_8211DD30(ctx, base);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r4,508(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r5,r8,23656
	ctx.r5.s64 = ctx.r8.s64 + 23656;
	// addi r3,r1,2476
	ctx.r3.s64 = ctx.r1.s64 + 2476;
	// bl 0x8211dd30
	ctx.lr = 0x8210ED2C;
	sub_8211DD30(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r4,516(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r5,r7,23736
	ctx.r5.s64 = ctx.r7.s64 + 23736;
	// addi r3,r1,2092
	ctx.r3.s64 = ctx.r1.s64 + 2092;
	// bl 0x8211dd30
	ctx.lr = 0x8210ED44;
	sub_8211DD30(ctx, base);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r4,504(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 504);
	// addi r5,r6,23672
	ctx.r5.s64 = ctx.r6.s64 + 23672;
	// addi r3,r1,2660
	ctx.r3.s64 = ctx.r1.s64 + 2660;
	// bl 0x8211dd30
	ctx.lr = 0x8210ED5C;
	sub_8211DD30(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r30,r11,-27652
	ctx.r30.s64 = ctx.r11.s64 + -27652;
	// addi r4,r5,-27664
	ctx.r4.s64 = ctx.r5.s64 + -27664;
	// addi r3,r1,2792
	ctx.r3.s64 = ctx.r1.s64 + 2792;
	// stw r30,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// bl 0x82118de8
	ctx.lr = 0x8210ED7C;
	sub_82118DE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x8211db80
	ctx.lr = 0x8210ED88;
	sub_8211DB80(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,440(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8211db80
	ctx.lr = 0x8210ED94;
	sub_8211DB80(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x8211db80
	ctx.lr = 0x8210EDA0;
	sub_8211DB80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8211db80
	ctx.lr = 0x8210EDAC;
	sub_8211DB80(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDB8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDC4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDD0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDDC;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDE8;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EDF4;
	sub_82118928(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82146f90
	ctx.lr = 0x8210EE0C;
	sub_82146F90(ctx, base);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// bl 0x82145758
	ctx.lr = 0x8210EE2C;
	sub_82145758(ctx, base);
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// bl 0x82148750
	ctx.lr = 0x8210EE4C;
	sub_82148750(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x82145840
	ctx.lr = 0x8210EE6C;
	sub_82145840(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lwz r4,600(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-2256
	ctx.r10.s64 = ctx.r7.s64 + -2256;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82145928
	ctx.lr = 0x8210EEA8;
	sub_82145928(ctx, base);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r7,-30248
	ctx.r10.s64 = ctx.r7.s64 + -30248;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82145b38
	ctx.lr = 0x8210EEE4;
	sub_82145B38(ctx, base);
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r10,r7,-2176
	ctx.r10.s64 = ctx.r7.s64 + -2176;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82145b38
	ctx.lr = 0x8210EF20;
	sub_82145B38(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lwz r23,368(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r7,r9,-29976
	ctx.r7.s64 = ctx.r9.s64 + -29976;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r8,-30008
	ctx.r5.s64 = ctx.r8.s64 + -30008;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,2100
	ctx.r3.s64 = ctx.r1.s64 + 2100;
	// bl 0x8211deb0
	ctx.lr = 0x8210EF48;
	sub_8211DEB0(ctx, base);
	// lwz r30,392(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-30064
	ctx.r5.s64 = ctx.r6.s64 + -30064;
	// addi r3,r1,2668
	ctx.r3.s64 = ctx.r1.s64 + 2668;
	// addi r20,r11,-30008
	ctx.r20.s64 = ctx.r11.s64 + -30008;
	// bl 0x8211ddf0
	ctx.lr = 0x8210EF6C;
	sub_8211DDF0(ctx, base);
	// lwz r24,488(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 488);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r10,-30136
	ctx.r5.s64 = ctx.r10.s64 + -30136;
	// addi r3,r1,2108
	ctx.r3.s64 = ctx.r1.s64 + 2108;
	// addi r18,r9,-2136
	ctx.r18.s64 = ctx.r9.s64 + -2136;
	// bl 0x8211ddf0
	ctx.lr = 0x8210EF90;
	sub_8211DDF0(ctx, base);
	// lwz r25,520(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 520);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r8,-30208
	ctx.r5.s64 = ctx.r8.s64 + -30208;
	// addi r3,r1,2488
	ctx.r3.s64 = ctx.r1.s64 + 2488;
	// addi r16,r7,-30136
	ctx.r16.s64 = ctx.r7.s64 + -30136;
	// bl 0x8211ddf0
	ctx.lr = 0x8210EFB4;
	sub_8211DDF0(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r6,-30208
	ctx.r5.s64 = ctx.r6.s64 + -30208;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8211dda0
	ctx.lr = 0x8210EFCC;
	sub_8211DDA0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EFD8;
	sub_82118928(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x8211dda0
	ctx.lr = 0x8210EFE4;
	sub_8211DDA0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210EFF0;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x8211dda0
	ctx.lr = 0x8210EFFC;
	sub_8211DDA0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F008;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211de60
	ctx.lr = 0x8210F014;
	sub_8211DE60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F020;
	sub_82118928(ctx, base);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82146128
	ctx.lr = 0x8210F050;
	sub_82146128(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lwz r23,384(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 384);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r6,r8,-29448
	ctx.r6.s64 = ctx.r8.s64 + -29448;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r7,-29624
	ctx.r5.s64 = ctx.r7.s64 + -29624;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r3,r1,2116
	ctx.r3.s64 = ctx.r1.s64 + 2116;
	// bl 0x8211e040
	ctx.lr = 0x8210F078;
	sub_8211E040(ctx, base);
	// lwz r30,416(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-29728
	ctx.r5.s64 = ctx.r5.s64 + -29728;
	// addi r3,r1,2584
	ctx.r3.s64 = ctx.r1.s64 + 2584;
	// addi r20,r11,-29640
	ctx.r20.s64 = ctx.r11.s64 + -29640;
	// bl 0x8211e040
	ctx.lr = 0x8210F09C;
	sub_8211E040(ctx, base);
	// lwz r25,396(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r10,-29912
	ctx.r5.s64 = ctx.r10.s64 + -29912;
	// addi r3,r1,2124
	ctx.r3.s64 = ctx.r1.s64 + 2124;
	// addi r18,r9,-29816
	ctx.r18.s64 = ctx.r9.s64 + -29816;
	// bl 0x8211df80
	ctx.lr = 0x8210F0C0;
	sub_8211DF80(ctx, base);
	// lwz r24,528(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r8,-29952
	ctx.r5.s64 = ctx.r8.s64 + -29952;
	// addi r3,r1,2496
	ctx.r3.s64 = ctx.r1.s64 + 2496;
	// addi r16,r7,-2080
	ctx.r16.s64 = ctx.r7.s64 + -2080;
	// bl 0x8211df80
	ctx.lr = 0x8210F0E4;
	sub_8211DF80(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r6,-29952
	ctx.r5.s64 = ctx.r6.s64 + -29952;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8211df30
	ctx.lr = 0x8210F0FC;
	sub_8211DF30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F108;
	sub_82118928(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x8211de60
	ctx.lr = 0x8210F114;
	sub_8211DE60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F120;
	sub_82118928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x8211dff0
	ctx.lr = 0x8210F12C;
	sub_8211DFF0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F138;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211dff0
	ctx.lr = 0x8210F144;
	sub_8211DFF0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F150;
	sub_82118928(ctx, base);
	// lwz r30,624(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 624);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82146788
	ctx.lr = 0x8210F184;
	sub_82146788(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r7,r9,-28976
	ctx.r7.s64 = ctx.r9.s64 + -28976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,-29144
	ctx.r5.s64 = ctx.r8.s64 + -29144;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,2132
	ctx.r3.s64 = ctx.r1.s64 + 2132;
	// bl 0x8211e1b0
	ctx.lr = 0x8210F1A8;
	sub_8211E1B0(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-29304
	ctx.r5.s64 = ctx.r6.s64 + -29304;
	// addi r3,r1,2632
	ctx.r3.s64 = ctx.r1.s64 + 2632;
	// bl 0x8211e130
	ctx.lr = 0x8210F1C0;
	sub_8211E130(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r5,-29432
	ctx.r5.s64 = ctx.r5.s64 + -29432;
	// addi r3,r1,2140
	ctx.r3.s64 = ctx.r1.s64 + 2140;
	// bl 0x8211e0b0
	ctx.lr = 0x8210F1D8;
	sub_8211E0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,8
	ctx.r3.s64 = ctx.r25.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210F1E4;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F1F0;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F1FC;
	sub_82118928(ctx, base);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,83
	ctx.r10.s64 = ctx.r1.s64 + 83;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82146990
	ctx.lr = 0x8210F22C;
	sub_82146990(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r6,r8,-27808
	ctx.r6.s64 = ctx.r8.s64 + -27808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r7,-27872
	ctx.r5.s64 = ctx.r7.s64 + -27872;
	// stw r6,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// addi r3,r1,2504
	ctx.r3.s64 = ctx.r1.s64 + 2504;
	// bl 0x8211e470
	ctx.lr = 0x8210F250;
	sub_8211E470(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,-28008
	ctx.r5.s64 = ctx.r5.s64 + -28008;
	// addi r3,r1,2148
	ctx.r3.s64 = ctx.r1.s64 + 2148;
	// addi r21,r11,-27936
	ctx.r21.s64 = ctx.r11.s64 + -27936;
	// bl 0x8211e3b0
	ctx.lr = 0x8210F270;
	sub_8211E3B0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r5,r10,-28136
	ctx.r5.s64 = ctx.r10.s64 + -28136;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,2592
	ctx.r3.s64 = ctx.r1.s64 + 2592;
	// addi r19,r9,-28080
	ctx.r19.s64 = ctx.r9.s64 + -28080;
	// bl 0x8211e470
	ctx.lr = 0x8210F290;
	sub_8211E470(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r8,-28264
	ctx.r5.s64 = ctx.r8.s64 + -28264;
	// addi r3,r1,2156
	ctx.r3.s64 = ctx.r1.s64 + 2156;
	// addi r28,r7,-28192
	ctx.r28.s64 = ctx.r7.s64 + -28192;
	// bl 0x8211e3b0
	ctx.lr = 0x8210F2B0;
	sub_8211E3B0(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r6,-672
	ctx.r5.s64 = ctx.r6.s64 + -672;
	// addi r3,r1,2512
	ctx.r3.s64 = ctx.r1.s64 + 2512;
	// addi r27,r11,-28336
	ctx.r27.s64 = ctx.r11.s64 + -28336;
	// bl 0x8211e3b0
	ctx.lr = 0x8210F2D0;
	sub_8211E3B0(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r10,-816
	ctx.r5.s64 = ctx.r10.s64 + -816;
	// addi r3,r1,2164
	ctx.r3.s64 = ctx.r1.s64 + 2164;
	// addi r26,r9,-744
	ctx.r26.s64 = ctx.r9.s64 + -744;
	// bl 0x8211e3b0
	ctx.lr = 0x8210F2F0;
	sub_8211E3B0(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r5,r8,-944
	ctx.r5.s64 = ctx.r8.s64 + -944;
	// addi r3,r1,2656
	ctx.r3.s64 = ctx.r1.s64 + 2656;
	// addi r16,r7,-888
	ctx.r16.s64 = ctx.r7.s64 + -888;
	// bl 0x8211df80
	ctx.lr = 0x8210F310;
	sub_8211DF80(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-28600
	ctx.r5.s64 = ctx.r6.s64 + -28600;
	// addi r3,r1,2172
	ctx.r3.s64 = ctx.r1.s64 + 2172;
	// addi r15,r11,-28392
	ctx.r15.s64 = ctx.r11.s64 + -28392;
	// bl 0x8211e330
	ctx.lr = 0x8210F330;
	sub_8211E330(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r10,-28800
	ctx.r5.s64 = ctx.r10.s64 + -28800;
	// addi r3,r1,2520
	ctx.r3.s64 = ctx.r1.s64 + 2520;
	// bl 0x8211e2b0
	ctx.lr = 0x8210F348;
	sub_8211E2B0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-28960
	ctx.r5.s64 = ctx.r9.s64 + -28960;
	// addi r3,r1,2180
	ctx.r3.s64 = ctx.r1.s64 + 2180;
	// bl 0x8211e230
	ctx.lr = 0x8210F360;
	sub_8211E230(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210F370;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F37C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F388;
	sub_82118928(ctx, base);
	// lwz r23,192(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8211de60
	ctx.lr = 0x8210F398;
	sub_8211DE60(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F3A4;
	sub_82118928(ctx, base);
	// lwz r24,492(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8211df30
	ctx.lr = 0x8210F3B4;
	sub_8211DF30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F3C0;
	sub_82118928(ctx, base);
	// lwz r25,496(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8211df30
	ctx.lr = 0x8210F3D0;
	sub_8211DF30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F3DC;
	sub_82118928(ctx, base);
	// lwz r29,596(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211df30
	ctx.lr = 0x8210F3EC;
	sub_8211DF30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F3F8;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8211e420
	ctx.lr = 0x8210F404;
	sub_8211E420(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F410;
	sub_82118928(ctx, base);
	// lwz r28,608(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8211df30
	ctx.lr = 0x8210F420;
	sub_8211DF30(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F42C;
	sub_82118928(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8211e420
	ctx.lr = 0x8210F438;
	sub_8211E420(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F444;
	sub_82118928(ctx, base);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,83
	ctx.r11.s64 = ctx.r1.s64 + 83;
	// lwz r28,512(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,81(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82146da0
	ctx.lr = 0x8210F478;
	sub_82146DA0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r27,196(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,1340
	ctx.r4.s64 = ctx.r1.s64 + 1340;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r8,1340(r1)
	REX_STORE_U32(ctx.r1.u32 + 1340, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210F4A0;
	sub_822009C8(ctx, base);
	// lwz r3,2792(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f4c0
	if (ctx.cr6.eq) goto loc_8210F4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210F4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210F4C0:
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,83
	ctx.r8.s64 = ctx.r1.s64 + 83;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r4,r6,-27624
	ctx.r4.s64 = ctx.r6.s64 + -27624;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r3,r1,3112
	ctx.r3.s64 = ctx.r1.s64 + 3112;
	// addi r26,r5,-27600
	ctx.r26.s64 = ctx.r5.s64 + -27600;
	// addi r22,r11,-27612
	ctx.r22.s64 = ctx.r11.s64 + -27612;
	// lbz r10,82(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x82118ec8
	ctx.lr = 0x8210F510;
	sub_82118EC8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8211e4e0
	ctx.lr = 0x8210F51C;
	sub_8211E4E0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8211e690
	ctx.lr = 0x8210F528;
	sub_8211E690(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// bl 0x82146f90
	ctx.lr = 0x8210F540;
	sub_82146F90(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r7,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// bl 0x82147070
	ctx.lr = 0x8210F560;
	sub_82147070(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lbz r10,83(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x82147158
	ctx.lr = 0x8210F580;
	sub_82147158(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// lbz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// bl 0x82147240
	ctx.lr = 0x8210F5A0;
	sub_82147240(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x82147328
	ctx.lr = 0x8210F5C0;
	sub_82147328(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwz r4,600(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r8,-2256
	ctx.r11.s64 = ctx.r8.s64 + -2256;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82147410
	ctx.lr = 0x8210F5FC;
	sub_82147410(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lwz r21,528(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,-29952
	ctx.r5.s64 = ctx.r8.s64 + -29952;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82147620
	ctx.lr = 0x8210F63C;
	sub_82147620(ctx, base);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r22,392(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 392);
	// addi r8,r10,-2136
	ctx.r8.s64 = ctx.r10.s64 + -2136;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82147828
	ctx.lr = 0x8210F67C;
	sub_82147828(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r7,80
	ctx.r9.s64 = ctx.r7.s64 + 80;
	// addi r4,r6,-27592
	ctx.r4.s64 = ctx.r6.s64 + -27592;
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r26,r10,-27576
	ctx.r26.s64 = ctx.r10.s64 + -27576;
	// addi r20,r11,7848
	ctx.r20.s64 = ctx.r11.s64 + 7848;
	// bl 0x8211e840
	ctx.lr = 0x8210F6AC;
	sub_8211E840(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bl 0x8211e840
	ctx.lr = 0x8210F6B8;
	sub_8211E840(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r26,396(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r31.u8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82147c48
	ctx.lr = 0x8210F6EC;
	sub_82147C48(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r3,r1,2600
	ctx.r3.s64 = ctx.r1.s64 + 2600;
	// bl 0x8211e890
	ctx.lr = 0x8210F710;
	sub_8211E890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r20,8
	ctx.r3.s64 = ctx.r20.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210F71C;
	sub_82118928(ctx, base);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82147e38
	ctx.lr = 0x8210F74C;
	sub_82147E38(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r8,r10,472
	ctx.r8.s64 = ctx.r10.s64 + 472;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,248
	ctx.r5.s64 = ctx.r9.s64 + 248;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r3,r1,2188
	ctx.r3.s64 = ctx.r1.s64 + 2188;
	// bl 0x8211e910
	ctx.lr = 0x8210F770;
	sub_8211E910(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r20,8
	ctx.r3.s64 = ctx.r20.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210F77C;
	sub_82118928(ctx, base);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82148040
	ctx.lr = 0x8210F7AC;
	sub_82148040(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r7,r9,696
	ctx.r7.s64 = ctx.r9.s64 + 696;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r8,488
	ctx.r5.s64 = ctx.r8.s64 + 488;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x8211e990
	ctx.lr = 0x8210F7D0;
	sub_8211E990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r20,8
	ctx.r3.s64 = ctx.r20.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210F7DC;
	sub_82118928(ctx, base);
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stb r31,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stb r31,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r4,r10,-27564
	ctx.r4.s64 = ctx.r10.s64 + -27564;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82148248
	ctx.lr = 0x8210F810;
	sub_82148248(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r7,864
	ctx.r10.s64 = ctx.r7.s64 + 864;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82148478
	ctx.lr = 0x8210F84C;
	sub_82148478(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r4,r1,1900
	ctx.r4.s64 = ctx.r1.s64 + 1900;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,1900(r1)
	REX_STORE_U32(ctx.r1.u32 + 1900, ctx.r8.u32);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210F870;
	sub_822009C8(ctx, base);
	// lwz r3,3112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 3112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f890
	if (ctx.cr6.eq) goto loc_8210F890;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210F890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210F890:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r1,83
	ctx.r9.s64 = ctx.r1.s64 + 83;
	// addi r4,r11,-27532
	ctx.r4.s64 = ctx.r11.s64 + -27532;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// stw r4,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r4.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// addi r3,r1,2196
	ctx.r3.s64 = ctx.r1.s64 + 2196;
	// addi r5,r6,1096
	ctx.r5.s64 = ctx.r6.s64 + 1096;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8211ebc0
	ctx.lr = 0x8210F8D4;
	sub_8211EBC0(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-27548
	ctx.r4.s64 = ctx.r10.s64 + -27548;
	// addi r3,r1,2824
	ctx.r3.s64 = ctx.r1.s64 + 2824;
	// bl 0x82118fa8
	ctx.lr = 0x8210F8E8;
	sub_82118FA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,344(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x8211ea10
	ctx.lr = 0x8210F8F4;
	sub_8211EA10(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,440(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 440);
	// bl 0x8211ea10
	ctx.lr = 0x8210F900;
	sub_8211EA10(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,388(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// bl 0x8211ea10
	ctx.lr = 0x8210F90C;
	sub_8211EA10(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x8211ea10
	ctx.lr = 0x8210F918;
	sub_8211EA10(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8210F924;
	sub_82118928(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// bl 0x82146f90
	ctx.lr = 0x8210F93C;
	sub_82146F90(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r7,82(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// stb r7,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x82148668
	ctx.lr = 0x8210F95C;
	sub_82148668(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82148750
	ctx.lr = 0x8210F97C;
	sub_82148750(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r8,83(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
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
	// bl 0x82147158
	ctx.lr = 0x8210F99C;
	sub_82147158(ctx, base);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r3,r7,-2256
	ctx.r3.s64 = ctx.r7.s64 + -2256;
	// addi r4,r5,-27440
	ctx.r4.s64 = ctx.r5.s64 + -27440;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r6,-2560
	ctx.r5.s64 = ctx.r6.s64 + -2560;
	// addi r3,r1,2640
	ctx.r3.s64 = ctx.r1.s64 + 2640;
	// bl 0x8211edc0
	ctx.lr = 0x8210F9C4;
	sub_8211EDC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r10,-27468
	ctx.r4.s64 = ctx.r10.s64 + -27468;
	// addi r5,r11,-3016
	ctx.r5.s64 = ctx.r11.s64 + -3016;
	// addi r3,r1,2204
	ctx.r3.s64 = ctx.r1.s64 + 2204;
	// bl 0x8211ed40
	ctx.lr = 0x8210F9E0;
	sub_8211ED40(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r4,r11,-27492
	ctx.r4.s64 = ctx.r11.s64 + -27492;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r9,-3240
	ctx.r5.s64 = ctx.r9.s64 + -3240;
	// stw r4,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// addi r3,r1,2536
	ctx.r3.s64 = ctx.r1.s64 + 2536;
	// bl 0x8211ecc0
	ctx.lr = 0x8210FA00;
	sub_8211ECC0(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r4,r11,-27516
	ctx.r4.s64 = ctx.r11.s64 + -27516;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r5,r8,-3384
	ctx.r5.s64 = ctx.r8.s64 + -3384;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// addi r3,r1,2212
	ctx.r3.s64 = ctx.r1.s64 + 2212;
	// bl 0x8211ec40
	ctx.lr = 0x8210FA20;
	sub_8211EC40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210FA2C;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FA38;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FA44;
	sub_82118928(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FA50;
	sub_82118928(ctx, base);
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
	// addi r4,r10,-27416
	ctx.r4.s64 = ctx.r10.s64 + -27416;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82148838
	ctx.lr = 0x8210FA84;
	sub_82148838(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r11,r9,-2136
	ctx.r11.s64 = ctx.r9.s64 + -2136;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r5,r8,-29952
	ctx.r5.s64 = ctx.r8.s64 + -29952;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r30,r7,-30248
	ctx.r30.s64 = ctx.r7.s64 + -30248;
	// addi r28,r6,-2176
	ctx.r28.s64 = ctx.r6.s64 + -2176;
	// bl 0x8211ee40
	ctx.lr = 0x8210FAB0;
	sub_8211EE40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,456(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 456);
	// bl 0x8211ee90
	ctx.lr = 0x8210FABC;
	sub_8211EE90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,400(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x8211ee90
	ctx.lr = 0x8210FAC8;
	sub_8211EE90(ctx, base);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82148e40
	ctx.lr = 0x8210FAF8;
	sub_82148E40(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r7,-28192
	ctx.r3.s64 = ctx.r7.s64 + -28192;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r3,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r6,-480
	ctx.r5.s64 = ctx.r6.s64 + -480;
	// addi r3,r1,2608
	ctx.r3.s64 = ctx.r1.s64 + 2608;
	// bl 0x8211f060
	ctx.lr = 0x8210FB1C;
	sub_8211F060(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r3,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// addi r9,r11,-600
	ctx.r9.s64 = ctx.r11.s64 + -600;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r10,-672
	ctx.r5.s64 = ctx.r10.s64 + -672;
	// stw r9,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// addi r3,r1,2220
	ctx.r3.s64 = ctx.r1.s64 + 2220;
	// bl 0x8211f060
	ctx.lr = 0x8210FB40;
	sub_8211F060(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r8,-816
	ctx.r5.s64 = ctx.r8.s64 + -816;
	// addi r3,r1,2544
	ctx.r3.s64 = ctx.r1.s64 + 2544;
	// addi r29,r7,-744
	ctx.r29.s64 = ctx.r7.s64 + -744;
	// bl 0x8211f060
	ctx.lr = 0x8210FB60;
	sub_8211F060(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r6,-944
	ctx.r5.s64 = ctx.r6.s64 + -944;
	// addi r3,r1,2228
	ctx.r3.s64 = ctx.r1.s64 + 2228;
	// addi r27,r11,-888
	ctx.r27.s64 = ctx.r11.s64 + -888;
	// bl 0x8211ef30
	ctx.lr = 0x8210FB80;
	sub_8211EF30(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r5,r10,-1232
	ctx.r5.s64 = ctx.r10.s64 + -1232;
	// addi r3,r1,2672
	ctx.r3.s64 = ctx.r1.s64 + 2672;
	// addi r24,r9,-28392
	ctx.r24.s64 = ctx.r9.s64 + -28392;
	// bl 0x8211eff0
	ctx.lr = 0x8210FBA0;
	sub_8211EFF0(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r23,r8,-27384
	ctx.r23.s64 = ctx.r8.s64 + -27384;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r7,-1592
	ctx.r5.s64 = ctx.r7.s64 + -1592;
	// addi r3,r1,2236
	ctx.r3.s64 = ctx.r1.s64 + 2236;
	// addi r21,r6,-1248
	ctx.r21.s64 = ctx.r6.s64 + -1248;
	// bl 0x8211eff0
	ctx.lr = 0x8210FBC8;
	sub_8211EFF0(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r20,r5,-27396
	ctx.r20.s64 = ctx.r5.s64 + -27396;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r11,-1712
	ctx.r5.s64 = ctx.r11.s64 + -1712;
	// addi r3,r1,2552
	ctx.r3.s64 = ctx.r1.s64 + 2552;
	// addi r18,r10,-1608
	ctx.r18.s64 = ctx.r10.s64 + -1608;
	// bl 0x8211ef30
	ctx.lr = 0x8210FBF0;
	sub_8211EF30(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r17,r9,-27408
	ctx.r17.s64 = ctx.r9.s64 + -27408;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r5,r8,-1856
	ctx.r5.s64 = ctx.r8.s64 + -1856;
	// addi r3,r1,2244
	ctx.r3.s64 = ctx.r1.s64 + 2244;
	// addi r15,r7,-1808
	ctx.r15.s64 = ctx.r7.s64 + -1808;
	// bl 0x8211ef30
	ctx.lr = 0x8210FC18;
	sub_8211EF30(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r6,-1992
	ctx.r5.s64 = ctx.r6.s64 + -1992;
	// addi r3,r1,2616
	ctx.r3.s64 = ctx.r1.s64 + 2616;
	// addi r26,r11,-1896
	ctx.r26.s64 = ctx.r11.s64 + -1896;
	// bl 0x8211ef30
	ctx.lr = 0x8210FC38;
	sub_8211EF30(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r5,r10,-2080
	ctx.r5.s64 = ctx.r10.s64 + -2080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8211eee0
	ctx.lr = 0x8210FC54;
	sub_8211EEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82118928
	ctx.lr = 0x8210FC60;
	sub_82118928(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8211eee0
	ctx.lr = 0x8210FC6C;
	sub_8211EEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FC78;
	sub_82118928(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8211eee0
	ctx.lr = 0x8210FC84;
	sub_8211EEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FC90;
	sub_82118928(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// bl 0x8211efa0
	ctx.lr = 0x8210FC9C;
	sub_8211EFA0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FCA8;
	sub_82118928(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r4,416(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x8211efa0
	ctx.lr = 0x8210FCB4;
	sub_8211EFA0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FCC0;
	sub_82118928(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x8211eee0
	ctx.lr = 0x8210FCCC;
	sub_8211EEE0(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FCD8;
	sub_82118928(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,492(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// bl 0x8211ee40
	ctx.lr = 0x8210FCE4;
	sub_8211EE40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FCF0;
	sub_82118928(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,496(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x8211ee40
	ctx.lr = 0x8210FCFC;
	sub_8211EE40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FD08;
	sub_82118928(ctx, base);
	// lwz r30,596(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r5,252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8211ee40
	ctx.lr = 0x8210FD18;
	sub_8211EE40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,248(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82118928
	ctx.lr = 0x8210FD24;
	sub_82118928(ctx, base);
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82149460
	ctx.lr = 0x8210FD58;
	sub_82149460(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,608(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// addi r3,r6,-2408
	ctx.r3.s64 = ctx.r6.s64 + -2408;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r5,-344
	ctx.r5.s64 = ctx.r5.s64 + -344;
	// addi r3,r1,2252
	ctx.r3.s64 = ctx.r1.s64 + 2252;
	// bl 0x8211f060
	ctx.lr = 0x8210FD80;
	sub_8211F060(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-28136
	ctx.r5.s64 = ctx.r11.s64 + -28136;
	// addi r3,r1,2560
	ctx.r3.s64 = ctx.r1.s64 + 2560;
	// addi r30,r10,-360
	ctx.r30.s64 = ctx.r10.s64 + -360;
	// bl 0x8211f0d0
	ctx.lr = 0x8210FDA0;
	sub_8211F0D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82118928
	ctx.lr = 0x8210FDAC;
	sub_82118928(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8211ee40
	ctx.lr = 0x8210FDB8;
	sub_8211EE40(ctx, base);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82118928
	ctx.lr = 0x8210FDC4;
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
	// addi r4,r5,-27376
	ctx.r4.s64 = ctx.r5.s64 + -27376;
	// stb r31,0(r7)
	REX_STORE_U8(ctx.r7.u32 + 0, ctx.r31.u8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82149668
	ctx.lr = 0x8210FDF8;
	sub_82149668(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// lwz r4,512(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 512);
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,-27808
	ctx.r7.s64 = ctx.r9.s64 + -27808;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r31,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r7,81(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82149898
	ctx.lr = 0x8210FE34;
	sub_82149898(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r4,r1,1348
	ctx.r4.s64 = ctx.r1.s64 + 1348;
	// lwz r5,196(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,1348(r1)
	REX_STORE_U32(ctx.r1.u32 + 1348, ctx.r11.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r31,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// bl 0x822009c8
	ctx.lr = 0x8210FE5C;
	sub_822009C8(ctx, base);
	// lwz r3,2824(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 2824);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210fe7c
	if (ctx.cr6.eq) goto loc_8210FE7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210FE7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210FE7C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,420(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,2260
	ctx.r3.s64 = ctx.r1.s64 + 2260;
	// addi r5,r9,-5912
	ctx.r5.s64 = ctx.r9.s64 + -5912;
	// stb r31,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// stb r31,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x8211f300
	ctx.lr = 0x8210FEA8;
	sub_8211F300(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r29,-32245
	ctx.r29.s64 = -2113208320;
	// lis r28,-32245
	ctx.r28.s64 = -2113208320;
	// lis r27,-32245
	ctx.r27.s64 = -2113208320;
	// lis r26,-32245
	ctx.r26.s64 = -2113208320;
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
	// addi r4,r7,-27356
	ctx.r4.s64 = ctx.r7.s64 + -27356;
	// addi r3,r1,3240
	ctx.r3.s64 = ctx.r1.s64 + 3240;
	// addi r19,r6,-27224
	ctx.r19.s64 = ctx.r6.s64 + -27224;
	// addi r18,r5,-27232
	ctx.r18.s64 = ctx.r5.s64 + -27232;
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

DEFINE_REX_FUNC(sub_8255DA60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60dc
	ctx.lr = 0x8255DA68;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,292(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8255dac0
	if (!ctx.cr6.gt) goto loc_8255DAC0;
	// lwz r27,276(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// subf r29,r3,r6
	ctx.r29.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8255DA9C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8255d748
	ctx.lr = 0x8255DAB4;
	sub_8255D748(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8255da9c
	if (!ctx.cr0.eq) goto loc_8255DA9C;
loc_8255DAC0:
	// lwz r30,268(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r27,284(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r25,260(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8255db04
	if (!ctx.cr6.gt) goto loc_8255DB04;
	// subf r28,r24,r23
	ctx.r28.u64 = ctx.r23.u64 - ctx.r24.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8255DAE0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bl 0x8255d748
	ctx.lr = 0x8255DAF8;
	sub_8255D748(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8255dae0
	if (!ctx.cr0.eq) goto loc_8255DAE0;
loc_8255DB04:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8255db38
	if (!ctx.cr6.gt) goto loc_8255DB38;
	// subf r29,r22,r21
	ctx.r29.u64 = ctx.r21.u64 - ctx.r22.u64;
loc_8255DB14:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = ctx.r29.u64 + ctx.r31.u64;
	// bl 0x8255d748
	ctx.lr = 0x8255DB2C;
	sub_8255D748(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bne 0x8255db14
	if (!ctx.cr0.eq) goto loc_8255DB14;
loc_8255DB38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d612c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8255EE50) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e0
	ctx.lr = 0x8255EE58;
	__savegprlr_22(ctx, base);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mulli r10,r10,34
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(34));
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r8)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r31,r9,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r26,r6,-4
	ctx.r26.s64 = ctx.r6.s64 + -4;
	// add r30,r9,r29
	ctx.r30.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lbz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r29,r11,r4
	ctx.r29.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// mulli r30,r31,25
	ctx.r30.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(25));
	// subf r31,r29,r28
	ctx.r31.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// stw r31,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// lbz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbzx r28,r11,r4
	ctx.r28.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r30,0(r4)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// rotlwi r27,r28,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r27
	ctx.r28.u64 = ctx.r27.u64 - ctx.r28.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// stw r31,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// lbz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbzx r30,r11,r4
	ctx.r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r27,r30,3
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// rotlwi r29,r31,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// subf r30,r30,r27
	ctx.r30.u64 = ctx.r27.u64 - ctx.r30.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r31,r28,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r28.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// stw r31,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// ble cr6,0x8255f008
	if (!ctx.cr6.gt) goto loc_8255F008;
	// addi r31,r26,-5
	ctx.r31.s64 = ctx.r26.s64 + -5;
	// rlwinm r30,r7,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r31,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r5,16
	ctx.r31.s64 = ctx.r5.s64 + 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r30,r30,r4
	ctx.r30.u64 = ctx.r30.u64 + ctx.r4.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8255EF68:
	// lbz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r24,0(r8)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r27,r27,1
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r27.u32, 1);
	// lbz r23,0(r9)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r22,r24,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r24.u32, 3);
	// lbz r25,0(r30)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// subf r27,r23,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r23.u64;
	// subf r24,r24,r22
	ctx.r24.u64 = ctx.r22.u64 - ctx.r24.u64;
	// rlwinm r23,r27,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 + ctx.r23.u64;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// srawi r27,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 5;
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lbz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r23,0(r8)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r25,0(r29)
	ctx.r25.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r24,0(r9)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r24,r24,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// subf r27,r27,r24
	ctx.r27.u64 = ctx.r24.u64 - ctx.r27.u64;
	// rotlwi r22,r23,3
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r23.u32, 3);
	// rlwinm r24,r27,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r23,r23,r22
	ctx.r23.u64 = ctx.r22.u64 - ctx.r23.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 + ctx.r24.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// srawi r27,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 5;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8255ef68
	if (!ctx.cr0.eq) goto loc_8255EF68;
loc_8255F008:
	// addi r11,r6,-6
	ctx.r11.s64 = ctx.r6.s64 + -6;
	// mullw r10,r26,r7
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r4
	ctx.r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lbzx r31,r9,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// rotlwi r28,r29,3
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// rotlwi r30,r31,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lbzx r27,r11,r4
	ctx.r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// subf r29,r29,r28
	ctx.r29.u64 = ctx.r28.u64 - ctx.r29.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r6,-8
	ctx.r29.s64 = ctx.r6.s64 + -8;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r27,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r27.u64;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mullw r29,r29,r7
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// add r27,r8,r5
	ctx.r27.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stwx r31,r30,r5
	REX_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r8,r6,-3
	ctx.r8.s64 = ctx.r6.s64 + -3;
	// lbzx r26,r11,r4
	ctx.r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lbzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rlwinm r25,r8,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r30,r29,r4
	ctx.r30.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r4.u32);
	// rotlwi r29,r31,3
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// rotlwi r8,r26,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// subf r29,r31,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r31.u64;
	// lbzx r31,r9,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// subf r8,r31,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r31.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r25,r5
	REX_STORE_U32(ctx.r25.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r8,r11,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// rotlwi r30,r31,3
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r31.u32, 3);
	// mulli r8,r8,25
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(25));
	// subf r31,r31,r30
	ctx.r31.u64 = ctx.r30.u64 - ctx.r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// srawi r8,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 5;
	// stwx r8,r28,r5
	REX_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r8.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// mulli r8,r11,34
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// stw r10,-4(r27)
	REX_STORE_U32(ctx.r27.u32 + -4, ctx.r10.u32);
	// ble cr6,0x8255f140
	if (!ctx.cr6.gt) goto loc_8255F140;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8255F110:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x8255f12c
	if (!ctx.cr6.gt) goto loc_8255F12C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x8255f12c
	if (ctx.cr6.lt) goto loc_8255F12C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8255F12C:
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bne 0x8255f110
	if (!ctx.cr0.eq) goto loc_8255F110;
loc_8255F140:
	// b 0x825d6130
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82574028) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60ec
	ctx.lr = 0x82574030;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825740e8
	if (!ctx.cr6.eq) goto loc_825740E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x4)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,32640
	ctx.r9.s64 = ctx.r11.s64 + 32640;
	// vspltisw v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x3)));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,96
	ctx.r4.s64 = 96;
	// vperm128 v11,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r11,112
	ctx.r11.s64 = 112;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r31,144
	ctx.r31.s64 = 144;
	// li r30,160
	ctx.r30.s64 = 160;
	// vaddshs v10,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// li r29,176
	ctx.r29.s64 = 176;
	// li r28,192
	ctx.r28.s64 = 192;
	// li r27,208
	ctx.r27.s64 = 208;
	// li r26,224
	ctx.r26.s64 = 224;
	// vsrah v9,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r25,240
	ctx.r25.s64 = 240;
	// stvlx v9,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r7
	ea = ctx.r3.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r5
	ea = ctx.r3.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r4
	ea = ctx.r3.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r31
	ea = ctx.r3.u32 + ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r30
	ea = ctx.r3.u32 + ctx.r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r29
	ea = ctx.r3.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r28
	ea = ctx.r3.u32 + ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r27
	ea = ctx.r3.u32 + ctx.r27.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r26
	ea = ctx.r3.u32 + ctx.r26.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx v9,r3,r25
	ea = ctx.r3.u32 + ctx.r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_825740E8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x825740fc
	if (!ctx.cr6.lt) goto loc_825740FC;
	// bl 0x825734c8
	ctx.lr = 0x825740F4;
	sub_825734C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
loc_825740FC:
	// bl 0x82573930
	ctx.lr = 0x82574100;
	sub_82573930(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d613c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82579AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x82579AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,84(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82579b64
	if (!ctx.cr6.lt) goto loc_82579B64;
loc_82579B0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82579b64
	if (ctx.cr6.eq) goto loc_82579B64;
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
	// bge 0x82579b54
	if (!ctx.cr0.lt) goto loc_82579B54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82579B54;
	sub_82562A68(ctx, base);
loc_82579B54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82579b0c
	if (ctx.cr6.gt) goto loc_82579B0C;
loc_82579B64:
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
	// bge 0x82579ba0
	if (!ctx.cr0.lt) goto loc_82579BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82562a68
	ctx.lr = 0x82579BA0;
	sub_82562A68(ctx, base);
loc_82579BA0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-31272
	ctx.r11.s64 = ctx.r11.s64 + -31272;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,22000(r28)
	REX_STORE_U32(ctx.r28.u32 + 22000, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r7,22004(r28)
	REX_STORE_U32(ctx.r28.u32 + 22004, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257E668) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f0
	ctx.lr = 0x8257E670;
	__savegprlr_26(ctx, base);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v9,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x4)));
	// vspltish v10,7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x7)));
	// bne cr6,0x8257e690
	if (!ctx.cr6.eq) goto loc_8257E690;
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
loc_8257E690:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x8257ed00
	if (ctx.cr6.gt) goto loc_8257ED00;
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// addi r12,r12,-6480
	ctx.r12.s64 = ctx.r12.s64 + -6480;
	// rlwinm r0,r7,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r7.u32) {
	case 0:
		goto loc_8257E6C0;
	case 1:
		goto loc_8257E7E4;
	case 2:
		goto loc_8257E9AC;
	case 3:
		goto loc_8257EB3C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8257E6C0:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v62,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// addi r27,r1,-96
	ctx.r27.s64 = ctx.r1.s64 + -96;
	// lvrx128 v59,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v5,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// addi r26,r1,-80
	ctx.r26.s64 = ctx.r1.s64 + -80;
	// vslh v4,v7,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v1,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v29,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvx128 v31,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v30,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v26,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// stvx128 v28,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v27,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v24,v0,v26
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v23,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvx128 v25,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v24,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v21,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v20,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// stvx128 v22,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v18,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v17,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// stvx128 v19,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v18,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v15,v0,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v16,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v14,v15,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v14,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257ed00
	goto loc_8257ED00;
loc_8257E7E4:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v45,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v44,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v43,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// lvlx128 v42,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v7,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// lvrx128 v41,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v40,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v4,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v2,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vadduhm v31,v11,v3
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v30,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v29,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v31,v6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v27,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vadduhm v24,v11,v30
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v30.u16)));
	// vmrghb v25,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v11,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v23,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vmrghb v21,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v28,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v11,v25
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v25.u16)));
	// vor v11,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v29.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghb v16,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v7,v11,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// stvx128 v17,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v23.u8));
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v12,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v14.u16)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// lvrx128 v62,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v2,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v1,v11,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// vadduhm v6,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v5,v7,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vmrghb v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsldoi v29,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v30,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v6,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vmrghb v28,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r1,-128
	ctx.r9.s64 = ctx.r1.s64 + -128;
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v24,v11,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v28.u16)));
	// vor128 v12,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v26.u8));
	// stvx128 v5,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v30,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v21,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// stvx128 v31,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v22,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v11,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// stvx128 v21,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v18,v0,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v12,v18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v14,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v16.u16)));
	// stvx128 v14,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257ed00
	goto loc_8257ED00;
loc_8257E9AC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v59,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v58,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v6,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v5,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// lvrx128 v53,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v3,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// lvlx128 v52,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v2,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v31,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v51,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v27,v4,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
	// vmrghb v26,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vadduhm v25,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v49,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v48,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vslh v22,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v21,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vadduhm v20,v26,v24
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vslh v19,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvrx128 v47,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v18,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v17,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vslh v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v15,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// stvx128 v22,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v45,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v17
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v44,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi v7,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v6,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vslh v5,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v16,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v2,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v1,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v6,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrghb v29,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v42,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vadduhm v28,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// lvlx128 v43,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-96
	ctx.r11.s64 = ctx.r1.s64 + -96;
	// vor128 v12,v43,v42
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// vslh v27,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v5,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v31,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v25,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v24,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v27,r0,r28
	ea = (ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v23,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v24,v23
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vslh v21,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8257ed00
	goto loc_8257ED00;
loc_8257EB3C:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx128 v41,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r7,r1,-192
	ctx.r7.s64 = ctx.r1.s64 + -192;
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// lvrx128 v40,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,-160
	ctx.r3.s64 = ctx.r1.s64 + -160;
	// vor128 v12,v41,v40
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// lvrx128 v39,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v38,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r30,r1,-144
	ctx.r30.s64 = ctx.r1.s64 + -144;
	// addi r29,r1,-128
	ctx.r29.s64 = ctx.r1.s64 + -128;
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v11,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vor128 v12,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// lvrx128 v37,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v36,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vsldoi v6,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v35,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v34,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v2,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v31,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v34,v35
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// lvrx128 v33,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v32,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v32,v33
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vadduhm v25,v5,v11
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v30.u8));
	// vmrghb v24,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// lvrx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v12,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vadduhm v20,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v21,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v19,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v24.u8));
	// vsldoi v18,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vadduhm v29,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvrx128 v61,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v17,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vslh v15,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v14,v27,v11
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v12,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v11,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v19.u8));
	// stvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v7,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vadduhm v4,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// lvrx128 v58,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v5,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// stvx128 v16,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// stvx128 v7,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v4,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v1,v17,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v2,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsldoi v31,v11,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vor128 v12,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vmrghb v30,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r1,-96
	ctx.r7.s64 = ctx.r1.s64 + -96;
	// addi r4,r1,-80
	ctx.r4.s64 = ctx.r1.s64 + -80;
	// vadduhm v29,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsldoi v28,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// stvx128 v2,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v57,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v27,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v56,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslh v26,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v12,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// stvx128 v29,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v25,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsldoi v23,v12,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 15));
	// vmrghb v22,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v12,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v25.u8));
	// vadduhm v21,v24,v26
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vmrghb v0,v0,v23
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v27,v12
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// stvx128 v21,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v22,v0
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v18,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v20.u16)));
	// vadduhm v15,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// stvx128 v18,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8257ED00:
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bgt cr6,0x8257ee48
	if (ctx.cr6.gt) goto loc_8257EE48;
	// lis r12,-32168
	ctx.r12.s64 = -2108162048;
	// addi r12,r12,-4832
	ctx.r12.s64 = ctx.r12.s64 + -4832;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_8257ED30;
	case 1:
		goto loc_8257ED6C;
	case 2:
		goto loc_8257EDB8;
	case 3:
		goto loc_8257EE00;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8257ED30:
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8257ED3C:
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vslh v13,v0,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vadduhm v12,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v11,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvewx128 v55,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x8257ed3c
	if (!ctx.cr0.eq) goto loc_8257ED3C;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_8257ED6C:
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8257ED7C:
	// lvx128 v0,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v54,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x8257ed7c
	if (!ctx.cr0.eq) goto loc_8257ED7C;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_8257EDB8:
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_8257EDC4:
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v8,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v7,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v6,v7,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvewx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x8257edc4
	if (!ctx.cr0.eq) goto loc_8257EDC4;
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
loc_8257EE00:
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8257EE10:
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v12,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v11,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vadduhm v7,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v6,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v5,v6,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvewx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bne 0x8257ee10
	if (!ctx.cr0.eq) goto loc_8257EE10;
loc_8257EE48:
	// b 0x825d6140
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_106) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_15) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_108) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_825D9040) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825d8f68
	ctx.lr = 0x825D9064;
	sub_825D8F68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x825d908c
	if (!ctx.cr0.eq) goto loc_825D908C;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825d908c
	if (ctx.cr6.eq) goto loc_825D908C;
	// bl 0x825d3a20
	ctx.lr = 0x825D907C;
	sub_825D3A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825d908c
	if (ctx.cr0.eq) goto loc_825D908C;
	// bl 0x825d3a20
	ctx.lr = 0x825D9088;
	sub_825D3A20(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_825D908C:
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

DEFINE_REX_FUNC(sub_825DB198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825DB1A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x825d6a68
	ctx.lr = 0x825DB1B0;
	sub_825D6A68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x825db1c0
	if (!ctx.cr0.eq) goto loc_825DB1C0;
loc_825DB1B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825db380
	goto loc_825DB380;
loc_825DB1C0:
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r9,-7276(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -7276);
loc_825DB1D0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825db1f0
	if (ctx.cr6.eq) goto loc_825DB1F0;
	// mulli r8,r9,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825db1d0
	if (ctx.cr6.lt) goto loc_825DB1D0;
loc_825DB1F0:
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825db214
	if (!ctx.cr6.lt) goto loc_825DB214;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825db218
	if (ctx.cr6.eq) goto loc_825DB218;
loc_825DB214:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_825DB218:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825db1b8
	if (ctx.cr6.eq) goto loc_825DB1B8;
	// lwz r28,8(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825db1b8
	if (ctx.cr6.eq) goto loc_825DB1B8;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bne cr6,0x825db240
	if (!ctx.cr6.eq) goto loc_825DB240;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// b 0x825db380
	goto loc_825DB380;
loc_825DB240:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// beq cr6,0x825db37c
	if (ctx.cr6.eq) goto loc_825DB37C;
	// lwz r27,96(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r29,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x825db36c
	if (!ctx.cr6.eq) goto loc_825DB36C;
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// lis r7,-32150
	ctx.r7.s64 = -2106982400;
	// lwz r10,-7284(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + -7284);
	// lwz r11,-7288(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + -7288);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825db2a4
	if (!ctx.cr6.lt) goto loc_825DB2A4;
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
loc_825DB27C:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r9,-7284(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -7284);
	// lwz r8,-7288(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -7288);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825db27c
	if (ctx.cr6.lt) goto loc_825DB27C;
loc_825DB2A4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,100(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db2c4
	if (!ctx.cr6.eq) goto loc_825DB2C4;
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB2C4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db2dc
	if (!ctx.cr6.eq) goto loc_825DB2DC;
	// li r11,129
	ctx.r11.s64 = 129;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB2DC:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db2f4
	if (!ctx.cr6.eq) goto loc_825DB2F4;
	// li r11,132
	ctx.r11.s64 = 132;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB2F4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db30c
	if (!ctx.cr6.eq) goto loc_825DB30C;
	// li r11,133
	ctx.r11.s64 = 133;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB30C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db324
	if (!ctx.cr6.eq) goto loc_825DB324;
	// li r11,130
	ctx.r11.s64 = 130;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB324:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db33c
	if (!ctx.cr6.eq) goto loc_825DB33C;
	// li r11,134
	ctx.r11.s64 = 134;
	// b 0x825db350
	goto loc_825DB350;
loc_825DB33C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825db354
	if (!ctx.cr6.eq) goto loc_825DB354;
	// li r11,138
	ctx.r11.s64 = 138;
loc_825DB350:
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_825DB354:
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x825DB364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// b 0x825db378
	goto loc_825DB378;
loc_825DB36C:
	// stw r4,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x825DB378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825DB378:
	// stw r27,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r27.u32);
loc_825DB37C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825DB380:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825E4920) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,-88(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + -88);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x825df0d0
	ctx.lr = 0x825E4938;
	sub_825DF0D0(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E6230) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,65001
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65001, ctx.xer);
	// bne cr6,0x825e6268
	if (!ctx.cr6.eq) goto loc_825E6268;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825e6ae0
	ctx.lr = 0x825E6264;
	sub_825E6AE0(ctx, base);
	// b 0x825e62f0
	goto loc_825E62F0;
loc_825E6268:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x825e6298
	if (!ctx.cr6.eq) goto loc_825E6298;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825E6274:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x825e6274
	if (!ctx.cr6.eq) goto loc_825E6274;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// b 0x825e629c
	goto loc_825E629C;
loc_825E6298:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_825E629C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825e62ac
	if (!ctx.cr6.eq) goto loc_825E62AC;
loc_825E62A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825e62f0
	goto loc_825E62F0;
loc_825E62AC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x825e62e4
	if (ctx.cr6.lt) goto loc_825E62E4;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x825e62e4
	if (ctx.cr6.lt) goto loc_825E62E4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8261c804
	ctx.lr = 0x825E62D4;
	__imp__RtlMultiByteToUnicodeN(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x825e62a4
	if (!ctx.cr0.lt) goto loc_825E62A4;
	// bl 0x8261c364
	ctx.lr = 0x825E62E0;
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x825e62e8
	goto loc_825E62E8;
loc_825E62E4:
	// li r3,122
	ctx.r3.s64 = 122;
loc_825E62E8:
	// bl 0x8226b3b8
	ctx.lr = 0x825E62EC;
	sub_8226B3B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E62F0:
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

DEFINE_REX_FUNC(sub_825EB778) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beq cr6,0x825eb7a4
	if (ctx.cr6.eq) goto loc_825EB7A4;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x825eb7a4
	if (!ctx.cr6.eq) goto loc_825EB7A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825eb7b0
	if (!ctx.cr6.eq) goto loc_825EB7B0;
loc_825EB7A4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_825EB7B0:
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EC5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60e8
	ctx.lr = 0x825EC5D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825ec674
	if (ctx.cr6.eq) goto loc_825EC674;
	// lwz r25,20(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r27,4
	ctx.r27.s64 = 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x825ec608
	if (ctx.cr6.gt) goto loc_825EC608;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_825EC608:
	// rlwinm r5,r28,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825d6870
	ctx.lr = 0x825EC618;
	sub_825D6870(ctx, base);
loc_825EC618:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825ec650
	if (ctx.cr6.eq) goto loc_825EC650;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_825EC628:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ebb88
	ctx.lr = 0x825EC634;
	sub_825EBB88(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x825ec674
	if (ctx.cr0.lt) goto loc_825EC674;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x825ec628
	if (ctx.cr6.lt) goto loc_825EC628;
loc_825EC650:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x825ec668
	if (!ctx.cr6.lt) goto loc_825EC668;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
loc_825EC65C:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ec65c
	if (!ctx.cr0.eq) goto loc_825EC65C;
loc_825EC668:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x825ec618
	if (!ctx.cr0.eq) goto loc_825EC618;
loc_825EC674:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x825d6138
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825EEC68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825EEC70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,64(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 64);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825ea720
	ctx.lr = 0x825EEC90;
	sub_825EA720(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// stw r3,20(r27)
	REX_STORE_U32(ctx.r27.u32 + 20, ctx.r3.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825eedc0
	if (!ctx.cr6.eq) goto loc_825EEDC0;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822dc2d0
	ctx.lr = 0x825EECAC;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825eecc0
	if (ctx.cr0.eq) goto loc_825EECC0;
	// bl 0x822def30
	ctx.lr = 0x825EECB8;
	sub_822DEF30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x825eecc4
	goto loc_825EECC4;
loc_825EECC0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825EECC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825eede8
	if (ctx.cr6.eq) goto loc_825EEDE8;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EECE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825eede8
	if (ctx.cr0.eq) goto loc_825EEDE8;
	// lwz r10,56(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,48(r31)
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// std r11,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// ld r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// beq cr6,0x825eed90
	if (ctx.cr6.eq) goto loc_825EED90;
loc_825EED28:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822dc2d0
	ctx.lr = 0x825EED30;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825eed44
	if (ctx.cr0.eq) goto loc_825EED44;
	// bl 0x822dc470
	ctx.lr = 0x825EED3C;
	sub_822DC470(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825eed48
	goto loc_825EED48;
loc_825EED44:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825EED48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825eede8
	if (ctx.cr6.eq) goto loc_825EEDE8;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822dc2d0
	ctx.lr = 0x825EED58;
	sub_822DC2D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825eed68
	if (ctx.cr0.eq) goto loc_825EED68;
	// bl 0x822df2d0
	ctx.lr = 0x825EED64;
	sub_822DF2D0(ctx, base);
	// b 0x825eed6c
	goto loc_825EED6C;
loc_825EED68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EED6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825eede8
	if (ctx.cr6.eq) goto loc_825EEDE8;
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// blt cr6,0x825eed28
	if (ctx.cr6.lt) goto loc_825EED28;
loc_825EED90:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// lwz r10,44(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r4,48(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x825ea930
	ctx.lr = 0x825EEDB0;
	sub_825EA930(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x825eeddc
	if (ctx.cr0.lt) goto loc_825EEDDC;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// stw r31,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
loc_825EEDC0:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x825eee24
	if (ctx.cr6.eq) goto loc_825EEE24;
loc_825EEDD4:
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r6,r6,16389
	ctx.r6.u64 = ctx.r6.u64 | 16389;
loc_825EEDDC:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_825EEDE8:
	// lis r6,-32761
	ctx.r6.s64 = -2147024896;
	// ori r6,r6,14
	ctx.r6.u64 = ctx.r6.u64 | 14;
	// b 0x825eeddc
	goto loc_825EEDDC;
loc_825EEDF4:
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eee34
	if (ctx.cr6.eq) goto loc_825EEE34;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x825eee34
	if (!ctx.cr6.eq) goto loc_825EEE34;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eee34
	if (ctx.cr6.eq) goto loc_825EEE34;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// bne cr6,0x825eee34
	if (!ctx.cr6.eq) goto loc_825EEE34;
loc_825EEE24:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825eedf4
	if (ctx.cr6.eq) goto loc_825EEDF4;
loc_825EEE34:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825eedd4
	if (!ctx.cr6.eq) goto loc_825EEDD4;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eedd4
	if (ctx.cr6.eq) goto loc_825EEDD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825eedd4
	if (!ctx.cr6.eq) goto loc_825EEDD4;
	// stw r11,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// b 0x825eeddc
	goto loc_825EEDDC;
}

DEFINE_REX_FUNC(sub_825FA058) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x825fa088
	if (ctx.cr6.eq) goto loc_825FA088;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// b 0x825fa094
	goto loc_825FA094;
loc_825FA088:
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r9,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
loc_825FA094:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825fa0b4
	if (ctx.cr6.eq) goto loc_825FA0B4;
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x825fa0b4
	if (!ctx.cr6.eq) goto loc_825FA0B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825FA0B4:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825fa0d0
	if (ctx.cr6.eq) goto loc_825FA0D0;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_825FA0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FB1F8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-12456
	ctx.r10.s64 = ctx.r11.s64 + -12456;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825fb240
	if (ctx.cr6.eq) goto loc_825FB240;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,30072
	ctx.r3.s64 = ctx.r11.s64 + 30072;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x825f7df0
	ctx.lr = 0x825FB238;
	sub_825F7DF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_825FB240:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825FCAA8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FD320) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x825FD328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,30164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 30164);
	// bl 0x825fcf10
	ctx.lr = 0x825FD340;
	sub_825FCF10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825fd404
	if (ctx.cr6.eq) goto loc_825FD404;
	// bl 0x8261c834
	ctx.lr = 0x825FD350;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,30172
	ctx.r31.s64 = ctx.r11.s64 + 30172;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fd378
	if (ctx.cr6.eq) goto loc_825FD378;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825fd38c
	if (ctx.cr6.eq) goto loc_825FD38C;
loc_825FD378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c4e4
	ctx.lr = 0x825FD380;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stb r29,12(r31)
	REX_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
loc_825FD38C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r9,40(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825fd404
	if (ctx.cr6.eq) goto loc_825FD404;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825fd404
	if (!ctx.cr6.eq) goto loc_825FD404;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x825fd404
	if (!ctx.cr0.eq) goto loc_825FD404;
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
	ctx.lr = 0x825FD3FC;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261c844
	ctx.lr = 0x825FD404;
	__imp__KfLowerIrql(ctx, base);
loc_825FD404:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82603120) {
	REX_FUNC_PROLOGUE();
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826038C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r7,27,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1FFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826038e8
	if (ctx.cr6.eq) goto loc_826038E8;
loc_826038D4:
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// dcbt r9,r3
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826038d4
	if (ctx.cr6.lt) goto loc_826038D4;
loc_826038E8:
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r7,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// vaddfp128 v62,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v0,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vaddfp128 v61,v62,v63
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v62,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v11,v0,v62
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v13,v0,v61
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// beq cr6,0x826039a4
	if (ctx.cr6.eq) goto loc_826039A4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r31,16
	ctx.r31.s64 = 16;
	// li r3,-32
	ctx.r3.s64 = -32;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82603938:
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r10,-32
	ctx.r7.s64 = ctx.r10.s64 + -32;
	// lvx128 v9,r11,r31
	ea = (ctx.r11.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v6,v9,v13,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvx128 v5,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lvx128 v4,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v13,v63
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v3,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v2,v7,v0,v4
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v31,v5,v12,v3
	simde_mm_store_ps(ctx.v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v30,v8,v11,v1
	simde_mm_store_ps(ctx.v30.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vaddfp128 v0,v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v11,v11,v63
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v6,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v2,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82603938
	if (!ctx.cr0.eq) goto loc_82603938;
loc_826039A4:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82611710) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60c8
	ctx.lr = 0x82611718;
	__savegprlr_16(ctx, base);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lbz r4,13(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r3,24
	ctx.r5.s64 = ctx.r3.s64 + 24;
	// stw r9,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r9.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// stw r8,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r8.u32);
	// stw r5,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r5.u32);
	// addi r11,r3,13
	ctx.r11.s64 = ctx.r3.s64 + 13;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// lwz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r4,r4,r6
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,0(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r9,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r9.u32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r7.u32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r6,r30
	ctx.r4.u64 = ctx.r30.u64 - ctx.r6.u64;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r31.u64;
	// stw r4,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r6,r3,52
	ctx.r6.s64 = ctx.r3.s64 + 52;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// dcbt r0,r11
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r8,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r8.u32);
	// std r7,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r7.u64);
	// lfd f13,-152(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r4,r1,-192
	ctx.r4.s64 = ctx.r1.s64 + -192;
	// lfs f11,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// fmul f10,f11,f12
	ctx.f10.f64 = ctx.f11.f64 * ctx.f12.f64;
	// lvlx128 v61,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,4
	ctx.r9.s64 = 4;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// vcsxwfp128 v62,v63,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// fmul f9,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = ctx.f0.f64 * ctx.f12.f64;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-152
	ctx.r4.s64 = ctx.r1.s64 + -152;
	// vsubfp128 v59,v61,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v60.f32)));
	// li r24,0
	ctx.r24.s64 = 0;
	// vspltw128 v63,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// li r25,5120
	ctx.r25.s64 = 5120;
	// li r26,4096
	ctx.r26.s64 = 4096;
	// lfd f0,9536(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 9536);
	// li r27,3072
	ctx.r27.s64 = 3072;
	// fdiv f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 / ctx.f12.f64;
	// li r28,2048
	ctx.r28.s64 = 2048;
	// fctidz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f8.u64);
	// ld r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// li r29,1024
	ctx.r29.s64 = 1024;
	// std r8,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r8.u64);
	// lvlx128 v55,r9,r31
	temp.u32 = ctx.r9.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrefp128 v58,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v62.f32)));
	// fctidz f7,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f7.u64);
	// ld r30,-152(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// std r30,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r30.u64);
	// li r31,2
	ctx.r31.s64 = 2;
	// vmulfp128 v57,v59,v58
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v58.f32)));
	// lvlx128 v56,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r24,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r24.u32);
	// vspltw128 v13,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// vspltw128 v0,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// vspltw128 v62,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// bge cr6,0x8261197c
	if (!ctx.cr6.lt) goto loc_8261197C;
	// li r7,8
	ctx.r7.s64 = 8;
loc_8261185C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8261197c
	if (!ctx.cr6.gt) goto loc_8261197C;
	// vspltisw128 v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_set1_epi32(int(0x0)));
	// li r4,10
	ctx.r4.s64 = 10;
	// vspltisb v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x1)));
	// li r24,20
	ctx.r24.s64 = 20;
	// li r23,16
	ctx.r23.s64 = 16;
	// vadduwm v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// li r22,12
	ctx.r22.s64 = 12;
	// vsubfp128 v53,v54,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v63.f32)));
	// li r21,6
	ctx.r21.s64 = 6;
	// vsr v10,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvlx128 v52,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v51,v52,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v52.s16), simde_mm_load_si128((simde__m128i*)ctx.v52.s16))));
	// lvlx128 v50,r6,r24
	temp.u32 = ctx.r6.u32 + ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v49,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// vor v0,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// vcuxwfp128 v48,v10,31
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// vcsxwfp128 v47,v51,15
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vsldoi128 v46,v63,v53,4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 12));
	// vmulfp128 v45,v48,v46
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v46.f32)));
	// vrlimi128 v49,v47,8,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v47.f32), 228), 8));
	// vsldoi128 v44,v45,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// vaddfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmsum3fp128 v43,v49,v44
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v43,r10,r25
	ea = (ctx.r10.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v42,r6,r23
	temp.u32 = ctx.r6.u32 + ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v41,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v40,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v39,v40,15
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v38,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v42.u32), 0xFF));
	// vrlimi128 v38,v39,8,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v39.f32), 228), 8));
	// vmsum3fp128 v37,v38,v44
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v37,r10,r26
	ea = (ctx.r10.u32 + ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v36,r6,r22
	temp.u32 = ctx.r6.u32 + ctx.r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v35,r11,r21
	temp.u32 = ctx.r11.u32 + ctx.r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v34,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16))));
	// vcsxwfp128 v33,v34,15
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v32,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.u32), 0xFF));
	// vrlimi128 v32,v33,8,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v33.f32), 228), 8));
	// vmsum3fp128 v61,v32,v44
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v61,r10,r27
	ea = (ctx.r10.u32 + ctx.r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v60,r6,r7
	temp.u32 = ctx.r6.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v58,v59,v96
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v59.s16), simde_mm_load_si128((simde__m128i*)ctx.v59.s16))));
	// vcsxwfp128 v57,v58,15
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v56,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vrlimi128 v56,v57,8,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 8));
	// vmsum3fp128 v55,v56,v44
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v55,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v54,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v52,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vcsxwfp128 v51,v52,15
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v50,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// vrlimi128 v50,v51,8,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v51.f32), 228), 8));
	// vmsum3fp128 v49,v50,v44
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v49,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v48,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v46,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v47.s16))));
	// vcsxwfp128 v45,v46,15
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v43,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// vrlimi128 v43,v45,8,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v45.f32), 228), 8));
	// vmsum3fp128 v42,v43,v44
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v44.f32), 0xEF));
	// stvewx128 v42,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r24,-192(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x8261185c
	if (ctx.cr6.lt) goto loc_8261185C;
loc_8261197C:
	// lwz r9,-184(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// sradi r7,r8,63
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s64 >> 63;
	// sradi r4,r8,32
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFFFFFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s64 >> 32;
	// addi r22,r9,-1
	ctx.r22.s64 = ctx.r9.s64 + -1;
	// subf r9,r7,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r7.u64;
	// extsw r23,r22
	ctx.r23.s64 = ctx.r22.s32;
	// cmpd cr6,r9,r23
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r23.s64, ctx.xer);
	// bge cr6,0x82611b78
	if (!ctx.cr6.lt) goto loc_82611B78;
loc_8261199C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82611c84
	if (ctx.cr6.eq) goto loc_82611C84;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// vspltisw128 v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_set1_epi32(int(0x0)));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_set1_epi8(char(0x1)));
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// vadduwm v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r4,r7,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vsubfp128 v40,v41,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v40.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32)));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vsr v10,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vor v0,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// addi r4,r9,5
	ctx.r4.s64 = ctx.r9.s64 + 5;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vcuxwfp128 v39,v10,31
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r21,r7,5
	ctx.r21.s64 = ctx.r7.s64 + 5;
	// addi r20,r7,4
	ctx.r20.s64 = ctx.r7.s64 + 4;
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v38,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// vupkhsb128 v37,v38,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v38.s16), simde_mm_load_si128((simde__m128i*)ctx.v38.s16))));
	// addi r19,r9,3
	ctx.r19.s64 = ctx.r9.s64 + 3;
	// vsldoi128 v36,v63,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// rlwinm r18,r4,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvlx128 v35,r21,r11
	temp.u32 = ctx.r21.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r21,r19,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// vupkhsb128 v34,v35,v96
	simde_mm_store_si128((simde__m128i*)ctx.v34.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v35.s16), simde_mm_load_si128((simde__m128i*)ctx.v35.s16))));
	// addi r4,r7,3
	ctx.r4.s64 = ctx.r7.s64 + 3;
	// vcsxwfp128 v33,v37,15
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// addi r19,r9,2
	ctx.r19.s64 = ctx.r9.s64 + 2;
	// rlwinm r17,r4,1,0,30
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vmulfp128 v32,v39,v36
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v36.f32)));
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// vcsxwfp128 v61,v34,15
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// rlwinm r19,r19,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r4,1,0,30
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vspltw128 v60,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// vsldoi128 v59,v32,v63,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 8));
	// vaddfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrlimi128 v60,v61,8,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 228), 8));
	// vmsum3fp128 v58,v60,v59
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v58,r10,r25
	ea = (ctx.r10.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v57,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v55,v56,v96
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v56.s16), simde_mm_load_si128((simde__m128i*)ctx.v56.s16))));
	// vupkhsb128 v54,v57,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v57.s16), simde_mm_load_si128((simde__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v53,v55,15
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v52,v54,15
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v51,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vrlimi128 v51,v52,8,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 228), 8));
	// vmsum3fp128 v50,v51,v59
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v50,r10,r26
	ea = (ctx.r10.u32 + ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v49,r21,r11
	temp.u32 = ctx.r21.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v48,v49,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v49.s16), simde_mm_load_si128((simde__m128i*)ctx.v49.s16))));
	// lvlx128 v47,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v45,v48,15
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v46,v47,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v47.s16), simde_mm_load_si128((simde__m128i*)ctx.v47.s16))));
	// vcsxwfp128 v44,v46,15
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v43,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// vrlimi128 v43,v44,8,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 8));
	// vmsum3fp128 v42,v43,v59
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v42,r10,r27
	ea = (ctx.r10.u32 + ctx.r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v39,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v41,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v40,v41,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v41.s16), simde_mm_load_si128((simde__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v38,v40,15
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v37,v39,v96
	simde_mm_store_si128((simde__m128i*)ctx.v37.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v39.s16), simde_mm_load_si128((simde__m128i*)ctx.v39.s16))));
	// vcsxwfp128 v36,v37,15
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v35,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), 0xFF));
	// vrlimi128 v35,v36,8,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 8));
	// vmsum3fp128 v34,v35,v59
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v34,r10,r28
	ea = (ctx.r10.u32 + ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v33,r7,r31
	temp.u32 = ctx.r7.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v32,v33,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v33.s16), simde_mm_load_si128((simde__m128i*)ctx.v33.s16))));
	// lvlx128 v61,r9,r31
	temp.u32 = ctx.r9.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v58,v32,15
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vupkhsb128 v60,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16))));
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// vcsxwfp128 v57,v60,15
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v60.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw128 v56,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vrlimi128 v56,v57,8,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 8));
	// vmsum3fp128 v55,v56,v59
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v55,r10,r29
	ea = (ctx.r10.u32 + ctx.r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx128 v54,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// sradi r9,r8,32
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s64 >> 32;
	// lvlx128 v53,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsb128 v52,v53,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v53.s16), simde_mm_load_si128((simde__m128i*)ctx.v53.s16))));
	// vupkhsb128 v51,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v50,v52,15
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vcsxwfp128 v49,v51,15
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// xor r4,r7,r24
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r24.u64;
	// vspltw128 v48,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// rlwinm r4,r4,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// vrlimi128 v48,v49,8,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v49.f32), 228), 8));
	// vmsum3fp128 v47,v48,v59
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v59.f32), 0xEF));
	// stvewx128 v47,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x82611b6c
	if (ctx.cr6.eq) goto loc_82611B6C;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r7
loc_82611B6C:
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpd cr6,r9,r23
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r23.s64, ctx.xer);
	// blt cr6,0x8261199c
	if (ctx.cr6.lt) goto loc_8261199C;
loc_82611B78:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82611c84
	if (ctx.cr6.eq) goto loc_82611C84;
	// cmpd cr6,r9,r23
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r23.s64, ctx.xer);
	// bne cr6,0x82611c68
	if (!ctx.cr6.eq) goto loc_82611C68;
	// rlwinm r7,r22,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// add r4,r22,r7
	ctx.r4.u64 = ctx.r22.u64 + ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f0,9616(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 9616);
	ctx.f0.f64 = double(temp.f32);
	// lhz r5,10(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r5.u64);
	// lfd f12,-152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,20(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lhz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r4,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r4.u64);
	// lfd f8,-152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,16(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lhz r5,6(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r5.u64);
	// lfd f4,-152(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,12(r6)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lhz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r4,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r4.u64);
	// lfd f12,-152(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhz r5,2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r5.u64);
	// lfd f8,-152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// std r5,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r5.u64);
	// lfd f4,-152(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,0(r6)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82611c84
	goto loc_82611C84;
loc_82611C68:
	// lwz r7,-184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// cmpd cr6,r9,r7
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, ctx.xer);
	// ble cr6,0x82611c84
	if (!ctx.cr6.gt) goto loc_82611C84;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rldicr r7,r7,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_82611C84:
	// rldicr r6,r9,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r5,-176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r4,-172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// subf r6,r6,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r6.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// std r6,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stvewx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lbz r6,13(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// lfd f0,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// rotlwi r7,r6,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r9,r3,13
	ctx.r9.s64 = ctx.r3.s64 + 13;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// divwu r11,r8,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r8.u32 / ctx.r7.u32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blt cr6,0x82611cf4
	if (ctx.cr6.lt) goto loc_82611CF4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82611CF4:
	// lwz r9,-168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r8,-164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r7,-160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// subf r5,r6,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82611d28
	if (!ctx.cr6.lt) goto loc_82611D28;
	// lwz r10,-180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
loc_82611D28:
	// lwz r11,-180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x825d6118
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826453C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f8
	ctx.lr = 0x826453C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,996(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r8,4
	ctx.r8.s64 = 4;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// slw r29,r8,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r28,r7,r9
	ctx.r28.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// subfic r10,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r5.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8263a4e8
	ctx.lr = 0x82645414;
	sub_8263A4E8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x82641d48
	ctx.lr = 0x82645438;
	sub_82641D48(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x825d6148
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82646038) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1136(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1136);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x8263dba0
	ctx.lr = 0x8264607C;
	sub_8263DBA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82647DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x825d60f4
	ctx.lr = 0x82647DC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1152(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1152);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x6)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r31,1164(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 1164);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r28,260(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v12,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_set1_epi16(short(0xD0C))));
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bl 0x82637a70
	ctx.lr = 0x82647E14;
	sub_82637A70(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// vspltish v11,8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v10,-1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & ctx.r27.u64;
	// vspltish v6,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v2,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// vspltish v5,5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// vspltish v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x0)));
	// bne cr6,0x82647f10
	if (!ctx.cr6.eq) goto loc_82647F10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82648008
	if (!ctx.cr6.gt) goto loc_82648008;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_82647E70:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
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
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vsldoi128 v4,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsubshs v3,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// lvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v12,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v12,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v29,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vadduhm v25,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v31.u16)));
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
	// vadduhm v17,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v16,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v18.u16)));
	// vsrah v15,v16,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v15.s16)));
	// vor v8,v8,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82647e70
	if (!ctx.cr0.eq) goto loc_82647E70;
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
loc_82647F10:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82648008
	if (!ctx.cr6.gt) goto loc_82648008;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_82647F24:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v0,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v10,v12,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vslh v31,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v4,v12,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vsldoi128 v3,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi v28,v12,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vslh v27,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v26,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vslh v25,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vslh v22,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v27,v29
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v29.u16)));
	// vadduhm v18,v25,v10
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v17,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v23,v24
	simde_mm_store_si128((simde__m128i*)ctx.v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v24.u16)));
	// vadduhm v14,v22,v9
	simde_mm_store_si128((simde__m128i*)ctx.v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v21,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v3,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v19.u16)));
	// vadduhm v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v17.u16)));
	// vslh v10,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v21.u16)));
	// vslh v9,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v15.u16)));
	// vsubshs v28,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v28.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v31.s16)));
	// vsubshs v27,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vsubshs v26,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v26.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vadduhm v25,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v24,v29,v1
	simde_mm_store_si128((simde__m128i*)ctx.v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v23,v28,v27
	simde_mm_store_si128((simde__m128i*)ctx.v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v27.u16)));
	// vadduhm v22,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v26.u16)));
	// vadduhm v21,v25,v0
	simde_mm_store_si128((simde__m128i*)ctx.v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v20,v24,v0
	simde_mm_store_si128((simde__m128i*)ctx.v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// lvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v19,v21,v23
	simde_mm_store_si128((simde__m128i*)ctx.v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v23.u16)));
	// vadduhm v18,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v22.u16)));
	// vsrah v17,v19,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v8,v17
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8)));
	// vpkshus128 v59,v17,v16
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v17.s16)));
	// vor128 v8,v60,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne 0x82647f24
	if (!ctx.cr0.eq) goto loc_82647F24;
loc_82648008:
	// vand v0,v8,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x825d6144
	__restgprlr_27(ctx, base);
	return;
}

