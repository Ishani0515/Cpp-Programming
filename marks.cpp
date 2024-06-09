#include<iostream>
using namespace std;
struct student
{
    char name[4];
    int rollno;
    float marks;
};
void main()
{
    int i;
    struct student arr[4];
    for (i=0;i<4;i++)
    {
        cout<<"enter name"<<"rollno"<<"marks"<<endl;
        cin>>arr[i].name>>arr[i].rollno>>arr[i].marks;
    }
    for (i=0;i<4;i++)
    cout<<arr[i].name<<arr[i].rollno<<arr[i].marks<<endl;
   
}