#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,4,6,7,1,9};

    vector<int>::iterator it = v.begin(); 
    for(it = v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }

    vector<pair<int,int>> v_p = {{1,2},{4,5},{6,1},{7,9}};
    vector<pair<int,int>>:: iterator i;
    for(i =v_p.begin();i != v_p.end();++i){
        cout << (*i).first<<","<< (*i).second << endl;
    }
    for (i = v_p.begin(); i != v_p.end(); ++i)
    {
        cout << i->first << "," << i->second << endl;
    }
    return 0;
}  