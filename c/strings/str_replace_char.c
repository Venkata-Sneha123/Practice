#include<stdio.h>   
#include<string.h>   

void replacechar(char *s,char c1,char c2)
{
	int i=0;
	for(i=0;s[i];i++)
	{  
		if(s[i]==c1)
		{
			s[i]=c2;
		}
	}
}


int main()
{
	char s[1000],c1,c2;  

	printf("Enter  the string : ");
	scanf("%[^\n]s",s);

	printf("Enter a char replace: ");    
	scanf("\n%c",&c1);
	
	printf("Enter a character to replace with %c : ",c1);
	scanf("\n%c",&c2);
	
	printf("\nbefore replace:%s\n",s);
	replacechar(s,c1,c2);
	printf("after replace:%s\n",s);
	return 0;
}
