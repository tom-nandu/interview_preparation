insert an element --> shift right 
delete an element --> shift left

left_rotation of array 


CORE_LOGIC 

outer loop --> iterate through k 
store the first index in tmp for each loop so the firsst index keep on saved and saved in the last ie n-1 

inner loop  --> iterate through n (total size of array) 
in (i store i+1)

-------------------------------------------------
#include<stdio.h>


int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int k = 3 ;
    int n = 10 ;
    
 printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i=0;i<k;i++)
    {
        int tmp=arr[0];
        
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        
        arr[n-1]=tmp;
    }
    
 printf("Array after left rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
-----------------------------------------------------------------------------------------------------------------
Find consecutive 1 in an array 

CORE_LOGIC 

use two var --> max_count = 0 -->cur_count = 0 


only one loop iterate through n 
if arr[i] == 1 
current_count ++ ; 
if (current_count > max_count ) --> max = current_count ; 
else current = 0 ;


important_logic is (current>max)
---------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    printf("Maximum consecutive 1s = %d\n", maxCount);
    return 0;
}
----------------------------------------------------------------------------------------
second larget element in an array


two var : lar = 0 ; second_lar=0 ;

loop through array --> if arr[i] > lar 
{
second_Lar = lar ;
lar = arr[i] ; 

else if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];


#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {-10, 5, 20, -3, 8, 20, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) { // consider only positive numbers
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] < largest) {
                secondLargest = arr[i];
            }
        }
    }

    if (secondLargest == INT_MIN)
        printf("Second largest positive element does not exist\n");
    else
        printf("Second largest positive element = %d\n", secondLargest);

    return 0;
}

--------------------------------------------------------------------------------------------
Remove duplicate of an array 

unique arr 
old arr
flag rep
    rep = 0
    compare uni and old 
    iterate the old with outer loop with unique arr in inner loop 

    compare 0 th element with unique arr iteration if it is same 
    flag rep = 1 
    if rep = 0 
    write the element from old to uni and k++

    
    #include <stdio.h>

int main() {
    int arr[100], unique[100];
    int n, k = 0;
    int isDuplicate;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates using extra array
    for (int i = 0; i < n; i++) {
        isDuplicate = 0;

        // Check if arr[i] already exists in unique array
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, add to unique array
        if (isDuplicate == 0) {
            unique[k] = arr[i];
            k++;
        }
    }

    // Print array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}


--------------------------------------------------------------------------------------------
inserting an element in an array at given position 

    #include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  // initial array
    int n = 5;                      // current number of elements
    int pos = 3;                    // position to insert (1-based index)
    int value = 99;                 // value to insert

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos - 1] = value;
    n++;  // increase array size

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

10,20,30,40,50        --> iteration 1 --> i=5 --> arr[5]=arr[4] ---> 10,20,30,40,50,50
10,20,30,40,50,50     --> iteration 2 --> i=4 --> arr[4]=arr[3] ---> 10,20,30,40,40,50
    now arr[pos] = value ; --> 10,20,30,400,40,50

    
--------------------------------------------------------------------------------------------
/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void insert_at_pos (int arr[] , int *n , int pos , int val )
{
    for (int i=*n ; i>pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=val;
    (*n)++;
}

void print(int arr[] , int n)
{
    printf("[ ");
    for (int i=0 ; i<n;i++)
    
    {
        printf("%d ",arr[i]);
    }
      printf("]");
}

int main()
{
     int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
   printf("\n");
    insert_at_pos(arr,&n,2,30);
     print(arr,n);
    
    
}

same problem using functions to insert an element .

  
--------------------------------------------------------------------------------------------
INSERT AT START : 
    
#include <stdio.h>

void insert_at_pos (int arr[] , int *n , int pos , int val )
{
    for (int i=*n ; i>pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=val;
    (*n)++;
}

void insert_at_start(int arr[] , int *n   , int value)
{
    for(int i=*n ; i>0 ; i--)
    
    {
        arr[i]=arr[i-1];
    }
    arr[0] = value ;
    (*n)++;
    
}

void print(int arr[] , int n)
{
    printf("[ ");
    for (int i=0 ; i<n;i++)
    
    {
        printf("%d ",arr[i]);
    }
      printf("]");
}

int main()
{
    int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
    printf("\n");
    insert_at_start(arr,&n,30);
    print(arr,n);   
}

----------------------------------------------------------------------------------------------
    INSERT_aT_END 

    /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void insert_at_pos (int arr[] , int *n , int pos , int val )
{
    for (int i=*n ; i>pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=val;
    (*n)++;
}

void insert_at_start(int arr[] , int *n   , int value)
{
    for(int i=*n ; i>0 ; i--)
    
    {
        arr[i]=arr[i-1];
    }
    arr[0] = value ;
    (*n)++;
    
}

void print(int arr[] , int n)
{
    printf("[ ");
    for (int i=0 ; i<n;i++)
    
    {
        printf("%d ",arr[i]);
    }
      printf("]");
}

void print_at_end(int arr[] , int *n , int value)
{
     arr[*n]=value ; 
    (*n)++ ; 
}
int main()
{
    int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
    printf("\n");
    print_at_end(arr,&n,70);
    print(arr,n);
    
    
}
----------------------------------------------------------------
    insert in an sorted array 

    /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void insert_at_pos (int arr[] , int *n , int pos , int val )
{
    for (int i=*n ; i>pos ; i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[pos]=val;
    (*n)++;
}

void insert_at_start(int arr[] , int *n   , int value)
{
    for(int i=*n ; i>0 ; i--)
    
    {
        arr[i]=arr[i-1];
    }
    arr[0] = value ;
    (*n)++;
    
}

void print(int arr[] , int n)
{
    printf("[ ");
    for (int i=0 ; i<n;i++)
    
    {
        printf("%d ",arr[i]);
    }
      printf("]");
}

void print_at_end(int arr[] , int *n , int value)
{
     arr[*n]=value ; 
    (*n)++ ; 
}

void sort(int arr[] , int *n , int value )
{
    for (int i=0 ; i<*n ; i++)
    {
        if(arr[i] > value) 
        
        {
            for (int j=*n ; j>i;j--)
            {
                arr[j]=arr[j-1];
            }
            
            arr[i] = value ;
            (*n)++;
            return ; 
        }
        
    }
    arr[*n] = value ; 
        (*n)++ ; 
    
}
int main()
{
    int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
    printf("\n");
    sort(arr,&n,12);
    print(arr,n);
    
    
}
-----------------------------------------------------------
    delete an index of an array 

    
   void delete(int arr[] , int *n , int index)
   {
       for (int i=index ; i<*n-1;i++)
       {
           arr[i] = arr[i+1];
       }
       
       (*n)--;
   }

int main()
{
    int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
    printf("\n");
   delete(arr,&n,2);
    print(arr,n);
    
    
}

---------------------------------------------
    delete an element first occcured in an array 

    
void first_occurence(int arr[] , int *n , int val )
{
    int x ;
    for (int i=0 ; i<*n;i++)
    {
        if(arr[i]==val)
        {
            x=i ;
        }
    }
    
    for (int j=x ; j<*n ; j++)
    {
        arr[j]=arr[j+1];
    }
    
    (*n)--;
    
}
int main()
{
    int n=5;
    int arr[10]={10,20,40,50,60};
    print(arr,n);
    printf("\n");
   first_occurence(arr,&n,20);
    print(arr,n);
    
    
}
