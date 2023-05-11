#include <stdio.h>
#include <string.h>
int main()
{
    char a[10],temp;
    printf("Enter a string: ");
    scanf("%s",a);

    int n=strlen(a),i,j,pos;
    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Length = %d\n",n);
    for(i=pos,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%s \n",a);
}
