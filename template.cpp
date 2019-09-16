#include<iostream>
using namespace std;
 
template<typename T>
T myM(T x, T y)
{
	return (x>y) ? x:y;
}

int main()
{
 cout << myM<int>(3,7)<<endl;
 cout << myM<double>(3.0,7.0)<<endl;
 cout << myM<char>('g','e')<<endl;
 return 0;
}

