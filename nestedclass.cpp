#include<iostream>
using namespace std;
class A{
     class B{
          class C{
                public:
                    void d(){
                          cout<<"e";
                    }
            };
     };
};
void main ()
{
A:: B :: C c;
c.d();
}