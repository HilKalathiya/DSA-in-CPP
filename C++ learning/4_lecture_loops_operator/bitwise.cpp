#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    cout << "bitwise and:" << (a & b) << endl;
    cout << "bitwise or:" << (a | b) << endl;
    cout << "bitwise xor:" << (a ^ b) << endl;
    cout << "bitwise left shift:" << a << " << 3 = " << (a<<3) << endl;
    cout << "bitwise right shift:" << a << " >> 3 = " << (a >> 3) << endl;
    cout << "bitwise complement:" << ~a << endl;
    // a =0,b=2;
    // if(a-- > 0||++b>2){
    //     cout <<"yes";
    // }
    // else{
    //     cout <<"no";
    // }
    return 0;
}
