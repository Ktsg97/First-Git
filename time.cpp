#include<iostream>
using namespace std;
struct Time
{
 int hour;
 int minute;
 int second;
};
 
void printMilitary(const Time &);
void printStandard(const Time &);

int main()
{
 Time dinnerTime;

 dinnerTime.hour =10;
 dinnerTime.minute = 30;
 dinnerTime.second = 0; 
 cout << "Dinner Time will be held at ";
 printMilitary(dinnerTime); 
 cout << "military time,\nwhich is ";
 //printStandard(dinnerTime);
 //cout<< "standard time.\n";
 dinnerTime.hour = 29;
 dinnerTime.minute = 73;
 cout << "\n Time with invalid values :";
 printMilitary(dinnerTime);
 cout<<endl;
 return 0;
}

void printMilitary(const Time &t)
{ 
 cout<<(t.hour <10 ? "0" :"")<<t.hour<< ":";
 cout<<(t.minute<10 ? "0" : "")<<t.minute;
}
