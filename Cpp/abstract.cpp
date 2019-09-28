#include<iostream>
using namespace std;

class base
{
 int x;
 public:
	virtual void fun() =0;
	int getX()
	{
	 return x;
	}
};

class Derived : public base
{
 int y;
 public:
	void fun()
	{
		cout<<"Fun() Called"<<endl;
	}
};

int main(void)
{
 base *bp = new Derived;
 bp->fun();
 return 0;
}
