#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int *arr , int n , bool ascending)
{
    for(int pass=0;pass<n-1;pass++)
    {
        bool swap = false ;
        
        for(int j=0;j<n-pass-1;j++)
        {
        bool out_of_order = ascending ? (arr[j]>arr[j+1]) : (arr[j]<arr[j+1]) ;
        if (out_of_order)
        {
            int tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp ;
            swap=true;
        }
        
        }
        if(!swap) break ;
    }
  }


int main()
{
     int a[] = {5, 1, 4, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort(a, n, 1);  // ascending
    printf("Ascending: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    
    int b[] = {5, 1, 4, 2, 8};
    int n1 = sizeof(b) / sizeof(b[0]);

    bubble_sort(b, n1, 0);  
    printf("Descending: ");
    for (int i = 0; i < n1; i++) printf("%d ", b[i]);
    printf("\n");
    
}
