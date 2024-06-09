#include<iostream>
using namespace std;
class X
{
public:
X();//declartion
X(int );
};
X::X()
{
    cout<<"default\n";
}
X::X(int x)
{
cout<<x;
}
 int main()
{
    X x1;
    X x2(10);
    return 0;
}