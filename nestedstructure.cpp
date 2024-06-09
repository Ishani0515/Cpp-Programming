#include<iostream>
using namespace std;
struct X
{
    struct Y
{ 
    int z;
}y1;
}x1;
int main()
{
    cout<<"enter a no:";
    cin>>x1.y1.z;
    cout<<x1.y1.z;
    return 0;
}