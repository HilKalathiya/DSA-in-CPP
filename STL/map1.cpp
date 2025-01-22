#include <bits/stdc++.h>
using namespace std;
void print(map<int,char> m1){
    for (auto &pr : m1)
    {
        cout << pr.first << "," << pr.second << endl; // O(log(n))
        cout << m1.size() << endl;
    }
}
int main(){
    map<int,char> m1;
    m1[0] = 'H'; //O(log(n))
    m1[4] = 'C';
    m1[2] = 'S';
   print(m1);
    auto it =m1.find(0); //O(log(n))
    // if(it==m1.end()){
    //     cout<<"NO value";
    // }
    // else{
    //     cout << it->first << "," << it->second << endl;
    // }
    if(it == m1.end())
        m1.erase(it);
    print(m1);
    m1.clear();
    print(m1);
} 