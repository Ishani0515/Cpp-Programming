#include<iostream>
using namespace std;
class X
{
int a;
public:
X()
{
a=10;
}
void operator=(X ob)
{
a=ob.a;
cout <<"a= "<<a;
}
};
int main()
{
X *x1,x2;
*x1=x2;
return 0;
}
