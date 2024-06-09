#include<iostream>
using namespace std;
class X
{
int a;
public:
void in()
{
    cout<<"Enter a no: \n";
    cin>>a;
}
void out()
{
cout<<"max no= "<<a;
}
X max(X m)
{
    if(m.a>a)
    return m;
    else 
    return *this;
}
};
int main()
{
X x1,x2,x3;
x1.in();
x2.in();
x3=x1.max(x2);
x3.out();
return 0;
}