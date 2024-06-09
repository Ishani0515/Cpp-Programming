#include<iostream>
int main()
{
    int num1,num2;
    std::cout<<"enter any 2 numbers: \n";
    std::cin>>num1>>num2;
    int num;
    std::cout << "Select an operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "Enter your choice (1-4): ";
    std::cin >> num;
    switch (num)
    {
     case 1:
        std::cout<<"addition"<<num1+num2;
        break;
     case 2:
         std::cout<<"substraction"<<num1-num2;
         break;
     case 3:
         std::cout<<"multiplication"<<num1*num2;
         break;
     case 4:
         std::cout<<"division"<<num1/num2;
         break;   
    }
    return 0;
}