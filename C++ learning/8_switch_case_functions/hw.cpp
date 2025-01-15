#include <iostream>
using namespace std;

int main()
{
    int rupee;
    int rs100, rs50, rs20, re1;
    cout << "Enter the amount in rupees: ";
    cin >> rupee;
    switch (1)
    {
    case 1:
        rs100 = rupee / 100;
        rupee = rupee % 100;
        cout << "Number of 100's notes: " << rs100 << endl;
    case 2:
        rs50 = rupee / 50;
        rupee = rupee % 50;
        cout << "Number of 50's notes: " << rs50 << endl;
    case 3:
        rs20 = rupee / 20;
        rupee = rupee % 20;
        cout << "Number of 20's notes: " << rs20 << endl;
    case 4:
        re1 = rupee;
        cout << "Number of 1's coin : " << re1 << endl;
    default:
        cout << "Rupee is zero." << endl;
    }
    return 0;
}