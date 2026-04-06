14. Find an element and return its index
15. Count occurrences of a given element
16. Find first and last occurrence
17. Find element with maximum frequency


-------------------------------------------
14. Find an element and return its index
#include<stdio.h>

int find_index(int arr[] , int n , int value)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            return i ;
        }
    }
}

int main()
{
    int arr[10]={90,80,800,97,56,458,9,876,456,98};
    int x =  find_index(arr,10,56);
    printf("find_index : %d ", x);
    
}

-------------------------------------------
15. Count occurrences of a given element


int occurence(int arr[],int n , int v)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==v)
        {
            count++ ; 
        }
    }
    return count ; 
}

int main()
{
    int arr[10]={90,80,800,90,56,458,90,876,456,98};
    int n = 90 ; 
    int x =  occurence(arr,10,n);
    printf("occurence of %d : %d ",n, x);
    
}

-------------------------------------------
16. Find first and last occurrence



void first_last(int arr[] , int n , int v)
{
    int first = -1 , last = 0 ;
    for(int i=0 ; i<n ; i++)
    {
        if (arr[i]==v)
        {
            if (first != 0)
            {
            first=i ;
            }
            last=i;
        }
        
    }
    printf("%d : %d ", first , last);
}

int main()
{
    int arr[10]={90,80,800,90,56,458,90,876,456,98};
    first_last(arr , 10 ,90);

}

-------------------------------------------
17. Find element with maximum frequency


void max_freq(int arr[] , int n)
{
    int count = 0 ;
    int max=0 ; 
    for(int i=0;i<n;i++)
    {
       for(int j=1+i;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               //printf("passed if loop");
               count++;
           }
           if(count > max)
           {
               max = count ; 
           }
       }
    }
    printf("%d : max ",max);
}

int main()
{
    int arr[10]={90,80,800,90,56,458,90,876,456,98};
    max_freq(arr , 10);
}
----------------------------------------------------
