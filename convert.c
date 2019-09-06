#include<stdio.h>
#include<string.h>
int main()
{
	char letter;
	printf("Enter letter:");
	scanf("%c",&letter);
	letter = letter -31;
	printf("%c",letter);
	return 0;
}
