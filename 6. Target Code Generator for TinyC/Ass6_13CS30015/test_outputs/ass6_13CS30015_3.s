.section	.rodata
.LC0:
	.string	"\n"
.LC1:
	.string	"What method you want to use for sorting ? \n"
.LC2:
	.string	"1. Bubble Sort\n"
.LC3:
	.string	"2. Merge Sort\n"
.LC4:
	.string	"3. Insertion Sort\n"
.LC5:
	.string	"4. Quick Sort\n"
.LC6:
	.string	"\n Enter the index of the method which you want to use\n"
.LC7:
	.string	"\n********* BUBBLE SORT *********\n"
.LC8:
	.string	"Enter the number of elements (<50) of array\n"
.LC9:
	.string	"Enter the elements of array\n"
.LC10:
	.string	"\n Initial Array :  \n"
.LC11:
	.string	"Sorted array is (Using Bubble Sort) \n"
.LC12:
	.string	"Want to use other sorting method ? Enter 1 for yes else press 0\n"
.LC13:
	.string	"\n********* MERGE SORT *********\n"
.LC14:
	.string	"Sorted array is (Using Merge Sort) \n"
.LC15:
	.string	"\n********* INSERTION SORT *********\n"
.LC16:
	.string	"Sorted array is (Using Insertion Sort) \n"
.LC17:
	.string	"\n********* QUICK SORT *********\n"
.LC18:
	.string	"Sorted array is (Using Quick Sort) \n"
	.text

	.globl	quicksort
	.type	quicksort, @function
quicksort:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$240, %rsp
	movq	32(%rbp), %rax
	cmpq	%rax, 24(%rbp)
	jl		.L0
	jmp		.L11
	jmp		.L11
