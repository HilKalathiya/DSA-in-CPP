#include <iostream>
using namespace std;
int fibo(int x){
    if (x == 2)
        return 1;
    else if(x == 1){
        return 0;
    }
    else
        return (fibo(x - 1) + fibo(x - 2));
}
int main() {
    int nth;
    cout << "Enter the value of n: ";
    cin >> nth;
    cout << "The " << nth << "th Fibonacci number is: " << fibo(nth) << endl;
    return 0;
}