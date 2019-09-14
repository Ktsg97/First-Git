#include<iostream>
using namespace std;
class Date
{
 public:
	Date(int =1,int=1,int =1990);
	void print();
 private:
	int month;
	int day;
	int year;
};

Date::Date(int d,int m,int y)
{
 month = m;
 day = d;
 year = y;
}

void Date::print()
{
 cout<<day<<"-"<<month<<"-"<<year<<endl;
}
 
int main()
{
 Date date1(8,12,1997),date2;
 cout<< "DATE 1:";
 date1.print();
 cout<< "DATE 2:";
 date2.print();
 date2 =date1;
 cout<<"DATE 2 AFTER:";
 date2.print();
}
 
