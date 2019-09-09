#include<stdio.h>
int main()
{
 int *p;
 char *s;
 float *f;
 double *d;
 printf("The size of *p is: %d\n",sizeof(*p));
 printf("The size of *s is: %d\n",sizeof(*s));
 printf("The size of *f is: %d\n",sizeof(*f));
 printf("The size of *d is: %d\n",sizeof(*d));
 return 0;
}
