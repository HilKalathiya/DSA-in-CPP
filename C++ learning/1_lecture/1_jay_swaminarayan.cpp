#include <iostream>

using namespace std;
int main() {
    cout << "Jay Swaminarayan :) ^_^ " << endl;
    cout << "Namaste Duniyan! :)" << '\n';
    cout << "Shree Hari:)" << endl;
    int a =-59;
    char c ='H';
    bool b = true ,bl = 0;
    float f = 3.1;
    double d =3.142;
    cout << a<< endl;
    cout << c << endl;
    cout<< b << endl;
    cout << bl << endl;
    cout << f << endl;
    cout << d << endl;
    cout << "Size of f is: " << sizeof(f) << endl;
    cout << "Size of a is: " << sizeof(a) << endl;
    cout << "Size of c is: " << sizeof(c) << endl;
    cout << "Size of b is: " << sizeof(b) << endl;
    cout << "Size of d is: " << sizeof(d) << endl;

    int i = (int)'a';
    cout << "this printing of char with typcast in int: "<< i<< endl;
    char ch = 98;
    cout << "this printing of int with typcast in char: "<< ch<< endl;
    unsigned int j = -34523;
    cout<< j << endl;
    return 0;
} 