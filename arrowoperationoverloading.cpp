#include<iostream>
using namespace std;
class X
{
int p,q;
public: 
X *operator->()
{
    return this;
}
};
int main()
{
    X x1;
    x1-> p=10;
    x1-> q=20;
    cout<<x1->p<<x1->q;
    return 0;
}