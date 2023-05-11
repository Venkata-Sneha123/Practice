#include <stdio.h>
#include <string.h>
int main ()
{
	char str[50],ch;
	int i,j,l;
	printf("Enter string: ");
	scanf("%s",str);
	
	for(l=0;str[l]!='\0';l++);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]>str[j])
			{
				ch =str[i];
				str[i]=str[j];
				str[j]=ch;
			}
		}
	}

	printf("Sorted string is %s\n",str);
	return 0;
}
