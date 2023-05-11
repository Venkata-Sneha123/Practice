#include <stdio.h>
#include <string.h>
int main()
{
   char str[50];
   printf("Enter a string: ");
   scanf("%[^\n]s",str);

   int i,count=1;
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]==' '||str[i]== '\t'||str[i]== '\n')
       {
          count++; 
       }
   }
    printf("The number of words in \"%s\" = %d\n",str,count); 
}
