#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i - j  << " ";
        }
        cout << endl;
    }
    return 0;
}