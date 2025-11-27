	.file	"hello_world.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "%s is %d years old and says %s!\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	subq	$288, %rsp
	.seh_stackalloc	288
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	movl	$30, 156(%rbp)
	movabsq	$30227127050985808, %rax
	movq	%rax, 146(%rbp)
	movw	$0, 154(%rbp)
	movabsq	$8031924123371070792, %rax
	movl	$6581362, %edx
	movq	%rax, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	$0, 48(%rbp)
	movq	$0, 56(%rbp)
	movq	$0, 64(%rbp)
	movq	$0, 72(%rbp)
	movq	$0, 80(%rbp)
	movq	$0, 88(%rbp)
	movq	$0, 96(%rbp)
	movq	$0, 104(%rbp)
	movq	$0, 112(%rbp)
	movq	$0, 120(%rbp)
	movl	$0, 128(%rbp)
	leaq	146(%rbp), %rcx
	leaq	-80(%rbp), %rax
	leaq	32(%rbp), %rdx
	movq	%rdx, 40(%rsp)
	movl	156(%rbp), %edx
	movl	%edx, 32(%rsp)
	movq	%rcx, %r9
	leaq	.LC0(%rip), %r8
	movl	$110, %edx
	movq	%rax, %rcx
	call	snprintf
	leaq	-80(%rbp), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$288, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	snprintf;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
