	.file	"ll1.c"
	.section	.rodata
.LC0:
	.string	" %d "
	.text
	.globl	printList
	.type	printList, @function
printList:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	jmp	.L2
.L3:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, 8(%ebp)
.L2:
	cmpl	$0, 8(%ebp)
	jne	.L3
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	printList, .-printList
	.globl	main
	.type	main, @function
main:
.LFB3:
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
	subl	$36, %esp
	movl	$0, -28(%ebp)
	movl	$0, -24(%ebp)
	movl	$0, -20(%ebp)
	movl	$0, -16(%ebp)
	movl	$0, -12(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -28(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -24(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -20(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -16(%ebp)
	subl	$12, %esp
	pushl	$8
	call	malloc
	addl	$16, %esp
	movl	%eax, -12(%ebp)
	movl	-24(%ebp), %eax
	movl	$1, (%eax)
	movl	-24(%ebp), %eax
	movl	-20(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-20(%ebp), %eax
	movl	$2, (%eax)
	movl	-20(%ebp), %eax
	movl	-16(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-16(%ebp), %eax
	movl	$3, (%eax)
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-12(%ebp), %eax
	movl	$4, (%eax)
	movl	-12(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-28(%ebp), %eax
	movl	$0, (%eax)
	movl	-28(%ebp), %eax
	movl	-24(%ebp), %edx
	movl	%edx, 4(%eax)
	movl	-28(%ebp), %eax
	movl	%eax, -24(%ebp)
	subl	$12, %esp
	pushl	-24(%ebp)
	call	printList
	addl	$16, %esp
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
