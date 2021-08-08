#include<stdio.h>
int main()
{
    unsigned int a,b;
    char c;
    printf("enter the character and two integer:");
    while (scanf("%c %u %u",&c,&a,&b) == 3 )
    {
        for (unsigned int i = 0; i < a; i++)
        {
            for (unsigned int j = 0; j < b; j++)
            {
                putchar(c);
            }
            printf("\n");
            
        }

                
        
    }
    return 0;


}



