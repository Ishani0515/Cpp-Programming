//Create a Student Database
#include<iostream>
using namespace std;
struct Student
{
int roll;
char name[20];
float mark;
}
s1={10,"Ram",94.66};
struct Student s2={11,"Rita",98};
struct Student s3={12,"Mita",78.89};
int main()
{
cout<<"The records of students are:-\n";
cout<<s1.roll<<s1.name<<s1.mark<<endl;
cout<<s2.roll<<s2.name<<s2.mark<<endl;
cout<<s3.roll<<s3.name<<s3.mark<<endl;
return 0;
}