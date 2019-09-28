#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
 int cpid = fork();
 if (cpid == 0)
 {
	printf("Child\n");
 }
 else
 {
	printf("Parent\n");
 }
 return 0;
}
