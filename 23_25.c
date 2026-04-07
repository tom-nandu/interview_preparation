23. Reverse entire array
24. Reverse a subarray [L, R]
25. Reverse array using pointers only


23. Reverse entire array

#include <stdio.h>

void reverse(int arr[],int n)
{
    int start = 0 ; 
    int end = n-1 ; 
    
    while (start<end)
    {
        int tmp = arr[start];
        arr[start]=arr[end];
        arr[end] = tmp ;
        
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {10, 20, 40, 80, 160};
    int x = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,x);
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    return 0;
}

-----------------------------------------------------------

24) reverse subarray of an array 

#include <stdio.h>

void reverse(int arr[],int n)
{
    int start = 2 ; 
    int end = n-1 ; 
    
    while (start<end)
    {
        int tmp = arr[start];
        arr[start]=arr[end];
        arr[end] = tmp ;
        
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {10, 20, 40, 80, 160};
    int x = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,x);
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    return 0;
}



-----------------------------------------------------------
  25. Reverse array using pointers only

  #include <stdio.h>

void reverse(int *arr ,int n)
{
    int *start = arr; 
    int *end = arr+n-1 ; 
    
    while (start<end)
    {
        int tmp = *start;
        *start=*end;
        *end = tmp ;
        
        start++;
        end--;
    }
}
int main()
{
    int arr[5] = {10, 20, 40, 80, 160};
    int x = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,x);
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    return 0;
}
