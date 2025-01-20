#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, char> p;
    p = make_pair(1, 'a');
    cout<<p.first<< " " << p.second<<endl;
    pair<int, string> p1(2, "hil");

    pair<int,string> p2;
    p2 = {3, "hello"};
    pair<int, string> &p3 = p2;
    p3.first = 4;
    cout<<p2.first<< " " << p2.second<<endl; // p2.first will changed because it gose by refenrence
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int, int> pArr[3];
    pArr[0] = {1,2};
    pArr[1] = {2,3};
    pArr[2] = {3,4};
    swap(pArr[0],pArr[2]);
    for(int i = 0;i<3;i++){
        cout<< pArr[i].first << " " << pArr[i].second<< endl;
    }
    int x ;
    cin>> x;
    return 0;
}