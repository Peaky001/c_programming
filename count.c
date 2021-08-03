#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch,file_name[50];
    
    FILE *fp;
    printf("the name of the file:");
    fgets(file_name,50,stdin);
    

    fp = fopen(file_name,"r");
    
    if (fp == NULL)
    {
        printf("\nfailed to open file");
        exit(EXIT_FAILURE);
    
    }
    else{
        file_name[strcspn(file_name,"\n")] = '\0';
    }

    printf("the content of %s file are:",file_name);
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);

    
    }
    fclose(fp);
    return 0;
    

    



}