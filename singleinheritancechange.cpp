#include<iostream>
using namespace std;
class I
{
int a,b;

public:
void put()
{
a=b=20;
cout<<a<<b;
}
};
class J : public I
{ };
int main()
{
    J ob;
    ob.put();
    return 0;
}