#include<stdio.h>

void str_lwr(char s[])
{
	int i,len;
	for(len=0;s[len];len++);
	for(i=0;i<=len;i++)
	{
		if(s[i] >= 'A' && s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
}

int main()
{
	char s[50];
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	printf("Before converting: %s\n",s);
	str_lwr(s);
	printf("After converting into lower case: %s\n",s);
	return 0;
}
