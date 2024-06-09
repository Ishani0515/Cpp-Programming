#include<iostream>
using namespace std;
void show()
{
    cout<<"show function is overloaded\n";
}
int show(int x)
{
    return (x * x);
}
int main()
{
    show();
    int y= show (10);
    cout<<y;
    return 0;
}