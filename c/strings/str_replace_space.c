#include <stdio.h>  
#include <string.h>  

void str_replace(char s[],char ch)
{
	int i,len;
	for(len=0;s[len]!='\0';len++);

	for(i = 0; i<len;i++)
	{  
		if(s[i] == ' ')  
			s[i] = ch;  
	}  

}
int main()  
{  
	char s[50],ch;
        printf("Enter a string: ");
        scanf("%[^\n]s",s);	

	printf("Enter a character to replace the space: ");
	scanf("\n%c",&ch);

	printf("The string before replace : \n%s\n",s);
	
	str_replace(s,ch);

	printf("String after replacing spaces with given character: %s\n",s);  
	return 0;  
}  
