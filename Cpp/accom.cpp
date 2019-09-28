#include<iostream>
using namespace std;
class shape
{
int length,breadth,side,ch,area;
double radius,area_c;
public:
shape(int l,int b=1)
{
if(l!=b && b!=1)
{
length=l;breadth=b;
ch=1;
}
else
{
side=l;
ch=2;
}
}
shape(double r)
{
radius=r;
ch=3;
}
void call();
void rect();
void square();
void circle();
};

void shape::call()
{
if(ch==1)
rect();
if(ch==2)
square();
if(ch==3)
circle();
}
