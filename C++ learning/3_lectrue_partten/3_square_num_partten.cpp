#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            x++;
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}




// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << n - j + 1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }