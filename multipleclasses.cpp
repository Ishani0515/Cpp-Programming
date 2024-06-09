#include<iostream>
using namespace std;
class A
{
int x;
public:
A()
{
x=5;
}
void out1()
{
    cout<<x;
}
};
class B
{
int y;
public:
B()
{
y=10;
}
void out2()
{
    cout<<y;
}
};
int main()
{
A a1;
B b1;
a1.out1();
b1.out2();
return 0;
}