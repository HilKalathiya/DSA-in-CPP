#include <iostream>
using namespace std;

int Arithmetic_prog(int num){
    int ans = (3*num) + 7;
    return ans;
}
int main() {
    int num, nth;
    cout << "Enter a number: ";
    cin >> num;
    nth = Arithmetic_prog(num);
    cout << "the sum to the "<< num << "th term is |" << nth << "|" << endl;
    return 0;
}