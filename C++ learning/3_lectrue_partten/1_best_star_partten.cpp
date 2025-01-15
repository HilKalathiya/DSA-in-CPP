#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; i + j < num; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 1; j < num; j++)
        {
            if (i + j >= num)
            {
                cout << "* ";
            }
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < num; j++)
        {
            if (j >= i)
            {
                cout << num - j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}