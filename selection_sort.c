
#include <stdio.h>
#include <stdbool.h>

void selection_sort(int *arr , int n , bool ascending)
{
    for (int i = 0 ; i < n ; i++ )
    {
    int selected = i ;
    
    for (int j = i+1 ; j < n ; j++)
    {
        if(ascending ? arr[j] < arr[selected] : arr[j] > arr[selected])
        {
            selected=j ; 
        }
    }
    
    if (selected !=i )
    {
        int tmp = arr[i];
        arr[i] = arr[selected] ; 
        arr[selected] = tmp ; 
    }
    }
    
}

int main()
{
     int a[] = {5, 1, 7, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    selection_sort(a, n, 1);  // ascending
    printf("Ascending: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    
    int b[] = {1,5,2,7,4};
    int n1 = sizeof(b) / sizeof(b[0]);

    selection_sort(b, n1, 0);  
    printf("Descending: ");
    for (int i = 0; i < n1; i++) printf("%d ", b[i]);
    printf("\n");
    
}
