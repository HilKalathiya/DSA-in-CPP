#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            if(j == 0 || i == j){
                cout << " * ";
            }
            else{
                cout << "  ";
            }
        }
        for(int j = 0; j < n; j++){
            // if(i == 4){
            //     break;
            // }
            if(j == n - 1 || i + j == n ){

                cout << " * ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= n; j++)
        {
            if (j == 0 || i + j == n )
            {

                cout << " * ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 0; j <= n; j++)
        {
            if (j == n - 1 || j == i)
            {

                cout << " * ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}