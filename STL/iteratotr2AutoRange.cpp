#include <bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v = {2, 4, 6, 7, 1, 9};

//     vector<int>::iterator it = v.begin();
//     for (it = v.begin(); it != v.end(); ++it)
//     {
//         cout << (*it) << endl;
//     }
//     for(int &val :v){
//         cout<< val <<" ";
//     }
//     cout << endl;

//     vector<pair<int, int>> v_p = {{1, 2}, {4, 5}, {6, 1}, {7, 9}};
//     for(pair<int,int> &value: v_p){
//         cout << value.first << "," << value.second << endl;
//     }
//     return 0;
// }

int main()
{
    auto a = 'h';
    vector<int> v = {2, 4, 6, 7, 1, 9};
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }
    vector<pair<int, int>> v_p = {{1, 2}, {4, 5}, {6, 1}, {7, 9}};
    for (auto &value : v_p)
    {
        cout << value.first << "," << value.second << endl;
    }
    cout << a << endl;
}