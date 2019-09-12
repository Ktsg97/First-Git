#include<iostream>
using namespace std;
class employee
{
 private:
  string name;
  string id;
  double sales;
  double salary;
 public:
  employee();
  void input(string,string,double, double);
  void printfixed();
  void printincent();
};
 
employee::employee()
{
 name ="ABC";
 id ="A1B2C3";
 sales = 0.0;
 salary = 0.0;
}

void employee::input(string a,string b,double c,double d)
{
 name = a;
 id = b;
 sales = c;
 salary = d;
}

void employee::printfixed()
{
 double ctc;
 ctc = salary;
 cout<<"\n"<<ctc;
}

void employee::printincent()
{
 double hra,ctc;
 ctc = salary;
 hra = 0.3 * ctc;
 if (hra+salary>500000)
 {
  ctc =ctc+100000;
 }
 if (sales >2000000)
 {
  ctc = (0.1*sales) + ctc;
 }
 cout<<"\n"<<ctc;
}

int main()
{
 employee e;
 e.input("Selva","AA4532Z",2100000,500000);
 cout<<"The fixed ctc is :";
 e.printfixed();
 cout<<"\n The incentive based ctc is :";
 e.printincent();
 return 0;
}