.L0:
	movq	24(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, -16(%rbp)
.L1:
	movq	-16(%rbp), %rax
	cmpq	%rax, -32(%rbp)
	jl		.L2
	jmp		.L10
	jmp		.L10
.L2:
	movq	-32(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -48(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -64(%rbp)
	movq	-64(%rbp), %rax
	cmpq	%rax, -48(%rbp)
	jle		.L3
	jmp		.L5
.L3:
	movq	32(%rbp), %rax
	cmpq	%rax, -32(%rbp)
	jl		.L4
	jmp		.L5
	jmp		.L5
.L4:
	movq	-32(%rbp), %rax
	movq	%rax, -72(%rbp)
	movq	-32(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -32(%rbp)
	jmp		.L2
.L5:
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -80(%rbp)
	movq	-80(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -88(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -96(%rbp)
	movq	-96(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -104(%rbp)
	movq	-104(%rbp), %rax
	cmpq	%rax, -88(%rbp)
	jg		.L6
	jmp		.L7
	jmp		.L7
.L6:
	movq	-16(%rbp), %rax
	movq	%rax, -112(%rbp)
	movq	-16(%rbp), %rax
	subq	$1, %rax
	movq	%rax, -16(%rbp)
	jmp		.L5
.L7:
	movq	-16(%rbp), %rax
	cmpq	%rax, -32(%rbp)
	jl		.L8
	jmp		.L1
	jmp		.L9
.L8:
	movq	-32(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -120(%rbp)
	movq	-120(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -128(%rbp)
	movq	-128(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-32(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -136(%rbp)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -144(%rbp)
	movq	-144(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -152(%rbp)
	movq	-136(%rbp), %rax
	movq	-152(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -160(%rbp)
	movq	-160(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	jmp		.L1
	jmp		.L1
.L9:
	jmp		.L1
.L10:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -176(%rbp)
	movq	-176(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -184(%rbp)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -192(%rbp)
	movq	-192(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -200(%rbp)
	movq	-184(%rbp), %rax
	movq	-200(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -208(%rbp)
	movq	-208(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	$1, -216(%rbp)
	movq	-216(%rbp), %rax
	movq	-16(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -224(%rbp)
	movq	-224(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	24(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	quicksort
	addq	$24, %rsp
	movq	$1, -232(%rbp)
	movq	-16(%rbp), %rax
	movq	-232(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -240(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-240(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	quicksort
	addq	$24, %rsp
	jmp		.L11
	jmp		.L11
.L11:
	leave
	ret
	.size	quicksort, .-quicksort

	.globl	insertionSort
	.type	insertionSort, @function
insertionSort:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$176, %rsp
	movq	$1, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
.L12:
	movq	24(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L14
	jmp		.L19
	jmp		.L19
.L13:
	movq	-8(%rbp), %rax
	movq	%rax, -40(%rbp)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	jmp		.L12
.L14:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	$1, -64(%rbp)
	movq	-64(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -24(%rbp)
.L15:
	movq	$0, -80(%rbp)
	movq	-80(%rbp), %rax
	cmpq	%rax, -24(%rbp)
	jge		.L16
	jmp		.L18
.L16:
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -88(%rbp)
	movq	-88(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -96(%rbp)
	movq	-16(%rbp), %rax
	cmpq	%rax, -96(%rbp)
	jg		.L17
	jmp		.L18
	jmp		.L18
.L17:
	movq	$1, -104(%rbp)
	movq	-24(%rbp), %rax
	movq	-104(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -112(%rbp)
	movq	-112(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -120(%rbp)
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -128(%rbp)
	movq	-128(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -136(%rbp)
	movq	-120(%rbp), %rax
	movq	-136(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	$1, -144(%rbp)
	movq	-144(%rbp), %rax
	movq	-24(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -152(%rbp)
	movq	-152(%rbp), %rax
	movq	%rax, -24(%rbp)
	jmp		.L15
.L18:
	movq	$1, -160(%rbp)
	movq	-24(%rbp), %rax
	movq	-160(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -168(%rbp)
	movq	-168(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -176(%rbp)
	movq	-176(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	jmp		.L13
.L19:
	leave
	ret
	.size	insertionSort, .-insertionSort

	.globl	merge
	.type	merge, @function
merge:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$2000, %rsp
	movq	24(%rbp), %rax
	movq	32(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -40(%rbp)
	movq	$1, -48(%rbp)
	movq	-40(%rbp), %rax
	movq	-48(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	32(%rbp), %rax
	movq	40(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movq	%rax, -64(%rbp)
	movq	$100, -880(%rbp)
	movq	$100, -1688(%rbp)
	movq	$0, -1696(%rbp)
	movq	-1696(%rbp), %rax
	movq	%rax, -8(%rbp)
.L20:
	movq	-32(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L22
	jmp		.L23
	jmp		.L23
.L21:
	movq	-8(%rbp), %rax
	movq	%rax, -1704(%rbp)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	jmp		.L20
.L22:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1712(%rbp)
	movq	24(%rbp), %rax
	movq	-8(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -1720(%rbp)
	movq	-1720(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1728(%rbp)
	movq	-1728(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -1736(%rbp)
	movq	-1712(%rbp), %rax
	movq	-1736(%rbp), %rdx
	movq	%rdx, -872(%rbp, %rax)
	jmp		.L21
.L23:
	movq	$0, -1744(%rbp)
	movq	-1744(%rbp), %rax
	movq	%rax, -16(%rbp)
.L24:
	movq	-64(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	jl		.L26
	jmp		.L27
	jmp		.L27
.L25:
	movq	-16(%rbp), %rax
	movq	%rax, -1752(%rbp)
	movq	-16(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -16(%rbp)
	jmp		.L24
.L26:
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1760(%rbp)
	movq	$1, -1768(%rbp)
	movq	32(%rbp), %rax
	movq	-1768(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -1776(%rbp)
	movq	-1776(%rbp), %rax
	movq	-16(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -1784(%rbp)
	movq	-1784(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1792(%rbp)
	movq	-1792(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -1800(%rbp)
	movq	-1760(%rbp), %rax
	movq	-1800(%rbp), %rdx
	movq	%rdx, -1680(%rbp, %rax)
	jmp		.L25
.L27:
	movq	$0, -1808(%rbp)
	movq	-1808(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	$0, -1816(%rbp)
	movq	-1816(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, -24(%rbp)
.L28:
	movq	-32(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L29
	jmp		.L34
.L29:
	movq	-64(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	jl		.L30
	jmp		.L34
	jmp		.L34
.L30:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1824(%rbp)
	movq	-1824(%rbp), %rax
	movq	-872(%rbp, %rax), %rdx
	movq	%rdx, -1832(%rbp)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1840(%rbp)
	movq	-1840(%rbp), %rax
	movq	-1680(%rbp, %rax), %rdx
	movq	%rdx, -1848(%rbp)
	movq	-1848(%rbp), %rax
	cmpq	%rax, -1832(%rbp)
	jle		.L31
	jmp		.L32
	jmp		.L33
.L31:
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1856(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1864(%rbp)
	movq	-1864(%rbp), %rax
	movq	-872(%rbp, %rax), %rdx
	movq	%rdx, -1872(%rbp)
	movq	-1856(%rbp), %rax
	movq	-1872(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-8(%rbp), %rax
	movq	%rax, -1880(%rbp)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	jmp		.L33
.L32:
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1888(%rbp)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1896(%rbp)
	movq	-1896(%rbp), %rax
	movq	-1680(%rbp, %rax), %rdx
	movq	%rdx, -1904(%rbp)
	movq	-1888(%rbp), %rax
	movq	-1904(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-16(%rbp), %rax
	movq	%rax, -1912(%rbp)
	movq	-16(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -16(%rbp)
	jmp		.L33
.L33:
	movq	-24(%rbp), %rax
	movq	%rax, -1920(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	jmp		.L28
.L34:
	movq	-32(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L35
	jmp		.L36
	jmp		.L36
.L35:
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1928(%rbp)
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1936(%rbp)
	movq	-1936(%rbp), %rax
	movq	-872(%rbp, %rax), %rdx
	movq	%rdx, -1944(%rbp)
	movq	-1928(%rbp), %rax
	movq	-1944(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-8(%rbp), %rax
	movq	%rax, -1952(%rbp)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -1960(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	jmp		.L34
.L36:
	movq	-64(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	jl		.L37
	jmp		.L38
	jmp		.L38
.L37:
	movq	-24(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1968(%rbp)
	movq	-16(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1976(%rbp)
	movq	-1976(%rbp), %rax
	movq	-1680(%rbp, %rax), %rdx
	movq	%rdx, -1984(%rbp)
	movq	-1968(%rbp), %rax
	movq	-1984(%rbp), %rdx
	movq	16(%rbp), %rcx
	movq	%rdx, (%rcx, %rax)
	movq	-16(%rbp), %rax
	movq	%rax, -1992(%rbp)
	movq	-16(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -2000(%rbp)
	movq	-24(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -24(%rbp)
	jmp		.L36
.L38:
	leave
	ret
	leave
	ret
	.size	merge, .-merge

	.globl	printArray
	.type	printArray, @function
printArray:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$64, %rsp
	movq	$0, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, -8(%rbp)
.L39:
	movq	24(%rbp), %rax
	cmpq	%rax, -8(%rbp)
	jl		.L41
	jmp		.L42
	jmp		.L42
.L40:
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -8(%rbp)
	jmp		.L39
.L41:
	movq	-8(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	16(%rbp), %rcx
	movq	(%rcx, %rax), %rdx
	movq	%rdx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printi
	addq	$8, %rsp
	movq	%rax, -48(%rbp)
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -56(%rbp)
	jmp		.L40
.L42:
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -64(%rbp)
	leave
	ret
	leave
	ret
	.size	printArray, .-printArray

	.globl	mergeSort
	.type	mergeSort, @function
mergeSort:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	movq	32(%rbp), %rax
	cmpq	%rax, 24(%rbp)
	jl		.L43
	jmp		.L44
	jmp		.L44
.L43:
	movq	24(%rbp), %rax
	movq	32(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -16(%rbp)
	movq	$2, -24(%rbp)
	movq	-16(%rbp), %rax
	cqto
	idivq	-24(%rbp)
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	24(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	mergeSort
	addq	$24, %rsp
	movq	$1, -40(%rbp)
	movq	-8(%rbp), %rax
	movq	-40(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -48(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	mergeSort
	addq	$24, %rsp
	movq	32(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	24(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	merge
	addq	$32, %rsp
	jmp		.L44
	jmp		.L44
.L44:
	leave
	ret
	.size	mergeSort, .-mergeSort

	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$1440, %rsp
	movq	$.LC1, %rdi
	pushq	$.LC1
	call	prints
	addq	$8, %rsp
	movq	%rax, -8(%rbp)
	movq	$.LC2, %rdi
	pushq	$.LC2
	call	prints
	addq	$8, %rsp
	movq	%rax, -16(%rbp)
	movq	$.LC3, %rdi
	pushq	$.LC3
	call	prints
	addq	$8, %rsp
	movq	%rax, -24(%rbp)
	movq	$.LC4, %rdi
	pushq	$.LC4
	call	prints
	addq	$8, %rsp
	movq	%rax, -32(%rbp)
	movq	$.LC5, %rdi
	pushq	$.LC5
	call	prints
	addq	$8, %rsp
	movq	%rax, -40(%rbp)
	movq	$.LC6, %rdi
	pushq	$.LC6
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
	je		.L45
	jmp		.L63
	jmp		.L93
.L45:
	movq	$.LC7, %rdi
	pushq	$.LC7
	call	prints
	addq	$8, %rsp
	movq	%rax, -96(%rbp)
	movq	$50, -504(%rbp)
	movq	$.LC8, %rdi
	pushq	$.LC8
	call	prints
	addq	$8, %rsp
	movq	%rax, -536(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -552(%rbp)
	movq	-552(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -560(%rbp)
	movq	-560(%rbp), %rax
	movq	%rax, -544(%rbp)
	movq	$.LC9, %rdi
	pushq	$.LC9
	call	prints
	addq	$8, %rsp
	movq	%rax, -568(%rbp)
	movq	$0, -576(%rbp)
	movq	-576(%rbp), %rax
	movq	%rax, -512(%rbp)
.L46:
	movq	-544(%rbp), %rax
	cmpq	%rax, -512(%rbp)
	jl		.L48
	jmp		.L49
	jmp		.L49
.L47:
	movq	-512(%rbp), %rax
	movq	%rax, -584(%rbp)
	movq	-512(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -512(%rbp)
	jmp		.L46
.L48:
	movq	-512(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -592(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -600(%rbp)
	movq	-600(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -608(%rbp)
	movq	-592(%rbp), %rax
	movq	-608(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	jmp		.L47
.L49:
	movq	$.LC10, %rdi
	pushq	$.LC10
	call	prints
	addq	$8, %rsp
	movq	%rax, -616(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$2, -624(%rbp)
	movq	-624(%rbp), %rax
	movq	-544(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -632(%rbp)
	movq	-632(%rbp), %rax
	movq	%rax, -512(%rbp)
.L50:
	movq	$0, -640(%rbp)
	movq	-640(%rbp), %rax
	cmpq	%rax, -512(%rbp)
	jge		.L52
	jmp		.L59
	jmp		.L59
.L51:
	movq	-512(%rbp), %rax
	movq	%rax, -648(%rbp)
	movq	-512(%rbp), %rax
	subq	$1, %rax
	movq	%rax, -512(%rbp)
	jmp		.L50
.L52:
	movq	$0, -656(%rbp)
	movq	-656(%rbp), %rax
	movq	%rax, -520(%rbp)
.L53:
	movq	-512(%rbp), %rax
	cmpq	%rax, -520(%rbp)
	jle		.L55
	jmp		.L51
	jmp		.L58
.L54:
	movq	-520(%rbp), %rax
	movq	%rax, -664(%rbp)
	movq	-520(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -520(%rbp)
	jmp		.L53
.L55:
	movq	-520(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -672(%rbp)
	movq	-672(%rbp), %rax
	movq	-496(%rbp, %rax), %rdx
	movq	%rdx, -680(%rbp)
	movq	$1, -688(%rbp)
	movq	-520(%rbp), %rax
	movq	-688(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -696(%rbp)
	movq	-696(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -704(%rbp)
	movq	-704(%rbp), %rax
	movq	-496(%rbp, %rax), %rdx
	movq	%rdx, -712(%rbp)
	movq	-712(%rbp), %rax
	cmpq	%rax, -680(%rbp)
	jg		.L56
	jmp		.L54
	jmp		.L57
.L56:
	movq	-520(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -720(%rbp)
	movq	-720(%rbp), %rax
	movq	-496(%rbp, %rax), %rdx
	movq	%rdx, -728(%rbp)
	movq	-728(%rbp), %rax
	movq	%rax, -528(%rbp)
	movq	-520(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -736(%rbp)
	movq	$1, -744(%rbp)
	movq	-520(%rbp), %rax
	movq	-744(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -752(%rbp)
	movq	-752(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -760(%rbp)
	movq	-760(%rbp), %rax
	movq	-496(%rbp, %rax), %rdx
	movq	%rdx, -768(%rbp)
	movq	-736(%rbp), %rax
	movq	-768(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	movq	$1, -776(%rbp)
	movq	-520(%rbp), %rax
	movq	-776(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -784(%rbp)
	movq	-784(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -792(%rbp)
	movq	-792(%rbp), %rax
	movq	-528(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	jmp		.L54
	jmp		.L54
.L57:
	jmp		.L54
.L58:
	jmp		.L51
.L59:
	movq	$.LC11, %rdi
	pushq	$.LC11
	call	prints
	addq	$8, %rsp
	movq	%rax, -800(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -808(%rbp)
	movq	$.LC12, %rdi
	pushq	$.LC12
	call	prints
	addq	$8, %rsp
	movq	%rax, -816(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -832(%rbp)
	movq	-832(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -840(%rbp)
	movq	-840(%rbp), %rax
	movq	%rax, -824(%rbp)
	movq	$1, -848(%rbp)
	movq	-848(%rbp), %rax
	cmpq	%rax, -824(%rbp)
	je		.L60
	jmp		.L61
	jmp		.L62
.L60:
	call	main
	addq	$0, %rsp
	movq	%rax, -864(%rbp)
	movq	-864(%rbp), %rax
	movq	%rax, -856(%rbp)
	jmp		.L93
.L61:
	movq	$0, -872(%rbp)
	movq	-872(%rbp), %rax
	leave
	ret
	jmp		.L93
.L62:
	jmp		.L93
.L63:
	movq	$2, -880(%rbp)
	movq	-880(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L64
	jmp		.L72
	jmp		.L92
.L64:
	movq	$.LC13, %rdi
	pushq	$.LC13
	call	prints
	addq	$8, %rsp
	movq	%rax, -888(%rbp)
	movq	$50, -896(%rbp)
	movq	$.LC8, %rdi
	pushq	$.LC8
	call	prints
	addq	$8, %rsp
	movq	%rax, -904(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -912(%rbp)
	movq	-912(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -920(%rbp)
	movq	-920(%rbp), %rax
	movq	%rax, -544(%rbp)
	movq	$.LC9, %rdi
	pushq	$.LC9
	call	prints
	addq	$8, %rsp
	movq	%rax, -928(%rbp)
	movq	$0, -936(%rbp)
	movq	-936(%rbp), %rax
	movq	%rax, -512(%rbp)
.L65:
	movq	-544(%rbp), %rax
	cmpq	%rax, -512(%rbp)
	jl		.L67
	jmp		.L68
	jmp		.L68
.L66:
	movq	-512(%rbp), %rax
	movq	%rax, -944(%rbp)
	movq	-512(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -512(%rbp)
	jmp		.L65
.L67:
	movq	-512(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -952(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -960(%rbp)
	movq	-960(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -968(%rbp)
	movq	-952(%rbp), %rax
	movq	-968(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	jmp		.L66
.L68:
	movq	$.LC10, %rdi
	pushq	$.LC10
	call	prints
	addq	$8, %rsp
	movq	%rax, -976(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$0, -984(%rbp)
	movq	$1, -992(%rbp)
	movq	-992(%rbp), %rax
	movq	-544(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -1000(%rbp)
	movq	-1000(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-984(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	mergeSort
	addq	$24, %rsp
	movq	$.LC14, %rdi
	pushq	$.LC14
	call	prints
	addq	$8, %rsp
	movq	%rax, -1008(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -1016(%rbp)
	movq	$.LC12, %rdi
	pushq	$.LC12
	call	prints
	addq	$8, %rsp
	movq	%rax, -1024(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1032(%rbp)
	movq	-1032(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1040(%rbp)
	movq	-1040(%rbp), %rax
	movq	%rax, -824(%rbp)
	movq	$1, -1048(%rbp)
	movq	-1048(%rbp), %rax
	cmpq	%rax, -824(%rbp)
	je		.L69
	jmp		.L70
	jmp		.L71
.L69:
	call	main
	addq	$0, %rsp
	movq	%rax, -1056(%rbp)
	movq	-1056(%rbp), %rax
	movq	%rax, -856(%rbp)
	jmp		.L93
.L70:
	movq	$0, -1064(%rbp)
	movq	-1064(%rbp), %rax
	leave
	ret
	jmp		.L93
.L71:
	jmp		.L93
.L72:
	movq	$3, -1072(%rbp)
	movq	-1072(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L73
	jmp		.L81
	jmp		.L91
.L73:
	movq	$.LC15, %rdi
	pushq	$.LC15
	call	prints
	addq	$8, %rsp
	movq	%rax, -1080(%rbp)
	movq	$50, -1088(%rbp)
	movq	$.LC8, %rdi
	pushq	$.LC8
	call	prints
	addq	$8, %rsp
	movq	%rax, -1096(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1104(%rbp)
	movq	-1104(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1112(%rbp)
	movq	-1112(%rbp), %rax
	movq	%rax, -544(%rbp)
	movq	$.LC9, %rdi
	pushq	$.LC9
	call	prints
	addq	$8, %rsp
	movq	%rax, -1120(%rbp)
	movq	$0, -1128(%rbp)
	movq	-1128(%rbp), %rax
	movq	%rax, -512(%rbp)
.L74:
	movq	-544(%rbp), %rax
	cmpq	%rax, -512(%rbp)
	jl		.L76
	jmp		.L77
	jmp		.L77
.L75:
	movq	-512(%rbp), %rax
	movq	%rax, -1136(%rbp)
	movq	-512(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -512(%rbp)
	jmp		.L74
.L76:
	movq	-512(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1144(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1152(%rbp)
	movq	-1152(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1160(%rbp)
	movq	-1144(%rbp), %rax
	movq	-1160(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	jmp		.L75
.L77:
	movq	$.LC10, %rdi
	pushq	$.LC10
	call	prints
	addq	$8, %rsp
	movq	%rax, -1168(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	insertionSort
	addq	$16, %rsp
	movq	$.LC16, %rdi
	pushq	$.LC16
	call	prints
	addq	$8, %rsp
	movq	%rax, -1176(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -1184(%rbp)
	movq	$.LC12, %rdi
	pushq	$.LC12
	call	prints
	addq	$8, %rsp
	movq	%rax, -1192(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1200(%rbp)
	movq	-1200(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1208(%rbp)
	movq	-1208(%rbp), %rax
	movq	%rax, -824(%rbp)
	movq	$1, -1216(%rbp)
	movq	-1216(%rbp), %rax
	cmpq	%rax, -824(%rbp)
	je		.L78
	jmp		.L79
	jmp		.L80
.L78:
	call	main
	addq	$0, %rsp
	movq	%rax, -1224(%rbp)
	movq	-1224(%rbp), %rax
	movq	%rax, -856(%rbp)
	jmp		.L93
.L79:
	movq	$0, -1232(%rbp)
	movq	-1232(%rbp), %rax
	leave
	ret
	jmp		.L93
.L80:
	jmp		.L93
.L81:
	movq	$4, -1240(%rbp)
	movq	-1240(%rbp), %rax
	cmpq	%rax, -64(%rbp)
	je		.L82
	jmp		.L93
	jmp		.L90
.L82:
	movq	$.LC17, %rdi
	pushq	$.LC17
	call	prints
	addq	$8, %rsp
	movq	%rax, -1248(%rbp)
	movq	$50, -1256(%rbp)
	movq	$.LC8, %rdi
	pushq	$.LC8
	call	prints
	addq	$8, %rsp
	movq	%rax, -1264(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1272(%rbp)
	movq	-1272(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1280(%rbp)
	movq	-1280(%rbp), %rax
	movq	%rax, -544(%rbp)
	movq	$.LC9, %rdi
	pushq	$.LC9
	call	prints
	addq	$8, %rsp
	movq	%rax, -1288(%rbp)
	movq	$0, -1296(%rbp)
	movq	-1296(%rbp), %rax
	movq	%rax, -512(%rbp)
.L83:
	movq	-544(%rbp), %rax
	cmpq	%rax, -512(%rbp)
	jl		.L85
	jmp		.L86
	jmp		.L86
.L84:
	movq	-512(%rbp), %rax
	movq	%rax, -1304(%rbp)
	movq	-512(%rbp), %rax
	addq	$1, %rax
	movq	%rax, -512(%rbp)
	jmp		.L83
.L85:
	movq	-512(%rbp), %rax
	imulq	$8, %rax
	movq	%rax, -1312(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1320(%rbp)
	movq	-1320(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1328(%rbp)
	movq	-1312(%rbp), %rax
	movq	-1328(%rbp), %rdx
	movq	%rdx, -496(%rbp, %rax)
	jmp		.L84
.L86:
	movq	$.LC10, %rdi
	pushq	$.LC10
	call	prints
	addq	$8, %rsp
	movq	%rax, -1336(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$0, -1344(%rbp)
	movq	$1, -1352(%rbp)
	movq	-1352(%rbp), %rax
	movq	-544(%rbp), %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -1360(%rbp)
	movq	-1360(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	movq	-1344(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	quicksort
	addq	$24, %rsp
	movq	$.LC18, %rdi
	pushq	$.LC18
	call	prints
	addq	$8, %rsp
	movq	%rax, -1368(%rbp)
	movq	-544(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	leaq	-496(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	printArray
	addq	$16, %rsp
	movq	$.LC0, %rdi
	pushq	$.LC0
	call	prints
	addq	$8, %rsp
	movq	%rax, -1376(%rbp)
	movq	$.LC12, %rdi
	pushq	$.LC12
	call	prints
	addq	$8, %rsp
	movq	%rax, -1384(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -1392(%rbp)
	movq	-1392(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax
	call	readi
	addq	$8, %rsp
	movq	%rax, -1400(%rbp)
	movq	-1400(%rbp), %rax
	movq	%rax, -824(%rbp)
	movq	$1, -1408(%rbp)
	movq	-1408(%rbp), %rax
	cmpq	%rax, -824(%rbp)
	je		.L87
	jmp		.L88
	jmp		.L89
.L87:
	call	main
	addq	$0, %rsp
	movq	%rax, -1416(%rbp)
	movq	-1416(%rbp), %rax
	movq	%rax, -856(%rbp)
	jmp		.L93
.L88:
	movq	$0, -1424(%rbp)
	movq	-1424(%rbp), %rax
	leave
	ret
	jmp		.L93
.L89:
	jmp		.L93
	jmp		.L93
.L90:
	jmp		.L93
.L91:
	jmp		.L93
.L92:
	jmp		.L93
.L93:
	movq	$0, -1432(%rbp)
	movq	-1432(%rbp), %rax
	leave
	ret
	leave
	ret
	.size	main, .-main
