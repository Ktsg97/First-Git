	.file	"addarr.c"
	.section	.rodata
.LC0:
	.string	"%d "
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$0, -16(%ebp)
	jmp	.L2
.L5:
	movl	$0, -12(%ebp)
	jmp	.L3
.L4:
	movl	-16(%ebp), %eax
	leal	0(,%eax,8), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	movl	(%edx,%eax,4), %edx
	movl	-16(%ebp), %eax
	leal	0(,%eax,8), %ecx
	movl	12(%ebp), %eax
	addl	%eax, %ecx
	movl	-12(%ebp), %eax
	movl	(%ecx,%eax,4), %eax
	addl	%edx, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	addl	$1, -12(%ebp)
.L3:
	cmpl	$1, -12(%ebp)
	jle	.L4
	subl	$12, %esp
	pushl	$10
	call	putchar
	addl	$16, %esp
	addl	$1, -16(%ebp)
.L2:
	cmpl	$1, -16(%ebp)
	jle	.L5
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$52, %esp
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$1, -44(%ebp)
	movl	$2, -40(%ebp)
	movl	$3, -36(%ebp)
	movl	$4, -32(%ebp)
	movl	$1, -28(%ebp)
	movl	$5, -24(%ebp)
	movl	$3, -20(%ebp)
	movl	$6, -16(%ebp)
	subl	$8, %esp
	leal	-28(%ebp), %eax
	pushl	%eax
	leal	-44(%ebp), %eax
	pushl	%eax
	call	add
	addl	$16, %esp
	movl	$0, %eax
	movl	-12(%ebp), %edx
	xorl	%gs:20, %edx
	je	.L8
	call	__stack_chk_fail
.L8:
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
