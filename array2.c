#include<stdio.h>
int main()
{
 int a[3][3]={(1,1),(2,2),(3,3)},b[3][3];
 int i,j;
 /*printf("Enter the values of a:");
 for (i=0;i<=3;i++)
 {
  for(j=0;j<=3;j++)
   {
    scanf("%d",&a[i][j]);
   }
 }*/
/* printf("Enter values of b:");
 for (i=0;i<=3;i++)
 {
  for(j=0;j<=3;j++)
  {
   scanf(&b[i][j]);
  }
 }*/
 for(i=0;i<=3;i++)
 {
  for(j=0;j<=3;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
/* for(i=0;i<=3;i++)
 {
  for(j=0;j<=3;j++)
  {
   printf("%d ",b[i][j]);
  }
 printf("\n");
 }*/
}

