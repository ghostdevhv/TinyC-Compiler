.section	.rodata
.LC0:
	.string	"Enter a number for finding a factorial: "
.LC1:
	.string	"Factorial of "
.LC2:
	.string	" is: "
.LC3:
	.string	"\nWant to find a factorial for another number? If yes then press 1 else press 0\n"
	.text

	.globl	fact
	.type	fact, @function
fact:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	$1, -8(%rbp)
	movq	-8(%rbp), %rax
	cmpq	%rax, 16(%rbp)
	je		.L0
	jmp		.L1
	jmp		.L2
.L0:
	movq	$1, -16(%rbp)
	movq	-16(%rbp), %rax
	leave
	ret
	jmp		.L2
.L1:
	movq	$1, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	16(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	fact
	addq	$8, %rsp
	movq	%rax, -40(%rbp)
	movq	16(%rbp), %rax
	imulq	-40(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	leave
	ret
	jmp		.L2
.L2:
	leave
	ret
	.size	fact, .-fact

	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$192, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -56(%rbp)
	leaq	-24(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	fact
	addq	$8, %rsp
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	$.LC1, %rdi
	pushq	$.LC1
	call	prints
	addq	$8, %rsp
	movq	%rax, -88(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -96(%rbp)
	movq	$.LC2, %rdi
	pushq	$.LC2
	call	prints
	addq	$8, %rsp
	movq	%rax, -104(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -112(%rbp)
	movq	$.LC3, %rdi
	pushq	$.LC3
	call	prints
	addq	$8, %rsp
	movq	%rax, -120(%rbp)
	leaq	-24(%rbp), %rax
	movq	%rax, -136(%rbp)
	movq	-136(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -144(%rbp)
	movq	-144(%rbp), %rax
	movq	%rax, -128(%rbp)
	movq	$1, -152(%rbp)
	movq	-152(%rbp), %rax
	cmpq	%rax, -128(%rbp)
	je		.L3
	jmp		.L4
	jmp		.L7
.L3:
	call	main
	addq	$0, %rsp
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	movq	%rax, -160(%rbp)
	jmp		.L7
.L4:
	movq	$0, -176(%rbp)
	movq	-176(%rbp), %rax
	cmpq	%rax, -128(%rbp)
	je		.L5
	jmp		.L7
	jmp		.L6
.L5:
	movq	$0, -184(%rbp)
	movq	-184(%rbp), %rax
	leave
	ret
	jmp		.L7
	jmp		.L7
.L6:
	jmp		.L7
.L7:
	movq	$0, -192(%rbp)
	movq	-192(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
