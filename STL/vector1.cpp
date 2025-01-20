#include <bits/stdc++.h>
using namespace std;

    void printVec(vector<int> v){
        cout<<"your vector's elements are: ";
        for(int i = 0; i<v.size();i++){
            cout<< v[i]<<", ";
        }
    }

int main(){
   vector<int> v1;
   int x;
   for(int i = 0;i<10;i++){
    cin >> x;
    v1.push_back(x);
   }
   printVec(v1);
    return 0;
}