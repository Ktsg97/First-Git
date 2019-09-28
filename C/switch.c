#include<stdio.h>
int main()
{
 int a;
 printf("Who is India Captain ?");
 printf("1.Virat\n 2.Rohit\n 3.Dhoni\n 4.Rahane\n Your Option:");
 scanf("%d",&a);
 switch(a)
{
 case 1:
 {
	printf("Yes.Virat is the captain\n");
	break;
 }
 case 2:
 {
	printf("No.Rohit is not the captain\n");
	break; 
 }
 case 3:
 {
	printf("No.Dhoni is the ex-captain\n");
 	break;
 }
 case 4:
 {
 	printf("No.Rahane is not the captain\n");
	break;
 }
 default:
 {
	printf("Choose valid option");
 }
}
return 0;
}
