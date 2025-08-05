#include <bits/stdc++.h>
using namespace std;
int main(){
    // list<int>l(10,3);
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    list<int>l = {1,2,3,4,5,6};
    int arr[] = {10,20,30};
    vector<int>ar = {1,2,3};
    list<int>l2(l);
    list<int>l3(arr,arr+3);
    list<int>l4(ar.begin(),ar.end());
    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val : l3){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val : l4){
        cout<<val<<" ";
    }
    return 0;
}