#include<iostream>
using namespace std;
int main()
{
 int x,y;
 int* const p = &x;
 *p =7;
 p = &y;
 return 0;
}
