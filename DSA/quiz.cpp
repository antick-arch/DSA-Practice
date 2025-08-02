#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    v.insert(v.begin()+3,20);
    for(int it : v){
        cout<<it<<" ";
    }
    return 0;
}