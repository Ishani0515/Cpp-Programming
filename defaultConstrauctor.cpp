#include<iostream>
using namespace std;
class sanu
{
public :
sanu()
{
    cout<<"hello!"<<endl;}
    sanu(char S[])
{
    cout<<S<<endl;
}
};
int main()
{
    sanu s1,s2("Sonal"),s3("Sanu");
    return 0;
}