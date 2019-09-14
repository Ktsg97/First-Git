#include<iostream>
using namespace std;
class Veh
{
	public:
		Veh()
 		{
			cout<<"This is a vehicle"<<endl;
		}
};

class Fwh
{
 	public:
		Fwh()
		{
			cout<<"This is a 4 Wheeler"<<endl;
		}
};

class car : public Veh,public Fwh
{
 
};

int main()
{
 car obj1;
 return 0;
}
