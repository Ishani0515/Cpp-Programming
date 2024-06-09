#include<iostream>
using namespace std;
class X
{
int p,q;
public:
X(int a , int b)
{
    p=a;
    q=b;
}
X operator-(X &ob)
{
    ob.p= p-ob.p;
    ob.q= q-ob.q;
    return ob;
}
void show()
{
    cout<<p<<" "<<q;
}
};
int main()
{
    X x1(15,10),x2(8,5);
    x1=x1-x2;
    x1.show();
    return 0;
}