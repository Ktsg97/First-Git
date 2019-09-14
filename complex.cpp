#include<iostream>
using namespace std;
class complex
{
 private:
	int real,imag;
 public:
	complex(int r=0,int i=0)
	{
		real = r;
		imag = i;
	}
	complex operator + (complex const &obj)
	{
		complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print()
	{
		cout<<real<<"+ i"<<imag<<endl;
	}
};

int main()
{
 complex a(1,1),b(2,4);
 complex c = a+b;
 c.print();
 return 0;
} 
