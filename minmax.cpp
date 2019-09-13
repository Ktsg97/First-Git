#include<iostream>
using namespace std;

int maximum(int,int,int);
int main()
{
 int a,b,c;
 cout <<"Enter three integers: ";
 cin >> a >> b >> c;
 maximum(a,b,c)
 return 0;
}

int maximum(int a,int b,int c)
{
 if(a>b && a>c)
 {
  cout<<"A is max"<<endl;
 }
 else if (b>a && b>c)
 {
  cout <<"B is max"<<endl;
 } 
 else
 {
  cout << "C is max" <<endl;
 }
}
