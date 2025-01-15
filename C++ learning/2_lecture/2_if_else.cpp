#include <iostream>
using namespace std;

int main()
{
    int a, b, c,d;
    cout << "Enter the Number a : ";
    cin >> a;
    cout << "Enter the Number b : ";
    cin >> b;
    c = a>b?a:b;
    cout << c << " this is greater number" << endl;
    if (a > b)
    {
        cout << "A is Greater than B" << endl;
    }
    else
    {
        cout << "B is Greater than A" << endl;
    }
    if (a > 0)
    {
        cout << "this number is positive" << endl;
    }
    else if (a == 0)
    {
        cout << "this number is zero" << endl;
    }
    else
    {
        cout << "this number is negative" << endl; 
    return 0;
}