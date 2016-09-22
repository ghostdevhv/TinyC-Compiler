.section	.rodata
.LC0:
	.string	"hill"
.LC1:
	.string	"No such subarray\n"
.LC2:
	.string	"Index "
.LC3:
	.string	" to Index "
.LC4:
	.string	"What you want to compute ? \n"
.LC5:
	.string	"1. Longest Increasing Subsequence in an Array\n"
.LC6:
	.string	"2. Find an element is present or not in an Array using Binary Search\n"
.LC7:
	.string	"3. Largest subarray with equal number of 0s and 1s\n"
.LC8:
	.string	"4. End the program\n"
.LC9:
	.string	"\n Enter the index of the function which you want to compute\n"
.LC10:
	.string	"********* Longest Increasing Subsequence in an Array *********\n\n"
.LC11:
	.string	"Enter the number of elements (<90)\n"
.LC12:
	.string	"Enter the elements of an array\n"
.LC13:
	.string	"Length of Longest Increasing Subsequence is : "
.LC14:
	.string	"\n"
.LC15:
	.string	"Want to compute other than LIS ? Enter 1 for yes else press 0\n"
.LC16:
	.string	"********* Search an element using Binary Search *********\n\n"
.LC17:
	.string	"Enter the size of the array <90\n"
.LC18:
	.string	"Enter the elements of the array\n"
.LC19:
	.string	"Enter the element to be searched\n"
.LC20:
	.string	"Element "
.LC21:
	.string	" found at index number "
.LC22:
	.string	"Element not found :( \n"
.LC23:
	.string	"Want to compute other than Binary Search ? Enter 1 for yes else press 0\n"
.LC24:
	.string	"********* Largest Subarray with equal number of 0s and 1s *********\n\n"
	.text

	.globl	find
	.type	find, @function
find:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$384, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -8(%rbp)
	movq	$0, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	$1, -56(%rbp)
	movq	-56(%rbp), %rax
	negq	%rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	$0, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -32(%rbp)
