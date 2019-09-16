#include<iostream>
using namespace std;

class Smart
{
 int *ptr;
 public:
	explicit Smart(int *p = NULL)
	{
		ptr = p;
	}
 ~Smart()
 {
	delete(ptr);
 }

 int &operator *()
 {
  return *ptr;
 }
};

int main()
{
  Smart ptr(new int());
  *ptr = 20;
  cout << *ptr;
  return 0;
} 
