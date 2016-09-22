.section	.rodata
.LC0:
	.string	"Largest Sum Contiguous Subarray"
.LC1:
	.string	"\n\n"
.LC2:
	.string	"Enter the number of elements\n"
.LC3:
	.string	"Enter the elements of the array\n"
.LC4:
	.string	"Maximum contiguous sum is : "
.LC5:
	.string	"\n"
	.text

	.globl	maxSubArraySum
	.type	maxSubArraySum, @function
maxSubArraySum:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$96, %rsp
	movq	$0, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	$0, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	$0, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
.L0:
	movq	24(%rbp), %rax
	cmpq	%rax, -40(%rbp)
	jl		.L2
	jmp		.L7
	jmp		.L7
.L1:
	movq	-40(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-40(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -40(%rbp)
	jmp		.L0
.L2:
	movq	-40(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -72(%rbp)
	movq	-24(%rbp), %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	$0, -88(%rbp)
	movq	-88(%rbp), %rax
	cmpq	%rax, -24(%rbp)
	jl		.L3
	jmp		.L4
	jmp		.L4
.L3:
	movq	$0, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp		.L4
	jmp		.L4
.L4:
	movq	-24(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L5
	jmp		.L1
	jmp		.L6
.L5:
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp		.L1
	jmp		.L1
.L6:
	jmp		.L1
.L7:
	movq	-8(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	maxSubArraySum, .-maxSubArraySum

	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$976, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -8(%rbp)
	movq	$.LC1, %rdi
	pushq	$.LC1
	call	prints
	addq	$8, %rsp
	movq	%rax, -16(%rbp)
	movq	$100, -824(%rbp)
	movq	$.LC2, %rdi
	pushq	$.LC2
	call	prints
	addq	$8, %rsp
	movq	%rax, -864(%rbp)
	leaq	-856(%rbp), %rax
	movq	%rax, -872(%rbp)
	movq	-872(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -880(%rbp)
	movq	-880(%rbp), %rax
	movq	%rax, -832(%rbp)
	movq	$.LC3, %rdi
	pushq	$.LC3
	call	prints
	addq	$8, %rsp
	movq	%rax, -888(%rbp)
	movq	$0, -896(%rbp)
	movq	-896(%rbp), %rax
	movq	%rax, -840(%rbp)
.L8:
	movq	-832(%rbp), %rax
	cmpq	%rax, -840(%rbp)
	jl		.L10
	jmp		.L11
	jmp		.L11
.L9:
	movq	-840(%rbp), %rax
	movq	%rax, -904(%rbp)
	movq	-840(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -840(%rbp)
	jmp		.L8
.L10:
	movq	-840(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -912(%rbp)
	leaq	-856(%rbp), %rax
	movq	%rax, -920(%rbp)
	movq	-920(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -928(%rbp)
	movq	-912(%rbp), %rax
	movq	-928(%rbp), %rdx
	movq	%rdx, -816(%rbp, %rax)
	jmp		.L9
.L11:
	movq	-832(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-816(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	maxSubArraySum
	addq	$16, %rsp
	movq	%rax, -944(%rbp)
	movq	-944(%rbp), %rax
	movq	%rax, -936(%rbp)
	movq	$.LC4, %rdi
	pushq	$.LC4
	call	prints
	addq	$8, %rsp
	movq	%rax, -952(%rbp)
	movq	-936(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -960(%rbp)
	movq	$.LC5, %rdi
	pushq	$.LC5
	call	prints
	addq	$8, %rsp
	movq	%rax, -968(%rbp)
	movq	$0, -976(%rbp)
	movq	-976(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
