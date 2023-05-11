#include <stdio.h>
#include <string.h>
int main()
{
    char a[10],temp;
    printf("Enter a string: ");
    scanf("%s",a);

    int n=strlen(a),mid=n/2,i,j;
    printf("Length = %d\nMid element=%d\n",n,mid);
    for(i=mid,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s \n",a);
}
