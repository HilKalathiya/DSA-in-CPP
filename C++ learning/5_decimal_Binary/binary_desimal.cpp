#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, ans = 0, i = 0;
    cout << "Enter a number: ";
    cin >> num;
    while( num != 0){
        int digit = num % 10;

        if(digit == 1){
            ans = ans + pow(2,i);
        }
        num = num / 10;
        i++;
    }
    cout << "Binary to decimal: " << ans << endl;
    return 0;
}