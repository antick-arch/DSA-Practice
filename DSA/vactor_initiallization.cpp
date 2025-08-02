#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector<int>v;
    // vector<int>v(5);
    // vector<int>v(5,20);

    // vector<int>v(5,100);
    // vector<int>v2(v);

    int arr[5] = {10,20,30,40,50};
    vector<int>v(arr,arr+5);


    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}