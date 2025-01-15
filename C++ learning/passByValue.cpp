#include <bits/stdc++.h>
using namespace std;

void doSomething(int num)
{
    num = 123;
    num += 5;
    cout << num << endl;
}
void doSomething2(int &num)
{
    num += 5;
    cout << num << endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;

    // pass by reference
    int num1 = 20;
    doSomething2(num1);
}