#include <bits/stdc++.h>
using namespace std;

    void printVec(vector<int> v){
        cout<<"your vector's elements are: ";
        for(int i = 0; i<v.size();i++){
            cout<< v[i]<<", ";
        }
        cout<<endl;
    }

int main(){
//    vector<int> v1;
//    int x;
//    for(int i = 0;i<10;i++){
//     cin >> x;
//     v1.push_back(x);
//    }
    vector<int> v2(10,5);
    v2.push_back(6);
    v2.push_back(7);
    printVec(v2);
    v2.pop_back();
    printVec(v2);
    vector<int> &v3 = v2;
    v3.push_back(8);
    printVec(v3);
    printVec(v2);
    return 0;
}