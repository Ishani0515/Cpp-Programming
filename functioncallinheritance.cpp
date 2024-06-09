#include<iostream>
using namespace std;
class I
{
public:
void put()
{
cout<<"put() function called\n";
}
};
class J : public I
{
public:
void out(){
cout<<"out() function called";
put();
}
};
int main()
{
    J ob;
    ob.out();
    return 0;
}