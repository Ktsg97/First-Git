#include<stdio.h>
struct emp
{
 char name[20];
 int salary;
 char* ph;
};
int main()
{
 struct emp e1;
 printf("Enter name:");
 scanf("%s",e1.name);
 printf("\nEnter salary:");
 scanf("%d",&e1.salary);
 printf("\nEnter Phone No.:");
 scanf("%s",e1.ph);
 printf("Name :%s\n",e1.name);
 printf("Salary : %d\n",e1.salary);
 printf("Ph :%s",e1.ph);
 return 0;
}

