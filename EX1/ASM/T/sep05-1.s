	.file	"sep05-1.c"
	.option nopic
	.attribute arch, "rv64i2p1_m2p0_a2p1_f2p2_d2p2_zicsr2p0_zifencei2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.file 0 "/home/grace/gitlib/rvemu/data/T_cov" "./sep05-1.c"
	.globl	assert_ret1
	.section	.sdata,"aw"
	.align	2
	.type	assert_ret1, @object
	.size	assert_ret1, 4
assert_ret1:
	.word	1
	.text
	.align	2
	.globl	reach_error
	.type	reach_error, @function
reach_error:
.LFB0:
	.file 1 "./sep05-1.c"
	.loc 1 5 20
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sd	s0,8(sp)
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	.loc 1 6 23 discriminator 1
	lui	a5,%hi(assert_ret1)
	sw	zero,%lo(assert_ret1)(a5)
	.loc 1 7 1
	nop
	ld	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	reach_error, .-reach_error
	.align	2
	.globl	sep
	.type	sep, @function
sep:
.LFB1:
	.loc 1 11 1
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sd	s0,40(sp)
	.cfi_offset 8, -8
	addi	s0,sp,48
	.cfi_def_cfa 8, 0
	sd	a0,-40(s0)
	.loc 1 12 13
	sd	zero,-24(s0)
.LBB2:
	.loc 1 13 11
	sw	zero,-28(s0)
	.loc 1 13 3
	j	.L3
.L6:
	.loc 1 15 9
	lw	a5,-28(s0)
	slli	a5,a5,2
	ld	a4,-40(s0)
	add	a5,a4,a5
	lw	a5,0(a5)
	.loc 1 15 14
	sext.w	a5,a5
	andi	a5,a5,1
	sext.w	a5,a5
	.loc 1 15 7
	bne	a5,zero,.L4
	.loc 1 16 10
	ld	a5,-24(s0)
	addi	a5,a5,1
	sd	a5,-24(s0)
	j	.L5
.L4:
	.loc 1 18 10
	ld	a5,-24(s0)
	addi	a5,a5,-1
	sd	a5,-24(s0)
.L5:
	.loc 1 13 20 discriminator 2
	lw	a5,-28(s0)
	addiw	a5,a5,1
	sw	a5,-28(s0)
