#include<stdio.h>
void A(int n)
{
 if (n>0)
 {
  A(n-1);
  printf("%d\n",n);
  A(n-1);
 }
}
void main()
{
 int n;
 printf("Enter no :");
 scanf("%d",&n);
 A(n);
}
