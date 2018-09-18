	.file	"Rationalp2.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
.LC0:
	.string	"stoi"
	.section	.text._ZSt4stoiRKSsPmi,"axG",@progbits,_ZSt4stoiRKSsPmi,comdat
	.weak	_ZSt4stoiRKSsPmi
	.type	_ZSt4stoiRKSsPmi, @function
_ZSt4stoiRKSsPmi:
.LFB665:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	%edx, -20(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSs5c_strEv
	movl	-20(%rbp), %ecx
	movq	-16(%rbp), %rdx
	movl	%ecx, %r8d
	movq	%rdx, %rcx
	movq	%rax, %rdx
	movl	$.LC0, %esi
	movl	$strtol, %edi
	call	_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE665:
	.size	_ZSt4stoiRKSsPmi, .-_ZSt4stoiRKSsPmi
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.align 2
	.globl	_ZN8RationalC2Ev
	.type	_ZN8RationalC2Ev, @function
_ZN8RationalC2Ev:
.LFB1197:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, (%rax)
	movq	-8(%rbp), %rax
	movl	$1, 4(%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1197:
	.size	_ZN8RationalC2Ev, .-_ZN8RationalC2Ev
	.globl	_ZN8RationalC1Ev
	.set	_ZN8RationalC1Ev,_ZN8RationalC2Ev
	.section	.rodata
	.align 8
.LC1:
	.string	"Error: divide by zero not permitted\n"
	.text
	.align 2
	.globl	_ZN8RationalC2Eii
	.type	_ZN8RationalC2Eii, @function
_ZN8RationalC2Eii:
.LFB1200:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jne	.L5
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$1, %edi
	call	exit
.L5:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1200:
	.size	_ZN8RationalC2Eii, .-_ZN8RationalC2Eii
	.globl	_ZN8RationalC1Eii
	.set	_ZN8RationalC1Eii,_ZN8RationalC2Eii
	.align 2
	.globl	_ZN8RationalC2Ei
	.type	_ZN8RationalC2Ei, @function
_ZN8RationalC2Ei:
.LFB1203:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	$1, 4(%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1203:
	.size	_ZN8RationalC2Ei, .-_ZN8RationalC2Ei
	.globl	_ZN8RationalC1Ei
	.set	_ZN8RationalC1Ei,_ZN8RationalC2Ei
	.align 2
	.globl	_ZN8RationalD2Ev
	.type	_ZN8RationalD2Ev, @function
_ZN8RationalD2Ev:
.LFB1206:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1206:
	.size	_ZN8RationalD2Ev, .-_ZN8RationalD2Ev
	.globl	_ZN8RationalD1Ev
	.set	_ZN8RationalD1Ev,_ZN8RationalD2Ev
	.section	.rodata
.LC2:
	.string	"/"
	.text
	.align 2
	.globl	_ZN8Rational5printEv
	.type	_ZN8Rational5printEv, @function
_ZN8Rational5printEv:
.LFB1208:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	4(%rax), %ebx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1208:
	.size	_ZN8Rational5printEv, .-_ZN8Rational5printEv
	.globl	_ZlsRSo8Rational
	.type	_ZlsRSo8Rational, @function
_ZlsRSo8Rational:
.LFB1209:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-32(%rbp), %rax
	movl	4(%rax), %ebx
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movq	-24(%rbp), %rax
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1209:
	.size	_ZlsRSo8Rational, .-_ZlsRSo8Rational
	.globl	_ZrsRSiR8Rational
	.type	_ZrsRSiR8Rational, @function
_ZrsRSiR8Rational:
.LFB1210:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1210
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -104(%rbp)
	movq	%rsi, -112(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSsC1Ev
.LEHE0:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSsC1Ev
.LEHE1:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSsC1Ev
.LEHE2:
	leaq	-96(%rbp), %rdx
	movq	-104(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB3:
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E
	leaq	-96(%rbp), %rax
	movl	$0, %edx
	movl	$47, %esi
	movq	%rax, %rdi
	call	_ZNKSs4findEcm
	movq	%rax, -24(%rbp)
	leaq	-48(%rbp), %rax
	movq	-24(%rbp), %rdx
	leaq	-96(%rbp), %rsi
	movq	%rdx, %rcx
	movl	$0, %edx
	movq	%rax, %rdi
	call	_ZNKSs6substrEmm
.LEHE3:
	leaq	-48(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_ZNSsaSEOSs
.LEHE4:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSs4sizeEv
	subq	-24(%rbp), %rax
	leaq	-1(%rax), %rcx
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	leaq	-32(%rbp), %rax
	leaq	-96(%rbp), %rsi
	movq	%rax, %rdi
.LEHB5:
	call	_ZNKSs6substrEmm
.LEHE5:
	leaq	-32(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB6:
	call	_ZNSsaSEOSs
.LEHE6:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-80(%rbp), %rax
	movl	$10, %edx
	movl	$0, %esi
	movq	%rax, %rdi
.LEHB7:
	call	_ZSt4stoiRKSsPmi
	movq	-112(%rbp), %rdx
	movl	%eax, (%rdx)
	leaq	-64(%rbp), %rax
	movl	$10, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZSt4stoiRKSsPmi
.LEHE7:
	movq	-112(%rbp), %rdx
	movl	%eax, 4(%rdx)
	movq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	movq	-104(%rbp), %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movq	%rbx, %rax
	jmp	.L24
.L22:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L15
.L23:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L15
.L21:
	movq	%rax, %rbx
.L15:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L17
.L20:
	movq	%rax, %rbx
.L17:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	jmp	.L18
.L19:
	movq	%rax, %rbx
.L18:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB8:
	call	_Unwind_Resume
.LEHE8:
.L24:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1210:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1210:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1210-.LLSDACSB1210
.LLSDACSB1210:
	.uleb128 .LEHB0-.LFB1210
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1210
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L19-.LFB1210
	.uleb128 0
	.uleb128 .LEHB2-.LFB1210
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L20-.LFB1210
	.uleb128 0
	.uleb128 .LEHB3-.LFB1210
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L21-.LFB1210
	.uleb128 0
	.uleb128 .LEHB4-.LFB1210
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L22-.LFB1210
	.uleb128 0
	.uleb128 .LEHB5-.LFB1210
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L21-.LFB1210
	.uleb128 0
	.uleb128 .LEHB6-.LFB1210
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L23-.LFB1210
	.uleb128 0
	.uleb128 .LEHB7-.LFB1210
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L21-.LFB1210
	.uleb128 0
	.uleb128 .LEHB8-.LFB1210
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
.LLSDACSE1210:
	.text
	.size	_ZrsRSiR8Rational, .-_ZrsRSiR8Rational
	.align 2
	.globl	_ZN8Rational3gcdEii
	.type	_ZN8Rational3gcdEii, @function
_ZN8Rational3gcdEii:
.LFB1211:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	cltd
	idivl	-32(%rbp)
	movl	%edx, -4(%rbp)
	jmp	.L26
.L27:
	movl	-32(%rbp), %eax
	movl	%eax, -28(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, -32(%rbp)
	movl	-28(%rbp), %eax
	cltd
	idivl	-32(%rbp)
	movl	%edx, -4(%rbp)
.L26:
	cmpl	$0, -4(%rbp)
	jne	.L27
	movl	-32(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1211:
	.size	_ZN8Rational3gcdEii, .-_ZN8Rational3gcdEii
	.align 2
	.globl	_ZN8Rational6reduceEv
	.type	_ZN8Rational6reduceEv, @function
_ZN8Rational6reduceEv:
.LFB1212:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$24, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	testl	%eax, %eax
	jle	.L30
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jns	.L30
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 4(%rax)
.L30:
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, %ecx
	sarl	$31, %ecx
	xorl	%ecx, %eax
	movl	%eax, %edx
	subl	%ecx, %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %ecx
	sarl	$31, %ecx
	xorl	%ecx, %eax
	subl	%ecx, %eax
	movq	-24(%rbp), %rcx
	movl	%eax, %esi
	movq	%rcx, %rdi
	call	_ZN8Rational3gcdEii
	movl	%eax, -4(%rbp)
	cmpl	$1, -4(%rbp)
	jle	.L29
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	cltd
	idivl	-4(%rbp)
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 4(%rax)
.L29:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1212:
	.size	_ZN8Rational6reduceEv, .-_ZN8Rational6reduceEv
	.align 2
	.globl	_ZN8RationalmlES_
	.type	_ZN8RationalmlES_, @function
_ZN8RationalmlES_:
.LFB1213:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	imull	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	nop
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1213:
	.size	_ZN8RationalmlES_, .-_ZN8RationalmlES_
	.align 2
	.globl	_ZN8RationaldvES_
	.type	_ZN8RationaldvES_, @function
_ZN8RationaldvES_:
.LFB1214:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1214
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movq	-32(%rbp), %rax
	movl	(%rax), %edx
	movq	-40(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, (%rax)
	movq	-32(%rbp), %rax
	movl	4(%rax), %edx
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	imull	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	testl	%eax, %eax
	jne	.L35
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
.LEHB9:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
.LEHE9:
	movl	$1, %edi
	call	exit
.L35:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	jmp	.L39
.L38:
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB10:
	call	_Unwind_Resume
.LEHE10:
.L39:
	movq	-24(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1214:
	.section	.gcc_except_table
.LLSDA1214:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1214-.LLSDACSB1214
.LLSDACSB1214:
	.uleb128 .LEHB9-.LFB1214
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L38-.LFB1214
	.uleb128 0
	.uleb128 .LEHB10-.LFB1214
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE1214:
	.text
	.size	_ZN8RationaldvES_, .-_ZN8RationaldvES_
	.align 2
	.globl	_ZN8RationalplES_
	.type	_ZN8RationalplES_, @function
_ZN8RationalplES_:
.LFB1215:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	imull	%ecx, %eax
	addl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	nop
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1215:
	.size	_ZN8RationalplES_, .-_ZN8RationalplES_
	.align 2
	.globl	_ZN8RationalmiES_
	.type	_ZN8RationalmiES_, @function
_ZN8RationalmiES_:
.LFB1216:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movq	-16(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-16(%rbp), %rax
	movl	4(%rax), %ecx
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	imull	%ecx, %eax
	subl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-24(%rbp), %rax
	movl	4(%rax), %eax
	imull	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	nop
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1216:
	.size	_ZN8RationalmiES_, .-_ZN8RationalmiES_
	.align 2
	.globl	_ZN8RationalngEv
	.type	_ZN8RationalngEv, @function
_ZN8RationalngEv:
.LFB1217:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movq	-16(%rbp), %rax
	movl	(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movl	%edx, (%rax)
	movq	-16(%rbp), %rax
	movl	4(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 4(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8Rational6reduceEv
	nop
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1217:
	.size	_ZN8RationalngEv, .-_ZN8RationalngEv
	.align 2
	.globl	_ZN8RationalmlEi
	.type	_ZN8RationalmlEi, @function
_ZN8RationalmlEi:
.LFB1218:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	-36(%rbp), %edx
	leaq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8RationalC1Ei
	movq	-24(%rbp), %rax
	leaq	-16(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalmlES_
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1218:
	.size	_ZN8RationalmlEi, .-_ZN8RationalmlEi
	.align 2
	.globl	_ZN8RationaldvEi
	.type	_ZN8RationaldvEi, @function
_ZN8RationaldvEi:
.LFB1219:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1219
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	-52(%rbp), %edx
	leaq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8RationalC1Ei
	movq	-40(%rbp), %rax
	leaq	-32(%rbp), %rdx
	movq	-48(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB11:
	call	_ZN8RationaldvES_
.LEHE11:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L52
.L51:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB12:
	call	_Unwind_Resume
.LEHE12:
.L52:
	movq	-40(%rbp), %rax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1219:
	.section	.gcc_except_table
.LLSDA1219:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1219-.LLSDACSB1219
.LLSDACSB1219:
	.uleb128 .LEHB11-.LFB1219
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L51-.LFB1219
	.uleb128 0
	.uleb128 .LEHB12-.LFB1219
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
.LLSDACSE1219:
	.text
	.size	_ZN8RationaldvEi, .-_ZN8RationaldvEi
	.align 2
	.globl	_ZN8RationalplEi
	.type	_ZN8RationalplEi, @function
_ZN8RationalplEi:
.LFB1220:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	-36(%rbp), %edx
	leaq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8RationalC1Ei
	movq	-24(%rbp), %rax
	leaq	-16(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalplES_
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1220:
	.size	_ZN8RationalplEi, .-_ZN8RationalplEi
	.align 2
	.globl	_ZN8RationalmiEi
	.type	_ZN8RationalmiEi, @function
_ZN8RationalmiEi:
.LFB1221:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	-36(%rbp), %edx
	leaq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN8RationalC1Ei
	movq	-24(%rbp), %rax
	leaq	-16(%rbp), %rdx
	movq	-32(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalmiES_
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-24(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1221:
	.size	_ZN8RationalmiEi, .-_ZN8RationalmiEi
	.section	.rodata
.LC3:
	.string	" = "
.LC4:
	.string	" * "
.LC5:
	.string	" / "
.LC6:
	.string	" + "
.LC7:
	.string	" - "
.LC8:
	.string	" = -"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1222:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1222
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$136, %rsp
	.cfi_offset 3, -24
	leaq	-128(%rbp), %rax
	movl	$2, %edx
	movl	$1, %esi
	movq	%rax, %rdi
.LEHB13:
	call	_ZN8RationalC1Eii
.LEHE13:
	leaq	-112(%rbp), %rax
	movl	$3, %edx
	movl	$2, %esi
	movq	%rax, %rdi
.LEHB14:
	call	_ZN8RationalC1Eii
.LEHE14:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalC1Ev
	movl	$4, -132(%rbp)
	movq	-112(%rbp), %rax
	movq	%rax, -48(%rbp)
	leaq	-32(%rbp), %rax
	leaq	-48(%rbp), %rdx
	leaq	-128(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalmlES_
	movq	-32(%rbp), %rax
	movq	%rax, -96(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB15:
	call	_ZlsRSo8Rational
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$.LC4, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE15:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -48(%rbp)
	leaq	-32(%rbp), %rax
	leaq	-48(%rbp), %rdx
	leaq	-128(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB16:
	call	_ZN8RationaldvES_
.LEHE16:
	movq	-32(%rbp), %rax
	movq	%rax, -96(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB17:
	call	_ZlsRSo8Rational
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$.LC5, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE17:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -48(%rbp)
	leaq	-32(%rbp), %rax
	leaq	-48(%rbp), %rdx
	leaq	-128(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalplES_
	movq	-32(%rbp), %rax
	movq	%rax, -96(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB18:
	call	_ZlsRSo8Rational
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$.LC6, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE18:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -48(%rbp)
	leaq	-32(%rbp), %rax
	leaq	-48(%rbp), %rdx
	leaq	-128(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalmiES_
	movq	-32(%rbp), %rax
	movq	%rax, -96(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-112(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB19:
	call	_ZlsRSo8Rational
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$.LC7, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE19:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	leaq	-128(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN8RationalngEv
	movq	-32(%rbp), %rax
	movq	%rax, -96(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	-128(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB20:
	call	_ZlsRSo8Rational
	movl	$.LC8, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZlsRSo8Rational
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE20:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movl	$0, %ebx
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movl	%ebx, %eax
	jmp	.L74
.L68:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L60
.L69:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L60
.L70:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L60
.L71:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L60
.L72:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L60
.L73:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
.L60:
	leaq	-80(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	jmp	.L66
.L67:
	movq	%rax, %rbx
.L66:
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN8RationalD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB21:
	call	_Unwind_Resume
.LEHE21:
.L74:
	addq	$136, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1222:
	.section	.gcc_except_table
.LLSDA1222:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1222-.LLSDACSB1222
.LLSDACSB1222:
	.uleb128 .LEHB13-.LFB1222
	.uleb128 .LEHE13-.LEHB13
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB14-.LFB1222
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L67-.LFB1222
	.uleb128 0
	.uleb128 .LEHB15-.LFB1222
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L68-.LFB1222
	.uleb128 0
	.uleb128 .LEHB16-.LFB1222
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L69-.LFB1222
	.uleb128 0
	.uleb128 .LEHB17-.LFB1222
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L70-.LFB1222
	.uleb128 0
	.uleb128 .LEHB18-.LFB1222
	.uleb128 .LEHE18-.LEHB18
	.uleb128 .L71-.LFB1222
	.uleb128 0
	.uleb128 .LEHB19-.LFB1222
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L72-.LFB1222
	.uleb128 0
	.uleb128 .LEHB20-.LFB1222
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L73-.LFB1222
	.uleb128 0
	.uleb128 .LEHB21-.LFB1222
	.uleb128 .LEHE21-.LEHB21
	.uleb128 0
	.uleb128 0
.LLSDACSE1222:
	.text
	.size	main, .-main
	.section	.text._ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_,"axG",@progbits,_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_,comdat
	.weak	_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_
	.type	_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_, @function
_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_:
.LFB1224:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%rcx, -64(%rbp)
	movl	%r8d, -68(%rbp)
	call	__errno_location
	movl	$0, (%rax)
	movl	-68(%rbp), %edx
	leaq	-16(%rbp), %rsi
	movq	-56(%rbp), %rcx
	movq	-40(%rbp), %rax
	movq	%rcx, %rdi
	call	*%rax
	movq	%rax, -8(%rbp)
	movq	-16(%rbp), %rax
	cmpq	-56(%rbp), %rax
	jne	.L76
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt24__throw_invalid_argumentPKc
.L76:
	call	__errno_location
	movl	(%rax), %eax
	cmpl	$34, %eax
	je	.L77
	cmpq	$-2147483648, -8(%rbp)
	jl	.L77
	cmpq	$2147483647, -8(%rbp)
	jle	.L78
.L77:
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZSt20__throw_out_of_rangePKc
.L78:
	movq	-8(%rbp), %rax
	movl	%eax, -20(%rbp)
	cmpq	$0, -64(%rbp)
	je	.L79
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	movq	-56(%rbp), %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rax
	movq	%rdx, (%rax)
.L79:
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1224:
	.size	_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_, .-_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_
	.weak	_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_
	.set	_ZN9__gnu_cxx6__stoaIlicJiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_,_ZN9__gnu_cxx6__stoaIlicIiEEET0_PFT_PKT1_PPS3_DpT2_EPKcS5_PmS9_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1384:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L81
	cmpl	$65535, -8(%rbp)
	jne	.L81
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L81:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1384:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN8RationalC2Ev, @function
_GLOBAL__sub_I__ZN8RationalC2Ev:
.LFB1385:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1385:
	.size	_GLOBAL__sub_I__ZN8RationalC2Ev, .-_GLOBAL__sub_I__ZN8RationalC2Ev
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN8RationalC2Ev
	.section	.rodata
	.align 8
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 8
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.quad	_ZL28__gthrw___pthread_key_createPjPFvPvE
	.weakref	_ZL28__gthrw___pthread_key_createPjPFvPvE,__pthread_key_create
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
