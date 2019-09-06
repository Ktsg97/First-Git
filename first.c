#include<stdio.h>
int input_array(int a[][3],int b[][3])
{	
int i,j;
printf("Enter the 3*3 matrix A\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);

printf("Enter the 3*3 matrix B\n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
return 0;
}

int add(int a[][3],int b[][3])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{	
printf("%d ",a[i][j]+b[i][j]);
}
printf("\n");
}
}
int main()
{
int i,j,a[3][3],b[3][3];
input_array(a,b);

printf("Addition of two matrix\n");
add(a,b);

return 0;
}
