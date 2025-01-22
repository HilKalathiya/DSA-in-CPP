#include <bits/stdc++.h>
using namespace std;

void print(multiset<char> s)
{
    for (auto val : s)
    {
        cout << val << ",";
    }
    cout << endl;
}

int main()
{
    multiset<char> s;
    s.insert('H');
    char c;
    int n;
    cin >> n;
    for (auto i = 0; i < n; ++i)
    {
        cin >> c;
        s.insert(c);
    }
    print(s);
    auto it = s.find('V');
    if (it != s.end())
    {
        cout << (*it) << endl;
        s.erase(it);
    }
    print(s);
    s.erase('C');
    print(s);

    return 0;
}