#include <stdio.h>
#include <string.h>
int main()
{
    int i;
   char word[50];
   int len =0;
   printf("press ");
   scanf("%s",word);
   for(i=0;word[i]!='\0';i++)
   {
       len ++;
   }
   
  
  // int len2=strlen(word);
   // printf("Length is %d",len2);
    for(i=0;word[i]!='\0';i++)
    {
        
        printf("%c ",word[i]);
    }
}
