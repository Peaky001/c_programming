#include<stdio.h>
int main()
{
    char ch;
    printf("enter the line:\n");
    while ((ch=getchar())!=EOF)
    {
        if (ch == '\n')
        {
            printf("\\n---%d",ch);
            
        }
        
        printf("%c---%d",ch,ch);
    }
    return 0;
}