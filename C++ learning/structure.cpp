#include <bits/stdc++.h>
using namespace std;
struct ghanu{
    int id;
    string name;
    float slary;
};

typedef struct student{
    int id;
    string name;
    string sem;
}st;

int main(){
    struct ghanu g1;
    g1.id = 1;
    g1.name = "Ghanshyam pandey";
    g1.slary = 1000000000000 ;
    
    cout << "ID: " << g1.id << endl;   
    cout << "Name: " << g1.name << endl;
    cout << "Salary: " << g1.slary << endl;

    st s1;
    s1.id = 2;
    s1.name = "Ghanshyam pandey";
    s1.sem = "3rd";

    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Sem: " << s1.sem << endl;
}