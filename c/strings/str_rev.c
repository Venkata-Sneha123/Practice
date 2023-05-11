#include<stdio.h>

void str_rev(char s[])
{
	int i,j,len;
	for(len=0;s[len]!='\0';len++);
	for(i=0,j=len-1;i<j;i++,j--)
	{
		s[i]=s[i]+s[j]-(s[j]=s[i]);
	}
}

int main()
{
	char s[30];
	printf("Enter a string: ");
	scanf("%s",s);

	void (*fp)(char[]);
	fp=str_rev;
	fp(s);
	printf("After reversing the string = %s\n",s);
	return 0;
}
