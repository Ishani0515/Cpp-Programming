#include<iostream>
using namespace std;
class A
{
int a;
public:
     A()
     {
          a=12;
     }
    A(A &b)
    {
    a=b.a;
    }
   void print()
   {
    cout<<a;
   }
};
int main()
{
A a1, a2(a1);
a1.print();
a2.print();
return 0;
}