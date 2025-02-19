#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(6);
    st.push(3);
    st.push(9);
    st.push(7);
    st.push(5);
    st.push(2);//this is the last elm

    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
    // st.pop() now it gives me run time error
    cout<<endl;

    return 0;
}   