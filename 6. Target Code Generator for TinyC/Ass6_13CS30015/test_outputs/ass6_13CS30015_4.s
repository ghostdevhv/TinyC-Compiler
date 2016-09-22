.section	.rodata
.LC0:
	.string	"Code for Display Fibonacci series upto n terms"
.LC1:
	.string	"\n\n"
.LC2:
	.string	"Enter number of terms: "
.LC3:
	.string	"Fibonacci Series: "
.LC4:
	.string	" + "
.LC5:
	.string	" "
.LC6:
	.string	"\nWant to compute fibonacci series again ? If yes then press 1 else press 0\n"
.LC7:
	.string	"\n"
	.text

	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$288, %rsp
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
	movq	$0, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	$1, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	$0, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	$.LC2, %rdi
	pushq	$.LC2
	call	prints
	addq	$8, %rsp
	movq	%rax, -96(%rbp)
	leaq	-88(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	$.LC3, %rdi
	pushq	$.LC3
	call	prints
	addq	$8, %rsp
	movq	%rax, -120(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -128(%rbp)
	movq	$.LC4, %rdi
	pushq	$.LC4
	call	prints
	addq	$8, %rsp
	movq	%rax, -136(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -144(%rbp)
	movq	$2, -152(%rbp)
	movq	-152(%rbp), %rax
	movq	%rax, -24(%rbp)
.L0:
	movq	-32(%rbp), %rax
	cmpq	%rax, -24(%rbp)
	jl		.L1
	jmp		.L2
	jmp		.L2
.L1:
	movq	-40(%rbp), %rax
	movq	-56(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -160(%rbp)
	movq	-160(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -168(%rbp)
	movq	$.LC4, %rdi
	pushq	$.LC4
	call	prints
	addq	$8, %rsp
	movq	%rax, -176(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -184(%rbp)
	movq	$.LC5, %rdi
	pushq	$.LC5
	call	prints
	addq	$8, %rsp
	movq	%rax, -192(%rbp)
	jmp		.L0
.L2:
	movq	$.LC6, %rdi
	pushq	$.LC6
	call	prints
	addq	$8, %rsp
	movq	%rax, -200(%rbp)
	leaq	-88(%rbp), %rax
	movq	%rax, -216(%rbp)
	movq	-216(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -224(%rbp)
	movq	-224(%rbp), %rax
	movq	%rax, -208(%rbp)
	movq	$1, -232(%rbp)
	movq	-232(%rbp), %rax
	cmpq	%rax, -208(%rbp)
	je		.L3
	jmp		.L4
	jmp		.L7
.L3:
	call	main
	addq	$0, %rsp
	movq	%rax, -248(%rbp)
	movq	-248(%rbp), %rax
	movq	%rax, -240(%rbp)
	jmp		.L7
.L4:
	movq	$0, -256(%rbp)
	movq	-256(%rbp), %rax
	cmpq	%rax, -208(%rbp)
	je		.L5
	jmp		.L7
	jmp		.L6
.L5:
	movq	$0, -264(%rbp)
	movq	-264(%rbp), %rax
	leave
	ret
	jmp		.L7
	jmp		.L7
.L6:
	jmp		.L7
.L7:
	movq	$.LC7, %rdi
	pushq	$.LC7
	call	prints
	addq	$8, %rsp
	movq	%rax, -272(%rbp)
	movq	$0, -280(%rbp)
	movq	-280(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
