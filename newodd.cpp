#include<iostream>
using namespace std;
int main(){
int a;
void check(int);
cout<<"enter a number: -";
cin>>a;
check(a);
return 0;
}
void check(int n){
if (n%2==0)
cout<<n<<" is even";
else
cout<<n<<"is odd";
}