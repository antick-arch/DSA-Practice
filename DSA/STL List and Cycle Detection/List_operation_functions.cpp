#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l = {10,20,30,40,10,10,20,50,70};
    l.remove(10);
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    l.sort();
    for(int val : l){
        cout<<val<<" ";
    }
    l.sort(greater<int>());
    cout<<endl; 
    for(int val : l){
        cout<<val<<" ";
    }
    l.unique();
    cout<<endl; 
    for(int val : l){
        cout<<val<<" ";
    }
    l.reverse();
    cout<<endl; 
    for(int val : l){
        cout<<val<<" ";
    }
    return 0;
}