#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l={10,20,30,20};
    // list<int>l2;
    // l2 = l;
    l.push_back(50);
    l.push_back(60);
    l.push_front(5);
    l.pop_back();
    l.pop_front();
    cout<<*next(l.begin(),2)<<endl;
    l.insert(next(l.begin(),2),100);
    l.erase(next(l.begin(),2),next(l.begin(),4));
    replace(l.begin(),l.end(),20,100);
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    auto it = find(l.begin(),l.end(),50);
    if(it == l.end()){
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}