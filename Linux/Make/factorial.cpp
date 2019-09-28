#include"functions.h"
#include<iostream>
using namespace std;

int factorial(int n)
{
 int fact = 1;
 for(int i=n;i>0;i--)
 {
  fact = fact*i;
 }
 cout <<endl;
 return fact;
}
