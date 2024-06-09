#include<iostream>
#include<string.h>
using namespace std;
void main(){
char str[20];
cout<<"Enter a string:- ";
cin.getline(str,20);
int l=strlen(str);
cout.write(str,l);
}