.L3:
	.loc 1 13 16 discriminator 1
	lw	a5,-28(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L6
.LBE2:
	.loc 1 20 12
	ld	a5,-24(s0)
	sext.w	a5,a5
	.loc 1 21 1
	mv	a0,a5
	ld	s0,40(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 48
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	sep, .-sep
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 25 1
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	sd	ra,56(sp)
	sd	s0,48(sp)
	.cfi_offset 1, -8
	.cfi_offset 8, -16
	addi	s0,sp,64
	.cfi_def_cfa 8, 0
.LBB3:
	.loc 1 32 12
	sw	zero,-20(s0)
	.loc 1 32 3
	j	.L9
.L10:
	.loc 1 32 27 discriminator 3
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L9:
	.loc 1 32 21 discriminator 1
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,4
	ble	a4,a5,.L10
.LBE3:
	.loc 1 36 9
	addi	a5,s0,-64
	mv	a0,a5
	call	sep
	mv	a5,a0
	sw	a5,-28(s0)
	.loc 1 38 7
	lw	a5,-64(s0)
	sw	a5,-32(s0)
	.loc 1 38 21
	lw	a5,-60(s0)
	.loc 1 38 18
	sw	a5,-64(s0)
	.loc 1 38 31
	lw	a5,-32(s0)
	sw	a5,-60(s0)
	.loc 1 39 10
	addi	a5,s0,-64
	mv	a0,a5
	call	sep
	mv	a5,a0
	sw	a5,-36(s0)
	.loc 1 40 7
	lw	a5,-64(s0)
	sw	a5,-32(s0)
.LBB4:
	.loc 1 41 11
	sw	zero,-24(s0)
	.loc 1 41 3
	j	.L11
.L12:
	.loc 1 42 16
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sext.w	a5,a5
	.loc 1 42 14
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a4,-48(a5)
	.loc 1 42 11
	lw	a5,-24(s0)
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	sw	a4,-48(a5)
	.loc 1 41 27 discriminator 3
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L11:
	.loc 1 41 19 discriminator 1
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,3
	ble	a4,a5,.L12
.LBE4:
	.loc 1 44 11
	lw	a5,-32(s0)
	sw	a5,-48(s0)
	.loc 1 45 10
	addi	a5,s0,-64
	mv	a0,a5
	call	sep
	mv	a5,a0
	sw	a5,-40(s0)
	.loc 1 47 5
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-36(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	bne	a4,a5,.L13
	.loc 1 47 18 discriminator 1
	lw	a5,-28(s0)
	mv	a4,a5
	lw	a5,-40(s0)
	sext.w	a4,a4
	sext.w	a5,a5
	beq	a4,a5,.L14
.L13:
	.loc 1 48 6
	call	reach_error
.L14:
	.loc 1 50 10
	li	a5,1
	.loc 1 51 1
	mv	a0,a5
	ld	ra,56(sp)
	.cfi_restore 1
	ld	s0,48(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 64
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x184
	.2byte	0x5
	.byte	0x1
	.byte	0x8
	.4byte	.Ldebug_abbrev0
	.uleb128 0x5
	.4byte	.LASF7
	.byte	0x1d
	.4byte	.LASF0
	.4byte	.LASF1
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x6
	.4byte	.LASF8
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.4byte	0x44
	.uleb128 0x9
	.byte	0x3
	.8byte	assert_ret1
	.uleb128 0x7
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x8
	.4byte	.LASF9
	.byte	0x1
	.byte	0x18
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB2
	.8byte	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xef
	.uleb128 0x1
	.string	"x"
	.byte	0x1a
	.byte	0x7
	.4byte	0xef
	.uleb128 0x2
	.byte	0x91
	.sleb128 -64
	.uleb128 0x2
	.4byte	.LASF2
	.byte	0x1b
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x1
	.string	"ret"
	.byte	0x1c
	.byte	0x7
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.uleb128 0x2
	.4byte	.LASF3
	.byte	0x1d
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x2
	.4byte	.LASF4
	.byte	0x1e
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x9
	.8byte	.LBB3
	.8byte	.LBE3-.LBB3
	.4byte	0xd0
	.uleb128 0x1
	.string	"i"
	.byte	0x20
	.byte	0xc
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.uleb128 0x3
	.8byte	.LBB4
	.8byte	.LBE4-.LBB4
	.uleb128 0x1
	.string	"i"
	.byte	0x29
	.byte	0xb
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.byte	0
	.uleb128 0xa
	.4byte	0x44
	.4byte	0xff
	.uleb128 0xb
	.4byte	0xff
	.byte	0x4
	.byte	0
	.uleb128 0x4
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0xc
	.string	"sep"
	.byte	0x1
	.byte	0xa
	.byte	0x5
	.4byte	0x44
	.8byte	.LFB1
	.8byte	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.4byte	0x161
	.uleb128 0xd
	.string	"x"
	.byte	0x1
	.byte	0xa
	.byte	0xe
	.4byte	0x161
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x1
	.string	"ret"
	.byte	0xc
	.byte	0xd
	.4byte	0x167
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x3
	.8byte	.LBB2
	.8byte	.LBE2-.LBB2
	.uleb128 0x1
	.string	"i"
	.byte	0xd
	.byte	0xb
	.4byte	0x44
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.byte	0
	.uleb128 0xe
	.byte	0x8
	.4byte	0x44
	.uleb128 0x4
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0xf
	.4byte	.LASF10
	.byte	0x1
	.byte	0x5
	.byte	0x6
	.8byte	.LFB0
	.8byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0x21
	.sleb128 7
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.sleb128 8
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7a
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.Ltext0
	.8byte	.Letext0-.Ltext0
	.8byte	0
	.8byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF7:
	.string	"GNU C17 13.2.0 -mtune=rocket -mabi=lp64d -misa-spec=20191213 -march=rv64imafd_zicsr_zifencei -g -O0 -fno-toplevel-reorder -fno-asynchronous-unwind-tables"
.LASF5:
	.string	"long unsigned int"
.LASF10:
	.string	"reach_error"
.LASF8:
	.string	"assert_ret1"
.LASF9:
	.string	"main"
.LASF2:
	.string	"temp"
.LASF6:
	.string	"long long int"
.LASF3:
	.string	"ret2"
.LASF4:
	.string	"ret5"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"./sep05-1.c"
.LASF1:
	.string	"/home/grace/gitlib/rvemu/data/T_cov"
	.ident	"GCC: () 13.2.0"