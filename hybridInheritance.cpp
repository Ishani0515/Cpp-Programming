#include<iostream>
using namespace std;
class A 
{
public:
    void getA() 
    {
        cout << " class A." << endl;
    }
};

class B : public A 
{
public:
    void getB() 
    {
        cout << " class B." << endl;
    }
};

class C : public A 
{
public:
    void getC() 
    {
        cout << "class C." << endl;
    }
};

class D : public B
{
public:
    void getD()
    {
        cout << " class D." << endl;
    }
};

int main()
{
 C c1;
D d1;
c1.getA();
c1. getC();
d1. getB();
d1.getD();
return 0;
}