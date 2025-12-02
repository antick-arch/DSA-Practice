#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    set<int>s;
    while (t--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }
    for (auto it = s.begin(); it != s.end() ; it++)
    {
        cout<<*it<<" ";
    } 
    if (s.count(2)) cout<<"\nAche";
    else cout<<"nai";
    return 0;
}