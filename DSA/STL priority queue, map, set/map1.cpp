#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>mp;
    mp["alice"] = 5;
    mp["bob"] = 8;
    mp["crow"] = 3;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}