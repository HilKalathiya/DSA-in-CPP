#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls = {5,2,7};
    ls.push_front(3);
    for(auto v : ls){
        cout<<v<<' ';
    }
    cout<<endl;
    return 0;
}