#include <stdio.h>

int add(int a[][2],int b[][2])
{
int i,j;
for (i=0;i<2;i++)
{

for (j=0;j<2;j++)
{
printf("%d ",a[i][j]+b[i][j]);
}
printf("\n");
}
}

int main()
{

int a[2][2]={1,2,3,4};
int b[2][2]={1,5,3,6};
add(a,b);

return 0;
}
