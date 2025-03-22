#include <bits/stdc++.h>
using namespace std;

bool internalComparator(pair<int,int> elm1,pair<int,int> elm2){ 
    if(elm1.second>elm2.second) return true;
    if(elm1.second<elm2.second) return false;
    if(elm1.first<elm2.first) return true;
    return false;
}

int main()
{
    int arr[10] = {5, 2, 1, 0, 8, 4, 3, 7, 9, 6};
    sort(arr+2, arr + 8);
    for (auto i : arr)
    {
        cout << i << ", ";
    }
    cout << endl;

    vector<int> vec = {10,3,2,6,1,5};
    sort(vec.begin(),vec.end());
    for (auto i : vec)
    {
        cout << i << ", ";
    }
    cout << endl;
    
//accumlate
    cout<<accumulate(arr,arr+10,5)<<endl;

    // count
    cout<<count(arr,arr+6,2)<<endl;

    //next permutaion
    string str = "bef";
    do{
        cout<<str<<endl;
    }while (next_permutation(str.begin(),str.end()));
    // prev permutaion
    string st = "gsf";
    do
    {
        cout << st << endl;
    } while (prev_permutation(st.begin(), st.end()));

    // max and min element
    auto it = max_element(arr,arr+5);
    cout<<*it<<endl;
    it = min_element(arr+1,arr+4);
    cout<<*it<<endl;

    //power
    cout<<pow(4,5)<<endl;


    // comparitor
    pair<int, int> arr1[] = {{1,6},{1,5},{2,6},{2,9},{3,9}};
    //sort according to
    //the second element
    //{2,9} {3,9} {1,6} {2,6} {1,5}
    sort(arr1,arr1+5,internalComparator);
    for (auto i : arr1)
    {
        cout << i.first << "-> "<<i.second<<endl;
    }
    cout << endl;

    return 0;
}