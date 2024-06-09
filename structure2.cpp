#include<iostream>
using namespace std;
struct X
{
char ch;
int p;
};
struct X x1;
int main()
{
cout <<sizeof (x1.ch)<<"\n";
cout <<sizeof (x1.p)<<"\n";
return 0;
}