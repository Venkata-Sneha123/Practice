#include<stdio.h>

void mysubstr(char str[], int low, int high)
{
    if (low<=high)
    {
        printf("%c", str[low]);
        mysubstr(str, low+1, high);
    }
}
 
int main ()
{
    char str[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    int low,high,len;
    for(len=0;str[len]!='\0';len++);
    printf("Enter low and high index(0-%d):\n",len-1);
    scanf("%d %d",&low,&high);
    mysubstr(str,low,high);
    printf("\n");
    return 0;
}
