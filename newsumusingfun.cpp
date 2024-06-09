#include<iostream>
using namespace std;
int main(){
int add(int, int);
int num1,num2;
cout<<"Enter 2 numbers:-";
cin>>num1>>num2;
int result=add(num1, num2);
cout<<"Sum="<<result;
return 0;
}
int add(int a, int b){
return (a+b);
}