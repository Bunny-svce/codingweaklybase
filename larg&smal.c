#include<stdio.h> 
int main()
{
  int a[10],i,r,max,min;
  printf("enter no.of rows r=");
  scanf("%d",&r);
  printf("enter elements=");
  for(i=0;i<r;++i)
  scanf("%d",&a[i]);
  max=min=a[0];
  for(i=1;i<r;++i)
  {
  if(max<a[i])
  max=a[i];
  if(min>a[i])
  min=a[i];
  }
  printf("max=%d\n",max);
  printf("min=%d",min);
}
