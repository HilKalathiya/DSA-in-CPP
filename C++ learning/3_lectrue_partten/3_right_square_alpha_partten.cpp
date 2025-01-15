#include <iostream>
using namespace std;

int main()
{
    int a;
    char b;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            b = 'A' + j + i ; 
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}






// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     char c = 'A' ;
//     cout << "Enter a number: ";
//     cin >> a;
//     c += a;
//     for(char i = 'A'; i < c; i++){
//         for(char j = 'A'; j < c; j++){
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
//     int a;
//     char c = 'A';
//     cout << "Enter a number: ";
//     cin >> a;
//     c += a;
//     for (char i = 'A'; i < c; i++)
//     {
//         for (char j = 'A'; j < c; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }