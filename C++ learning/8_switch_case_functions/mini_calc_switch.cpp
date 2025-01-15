#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char oper;
    cout << "Enter the Number A: ";
    cin >> a;
    cout << "Enter the Number B: ";
    cin >> b;
    cout << "Enter Operator ( + - / * %): ";
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << "Addition: " << a + b;
        break;
    case '-':
        cout << "Subtraction: " << a - b;
        break;
    case '*':
        cout << "Multiplication: " << a * b;
        break;
    case '/':
        if (b != 0)
            cout << "Division: " << a / b;
        else
            cout << "Error! Division by zero";
        break;
    case '%':
        if (b != 0)
            cout << "Modulus: " << a % b;
        else
            cout << "Error! Division by zero";
        break;
    default:
        cout << "Error! Invalid operator";
    }
    return 0;
}