# Himanshu Verma
# 13CS30015
# Description of Assignment 
# First, we need the .s (Assembly Language Code extension) file of given file
# Then, we have to comment the whole assembly language code	

#Registers used
# %rdi -> 1st argument to a function
# %rsi -> 2nd argument to a function
# %rdx -> 3rd argument to a function
# %rcx -> 4th argument to a function
# %rax -> returns the value from the function


	.file	"ass1_13CS30015.c"                      # source file name
	.section	.rodata                  		    # read-only data section

.LC0:												# Label of f-string-1st printf 
	.string	"Enter the order: "              

.LC1:												# Label of f-string-1st scanf
	.string	"%d"                             

.LC2:												# Label of f-string-2nd printf 
	.string	"Enter matix A in row-major: "  

.LC3:												# Label of f-string-3rd printf 
	.string	"Enter matix B in row-major: "   

.LC4:												# Label of f-string-4th printf 
	.string	"The output matrix is:"     

.LC5:												# Label of f-string-5th printf 
	.string	"%d"          

	.text                                   	    # Code Starts
	.globl	main                             	 	# main is a global name
	.type	main, @function                  		# main is a function

main:                                        		# main function starts

.LFB0:												# Local label
	.cfi_startproc
	pushq	%rbp                             		# Save old base pointer 	
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp                              # rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$4816, %rsp                   		    # Create space for local arrays (A,B,C) and local variables
													# Space for Arrays ( 3(Three arrays)* (20*20) (Size of array) * 4 (Size of a int) = 4800)
													# 3 integers (3* 4(size of a int) = 12) 
													# Net space = 4812
													# In x86_64, the stack pointer is always kept with 16-byte alignment
													# Therefore, net space = 4816

	movl	$.LC0, %edi                     	    # value of .LC0 is stored into %edi that is setting the input format string as 1st parameter
	
	movl	$0, %eax                         		# Sets %eax to 0 
													# Doesn't create a dependency on the previous value, that the cpu would have to wait on.
													# Without this behaviour, every single 32bit instruction in 64bit mode would have to wait on something 
													# that happened before, even though that upper 32 bits register would almost never be used
	
	call	printf                           		# Calls printf for print the stored data of %edi -> ""

	leaq	-4812(%rbp), %rax              		    # here %rax returns the value of n which is the order of the matrix	

	movq	%rax, %rsi                              # The address of n from $rax is stored into $rsi . 
	movl	$.LC1, %edi                      	    # value of .LC1 is stored into %edi that is setting the input format string as 1st parameter
	movl	$0, %eax                         		# Sets %eax to 0
	call	__isoc99_scanf                   		# Calls scanf to read the value of n.

	movl	$.LC2, %edi                      		# value of .LC2 is stored into %edi that is setting the input format string as 1st parameter
	movl	$0, %eax                         		# Sets %eax to 0
	call	printf                           		# Calls printf for print the stored data of %edi -> "Enter matrix A in row-major: "
	movl	-4812(%rbp), %eax                		# %eax stores the value of n
	leaq	-4800(%rbp), %rdx                		# %rdx stores the address of Matrix A.

	movq	%rdx, %rsi                       		# %rsi has the pointer to Matrix A
	movl	%eax, %edi                       		# %edi stores the value of %eax i.e n.
	
	call	ReadMatrix                     		    # Calls ReadMatrix function with first parameter n and second parameter pointer to A.
	
	movl	$.LC3, %edi                      		# value of .LC3 is stored into %edi that is setting the input format string as 1st parameter
	movl	$0, %eax                				# Sets %eax to 0
	call	printf                          	    # Calls printf for print the stored data of %edi -> "Enter matix B in row-major: "
	movl	-4812(%rbp), %eax                		# %eax stores the value of n
	leaq	-3200(%rbp), %rdx                		# %rdx stores the address of the pointer to Matrix B
	
	movq	%rdx, %rsi                       		# %rsi holds the value of %rdx
	movl	%eax, %edi                       		# %edi holds the value of n
	
	call	ReadMatrix                       		# Calls the ReadMatrix function
	
	movl	-4812(%rbp), %eax                		# %eax holds the value of n
	leaq	-1600(%rbp), %rcx                		# %rcx stores the address of the pointer to Matrix C
	leaq	-3200(%rbp), %rdx                		# %rdx stores the address of the pointer to Matrix B
	leaq	-4800(%rbp), %rsi                		# %rbx stores the address of the pointer to Matrix A
	
	movl	%eax, %edi                       		# %edi holds the value of n
	
	call	MultiplyMatrix                   		# Calls the MultiplyMatrix function with arguments edi,rsi,rdx,rcx i.e n,A,B,C.
	
	movl	$.LC4, %edi                      		# value of .LC4 is stored into %edi that is setting the input format string as 1st parameter
	call	puts                             		# Prints the string stored in %edi -> "The output matrix is: "Enter matrix B in row-major: "
	
	movl	$0, -4808(%rbp)                  		# Initialize i(Memory Location (rbp-4808)) to 0
	jmp	.L2                                  		# Jumps to label L2

