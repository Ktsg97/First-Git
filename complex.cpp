#include<iostream>
#include<string.h>
using namespace std;
class complex
{
 private:
	string s1,s2;
 public:
	complex(string s3="ABC"/*string s4="XYZ"*/)
	{
		s1 = s3;
		//s2 = s4;
	}
	complex operator + (complex const &obj)
	{
		complex res;
		res.s1 = s1 +" "+obj.s1;
		//res.s2 = s2 + obj.s2;
		return res;
	}
	void print()
	{
		cout<<s1;
	}
};

int main()
{
 complex a("Selva"),b("ganesh"); 
 complex c = a+b;
 c.print();
 return 0;
} 
