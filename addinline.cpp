#include<iostream>
using namespace std;
inline int add(int n1 , int n2)
{
    return n1+n2;
}
int main()
{
    int a1,a2,s;
    cout<<"enter 2 nos:- \n";
    cin>>a1>>a2;
    s=add(a1,a2);
    cout<<s;
}