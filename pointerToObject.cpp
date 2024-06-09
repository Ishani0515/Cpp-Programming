#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void get(int x)
    {
        a=x;
    }
    void put()
        {
          cout<<a;
        }
};
int main()
{
    A*p;
    p=new A();
    p->get(5);
    p->put();
    delete p;
    return 0;
}