#include<iostream>
using namespace std;
class X{
int a,b;
};
class Y: public X{
int x,y;
};
int main (){
X x1;
Y y1;
cout<<sizeof (x1);
cout<<sizeof (y1);
return 0;
}