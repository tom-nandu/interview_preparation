26. Rotate array left by 1
27. Rotate array right by 1
28. Rotate array left by K positions
29. Rotate using reverse method
30. Rotate using temporary buffer



26,27) 
#include <stdio.h>

void right(int arr[] ,int n)
{
  int tmp =arr[n-1] ; 
  
  for(int i=n-1 ; i>0 ; i--)
  {
      arr[i] =arr[i-1]; 
  }
  
  arr[0]=tmp;
    
}

void left(int arr[] , int n)
{
    int tmp = arr[0] ; 
    for (int i=0 ; i<n ; i++)
    {
        arr[i]=arr[i+1];
    }

    arr[n-1]=tmp;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int x = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    right(arr,x);
    printf("\n");
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    left(arr,x);
    printf("\n");
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    return 0;
}

--------------------------------------------------------------
  28) Rotate array left by K positions

  #include<stdio.h>

void rotate(int arr[] , int l , int r )
{
  
    while (l<r)
    {
        int tmp= arr[l] ;
        arr[l] = arr[r];
        arr[r] = tmp ;
        l++ ;
        r-- ; 
    }
}
    
    int rotate_right(int arr[] , int n , int k )
    {
        if(k>n)
        {
            return -1 ;
        }
        
       rotate(arr,0,n-1);
      
       rotate(arr,0,k-1);
      
       rotate(arr,k,n-1);
       
        
    }    


int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,900};
    
    int x = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    rotate_right(arr,x,5);
    printf("\n");
    for(int i=0;i<x;i++)
    {
    printf(" %d ",arr[i]);
    }
    return  -1; 
}

--------------------------------------------------------------

  29. Rotate using reverse method
