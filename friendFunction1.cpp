#include<iostream>
using namespace std;
class X
{
int a,b;
public:
void input()
{
    cin>>a>>b;
}
void display()
{
    cout<<a<<b;
}
friend int calculate(X);
};
int calculate(X ob)
{
    return ob.a+ob.b;
}
int main()
{
    X x1;
    x1.input();
    x1.display();
    int r=calculate(x1);
    cout<<r;
    return 0;
}