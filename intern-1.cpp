Ques 1 Find the smallest and second smallest elements in an array.

#include <stdio.h>
#include <limits.h> 
 
void fun(int arr[], int arr_size)
{
    int i, first, second;
 
   
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
 
        
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The smallest element is %d and second "
               "Smallest element is %d\n", first, second);
}
 

int main()
{
    int n,i;   
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    fun(arr, n);
    return 0;
}
*****************************************************************************************************************
Q2-Find median in a stream of integers (running integers)
NOT GETTING THE APPROACH....SORRY
