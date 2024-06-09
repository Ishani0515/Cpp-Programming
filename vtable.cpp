#include<iostream>
using namespace std;
class X
{
public:
int a;// declared as public, so it can be accessible from outside directly.
X(){
a=10;
}
};
class Y: public X
{
public:
Y()
{
a=20;
}
};
int main ()
{
X x1;
Y y1;
cout<<x1.a;
x1=y1;// object slicing
cout<<x1.a;
return 0;
}