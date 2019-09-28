#include<iostream>
using namespace std;
int min(int,int,int);
int main()
{
 int a, b, c;
 cout <<"Enter three values"<<endl;
 cin >> a >> b >> c;
 min(a,b,c);
 return 0;
}

int min(int a, int b,int c)
{
 int mini = 0;
 while( a&&b&&c)
 {
  a--;
  b--;
  c--;
  mini++;
 }
 cout<<"Min is :"<<mini;
 return 0;
}
 
 
