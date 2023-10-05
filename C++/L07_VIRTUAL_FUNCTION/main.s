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
	.section .rdata,"dr"
.LC0:
	.ascii "Doi tuong\0"
	.section	.text$_ZN8DoiTuong3cmdEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8DoiTuong3cmdEv
	.def	_ZN8DoiTuong3cmdEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8DoiTuong3cmdEv
_ZN8DoiTuong3cmdEv:
.LFB2070:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC0(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii "%s\0"
	.section	.text$_ZN8DoiTuong7displayEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8DoiTuong7displayEv
	.def	_ZN8DoiTuong7displayEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8DoiTuong7displayEv
_ZN8DoiTuong7displayEv:
.LFB2071:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	*%rdx
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	_ZL6printfPKcz
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC2:
	.ascii "Sinh vien\0"
	.section	.text$_ZN8Sinhvien3cmdEv,"x"
	.linkonce discard
	.align 2
	.globl	_ZN8Sinhvien3cmdEv
	.def	_ZN8Sinhvien3cmdEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN8Sinhvien3cmdEv
_ZN8Sinhvien3cmdEv:
.LFB2072:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	leaq	.LC2(%rip), %rax
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC3:
	.ascii "\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2073:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	call	__main
	leaq	16+_ZTV8DoiTuong(%rip), %rax
	movq	%rax, -8(%rbp)
	leaq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8DoiTuong7displayEv
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	_ZL6printfPKcz
	leaq	16+_ZTV8Sinhvien(%rip), %rax
	movq	%rax, -16(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN8DoiTuong7displayEv
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZTV8Sinhvien
	.section	.rdata$_ZTV8Sinhvien,"dr"
	.linkonce same_size
	.align 8
_ZTV8Sinhvien:
	.quad	0
	.quad	_ZTI8Sinhvien
	.quad	_ZN8Sinhvien3cmdEv
	.globl	_ZTV8DoiTuong
	.section	.rdata$_ZTV8DoiTuong,"dr"
	.linkonce same_size
	.align 8
_ZTV8DoiTuong:
	.quad	0
	.quad	_ZTI8DoiTuong
	.quad	_ZN8DoiTuong3cmdEv
	.globl	_ZTI8Sinhvien
	.section	.rdata$_ZTI8Sinhvien,"dr"
	.linkonce same_size
	.align 8
_ZTI8Sinhvien:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS8Sinhvien
	.quad	_ZTI8DoiTuong
	.globl	_ZTS8Sinhvien
	.section	.rdata$_ZTS8Sinhvien,"dr"
	.linkonce same_size
	.align 8
_ZTS8Sinhvien:
	.ascii "8Sinhvien\0"
	.globl	_ZTI8DoiTuong
	.section	.rdata$_ZTI8DoiTuong,"dr"
	.linkonce same_size
	.align 8
_ZTI8DoiTuong:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS8DoiTuong
	.globl	_ZTS8DoiTuong
	.section	.rdata$_ZTS8DoiTuong,"dr"
	.linkonce same_size
	.align 8
_ZTS8DoiTuong:
	.ascii "8DoiTuong\0"
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (Rev6, Built by MSYS2 project) 13.1.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
