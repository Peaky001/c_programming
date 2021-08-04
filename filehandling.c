#include <stdio.h>
#include<stdlib.h> 
#include<string.h>



int main()
 {
     FILE *ptr1,*ptr2;
     char file_name[100];
     int count = 0,i;
     printf("enter the file name you want to read");
     scanf("%s",file_name);
     ptr1 = fopen(file_name,"r");
     if (ptr1 = NULL)
     {
         printf("\nfailed to open file\n");
         exit(0);
     }
     for ( i = getc(file_name); i != EOF ; i =getc(file_name))
     {
         count = count + 1;
     }
     printf("the no. of characters are %d",count);
     printf("\nenter the file name you want write in\n ");
     scanf("%s",file_name);
     ptr2 = fopen(file_name,"w");
     if (ptr2 == NULL)
     {
         printf("failed to open file");
         exit(0);
     }
     
     fputc(count,file_name);

     printf("\ntranfermation is successful");
     fclose(ptr1);
     fclose(ptr2);



     
     return 0;
     
     
   
          }