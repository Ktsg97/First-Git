#include<iostream>
using namespace std;
class A
{
 	private:
	A()
	{
		cout<<"A"<<endl;
	}
};

class B : private A
{
	public:
	B()	
	{
		cout<<"B"<<endl;
	}
};

class C : public B
{
	public:
	C()	
	{
		cout<<"C"<<endl;
	}
};

int main()
{
 C obj;
 return 0;
}


