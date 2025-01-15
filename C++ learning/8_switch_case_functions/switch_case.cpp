#include <iostream>
using namespace std;

int main(){
    // char ch = '1';
    // switch(ch){
    //     case 1:
    //         cout << "One" << endl;
    //         break;
    //     case '1':
    //         cout << "Character one" << endl;
    //         break;
    //     case 3:
    //         cout << "Three" << endl;
    //         break;
    //     default:
    //         cout << "It's default case!" << endl;
    // }


    int num = 2;

    while(1){
        switch(num){
            case 1:
                cout << "One" << endl;
                break;
            case 2:
                cout << "Two" << endl;
                exit(0);
            case 3:
                cout << "Three" << endl;
            default:
                cout << "It's default case!" << endl;
            
        }
    }
    return 0;
}