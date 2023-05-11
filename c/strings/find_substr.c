#include<stdio.h>
#include<string.h>

int search(char src[], char str[]) 
{
        int i=0,j=0,firstOcc; 
        while (src[i] != '\0') 
	{
 
                while (src[i] != str[0] && src[i] != '\0')
                        i++;
 
                if (src[i] == '\0')
                        return (-1);
 
                firstOcc = i;
 
                while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0') 
		{
                        i++;
                        j++;
                }
 
                if (str[j] == '\0')
                        return (firstOcc);
                if (src[i] == '\0')
                        return (-1);
 
                i = firstOcc + 1;
                j = 0;
        }
}


int main() 
{
	int loc;
	char source[50];
	char target[30];

	printf("Enter a string: ");
	scanf("%[^\n]s",source);

	printf("Enter a sub string: ");
	scanf("%s",target);

	loc = search(source, target);
	if (loc == -1)
		printf("Not found\n");
	else
		printf("Found at location %d\n", loc + 1);
	return 0;
}

