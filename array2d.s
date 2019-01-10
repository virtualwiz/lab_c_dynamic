	.file	"array2d.c"
	.section	.rodata
.LC0:
	.string	"w"
.LC1:
	.string	"mem_dump.txt"
.LC2:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$1, -64(%rbp)
	movl	$2, -60(%rbp)
	movl	$3, -56(%rbp)
	movl	$4, -52(%rbp)
	movl	$5, -48(%rbp)
	movl	$6, -44(%rbp)
	movl	$7, -40(%rbp)
	movl	$8, -36(%rbp)
	movl	$9, -32(%rbp)
	movl	$7, -28(%rbp)
	movl	$5, -24(%rbp)
	movl	$3, -20(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, -80(%rbp)
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	fopen
	movq	%rax, -72(%rbp)
	movl	$-20, -88(%rbp)
	jmp	.L2
.L3:
	movl	-88(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-80(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	-84(%rbp), %edx
	movq	-72(%rbp), %rax
	movl	$.LC2, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf
	addl	$1, -88(%rbp)
.L2:
	cmpl	$19, -88(%rbp)
	jle	.L3
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	fclose
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L4
	call	__stack_chk_fail
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
