#include<iostream>
using namespace std;
int add(int p, int q)
{
    return p+q;
}
float add(float p ,float q)
{
    return p + q;
}
int add(int p , int q ,int r)
{
    return p+q+r;
}
int main()
{
    int n1,n2,n3;
    cout<<"enter two integers:- \n";
    cin>>n1>>n2;
    cout<<add(n1,n2);
    float f1,f2;
    cout<<"enter two floats:- \n";
    cin>>f1>>f2;
    cout<<add(f1,f2);
    cout<<"enter another integer:\n";
    cin>>n3;
    cout<<add(n1,n2,n3);
    return 0;
}
