#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(8);
    v.push_back(7);
    v.push_back(1);
    v.push_back(14);
    v.push_back(17);
    v.push_back(5);
    v.push_back(9);
    for(auto it = v.rbegin();it<v.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    vector <int> v1(v.rbegin() +1,v.rend()-1);
    for (auto it = v1.begin(); it < v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    v1.erase(v1.begin()+2,v1.end()-2);
    v1.insert(v1.begin()+3,{3,4});
    for (auto it = v1.begin(); it < v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;

} 
