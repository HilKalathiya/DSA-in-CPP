#include <iostream>
using namespace std;

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isEven(num))
    {
        cout << num << " is Even." << endl;
    }
    else
    {
        cout << num << " is Odd." << endl;
    }
    return 0;
}