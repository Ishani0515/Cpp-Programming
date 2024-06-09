#include<iostream>
using namespace std;
class Emp
{
int emp;
char name [30];
float sal;
public:
void get()
    {
    cout<<"enter emp,name & salary:- \n";
    cin>>emp>>name>>sal;
    }
void put()
{
    cout<<emp<<name<<sal<<endl;
}
};
int main()
{
    int i;
    Emp e1[10];
    for(i=0;i<0;i++)
    {
        e1[i].get();
        e1[i].put();
    }
}
