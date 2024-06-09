#include<iostream>
using namespace std;
class X{
    int x;
    public:
    void put()
    {
        x=10;
        cout<<x;
    }
};
class Y
{
int y;
public:
void out()
{
    y=20;
    cout<<y;
}
};
class Z:public X,public Y
{
    int z;
    public:
    void display()
    {
        z=30;
        cout<<z;
    }
};
int main()
{
    Z z1;
    z1.put();
    z1.out();
    z1.display();
    return 0;
}