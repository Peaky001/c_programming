#include<stdio.h>

int main()
{
    int arr1[10],arr2[10],arr3[20];
    printf("enter the 1st array:");
    for (int i = 0; i < 10; i++)
    {

        scanf("%d",&arr1[i]);
    }
    printf("enter hte 2nd array:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i]+arr2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("sum of arrays are:%d",arr3[i]);
    }
    return 0;
    
    
    

    
    
}