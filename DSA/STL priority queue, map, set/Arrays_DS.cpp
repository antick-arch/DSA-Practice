#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin>>arr;
        v.push_back(arr);
    }
    int s = v.size();
    reverse(v.begin(), v.end());
    for (int i = 0; i < s; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}