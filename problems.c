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



