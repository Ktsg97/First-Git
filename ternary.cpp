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
 int min = (a>b) ? ((b<c)?b:c) :((c<a)?c:a);
 cout << "Min is :" << min;
 return 0;
} 
