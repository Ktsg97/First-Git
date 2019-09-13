#include<iostream>
using namespace std;

int boxVolume(int l=1,int w=1,int h=1);

int main()
{
 cout <<"The default box volume is:"<<boxVolume()<<"\n\nThe vol of bix with l 10,\n"<<"w 1 and h 1 is:"<<boxVolume(10)<<"\n\nThe volume of box with l 10,\n"<<"w 5 and h 1 is: "<<boxVolume(10,5)<<"\n\nThe volume of box with l 10,\n"<<"w 5 and h 2 is:"<<boxVolume(10,5,2)<<endl;
 
 return 0;
}

int boxVolume(int l,int w,int h)
{
return l*w*h;
}
