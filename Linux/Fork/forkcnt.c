#include<stdio.h>
#include<unistd.h>

int main()
{
 int i,cpid;
 static int c = 0;
 cpid = fork();
 if(cpid ==0)
 {
	c = 100;
	for(i=0;i<3;i++)
	{
		printf("Child Counter: %d\n",c++);
	}
 }
 else
 {
 	for(i=0;i<3;i++)
	{
		printf("Parent Counter: %d\n",c++);
	}
 }
 return 0;
}

