#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l(10);
    cout<<l.max_size()<<endl;
    cout<<l.size()<<endl;
    l.clear();
    cout<<l.size()<<endl;
    if(l.empty()){
        cout<<"Empty"<<endl;
    }
    l.resize(20,100);
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    for(int val : l){
        cout<<val<<endl;
    }
    return 0;
}