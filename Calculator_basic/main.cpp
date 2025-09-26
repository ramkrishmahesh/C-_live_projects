/*
Welcome to the C++ basic Calculator project where one can just simply perform the calculator operations
Author : Ramakrishnan Mahesh
Date : 26.05.2025
Platform: Coursera (A MOOC platform)
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char operand;
    int result;
    
    cout << "Enter the first number : ";
    cin >> a;
    cout << endl;

    cout << "What kind of operation you want to perform? (+,-,*,/,%) : ";
    cin >> operand;
    cout << endl;

    cout << "Enter the second number: ";
    cin >> b;

    switch(operand)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            cout << "Invalid operator. Please try again!!" <<endl;
            break;
    }

    cout << "a " << operand << " b is " << result <<endl;
    return 0;

}