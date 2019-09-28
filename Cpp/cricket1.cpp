#include<iostream>
using namespace std;
class cricket
{ 
 private:
 	int runs,wickets;
 public:
 	cricket(int r =0,int w=0)
	{
		runs =r;
		wickets =w;
	}
 	cricket(const cricket &x1)
	{
 		runs =x1.runs;
		wickets =x1.wickets;
	}
	int gruns()
	{
 		return runs;
 	}
 	int gwickets()	
	{ 
		return wickets;
 	}
};
 
int main()
{
 cricket x1(100,10);
 cricket x2 =x1;
 cout<<"Player 1:"<<x1.gruns()<<endl;
 cout<<"Player 2:"<<x2.gruns()<<endl;
 
 return 0;
}