.L5:  		                                        # Start of L5
	movl	$0, -4804(%rbp)                  		# Initialize j to 0
	jmp	.L3                                  		# Jumps to label L3

.L4:                                         		# Start of L4
	movl	-4804(%rbp), %eax                		# %eax stores the value of j.
	movslq	%eax, %rcx                       		# Converts j to 64bit and stores in %rcx
	movl	-4808(%rbp), %eax                		# %eax stores the value of i.
	movslq	%eax, %rdx                       		# Converts i to 64 bit and stores in %rdx
	
	movq	%rdx, %rax                       		# %rax stores the value of %rdx i.e. %rax = i
	salq	$2, %rax                         		# %rax is multiplied by 4 i.e. %rax = 4*i
	addq	%rdx, %rax                       		# %rax stores the sum of itself and %rdx i.e. %rax = %rdx + %rax. i.e (%rax = 5*i)
	salq	$2, %rax 								# %rax is multiplied by 4 i.e %rax = 20*i
	
	addq	%rcx, %rax 								# %rax stores the sum of itself and %rcx i.e. %rax = %rcx + %rax.	i.e (%rax = 20*i + j)					
	movl	-1600(%rbp,%rax,4), %eax                # %eax stores the value of (%rbp + 4*%rax) i.e. %eax = 
	movl	%eax, %esi 								# %esi stores the value of %eax.
	
	movl	$.LC5, %edi								# value of .LC5 is stored into %edi that is setting the input format string as 1st parameter.
	movl	$0, %eax								# Sets %eax to 0
	call	printf									# Calls printf for print the stored data of %edi -> "Elements of output matrix:"
	addl	$1, -4804(%rbp)							# Increment the value of j by 1.

.L3:												# Start of L3
	movl	-4812(%rbp), %eax              			# %eax holds the value of n
	cmpl	%eax, -4804(%rbp)						# Compare value of 'j' with n
	jl	.L4											# if(value is less than n) then Jumps to label L4.
	
	movl	$10, %edi								# Store the next line character in register %edi.
	call	putchar									# Print the next line character.
	addl	$1, -4808(%rbp)               		    # Increment the value of i by 1.

.L2:												# Start of L2 
	movl	-4812(%rbp), %eax              			# %eax holds the value of n
	cmpl	%eax, -4808(%rbp)              			# Compare value of 'i' with n
	jl	.L5											# if(value is less than n) then Jumps to label L5. 
	
	movl	$0, %eax								# if (value is greater than or equal to n) then sets %eax to 0.
	leave											# Return 0
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

.LFE0:												# Local label
	.size	main, .-main
	.section	.rodata								# read-only data section

.LC6:											
	.string	"The input matrix is:"
	
	.text											
	.globl	ReadMatrix								# ReadMatrix is global
	.type	ReadMatrix, @function					# ReadMatrix is a function

ReadMatrix:											# ReadMatrix function starts

.LFB1:												# Local label
	.cfi_startproc
	pushq	%rbp									# Save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	
	movq	%rsp, %rbp   							# rbp <-- rsp set new stack base pointer				
	.cfi_def_cfa_register 6
	subq	$32, %rsp                    			# space for all the variables(i,j) 
	movl	%edi, -20(%rbp)               			# value of n stores in %edi
	movq	%rsi, -32(%rbp)                         # pointer to array is stored in this location
	movl	$0, -8(%rbp)                 		    # Initialize i to zero
	jmp	.L8                              		    # Jumps to label L8

