#include<iostream>
using namespce std;

class base
{
 public:
	virtual void show()=0;
};

class derived : public base
{

};

int main(void)
{
 derived d;
 return 0;
}
