#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
   printf("enter A matrix no.of rows and coloumns=");
   scanf("%d%d",&r1,&c1);
   printf("enter B matrix no.of rows and coloumns=");
   scanf("%d%d",&r2,&c2);
   printf("enter A matrix elements");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
          scanf("%d",&a[i][j]);
      }
   }
   printf("enter B matrix elements");
   for(i=0;i<r2;i++)
   {
      for(j=0;j<c2;j++)
      {
          scanf("%d",&b[i][j]);
      }
   }
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
      c[i][j]=0;
      for(k=0;k<c1;k++)
        {
          c[i][j]=c[i][j]+a[i][k]*b[k][j];  
        }
      }
   }
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
         printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
}

