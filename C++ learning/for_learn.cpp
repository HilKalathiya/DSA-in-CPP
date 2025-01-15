#include <iostream>
using namespace std;

int main(){
    int one = 134 ,two = 234;
    int c;
    cout<<"Enter the number C:";
    cin >> c;
    if(c > 12){
        cout << c << "is good number " << endl;
        for(int i = 0;i<c;i++){
            cout << i << endl;
        }
    }
    cout<< one + two << endl;
}