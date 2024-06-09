#include<iostream>
#include "string.h"
using namespace std;
int main(){
char s1[]="war";
char s2[]=" and ";
char s3[]="peace";
cout<<strcat(strcat(s1,s2),s3);
return 0;
}
