#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int val,flag = 0;
    cin>>val;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==val){
            flag = 1;
        }
    }
    if(flag==1){
            cout<<"Found";
        }
    else{
            cout<<"Not found";
        }
    return 0;
}