#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, ans = 0;
    cout << "Enter a number: ";
    cin >> num;

        num = -num;
        for (int i = 0; num != 0; i++)
        {
            int bit = num & 1;
            ans = (bit * pow(10, i)) + ans;
            num = num >> 1;
        }
        int ans1 = ~ans;
        ans1 = ans1 + 1;
        // for (int i = 0; num != 0; i++)
        // {
        //     int bit = ans1 & 1;
        //     ans = (bit * pow(10, i)) + ans;
        // }
        cout << "The binary representation of the negative number is: " << ans1 + 1 << endl;
   
    return 0;
}