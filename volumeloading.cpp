//Find out the volume of cube, cuboid and cylinder using function overloding
#include<iostream>
using namespace std;
//volume of cube
int volume( int a)
{
    return a*a*a;
}
//volume of cuboid
int volume(int l,int w,int h)
{
    return l*w*h;
}
//volume of cylinder
int volume(int r,int h)
{
    return 3.14*r*r*h;
}
int main()
{
    int a,l,w,h,r;
    int result;
    cout<<"enter the edge of the cube:- \n";
    cin>>a;
    result=volume(a);
    cout<<"volume of the cube is"<<result<<endl;
    cout<<"enter the length,width and heightt of the cuboid:- \n";
    cin>>l>>w>>h;
    result=volume(l,w,h);
    cout<<"volume of the cuboid is"<<result<<endl;
    cout<<"enter the radius and height of the cylinder:- \n";
    cin>>r>>h;
    result=volume(r,h);
    cout<<"volume of the cylinder is"<<result<<endl;
    return 0;
}
