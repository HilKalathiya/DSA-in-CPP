#include<bits/stdc++.h>
using namespace std;

void print(set<char> s){
    for(auto val:s){
        cout<<val<<",";
    }
    cout<<endl;
}

int main(){
    set<char> s;
    s.insert('H');
    char c;
    int n;
    cin>>n;
    for(auto i = 0;i<n;++i){
        cin>>c;
        s.insert(c);
    }
    print(s);
    auto it = s.find('H');
    if(it!=s.end()){
        cout<<(*it)<<endl;
        s.erase(it);
    }
    print(s);

    return 0;
}