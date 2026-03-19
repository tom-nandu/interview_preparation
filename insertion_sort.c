/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

void insertion_sort(int *arr , int n , bool ascending)
{
    for (int i = 1 ; i<n;i++)
    {
        int j = i - 1 ; 
        int key = arr[i];
        
        while ( j >=0 && ascending ? arr[j]>key : arr[j]<key )
        {
            arr[j+1]=arr[j];
            j-- ;
        }
        arr[j+1] = key ;
    }
    
}

int main()
{
     int a[] = {5, 1, 7, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    insertion_sort(a, n, 1);  // ascending
    printf("Ascending: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    
    int b[] = {1,5,2,7,4};
    int n1 = sizeof(b) / sizeof(b[0]);

    insertion_sort(b, n1, 0);  
    printf("Descending: ");
    for (int i = 0; i < n1; i++) printf("%d ", b[i]);
    printf("\n");
    
}
