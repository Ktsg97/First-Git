#include<stdio.h>
int fact(int a)
{
int j;
for(int i=a;i>=1;i--)
{
j = j*i;
}
return j;
}
int main()
{
int c = fact(5);
printf("Factorial is :%d",c);
return 0;
} 
