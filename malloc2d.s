	.file	"malloc2d.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movl	$4, -32(%rbp)
	movl	$4, -28(%rbp)
	movl	-28(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc
	movq	%rax, -24(%rbp)
	movl	$0, -44(%rbp)
	jmp	.L2
.L3:
	movl	-44(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	leaq	(%rdx,%rax), %rbx
	movl	-32(%rbp), %eax
	cltq
	movq	%rax, %rdi
	call	malloc
	movq	%rax, (%rbx)
	addl	$1, -44(%rbp)
.L2:
	movl	-44(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L3
	movl	$0, -40(%rbp)
	jmp	.L4
.L7:
	movl	$0, -36(%rbp)
	jmp	.L5
.L6:
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movl	-36(%rbp), %eax
	cltq
	addq	%rdx, %rax
	movb	$46, (%rax)
	addl	$1, -36(%rbp)
.L5:
	movl	-36(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L6
	addl	$1, -40(%rbp)
.L4:
	movl	-40(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jl	.L7
	movl	$0, %eax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
