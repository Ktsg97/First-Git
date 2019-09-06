#include<stdio.h>
int main()
{
	int num;
	char name[10];
	printf("Enter name:\n");
	scanf("%s",name);
	printf("Enter number:\n");
	scanf("%d",&num);
	if (num>7)
	{
		printf("Hey %s you're cool",name);
	}
	else
	{
		printf("Better Luck Next Time %s",name);
	}
	return 0;
}
