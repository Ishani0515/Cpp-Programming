#include<iostream>
using namespace std;
int swap (int a,int b);
int main()
{
    int a,b;
    cout<<"enter the two numbers to swap: ";
    cin>>a>>b;
    cout<<"after swaping of two numbers: ";
    swap(a,b);
    return 0;
}
int swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
   cout<<"a:"<<x<<endl;
   cout<<"b:"<<y<<endl;

    return 0;
}


