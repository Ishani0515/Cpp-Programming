#include<iostream>
using namespace std;
class X
{
int a;
public:
void get(int a)
{
    a=a;
    this->a=a;
}
void put()
{
    cout<<this->a;
}
};
int main()
{
    X x1;
    x1.get(10);
    x1.put();
    return 0;
}
