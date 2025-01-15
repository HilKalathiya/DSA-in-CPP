#include <iostream>
using namespace std;
int set_bit(int a)
{
    int count = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter one integers: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    int n1 = set_bit(a);
    int n2 = set_bit(b);
    cout << "The total number of set bits are " << n1 + n2 << endl;
    return 0;
}