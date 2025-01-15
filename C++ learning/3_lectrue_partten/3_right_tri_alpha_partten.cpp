#include <iostream>
using namespace std;

int main()
{
    int num;
    char c = 'A',b;
    cout << "Enter a positive integer: ";
    cin >> num;
    c += num;
    for (int i = 0; i < num; i++)
    {
        b = c - i - 1;
        for (int j = 0; j <= i; j++)
        {
            
            cout << b << " ";
            b++;
        }
        cout << endl;
    }
    return 0;
}


// #include <iostream>
// using namespace std;



// int main()
// {
//     int num;
//     char c = 'A', b;
//     cout << "Enter a positive integer: ";
//     cin >> num;
//     c += num;
//     for (char i = 'A'; i < c; i++)
//     {
//         b = i;
//         for (char j = 'A'; j <= i; j++)
//         {

//             cout << b << " ";
//             b++;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     char c = 'A', b = 'A';
//     cout << "Enter a positive integer: ";
//     cin >> num;
//     c += num;
//     for (char i = 'A'; i < c; i++)
//     {
//         for (char j = 'A'; j <= i; j++)
//         {
//             cout << b << " ";
//             b++;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     char c = 'A';
//     cout << "Enter a positive integer: ";
//     cin >> num;
//     c += num;
//     for (char i = 'A'; i < c; i++)
//     {
//         for (char j = 'A'; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     char c = 'A';
//     cout << "Enter a positive integer: ";
//     cin >> num;
//     c += num;
//     for(char i = 'A'; i < c; i++){
//         for (char j = 'A'; j <= i; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     } 
//     return 0;
// }