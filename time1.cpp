#include<iostream>
using namespace std;
class Time
{
 public:
  //Time();
  void setTime(int,int,int);
  void printMilitary();
  void printStandard();
 private:
  int hour=0;
  int minute=0;
  int second=0;
};

//Time::Time() { hour = minute = second =0;}

void Time::setTime(int h,int m,int s)
{
 hour = (h>=0 && h<24) ? h:0;
 minute = (m>=0 && m<60) ? :0;
 second = (s>=0 && s<24) ? s:0;
}
 
void Time::printMilitary()
{ 
 cout<<(hour <10 ? "0" :"")<<hour<< ":";
 cout<<(minute<10 ? "0" : "")<<minute;
}
void Time::printStandard()
{
 cout<<((hour ==0 || hour ==12) ? 12 : hour )<<":"<<(minute<10 ? "0":"")<< minute <<":"<<(second<10 ? "0":"")<< second <<(hour <12 ? "AM" : "PM");
}

int main()
{
 Time t;
 t.setTime(99,99,99);
 cout << "\n\nAfter attempting invalid settings:\n"<<"\nMilitary time :";
 t.printMilitary();
 cout << "\nDinner Time will be held at ";
 t.printMilitary(); 
 cout << "military time,which is ";
 t.printStandard();
 cout<< "standard time.\n";
 return 0;
}


