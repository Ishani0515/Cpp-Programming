#include<iostream>
using namespace std;
int add (int num1 ,int num2)
{
    return num1 +num2;
}
   int sub (int num1,int num2)
{
    return num1-num2;
}
int multiply (int num1 ,int num2)
{
    return num1*num2;
}
float divide (int num1,int num2)
{
     return num1 /num2;
}    
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition: " << add(a,b) << endl;
    cout << "Subtraction: " << sub(a,b) << endl;
    cout << "Multiplication: " << multiply(a,b) << endl;
    cout << "Division: " << divide(a,b) << endl;
    
    return 0;
}