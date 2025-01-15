#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * (factorial(n - 1));
}
long long nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n, r;
    cout << "Enter The number N: ";
    cin >> n;
    cout << "Enter The number R: ";
    cin >> r;
    long long  result = nCr(n, r);
    cout << "The nCr of " << n <<" and " << r << " is |" << result << "|"<< endl;
    return 0;
}