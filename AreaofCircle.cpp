#include<iostream>
using namespace std;
float area(float r)//fun.  def.
{
return 3.14*r*r;
}
int main()
{
float r;
cout<<"Enter radius:-";
cin>>r;
float a=area(r);//fun. call
cout<<"area is "<<a;
return 0;
}