.L11:												# Start of L11
	
	movl	$0, -4(%rbp)							# Initialize j to zero
	jmp	.L9											# Jumps to label L9

.L10:												# Start of L10
	
	movl	-8(%rbp), %eax							# %eax stores the value of i.
	movslq	%eax, %rdx								# Converts i to 64bit and stores in %rcx
	movq	%rdx, %rax  							# %rax stores the value of %rdx i.e %rax also contains i
	salq	$2, %rax 								# %rax is multiplied by 4 i.e. %rax = 4*i
	
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e %rax = %rdx + %rax (%rax = 5*i)
	salq	$4, %rax 								# %rax is multiplied by 16 i.e. %rax = 80*i
	movq	%rax, %rdx								# %rdx stores the value of %rax i.e %rdx also contains 80*i
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	
	addq	%rax, %rdx								# %rdx stores the sum of itself and %rdx i.e %rdx = %rdx + %rax (%rdx = 80*i + address of the matrix's initial element)
	movl	-4(%rbp), %eax							# %eax stores the value of j.			
	cltq
	salq	$2, %rax     							# %rax is multiplied by 4 i.e. %rax = 4*j
	
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e %rax = %rdx + %rax (%rax = 80*i + address of the matrix's initial element+4*j)
	movq	%rax, %rsi 								# %rsi stores the value of %rax
	movl	$.LC1, %edi 							# value of .LC1 is stored into %edi that is setting the input format string as 1st parameter.
	movl	$0, %eax 								# Set %eax to zero
	
	call	__isoc99_scanf							# Calls scanf to read the value of n.
	addl	$1, -4(%rbp) 							# Increment the value of j by 1.

.L9:												# Start of L9
	
	movl	-4(%rbp), %eax			 				# value of j is stored in %eax							
	cmpl	-20(%rbp), %eax							# Compares j and n
	jl	.L10										# if j is less than n jumps to label L11
	addl	$1, -8(%rbp)							# Increment the value of i by 1.					

.L8:												# Start of L8
	
	movl	-8(%rbp), %eax                		    # value of i is stored in %eax
	cmpl	-20(%rbp), %eax							# Compares i and n
	jl	.L11										# if i is less than n jumps to label L11
	movl	$.LC6, %edi                    		    # value of .LC6 is stored into %edi that is setting the input format string as 1st parameter.
	
	call	puts                            		# Calls printf for print the stored data of %edi -> "The input matrix is:"
	movl	$0, -8(%rbp)                    		# Value of i is set to zero
	jmp	.L12                                		# Jumps to  L12 

.L15: 												# Start of L15

	movl	$0, -4(%rbp)                  		    # Sets j to 0
	jmp	.L13                                		# Jumps to L13

.L14: 												# Start of L14

	movl	-8(%rbp), %eax                		    # %eax holds the value of i
	movslq	%eax, %rdx                      		# i is converted to 64 bit and is stored in &rdx
	movq	%rdx, %rax                      		# %rax holds the value of %rdx i.e. %rax = i
	salq	$2, %rax                        		# %rax is multiplied by 4 i.e. %rax = 4*i
	
	addq	%rdx, %rax								# %rax stores the sum of itself and %rdx i.e %rax = %rdx + %rax (%rax = 5*i)
	salq	$4, %rax 								# %rax is multiplied by 16 i.e. %rax = 80*i
	movq	%rax, %rdx 								# %rdx stores the value of %rax i.e %rdx also contains 80*i
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	
	addq	%rax, %rdx 								# %rdx stores the sum of itself and %rdx i.e %rdx = %rdx + %rax (%rdx = 80*i + address of the matrix's initial element)
	movl	-4(%rbp), %eax 							# %eax stores the value of j.
	cltq
	movl	(%rdx,%rax,4), %eax 					# %eax holds the value of %rdx + 4*%rax 
	
	movl	%eax, %esi
	movl	$.LC5, %edi 							# value of .LC5 is stored into %edi that is setting the input format string as 1st parameter.
	movl	$0, %eax 								# Set %eax to zero
	call	printf									# Calls printf for print the stored data
	addl	$1, -4(%rbp)                   			# increments the j

.L13: 												# Start of L13

	movl	-4(%rbp), %eax                		    # %eax holds the value of j
	cmpl	-20(%rbp), %eax							# Compares the value of j and n
	jl	.L14 										# if j is less than n then jumps to L14

	movl	$10, %edi 								# %edi store the new line character
	call	putchar 								# Print the new line character
	addl	$1, -8(%rbp) 							# Increment the i by 1

.L12: 												# Start of L13

	movl	-8(%rbp), %eax 							# %eax holds the value of j
	cmpl	-20(%rbp), %eax                			# Compares the value of j and n
	jl	.L15 										# if j is less than n then jumps to L15
	
	leave 											# Return
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

.LFE1:
	.size	ReadMatrix, .-ReadMatrix
	.section	.rodata 							 # read-only data section

.LC7:
	.string	"The transposed matrix is:"
	
	.text 											 # text data section
	.globl	TransposeMatrix 						 # TransposeMatrix is a global name
	.type	TransposeMatrix, @function 				 # TransposeMatrix is a function

TransposeMatrix:  									 # Call TransposeMatrix 

.LFB2:
	.cfi_startproc
	pushq	%rbp                        			# Saves the stack base pointer 
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp                   		    # rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	subq	$32, %rsp    			                # 32 bits 16 bit offset for storing local variables
	movl	%edi, -20(%rbp)               			# %edi is the first parmeter and stored the value of n
	movq	%rsi, -32(%rbp)               			# %rsi stores the second argument i.e pointer to the data array  
	movl	$0, -12(%rbp)                 			# Initialize i to zero
	jmp	.L17                              			# Jumps to line 17

.L20:
	
	movl	$0, -8(%rbp)                  			# Initialize i to zero
	jmp	.L18 										# Jumps to line 18

.L19:
	
	movl	-12(%rbp), %eax               			# %eax holds the value of i 
	movslq	%eax, %rdx                    			# i is converted to 64 bit and stored in %rdx
	movq	%rdx, %rax                    			# store the value of %rdx in %rax 
	salq	$2, %rax                     		    # %rax is multiplted by 4 i.e %rax = 4*i
	
	addq	%rdx, %rax                    			# %rax stores the sum of itself and %rdx i.e. %rax = %rax+%rdx (5*i)
	salq	$4, %rax                      			# %rax is multiplted by 16 i.e %rax = 80*i
	movq	%rax, %rdx                    			# store the value of %rdx in %rax 
	movq	-32(%rbp), %rax               			# %rax stores the address of the matrix's initial element
	addq	%rax, %rdx                    			# %rdx stores the sum of itself and %rdx i.e %rdx = %rdx + %rax (%rdx = 80*i + address of the matrix's initial element)
	movl	-8(%rbp), %eax                			# %eax holds the value of j
	cltq
	
	movl	(%rdx,%rax,4), %eax           			# rdx + rax * 4 is set the value of eax (address + 80*i + 4*j)
	movl	%eax, -4(%rbp)                			# store the value of %eax in t
	movl	-12(%rbp), %eax               			# eax gets the value of i
	movslq	%eax, %rdx                    			# Converts %eax to 64bit and stores in %rdx
	movq	%rdx, %rax                    			# Store the value of %rdx in %rax(i.e. %rax = i) 
	
	salq	$2, %rax 								# %rax is multiplted by 4 i.e %rax = 4*i						
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e. %rax = %rax+%rdx (5*i)
	salq	$4, %rax 								# %rax is multiplted by 16 i.e %rax = 80*i
	movq	%rax, %rdx								# store the value of %rdx in %rax 
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	
	leaq	(%rdx,%rax), %rcx 						# %rcx stores the sum of %rdx and %rax(i.e %rcx = Address of(data[0][0]) + 80*i)				
	movl	-8(%rbp), %eax							# %eax holds the value of j
	movslq	%eax, %rdx								# j is converted to 64 bit and stored in %rdx
	movq	%rdx, %rax 								# Store the value of %rdx in %rax(i.e. %rax = j) 
	
	salq	$2, %rax 								# %rax is multiplted by 4 i.e %rax = 4*j
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e. %rax = %rax+%rdx (5*j) 
	salq	$4, %rax 								# %rax is multiplted by 16 i.e %rax = 80*j
	movq	%rax, %rdx								# store the value of %rdx in %rax 
	
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	addq	%rax, %rdx 								# %rdx stores the sum of itself and %rdx i.e %rdx = %rdx + %rax (%rdx = 80*j + address of the matrix's initial element)
	movl	-12(%rbp), %eax							# %eax holds the value of i
	cltq
	
	movl	(%rdx,%rax,4), %edx						# rdx + rax * 4 is set the value of edx (address + 80*j + 4*i)
	movl	-8(%rbp), %eax      					# %eax holds the value of j
	cltq
	movl	%edx, (%rcx,%rax,4) 					#  edx (address + 80*j + 4*i) is set the value of rcx + rax * 4
	
	movl	-8(%rbp), %eax 							#  %eax holds the value of j
	movslq	%eax, %rdx 								# Store the value of %eax in %rdx(i.e. %rdx = j) 
	movq	%rdx, %rax 								# Store the value of %rdx in %rax(i.e. %rax = j) 
	salq	$2, %rax 								# %rax is multiplted by 4 i.e %rax = 4*j
	
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e. %rax = %rax+%rdx (5*j)
	salq	$4, %rax 								# %rax is multiplted by 16 i.e %rax = 80*j
	movq	%rax, %rdx 								# store the value of %rax in %rdx 
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	
	leaq	(%rdx,%rax), %rcx 						# %rcx stores the sum of %rdx and %rax(i.e %rcx = Address of(data[0][0]) + 80*j)
	movl	-12(%rbp), %eax 						# %eax holds the value of i
	cltq
	movl	-4(%rbp), %edx  						# store the value of t in %edx
	movl	%edx, (%rcx,%rax,4) 					# store the value of %edx is set the value of rdx + rax * 4 

.L18:
	
	movl	-8(%rbp), %eax         					# %eax store the value of j
	cmpl	-12(%rbp), %eax					        # Compare i and j
	jl	.L19							 		    # if j is less than i then jumps to Label L20	
	addl	$1, -12(%rbp)                           # Increment i by 1

.L17:
	
	movl	-12(%rbp), %eax        					# %eax store the value of i
	cmpl	-20(%rbp), %eax        					# Compare i and n
	
	jl	.L20										# if i is less than n then jumps to Label L20	
	movl	$.LC7, %edi            					# value of .LC7 is stored into %edi that is setting the input format string as 1st parameter
	call	puts 									# Calls printf for print the stored data of %edi -> "The transposed matrix is:"
	movl	$0, -12(%rbp) 							# Initiaize i to zer0
	jmp	.L21 										# Jumps to L21

.L24: 											 
	
	movl	$0, -8(%rbp)							# Initialize j to zero
	jmp	.L22 										# Jumps to L22

.L23: 												
	
	movl	-12(%rbp), %eax 						# %eax holds the value of i 
	movslq	%eax, %rdx 								# i is converted to 64 bit and stored in %rdx
	movq	%rdx, %rax 								# store the value of %rdx in %rax 
	salq	$2, %rax 								# %rax is multiplted by 4 i.e %rax = 4*i
	
	addq	%rdx, %rax 								# %rax stores the sum of itself and %rdx i.e. %rax = %rax+%rdx (5*i)
	salq	$4, %rax 								# %rax is multiplted by 16 i.e %rax = 80*i
	movq	%rax, %rdx 								# store the value of %rdx in %rax 
	movq	-32(%rbp), %rax 						# %rax stores the address of the matrix's initial element
	
	addq	%rax, %rdx 								# %rdx stores the sum of itself and %rdx i.e %rdx = %rdx + %rax (%rdx = 80*i + address of the matrix's initial element)
	movl	-8(%rbp), %eax 							# %eax holds the value of j
	cltq
	movl	(%rdx,%rax,4), %eax 					# rdx + rax * 4 is set the value of eax (address + 80*i + 4*j)
	movl	%eax, %esi 								# %esi holds the value of %eax
	
	movl	$.LC5, %edi 							# value of .LC5 is stored into %edi that is setting the input format string as 1st parameter.
	movl	$0, %eax								# Set %eax to zero
	call	printf 									# Calls printf for print the stored data of %edi 
	addl	$1, -8(%rbp)                            # Increment j by 1

.L22:
	
	movl	-8(%rbp), %eax 							# %eax holds the value of j
	cmpl	-20(%rbp), %eax							# Compares the value of j and n
	jl	.L23										# if j is less than n then jumps to L23
	
	movl	$10, %edi 								# %edi stores the new line character
	call	putchar 								# Print the newline character
	addl	$1, -12(%rbp) 							# Increment i by 1

.L21:
	
	movl	-12(%rbp), %eax 						# %eax holds the value of i
	cmpl	-20(%rbp), %eax 						# Compares the value of i and n
	jl	.L24 										# if i is less than n then jumps to L24
	
	leave											# Return the code
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

.LFE2:
	
	.size	TransposeMatrix, .-TransposeMatrix
	.globl	VectorMultiply							# VectorMultiply is a global name
	.type	VectorMultiply, @function				# VectorMultiply is a function

VectorMultiply:										# VectorMultiply Starts

.LFB3:
	
	.cfi_startproc
	pushq	%rbp									# Save old base pointer
	.cfi_def_cfa_offset 16
	
	.cfi_offset 6, -16
	movq	%rsp, %rbp								# rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	
	movl	%edi, -20(%rbp) 						# Assign n to the memory location(rbp-20)
	movq	%rsi, -32(%rbp)							# Assign L to the memory location(rbp-32)
	movq	%rdx, -40(%rbp) 						# Assign R to the memory location(rbp-40)
	
	movl	$0, -4(%rbp)                            # Assign 0 to the memory location(rbp-4)
	movl	$0, -8(%rbp) 							# Assign n to the memory location(rbp-8)
	jmp	.L26 										# Jumps to L26

.L27:
	
	movl	-8(%rbp), %eax 							# %eax holds the value of i
	cltq 											# convert to 64 bit and assign to rax.rax=i
	leaq	0(,%rax,4), %rdx						# store the value of 4*%rax in %rdx i.e %rdx = 4*i;
	movq	-32(%rbp), %rax 						# store the value of M[rbp-32](L[0]) into %rax
	
	addq	%rdx, %rax 								# %rax stores the sum of itslef and %rdx i.e. %rdx=L[i]
	movl	(%rax), %edx 							# %edx=%rax=L[i]
	movl	-8(%rbp), %eax 							# %eax=M[rbp-8]=i
	cltq 											# convert to 64 bit and save in %rax
	
	leaq	0(,%rax,4), %rcx 						# %rcx=4*%rax=4*i
	movq	-40(%rbp), %rax 						# %rax=M[%rbp-40]=starting address of R
	addq	%rcx, %rax 								# %rax=%rcx+%rax i.e. rax=R[i]
	movl	(%rax), %eax 							# assign %eax to %rax i.e. %eax=R[i]
	
	imull	%edx, %eax 								# %eax = %eax*%edx=R[i]*L[i]
	addl	%eax, -4(%rbp) 							# M[%rbp-4]=result=result+%eax
	addl	$1, -8(%rbp) 							# Increment i by 1

.L26:
	
	movl	-8(%rbp), %eax    						# %eax holds the value of i
	cmpl	-20(%rbp), %eax  						# Compares i and n
	jl	.L27 										# Jumps to L27
	
	movl	-4(%rbp), %eax 							# move M[%rbp-4] to %eax.%eax=j
	popq	%rbp 									# popping %rbp from stack
	
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc

.LFE3:
	
	.size	VectorMultiply, .-VectorMultiply
	.globl	MultiplyMatrix 							# MultiplyMatrix is a global name
	.type	MultiplyMatrix, @function 				# MultiplyMatrix is a function

MultiplyMatrix:										# VectorMultiply Starts

.LFB4:
	
	.cfi_startproc
	pushq	%rbp									# Save old base pointer
	.cfi_def_cfa_offset 16
	
	.cfi_offset 6, -16
	movq	%rsp, %rbp								# rbp <-- rsp set new stack base pointer
	.cfi_def_cfa_register 6
	
	pushq	%rbx
	subq	$56, %rsp								#assign 56 bit memory to function in stack
	
	.cfi_offset 3, -24
	
	movl	%edi, -36(%rbp)							# Assign n to the memory location(rbp-36)
	movq	%rsi, -48(%rbp)							# Assign L to the memory location(rbp-48)
	movq	%rdx, -56(%rbp)							# Assign R to the memory location(rbp-56)
	movq	%rcx, -64(%rbp)							# Assign M to the memory location(rbp-64)
	
	movq	-56(%rbp), %rdx							# %rdx stores the address of the R's initial element
	movl	-36(%rbp), %eax							# %eax stores the value of n
	movq	%rdx, %rsi 								# %rsi store the value of the %rdx. 
	movl	%eax, %edi								# %edi store the value of the %eax
	
	call	TransposeMatrix							# Call TransposeMatrix
	
	movl	$0, -24(%rbp)							# Assign 0 to the memory location(rbp-24)				
	jmp	.L30 										# Jumps to L30

.L33:
	
	movl	$0, -20(%rbp) 							# Assign 0 to the memory location(rbp-20)				
	jmp	.L31 										# Jumps to L31

.L32:
	
	movl	-24(%rbp), %eax  						# assign eax=i
	movslq	%eax, %rdx      						# convert eax to 64 bit and save in rdx
	movq	%rdx, %rax      						# move rdx to rax.rax=i
	salq	$2, %rax        						# rax=4*i
	
	addq	%rdx, %rax      						# rax=rdx+rax.rax=5*i
	salq	$4, %rax        						# rax=16*5*i=80*i
	movq	%rax, %rdx      						# assign value of rax to rdx
	movq	-64(%rbp), %rax 						# assign M[rbp-64]=address of matrix M to rax
	
	leaq	(%rdx,%rax), %rbx  						# rbx=adress of M[0][0]+80*i
	movl	-20(%rbp), %eax   						# assign eax=j
	movslq	%eax, %rdx       						# convert eax to 64bit and asssign to rdx
	movq	%rdx, %rax       						# assign rax to rdx=j
	
	salq	$2, %rax 		 						# rax=4*rax=4*j
	addq	%rdx, %rax       						# rax=rdx+rax=5*j
	salq	$4, %rax         						# rax=16*rax=80*j
	movq	%rax, %rdx       						# move rax to rdx.rdx=80*j
	
	movq	-56(%rbp), %rax  						# assign adress of R[0][0] to rax
	addq	%rdx, %rax       						# rax=rax+rdx=adress(80*j+R[0][0])
	movq	%rax, %rsi 		 						# move value of rax to rsi
	movl	-24(%rbp), %eax 						# assign eax=M[rbp-24]=value of i
	
	movslq	%eax, %rdx       						# convert eax to 64bit and assign to rdx.rdx=i
	movq	%rdx, %rax       						# assign rax=rdx.rax=i
	salq	$2, %rax        						# rax=4*i
	addq	%rdx, %rax      						# rax=rax+rdx=5*i
	salq	$4, %rax 								# rax=16*rax=80*i
	
	movq	%rax, %rdx  							# assign rax to rdx.rdx=80*i
	movq	-48(%rbp), %rax 						# assign adrress of L[0][0] to rax
	addq	%rdx, %rax     							# rax=rdx+rax=adress of L[0][0]+80*i
	movq	%rax, %rcx      						# move rax to rcx.
	movl	-36(%rbp), %eax 						# eax=M[rbp-36]=value of n
	
	movq	%rsi, %rdx      						# rdx=rsi=R[j][0]
	movq	%rcx, %rsi      						# rsi=rcx=L[i][0]
	movl	%eax, %edi      						# edi=eax=n
	call	VectorMultiply  						# call VectorMultiply
	
	movl	-20(%rbp), %edx 						# assign edx to j.edx=j
	movslq	%edx, %rdx      						# convert j to 64 bit and store in rdx
	movl	%eax, (%rbx,%rdx,4) 					# M+80*i+4*j=M[i][j]=eax=return value from Vector Multiply
	addl	$1, -20(%rbp)    						# add 1 to j.(j++)

.L31:

	movl	-20(%rbp), %eax  						# %eax holds the value of j
	cmpl	-36(%rbp), %eax							# Compares j and n
	jl	.L32 										# Jumps to L32
	addl	$1, -24(%rbp)							# Increment i by 1

.L30:
	
	movl	-24(%rbp), %eax 						# Assign %eax to memory(rbp-24) = i	cmpl	-36(%rbp), %eax							# Compares i and n
	jl	.L33 										# Jumps to L33
	addq	$56, %rsp 								# add 56 bits to current stack pointer
	popq	%rbx 									# poping base pointer from stack
	popq	%rbp 									# popping base pointer from stack
	
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc 									#return

.LFE4:
	
	.size	MultiplyMatrix, .-MultiplyMatrix
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
