#include "myl.h"                       			// File that calls all the below functions

#define MAX 100                         		// Maximum size of read/write
#define DECIMAL 6								// Number of integers after decimal


// function to print string of characters and return the number of characters(length of string)
int prints(char * str)
{
   int len = 0;                         		// initialise length of string --> 0
   while(*(str+len)) len++;       				// loop for calculating the size of the string
    
    __asm__ __volatile__ (              		// assembly code for printing a string
        
        "movl $1, %%eax \n\t"          		    // eax = 1
        "movq $1, %%rdi \n\t"          		    // rdi = 1
        "syscall \n\t"
        :
        :"S"(str), "d"(len)             		// S = str, d = len
        
        );

    return len;                         		// return the length of string

}

// function to print integer and return the number of characters printed 
int printi(int n)
{
    char str[MAX];                     			 // allocate memory for string to be printed
    char temp;
    int len = 0,start,end;             
    
    if(n==0) 
    {                          
        str[len++] = '0';						// if entered number is 0 then just append '0'
    }
    
    else if(n<0)                        		// Check if number is negative
    {
        str[len++] = '-';           			// append a '-' sign
        n = (-1)*n;                 			// Take absolute value of the number
    }
    start = len;                     	
        
    // Extract all the digits in reverse order
    while(n>0)                        		
    {
        str[len++] = (char)('0' + n%10);
        n /= 10;
    }
        
    // Now reverse the array
    end = len -1;                    		 
    while(end >= start)               		 
    {
 	    temp = str[start];
		str[start++] = str[end];
		str[end--] = temp;
    }
	str[len] = '\0'; 							// Terminating the string

	__asm__ __volatile__ (             			// assembly code for printing a string
        "movl $1, %%eax \n\t"           		// eax = 1
        "movq $1, %%rdi \n\t"           		// rdi = 1
        "syscall \n\t"                 
        :
       
        :"S"(str), "d"(len)             		// S = str, d = len
       
        );
    
    return len;                         		// return the number of bytes printed
}

//Function to read an unsigned integer and returns its value
int readi( int *eP)
{
    char str1[100];                     				 // allocate size for the string to be read
    int start = 0;
 
    
	    __asm__ __volatile__
        (
    		"movl $0, %%eax \n\t"
        	"movq $0, %%rdi \n\t"
        	"syscall \n\t"
        	:
        	:"S"(str1), "d"(100)
    	);
                      		
    int check_neg = 0;                        		// Variable for check the integer is negative or not
    
    if(str1[start] == '-')                  			    // if preceded by a '-' sign
    {
        check_neg = 1;                              // mark negative
        start = 1;
    }

    long long int answer = 0;                 				 // initialise integer value to zero

    while(str1[start]!='\n')               
    {
        if(str1[start]>'9' || str1[start] <'0')   	 // Check if any other char other than digit is found
        {
            (*eP) = ERR;                  			 // report error
            return (*eP);
        }

        answer = answer*10;
        answer = answer+(str1[start++] -'0');
        if(answer >= 2147483647)
        {
            *eP = ERR;
            return (*eP);
        }
            
    }

    if(check_neg==1)
    {
        answer = -answer;
    }

    (*eP)=OK;
    return answer; 									 // Return answer

}

// Function for reading a floating point number
int readf( float *fP)
{
    char str[100];                    				 // allocate size for the string to be read
   
    __asm__ __volatile__ (              			 // assembly code for reading a string
        "movl $0, %%eax \n\t"          			     // eax = 0
        "movq $1, %%rdi \n\t"          			     // rdi = 1
        "syscall \n\t"                 
        :
        :"S"(str), "d"(100)          			     // S = str, d = MAXS
        );
    
    int i = 0;
    int check_neg = 0; 								 // Variable for check the integer is negative or not
    
    if(str[i] == '-')                   			 // if preceded by a '-' sign
    {
        check_neg = 1; 								 // Mark negative
        i++;
    }

    float answer = 0; 								 // initialise float value to zero
    
    while(str[i] != '\n'&&str[i] != '.')             // Loop for reading the integer before decimal
    {
        if(str[i]>'9' || str[i] <'0')
        {
            *fP = answer;
            return ERR;
        }
        answer = answer *10;
        answer = answer + (str[i] - '0');
        i++;
    }

    float after_dec = 0.1;
    
    if(str[i] == '.')                   
    {
        i++;
        while(str[i] != '\n')    					// Loop for reading the integer after decimal       
        {
            if(str[i]>'9' || str[i] <'0') 
            {
                *fP = answer;                  		// report error
                return ERR;
            }
            answer = answer + after_dec*((float)(str[i] - '0')); 
            after_dec /= 10.0;
            i++;
        }

    }
    if(check_neg == 1)
    {
    	answer = -answer;
    }
   
   *fP = answer;									// Store the answer in pointer
   return OK; 										// Return Ok

}

//Function to print the floating point number passed as parameter. Returns the number of characters printed.
int printd(float f)
{
    char str[MAX], temp;              
    int len = 0;
    int q;
    if(f==0.0)                            
    {
        str[len++] = '0';
        str[len++] = '.';
    
    for(q = 0;q<DECIMAL;q++)           // run a loop for printing exactly DECIMAL digits after the decimal
        {
            str[len++] = '0';
        }               
    }

    else                                
    {
        if(f<0.0)                         
        {
            str[len++] = '-';           
            f = -f;
        }
        int inte = f;             
        f -= inte;                      


        // Do the exact same thing as for integers for the integral part
        if(inte==0) {
            str[len++] = '0';
        }
            int b,e;
            b = len;
            while(inte)
            {
                str[len++] = '0' + inte%10;
                inte /= 10;
            }
            e = len -1;
            while(e > b)
            {
                temp  = str[e];
                str[e] = str[b];
                str[b] = temp;
                e--; b++;
            }
        
        // For the decimal part
        str[len++] = '.';
        f *= 10.0;
        int i;
        int k;
        for(i = 0;i<DECIMAL;i++)           // run a loop for printing exactly DECIMAL digits after the decimal
        {
            k = f;
            str[len++] = (char)('0' + k);
            f -= k;
            f *= 10;
        }
    }

    

    __asm__ __volatile__ (              // assembly code for printing a string
        "movl $1, %%eax \n\t"           // eax = 1
        "movq $1, %%rdi \n\t"           // ebx = 1
        "syscall \n\t"                 
        :
        :"S"(str), "d"(len)             // S = str, d = len
        );
    return len;                         // return the number of bytes printed
}
