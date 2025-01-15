// #include <iostream>
// using namespace std;

// int main() {
//     int num, tag;
//     cout<< "Enter the number: ";
//     cin >> num;

//     for(int i = 2; i<num; i++) {

//         if( num%i == 0 ){
//             tag = 0;
//             cout << num << " this number is not a prime number." << endl;
//             break;
//         }
//         tag = 1; //this will deside that number is prime of not
//     }

//     if(tag == 1){
//         cout << num << " this number is a prime number." << endl;
//     }
//     return 0;
// }

// second and efficient aproach.
#include <iostream>
using namespace std;

int main()
{
    int num, tag;
    cout << "Enter the Number for checking prime number: ";
    cin >> num;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            tag = 0;
            cout << "The Number '" << num << "' is Prime Not Number." << endl;
            break;
        }
    }
    if (tag != 0)
    {
        cout << "The Number '" << num << "' is Prime Number." << endl;
    }
    return 0;
}