.L0:
	movq	$1, -88(%rbp)
	movq	-88(%rbp), %rax
	movq	24(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	cmpq	%rax, -32(%rbp)
	jl		.L2
	jmp		.L16
	jmp		.L16
.L1:
	movq	-32(%rbp), %rax
	movq	%rax, -104(%rbp)
	movq	-32(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -32(%rbp)
	jmp		.L0
.L2:
	movq	-32(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -120(%rbp)
	movq	$0, -128(%rbp)
	movq	-128(%rbp), %rax
	cmpq	%rax, -120(%rbp)
	je		.L3
	jmp		.L4
	jmp		.L5
.L3:
	movq	$1, -136(%rbp)
	movq	-136(%rbp), %rax
	negq	%rax
	movq	%rax, -144(%rbp)
	movq	-144(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp		.L5
.L4:
	movq	$1, -152(%rbp)
	movq	-152(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp		.L5
.L5:
	movq	$1, -160(%rbp)
	movq	-32(%rbp), %rax
	movq	-160(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	movq	%rax, -40(%rbp)
.L6:
	movq	24(%rbp), %rax
	cmpq	%rax, -40(%rbp)
	jl		.L8
	jmp		.L1
	jmp		.L15
.L7:
	movq	-40(%rbp), %rax
	movq	%rax, -176(%rbp)
	movq	-40(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -40(%rbp)
	jmp		.L6
.L8:
	movq	-40(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -184(%rbp)
	movq	-184(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -192(%rbp)
	movq	$0, -200(%rbp)
	movq	-200(%rbp), %rax
	cmpq	%rax, -192(%rbp)
	je		.L9
	jmp		.L10
	jmp		.L11
.L9:
	movq	$1, -208(%rbp)
	movq	-208(%rbp), %rax
	negq	%rax
	movq	%rax, -216(%rbp)
	movq	-16(%rbp), %rax
	movq	-216(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -224(%rbp)
	movq	-224(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp		.L11
.L10:
	movq	$1, -232(%rbp)
	movq	-16(%rbp), %rax
	movq	-232(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -240(%rbp)
	movq	-240(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp		.L11
.L11:
	movq	$0, -248(%rbp)
	movq	-248(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	je		.L12
	jmp		.L7
.L12:
	movq	-32(%rbp), %rax
	movq	-40(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -256(%rbp)
	movq	$1, -264(%rbp)
	movq	-256(%rbp), %rax
	movq	-264(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -272(%rbp)
	movq	-272(%rbp), %rax
	cmpq	%rax, -48(%rbp)
	jl		.L13
	jmp		.L7
	jmp		.L14
.L13:
	movq	-32(%rbp), %rax
	movq	-40(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -280(%rbp)
	movq	$1, -288(%rbp)
	movq	-280(%rbp), %rax
	movq	-288(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -296(%rbp)
	movq	-296(%rbp), %rax
	movq	%rax, -48(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -72(%rbp)
	jmp		.L7
	jmp		.L7
.L14:
	jmp		.L7
.L15:
	jmp		.L1
.L16:
	movq	$1, -304(%rbp)
	movq	-304(%rbp), %rax
	negq	%rax
	movq	%rax, -312(%rbp)
	movq	-312(%rbp), %rax
	cmpq	%rax, -48(%rbp)
	je		.L17
	jmp		.L18
	jmp		.L19
.L17:
	movq	$.LC1, %rdi
	pushq	$.LC1
	call	prints
	addq	$8, %rsp
	movq	%rax, -320(%rbp)
	jmp		.L19
.L18:
	movq	$.LC2, %rdi
	pushq	$.LC2
	call	prints
	addq	$8, %rsp
	movq	%rax, -328(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -336(%rbp)
	movq	$.LC3, %rdi
	pushq	$.LC3
	call	prints
	addq	$8, %rsp
	movq	%rax, -344(%rbp)
	movq	-72(%rbp), %rax
	movq	-48(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -352(%rbp)
	movq	$1, -360(%rbp)
	movq	-360(%rbp), %rax
	movq	-352(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -368(%rbp)
	movq	-368(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -376(%rbp)
	jmp		.L19
.L19:
	movq	-48(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	find, .-find

	.globl	binary_search
	.type	binary_search, @function
binary_search:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$128, %rsp
.L20:
	movq	32(%rbp), %rax
	cmpq	%rax, 24(%rbp)
	jle		.L21
	jmp		.L28
	jmp		.L28
.L21:
	movq	24(%rbp), %rax
	movq	32(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	$2, -24(%rbp)
	movq	-16(%rbp), %rax
	cqto
	idivq	-24(%rbp)
	movq	%rax, -32(%rbp)
	movq	24(%rbp), %rax
	movq	-32(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -56(%rbp)
	movq	40(%rbp), %rax
	cmpq	%rax, -56(%rbp)
	je		.L22
	jmp		.L23
	jmp		.L27
.L22:
	movq	-8(%rbp), %rax
	leave
	ret
	jmp		.L20
.L23:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -72(%rbp)
	movq	40(%rbp), %rax
	cmpq	%rax, -72(%rbp)
	jl		.L24
	jmp		.L25
	jmp		.L26
.L24:
	movq	$1, -80(%rbp)
	movq	-8(%rbp), %rax
	movq	-80(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movq	%rax, 24(%rbp)
	jmp		.L20
.L25:
	movq	$1, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -104(%rbp)
	movq	-104(%rbp), %rax
	movq	%rax, 32(%rbp)
	jmp		.L20
.L26:
	jmp		.L20
.L27:
	jmp		.L20
.L28:
	movq	$1, -112(%rbp)
	movq	-112(%rbp), %rax
	negq	%rax
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	binary_search, .-binary_search

	.globl	LIS
	.type	LIS, @function
LIS:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$672, %rsp
	movq	$50, -408(%rbp)
	movq	$0, -440(%rbp)
	movq	-440(%rbp), %rax
	movq	%rax, -432(%rbp)
	movq	$0, -448(%rbp)
	movq	-448(%rbp), %rax
	movq	%rax, -416(%rbp)
.L29:
	movq	24(%rbp), %rax
	cmpq	%rax, -416(%rbp)
	jl		.L31
	jmp		.L32
	jmp		.L32
.L30:
	movq	-416(%rbp), %rax
	movq	%rax, -456(%rbp)
	movq	-416(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -416(%rbp)
	jmp		.L29
.L31:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -464(%rbp)
	movq	$1, -472(%rbp)
	movq	-464(%rbp), %rax
	movq	-472(%rbp), %rdx
	movq	%rdx, -400(%rbp, %rax)
	jmp		.L30
.L32:
	movq	$1, -480(%rbp)
	movq	-480(%rbp), %rax
	movq	%rax, -416(%rbp)
.L33:
	movq	24(%rbp), %rax
	cmpq	%rax, -416(%rbp)
	jl		.L35
	jmp		.L43
	jmp		.L43
.L34:
	movq	-416(%rbp), %rax
	movq	%rax, -488(%rbp)
	movq	-416(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -416(%rbp)
	jmp		.L33
.L35:
	movq	$0, -496(%rbp)
	movq	-496(%rbp), %rax
	movq	%rax, -424(%rbp)
.L36:
	movq	-416(%rbp), %rax
	cmpq	%rax, -424(%rbp)
	jl		.L38
	jmp		.L34
	jmp		.L42
.L37:
	movq	-424(%rbp), %rax
	movq	%rax, -504(%rbp)
	movq	-424(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -424(%rbp)
	jmp		.L36
.L38:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -512(%rbp)
	movq	-512(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -520(%rbp)
	movq	-424(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -528(%rbp)
	movq	-528(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -536(%rbp)
	movq	-536(%rbp), %rax
	cmpq	%rax, -520(%rbp)
	jg		.L39
	jmp		.L37
.L39:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -544(%rbp)
	movq	-544(%rbp), %rax
	movq	-400(%rbp, %rax), %rdx
	movq	%rdx, -552(%rbp)
	movq	-424(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -560(%rbp)
	movq	-560(%rbp), %rax
	movq	-400(%rbp, %rax), %rdx
	movq	%rdx, -568(%rbp)
	movq	$1, -576(%rbp)
	movq	-568(%rbp), %rax
	movq	-576(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -584(%rbp)
	movq	-584(%rbp), %rax
	cmpq	%rax, -552(%rbp)
	jl		.L40
	jmp		.L37
	jmp		.L41
.L40:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -592(%rbp)
	movq	-424(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -600(%rbp)
	movq	-600(%rbp), %rax
	movq	-400(%rbp, %rax), %rdx
	movq	%rdx, -608(%rbp)
	movq	$1, -616(%rbp)
	movq	-608(%rbp), %rax
	movq	-616(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -624(%rbp)
	movq	-592(%rbp), %rax
	movq	-624(%rbp), %rdx
	movq	%rdx, -400(%rbp, %rax)
	jmp		.L37
	jmp		.L37
.L41:
	jmp		.L37
.L42:
	jmp		.L34
.L43:
	movq	$0, -632(%rbp)
	movq	-632(%rbp), %rax
	movq	%rax, -416(%rbp)
.L44:
	movq	24(%rbp), %rax
	cmpq	%rax, -416(%rbp)
	jl		.L46
	jmp		.L49
	jmp		.L49
.L45:
	movq	-416(%rbp), %rax
	movq	%rax, -640(%rbp)
	movq	-416(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -416(%rbp)
	jmp		.L44
.L46:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -648(%rbp)
	movq	-648(%rbp), %rax
	movq	-400(%rbp, %rax), %rdx
	movq	%rdx, -656(%rbp)
	movq	-656(%rbp), %rax
	cmpq	%rax, -432(%rbp)
	jl		.L47
	jmp		.L45
	jmp		.L48
.L47:
	movq	-416(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -664(%rbp)
	movq	-664(%rbp), %rax
	movq	-400(%rbp, %rax), %rdx
	movq	%rdx, -672(%rbp)
	movq	-672(%rbp), %rax
	movq	%rax, -432(%rbp)
	jmp		.L45
	jmp		.L45
.L48:
	jmp		.L45
.L49:
	movq	-432(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	LIS, .-LIS

	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$1520, %rsp
	movq	$.LC4, %rdi
	pushq	$.LC4
	call	prints
	addq	$8, %rsp
	movq	%rax, -8(%rbp)
	movq	$.LC5, %rdi
	pushq	$.LC5
	call	prints
	addq	$8, %rsp
	movq	%rax, -16(%rbp)
	movq	$.LC6, %rdi
	pushq	$.LC6
	call	prints
	addq	$8, %rsp
	movq	%rax, -24(%rbp)
	movq	$.LC7, %rdi
	pushq	$.LC7
	call	prints
	addq	$8, %rsp
	movq	%rax, -32(%rbp)
	movq	$.LC8, %rdi
	pushq	$.LC8
	call	prints
	addq	$8, %rsp
	movq	%rax, -40(%rbp)
	movq	$.LC9, %rdi
	pushq	$.LC9
	call	prints
	addq	$8, %rsp
	movq	%rax, -56(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	$1, -88(%rbp)
	movq	-88(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L50
	jmp		.L58
	jmp		.L79
.L50:
	movq	$.LC10, %rdi
	pushq	$.LC10
	call	prints
	addq	$8, %rsp
	movq	%rax, -96(%rbp)
	movq	$100, -904(%rbp)
	movq	$.LC11, %rdi
	pushq	$.LC11
	call	prints
	addq	$8, %rsp
	movq	%rax, -936(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -944(%rbp)
	movq	-944(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -952(%rbp)
	movq	-952(%rbp), %rax
	movq	%rax, -912(%rbp)
	movq	$.LC12, %rdi
	pushq	$.LC12
	call	prints
	addq	$8, %rsp
	movq	%rax, -960(%rbp)
	movq	$0, -968(%rbp)
	movq	-968(%rbp), %rax
	movq	%rax, -920(%rbp)
.L51:
	movq	-912(%rbp), %rax
	cmpq	%rax, -920(%rbp)
	jl		.L53
	jmp		.L54
	jmp		.L54
.L52:
	movq	-920(%rbp), %rax
	movq	%rax, -976(%rbp)
	movq	-920(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -920(%rbp)
	jmp		.L51
.L53:
	movq	-920(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -984(%rbp)
	leaq	-928(%rbp), %rax
	movq	%rax, -992(%rbp)
	movq	-992(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1000(%rbp)
	movq	-984(%rbp), %rax
	movq	-1000(%rbp), %rdx
	movq	%rdx, -896(%rbp, %rax)
	jmp		.L52
.L54:
	movq	$.LC13, %rdi
	pushq	$.LC13
	call	prints
	addq	$8, %rsp
	movq	%rax, -1008(%rbp)
	movq	-912(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-896(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	LIS
	addq	$16, %rsp
	movq	%rax, -1024(%rbp)
	movq	-1024(%rbp), %rax
	movq	%rax, -1016(%rbp)
	movq	-1016(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -1032(%rbp)
	movq	$.LC14, %rdi
	pushq	$.LC14
	call	prints
	addq	$8, %rsp
	movq	%rax, -1040(%rbp)
	movq	$.LC15, %rdi
	pushq	$.LC15
	call	prints
	addq	$8, %rsp
	movq	%rax, -1048(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1064(%rbp)
	movq	-1064(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1072(%rbp)
	movq	-1072(%rbp), %rax
	movq	%rax, -1056(%rbp)
	movq	$1, -1080(%rbp)
	movq	-1080(%rbp), %rax
	cmpq	%rax, -1056(%rbp)
	je		.L55
	jmp		.L56
	jmp		.L57
.L55:
	call	main
	addq	$0, %rsp
	movq	%rax, -1096(%rbp)
	movq	-1096(%rbp), %rax
	movq	%rax, -1088(%rbp)
	jmp		.L79
.L56:
	movq	$0, -1104(%rbp)
	movq	-1104(%rbp), %rax
	leave
	ret
	jmp		.L79
.L57:
	jmp		.L79
.L58:
	movq	$2, -1112(%rbp)
	movq	-1112(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L59
	jmp		.L70
	jmp		.L78
.L59:
	movq	$.LC16, %rdi
	pushq	$.LC16
	call	prints
	addq	$8, %rsp
	movq	%rax, -1120(%rbp)
	movq	$100, -1128(%rbp)
	movq	$.LC17, %rdi
	pushq	$.LC17
	call	prints
	addq	$8, %rsp
	movq	%rax, -1136(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1144(%rbp)
	movq	-1144(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1152(%rbp)
	movq	-1152(%rbp), %rax
	movq	%rax, -912(%rbp)
	movq	$.LC18, %rdi
	pushq	$.LC18
	call	prints
	addq	$8, %rsp
	movq	%rax, -1160(%rbp)
	movq	$0, -1168(%rbp)
	movq	-1168(%rbp), %rax
	movq	%rax, -920(%rbp)
.L60:
	movq	-912(%rbp), %rax
	cmpq	%rax, -920(%rbp)
	jl		.L62
	jmp		.L63
	jmp		.L63
.L61:
	movq	-920(%rbp), %rax
	movq	%rax, -1176(%rbp)
	movq	-920(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -920(%rbp)
	jmp		.L60
.L62:
	movq	-920(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1184(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1192(%rbp)
	movq	-1192(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1200(%rbp)
	movq	-1184(%rbp), %rax
	movq	-1200(%rbp), %rdx
	movq	%rdx, -896(%rbp, %rax)
	jmp		.L61
.L63:
	movq	$.LC19, %rdi
	pushq	$.LC19
	call	prints
	addq	$8, %rsp
	movq	%rax, -1208(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1224(%rbp)
	movq	-1224(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1232(%rbp)
	movq	-1232(%rbp), %rax
	movq	%rax, -1216(%rbp)
	movq	$0, -1248(%rbp)
	movq	$1, -1256(%rbp)
	movq	-1256(%rbp), %rax
	movq	-912(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -1264(%rbp)
	movq	-1216(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-1264(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-1248(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-896(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	binary_search
	addq	$32, %rsp
	movq	%rax, -1272(%rbp)
	movq	-1272(%rbp), %rax
	movq	%rax, -1240(%rbp)
	movq	$1, -1280(%rbp)
	movq	-1280(%rbp), %rax
	negq	%rax
	movq	%rax, -1288(%rbp)
	movq	-1288(%rbp), %rax
	cmpq	%rax, -1240(%rbp)
	jne		.L64
	jmp		.L65
	jmp		.L66
.L64:
	movq	$.LC20, %rdi
	pushq	$.LC20
	call	prints
	addq	$8, %rsp
	movq	%rax, -1296(%rbp)
	movq	-1216(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -1304(%rbp)
	movq	$.LC21, %rdi
	pushq	$.LC21
	call	prints
	addq	$8, %rsp
	movq	%rax, -1312(%rbp)
	movq	-1240(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -1320(%rbp)
	movq	$.LC14, %rdi
	pushq	$.LC14
	call	prints
	addq	$8, %rsp
	movq	%rax, -1328(%rbp)
	jmp		.L66
.L65:
	movq	$.LC22, %rdi
	pushq	$.LC22
	call	prints
	addq	$8, %rsp
	movq	%rax, -1336(%rbp)
	jmp		.L66
.L66:
	movq	$.LC23, %rdi
	pushq	$.LC23
	call	prints
	addq	$8, %rsp
	movq	%rax, -1344(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1352(%rbp)
	movq	-1352(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1360(%rbp)
	movq	-1360(%rbp), %rax
	movq	%rax, -1056(%rbp)
	movq	$1, -1368(%rbp)
	movq	-1368(%rbp), %rax
	cmpq	%rax, -1056(%rbp)
	je		.L67
	jmp		.L68
	jmp		.L69
.L67:
	call	main
	addq	$0, %rsp
	movq	%rax, -1376(%rbp)
	movq	-1376(%rbp), %rax
	movq	%rax, -1088(%rbp)
	jmp		.L79
.L68:
	movq	$0, -1384(%rbp)
	movq	-1384(%rbp), %rax
	leave
	ret
	jmp		.L79
.L69:
	jmp		.L79
.L70:
	movq	$3, -1392(%rbp)
	movq	-1392(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L71
	jmp		.L76
	jmp		.L77
.L71:
	movq	$.LC24, %rdi
	pushq	$.LC24
	call	prints
	addq	$8, %rsp
	movq	%rax, -1400(%rbp)
	movq	$100, -1408(%rbp)
	movq	$.LC17, %rdi
	pushq	$.LC17
	call	prints
	addq	$8, %rsp
	movq	%rax, -1416(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1424(%rbp)
	movq	-1424(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1432(%rbp)
	movq	-1432(%rbp), %rax
	movq	%rax, -912(%rbp)
	movq	$.LC18, %rdi
	pushq	$.LC18
	call	prints
	addq	$8, %rsp
	movq	%rax, -1440(%rbp)
	movq	$0, -1448(%rbp)
	movq	-1448(%rbp), %rax
	movq	%rax, -920(%rbp)
.L72:
	movq	-912(%rbp), %rax
	cmpq	%rax, -920(%rbp)
	jl		.L74
	jmp		.L75
	jmp		.L75
.L73:
	movq	-920(%rbp), %rax
	movq	%rax, -1456(%rbp)
	movq	-920(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -920(%rbp)
	jmp		.L72
.L74:
	movq	-920(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1464(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1472(%rbp)
	movq	-1472(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1480(%rbp)
	movq	-1464(%rbp), %rax
	movq	-1480(%rbp), %rdx
	movq	%rdx, -896(%rbp, %rax)
	jmp		.L73
.L75:
	movq	-912(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-896(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	find
	addq	$16, %rsp
	movq	%rax, -1496(%rbp)
	movq	-1496(%rbp), %rax
	movq	%rax, -1488(%rbp)
	jmp		.L79
.L76:
	movq	$0, -1504(%rbp)
	movq	-1504(%rbp), %rax
	leave
	ret
	jmp		.L79
.L77:
	jmp		.L79
.L78:
	jmp		.L79
.L79:
	movq	$0, -1512(%rbp)
	movq	-1512(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
