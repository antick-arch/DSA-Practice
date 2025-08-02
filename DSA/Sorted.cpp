#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        vector<int>sor(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sor = arr;
        sort(arr.begin(),arr.end());
        if(arr==sor){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}