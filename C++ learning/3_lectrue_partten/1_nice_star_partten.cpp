#include <iostream>
using namespace std;

int main()
{
    int num, n1, n2;
    cout << "Enter a positive integer: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        n1 = 1;
        for (int j = 1; j <= num; j++)
        {
            if (i + j > num)
            {
                cout << n1 << " ";
                n1++;
            }
            else
            {
                cout << "  ";
            }
        }
        n2 = i - 1;
        for (int j = 2; j <= i; j++)
        {
            cout << n2 << " ";
            n2--;
        }
        cout << endl;
    }
    return 0;
}