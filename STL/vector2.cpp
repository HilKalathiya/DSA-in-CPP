// #include <bits/stdc++.h>
// using namespace std;

// void printVec(vector<pair<int,int>> &v){
//     cout<<"elements are: ";
//     for(int i = 0; i<v.size();i++){
//         cout<< v[i].first<<" "<<v[i].second<<endl;
//     }
// }

// void inputVec(vector<pair<int,int>> &v){
//     int n;
//     cout <<"Enter Number of elem: ";
//     cin>> n;
//     cout<<"Enter elems: ";
//     for(int i = 0;i<n;i++){
//         int x, y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
// }

// int main(){
//     vector<pair<int,int>> v;
//     inputVec(v);
//     printVec(v);
//     vector<pair<int,int>> v1 = {{1,2},{0,9},{1,5}};
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"elements are: ";
    for(int i = 0; i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}

// int main(){
//     int N;
//     cin>>N;
//     vector<int> v2[N];
//     for(int i = 0;i<N;i++){
//         cout<<"enter num n for vector:";
//         int n;
//         cin>> n;
//         for(int j = 0;j<n;j++){
//             int x;
//             cin>>x;
//             v2[i].push_back(x);
//         }
//     }
//     for(int i = 0;i<N;i++){
//         printVec(v2[i]);
//     }
//     cout<<v2[0][2];
// }

int main()
{
        int N;
        cin>>N;
        vector<vector<int>> v3;
        for(int i = 0;i<N;i++){
            cout<<"enter num n for vector:";
            int n;
            cin>> n;
            vector<int> temp;
            for(int j = 0;j<n;j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            v3.push_back(temp);
        }
        for(int i = 0;i<v3.size();i++){
            printVec(v3[i]);
        }
        cout<<v3[0][2];
    }