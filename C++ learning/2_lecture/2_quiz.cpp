#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the Character: ";
    c = cin.get();

    if (c >= 65 && c <= 90)
    {
        cout << "Character C is Uppercase" << endl;
    }
    else if (c >= 91 && c <= 122)
    {
        cout << "Character C is Lowercase" << endl;
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "Character C is a Number" << endl;
    }
    else
    {
        cout << "Character C is a Special Character" << endl;
    }
    return 0;
}