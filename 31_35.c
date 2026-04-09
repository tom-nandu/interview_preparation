31)circular_buffer 

#include<stdio.h>

#define SIZE 10 

static int count = 0 ; 
static int head = 0 ;
static int tail = 0 ;
static int arr[SIZE] ; 


int put_data(int data)
{
    if(count==SIZE)
    {
        printf("ARRAY IS FULL\n");
        return -1;
    }
    
    arr[tail]=data;
    tail= (tail+1)%SIZE;
    count++ ;
}

int get_data(int *data)
{
    if(count==0)
    {
        //printf("Array is empty\n");
        return -1;
    }
    
     *data = arr[head] ; 
      head = (head+1)%SIZE ;
      count-- ;
      return 0 ;
}

int main()
{
    int v ;
    
    put_data(10);
    while(get_data(&v)==0)
    {
        printf("Read: %d\n", v);
    }
}

-----------------------------------------------------------------------------------------------
