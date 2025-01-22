#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int num;
    cin >> num;
    string s;
    for (int i = 0; i < num; ++i)
    {
        cin >> s;
        m[s]++; // m[s]=m[s]+1;
    }
    for (auto &it : m)
    {
        cout << it.first << "," << it.second << endl;
    }
    return 0;
} 