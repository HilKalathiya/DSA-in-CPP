#include <iostream>
#include <math.h>
using namespace std;

// this vs code compiler is giving error my code is absolutely right...

int main()
{
    int num, ans = 0, i = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num != 0)
    {
        int digit = num % 2;
        num = num / 2;
        ans = (digit * pow(10, i)) + ans;
        i++;
    }
    cout << "The binary number of N is: " << ans + 1 << endl; // ahi  +1 karva nu karn che karn ke mara comiler ma inbulid -1 thai ne ave che mate.....
    return 0;
}