#include<stdio.h>
#define LENGTH 5

void copy_arr(double target[],double source[],int length );
void copy_ptr(double *target,double *source,int length );
void copy_ptrss(double *target,double *source_start,double *source_end );

int main(void)
{
   double source[LENGTH] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[LENGTH]; 
    double target2[LENGTH];
    double target3[LENGTH];
    copy_arr(target1, source, LENGTH);
    copy_ptr(target2, source, LENGTH);
    copy_ptrss(target3, source, source + LENGTH);
    for ( int i = 0; i < LENGTH ; i++)
    {
        printf("target1=%f , target2=%f , target3=%f",target1[i],target2[i],target3[i]);
        printf("\n");
        
    }
    return 0;
     
    
}
void copy_arr( double target[],double source[],int length)
{
    
    for (int i = 0; i < length; i++)
    {
        target[i] = source[i];
        
    }
    
    
}
void copy_ptr(double *target,double *source,int length)
{
    
    for (int i = 0; i < length; i++)
    {
        *(target + 1) = *(source + 1);
    }
    
    
}
void copy_ptrss(double *target,double *source_start,double *source_end)
{
    
    for (double *ptr=source_start; ptr < source_end;target++,ptr++)
    {
        *target = *ptr;
    }
    
    
}



