#include<iostream>
using namespace std;
int main ()
{
    int check(int);
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0)
    {
        printf("The entered number is even.");
    }
    else
{
    printf("The entered number is odd.");
}
    return 0;

}
    int check(int a)
{
    if (a%2==0)
    cout<<a<<" is even";
    return 0;
}
