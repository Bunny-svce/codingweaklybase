#include<stdio.h>
int main()
{
    int a[10],r,i,max;
    printf("enter no.of rows r=");
    scanf("%d",&r);
    printf("enter elements=");
    for(i=0;i<r;i++)
    {
       scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<r;i++)
    {
       if(max<a[i])
       max=a[i];
    }
    printf("max=%d",max);
}
