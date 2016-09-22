#include "myl.h"

int main()
{
    int e;                                                  // for storing the error value from the function call
    int number_bytes;                                       // for storing the number of bytes printed
    prints("Enter a integer: ");
    int v = readi(&e);                                      // call for reading integer
    
    while(e==1)                                             // on invalid input
    {
        prints("Error !! The number ");                               // show error 
        
        prints("crossed the upper bound");
        prints("\n");
        prints("Enter a valid number: ");                   // ask for a valid integer as input
        v = readi(&e);                                      // call for reading integer
    }

    prints("The entered integer is ");
    number_bytes =  printi(v);                             // store the number of characters printed
    prints("\n");

    prints("Printing this integer required "); 
    printi(number_bytes);
    prints(" characters to be printed\n\n");                // tell the user the number of bytes printed
    

    
    prints("Please enter a float: ");
    float f;
    e = readf(&f);                                          // call to read float
    while(e==1)                                             // on error
    {
        prints("Error !! The number ");                               // show error 
        
        prints("crossed the upper bound");
        prints("\n");                           // show error 
        prints("Please enter a valid float to proceed: ");  // ask for a valid input
        e = readf(&f);
    }
    prints("The entered float is ");
    number_bytes = printd(f);                              // store the number of characters printed
    prints("\n");
    prints("Printing this float required "); 
    printi(number_bytes);
    prints(" characters to be printed\n\n");                // tell the user the number of bytes printed
    
    
    return 0;
}
