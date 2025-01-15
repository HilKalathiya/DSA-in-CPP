#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int base, pow, result;
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the power : ";
    cin >> pow;
    result = power(base, pow);
    cout << "The result is : " << result << endl;
    return 0;
}