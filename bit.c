/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<limits.h>

int main()
{
    unsigned int n ; 
    printf("enter n : ");
    scanf("%d",&n);
    int width = sizeof(unsigned int ) *CHAR_BIT;
   printf("set bits are ");
   int count = 0;
   int count_clear = 0;
    for ( int i = 0 ; i<width;i++)
    {
        
        if ( ( n >> i )& 1U ) 
        { printf ("%d ", i );
        count ++ ;
        }
        
    }
    printf("\n %d = count \n", count );
     printf("\nclear bits are ");
    
    for ( int i = 0 ; i<width ; i++)
    {
        
        if ( (( n >> i )& 1U) == 0 ) 
        {
            printf ("%d ", i );
            count_clear ++;
        }
    }
     printf("\n %d = count \n",count_clear );
    
printf("\n");
    return 0;

    
    
    
    
}
    
