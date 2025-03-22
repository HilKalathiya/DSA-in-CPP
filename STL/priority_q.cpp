#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(13);
    pq.push(1);
    pq.push(3);
    pq.push(16);
    pq.push(6);
    pq.push(9);
    pq.push(0);
    pq.push(4);

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

    priority_queue<char,vector<char>,greater<char>> mpq;
    mpq.push('H');
    mpq.push('J');
    mpq.push('o');
    mpq.push('e');
    mpq.push(6);
    mpq.push('z');
    mpq.push('v');
    mpq.push(4);

    while (!mpq.empty())
    {
        cout << mpq.top() << endl;
        mpq.pop();
    }
    return 0;
}