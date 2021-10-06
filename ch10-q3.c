#include<stdio.h>
int largest_arr(int arr[], int n);
int main(void)

{
    int arr[] = {500,340,200,900,300};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    largest_arr(arr,n);
    printf("the largest no. is %d",largest_arr(arr,n));
    return 0;

}

int largest_arr(int arr[],int n)
{int max;
max = arr[0];
for (int i = 1; i < n; i++)
{
    if (arr[i]>max)
    {
        max = arr[i];
    }
  
}
  return max;
}
