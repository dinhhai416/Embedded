	.file	"main.cpp"
	.text
	.def	_ZL6printfPKcz;	.scl	3;	.type	32;	.endef
	.seh_proc	_ZL6printfPKcz
_ZL6printfPKcz:
.LFB230:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rax, %rcx
	movq	32(%rbp), %rax
	movq	%rbx, %r8
	movq	%rax, %rdx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZN8SinhVien4MSSVE
	.bss
	.align 4
_ZN8SinhVien4MSSVE:
	.space 4
	.section	.text$_ZN8SinhVienC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8SinhVienC1Ev
	.def	_ZN8SinhVienC1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8SinhVienC1Ev
_ZN8SinhVienC1Ev:
.LFB2074:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movq	16(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN8SinhVienD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8SinhVienD1Ev
	.def	_ZN8SinhVienD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8SinhVienD1Ev
_ZN8SinhVienD1Ev:
.LFB2077:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Dia chi sv1: %p\12\0"
.LC1:
	.ascii "Dia chi sv2: %p\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2070:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$168, %rsp
	.seh_stackalloc	168
	leaq	160(%rsp), %rbp
	.seh_setframe	%rbp, 160
	.seh_endprologue
	movl	%ecx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	call	__main
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienC1Ev
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienC1Ev
	leaq	_ZN8SinhVien4MSSVE(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
.LEHB0:
	call	_ZL6printfPKcz
	leaq	_ZN8SinhVien4MSSVE(%rip), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	_ZL6printfPKcz
	leaq	-64(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	_ZL6printfPKcz
	leaq	-128(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	_ZL6printfPKcz
.LEHE0:
	movl	$0, %ebx
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienD1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienD1Ev
	movl	%ebx, %eax
	jmp	.L9
.L8:
	movq	%rax, %rbx
	leaq	-128(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienD1Ev
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8SinhVienD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L9:
	addq	$168, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2070:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2070-.LLSDACSB2070
.LLSDACSB2070:
	.uleb128 .LEHB0-.LFB2070
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L8-.LFB2070
	.uleb128 0
	.uleb128 .LEHB1-.LFB2070
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE2070:
	.text
	.seh_endproc
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.1.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
