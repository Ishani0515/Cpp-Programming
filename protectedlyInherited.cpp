#include<iostream>
using namespace std;
class A
{
int p,q;
protected:
int h;
public:
void input()
{
cout<<"Enter 2 nos: \n";
cin>>p>>q;
}
void output()
{
cout<<p<<" "<<q;
}
};
class B:protected A
{
public:
void input()
{
    cout<<"Input a no.: \n";
    cin>>h;
    input();
}
void output()
{
    cout<<h<<endl;
    output();
}
};
int  main()
{
B b1;
b1.input();
b1.output();
return 0;
}