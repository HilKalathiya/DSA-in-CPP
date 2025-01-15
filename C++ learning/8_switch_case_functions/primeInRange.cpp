#include <iostream>
using namespace std;

void primeInRange(int lower, int upper)
{
    int prime[upper - lower], k = 0;
    for (int i = lower; i <= upper; i++)
    {
        if (i < 2) continue;

        bool flag = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }  
        }
        if (flag == true)
        {
            prime[k] = i;
            k++;
        }
    }
    cout << "The prime numbers are: [";
    for (int i = 0; i < k; i++)
    {
        cout << prime[i];
        if(i < k-1) cout << ", ";
    }
    cout << " ]" << endl;
}

int main()
{
    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    primeInRange(lower, upper);
    return 0;
}