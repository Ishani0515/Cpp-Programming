#include<iostream>
using namespace std;
class C
{
    int a,b;
public:
  C()
  {
    cout<<"enter two numbers: ";
     cin>>a>>b;
  C(C & ob)
  {
    a=ob.a;
    b=ob.b;
  }
  void display()
  {
    cout<<a<<b;
  }
};
int main()
    {
      C c1;
      C c2(c1);
      c1.display();
      c2.display();
      return 0;
    }
}