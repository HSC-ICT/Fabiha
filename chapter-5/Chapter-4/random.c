#include <stdio.h>   
#include <stdlib.h>  
int main()  
{     
    // use rand() function to generate the number  
    printf (" The random number is: %d", rand());  
    printf ("\n The random number is: %d", rand());  
          
    printf (" \n The random number is: %d", rand());  
    printf ("\n The random number is: %d\n", rand());  
        
    return 0;
}  
// we need to implement the stdlib.h header file because rand() function is defined in the stdlib header file.