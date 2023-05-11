#include <stdio.h>
#include <string.h>
int main ()
{
	char str[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",str);

	int i,n,c1=0,c2=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] == 'a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'
				||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U')
			c1++;
		else
			c2++;
	}
	printf("consonants is %d\n",c2);
  	printf("Vowels is %d\n",c1);
	return 0;
}
