#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}