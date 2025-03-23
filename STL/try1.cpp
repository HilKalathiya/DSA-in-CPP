#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "983542100";
    string s1;
    int i;
    for (i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] - '0' % 2 == 0)
        {
            continue;
        }
        s1 = s.substr(0,i);
    }
    cout<<s1<<endl;
    return 0;
}