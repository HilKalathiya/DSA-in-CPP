#include <iostream>
using namespace std;

int main()
{
    int sum = 0, num;
    cout << "Enter the number upto which you want the sum: ";
    cin >> num;

    for(int i =0 ;i < num; i++){
        if(i%2 ==0){
            sum += i;
        }
    }
    cout << "The sum of even number is: " << sum << endl;

    // for (int i = 1; i < num; i++)
    // {
    //     sum += i;
    // }
    // cout << "The sum is: " << sum << endl;

    // while(n<15){
    //     cout << "Jay Swaminarayan!" << endl;
    //     n++;
    // }
}