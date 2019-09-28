#include<stdio.h>
int add(int a,int b)
{
 int sum,carry;
 if (!a)
 {
 return b;
 }
 else
 {
 return add((a&b)<<1,a^b);
 }
}
int main()
{
int c;
c = add(5,4);
printf("%d",c);
}

