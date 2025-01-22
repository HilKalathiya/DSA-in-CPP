#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,string> m;
    m[0] = "string";


    int num;
    cin>>num;
    string s;
    unordered_map<string,int> m1;
    for(int i =0;i<num;++i){
        cin>>s;
        m1[s];
        m1[s]++;
    }
    for(auto &it:m1){
        cout<<it.first<<","<<it.second<<endl;
    }
    return 0;
}