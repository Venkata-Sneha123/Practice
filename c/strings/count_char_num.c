#include <stdio.h>
#include <string.h>
int main ()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);

	int i,n,c1=0,c2=0,c3=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i] <='z' || str[i]>='A' && str[i] <='Z')
		{
			c1++;
		}
		else if (str[i]>='0' && str[i]<='9')
		{
			c2++;
		}
		else
		{
			c3++;
		}
	}
	printf("Alphabets is %d\n",c1);
	printf("Numbers is %d\n",c2);
	return 0;
}
