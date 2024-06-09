#include<iostream>
using namespace std;
int main()
{
int add(int, int);
int a,b;
cout<<"Enter 2 numbers:-";
cin>>a>>b;
add(a,b);
}
int add(int x, int y)
{
int sum=x+y;
cout<<"Sum="<<sum;
return 0;
}