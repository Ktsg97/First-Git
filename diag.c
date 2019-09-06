#include<stdio.h>
int main()
{
 int i,j,x;
scanf("%d",&x);
int a[x][x];
for(i=0;i<x;i++)
 {
  for(j=0;j<x;j++)
  {
  scanf("%d ",&a[i][j]);
   
  }

 }
 for(i=0;i<x;i++)
 {
  for(j=0;j<x;j++)
  {
   if(i==j ||(i+j==x-1))
   {
    printf("%d ",a[i][j]);
   }
   else
   
    printf(" ");
   
  }
printf("\n");
 }
 return 0;
}
