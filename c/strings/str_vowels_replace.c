#include<stdio.h>
#include<string.h>

int main()
{    
char str[50], ch, i;
    
    printf("Enter any string: ");
    scanf("%[^\n]s",str); 
    printf("Enter any character: ");
    scanf("\n%c", &ch);
    
    //Replacing the vovewls from the characters
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
           || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
           || str[i]=='O' || str[i]=='U')
        {
            str[i] = ch;
        }
    }
    
    printf("New String (after replacing vowel with %c) = %s\n", ch, str);
    
    return 0;
}
