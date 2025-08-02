#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<long long int>arr(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<long long int>pre(n);
    pre[0] = arr[0];
    for (long long int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + arr[i];
    }
    reverse(pre.begin(),pre.end());
    for (long long int i = 0; i < n; i++)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}