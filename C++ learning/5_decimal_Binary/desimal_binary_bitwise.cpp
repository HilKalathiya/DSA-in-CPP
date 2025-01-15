#include <iostream>
#include <math.h>
using namespace std;

// this vs code compiler is giving error my code is absolutely right...

int main()
{
    int n, ans = 0;
    cout << "Enter the Number n: ";
    cin >> n;

    // while (n != 0)
    // {
    //     int digit = n & 1;
    //     ans = (digit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    for(int i = 0; n != 0; i++){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
    }

    cout << "The binary number of N is: " << ans + 1 << endl; // ahi  +1 karva nu karn che karn ke mara comiler ma inbulid -1 thai ne ave che mate......
    return 0;
}
