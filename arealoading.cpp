#include <iostream>
using namespace std;
//circle area
float area(float r)
{
return 3.14* r * r;
}
//triangle area
float area( float b, float h)
{
    return 0.5 * b * h;
}
//rectangle area
int area( int l,int w)
{
    return l * w;
}
int main()
{
float b,h,r,l,w;
float result;
cout<<"enter the radius of the circle:- \n";
cin>>r;
result=area(r);
cout<<"area of circle is "<<result<<endl;
cout<<"enter the base and height of the triangle:- \n";
cin>>b>>h;
result=area(b, h);
cout<<"area of triangle is "<<result<<endl;
cout<<" enter the length and width of the rectangle :- \n";
cin>>l>>w;
result=area(l,w);
cout<<"area of rectangle is "<<result<<endl;
return 0;

}