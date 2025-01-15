#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i+j << " ";
        }
        cout << endl;
    }
    return 0;
}

// other aproach

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, x;
//     cout << "Enter a number: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         x = i;
//         for (int j = 0; j < i; j++)
//         {
//             x++;
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
