#include<iostream>
using namespace std;
int main()
{
    int func(void);
    func();
    func();
    func();
}
int func()
{
    int a=1;
    cout<<a<<endl;
    a++;
    return 0;
}