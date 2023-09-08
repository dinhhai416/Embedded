	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movb	$1, -6(%rbp)
	movb	$3, -5(%rbp)
	movb	$-119, -4(%rbp)
	movb	$8, -3(%rbp)
	movb	$-28, -2(%rbp)
	movb	$-23, -1(%rbp)
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev7, Built by MSYS2 project) 13.1.0"
