#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(12); //first elme
    q.push(2);
    q.push(17);
    q.push(9);
    q.push(3);
    q.push(6);
    q.push(4);
    q.push(8);

    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<endl;
    return 0;
}