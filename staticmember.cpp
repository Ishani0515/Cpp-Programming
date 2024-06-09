#include<iostream>
using namespace std;
class X
{
    static int x;
    public:
    X()
    {
     cout<<x;
    }
};
int X::x;
int main()
{
    X x1;
    return 0;
}