#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,8};
    vector<int>v2;
    v2 = v;
    v2.pop_back();
    v2.pop_back();
    v2.pop_back();
    v2.push_back(20);
    v2.push_back(10);
    v2.insert(v2.begin()+2,50);
    vector<int>v3={100,200,300};
    v2.insert(v2.begin()+3,v3.begin(),v3.end());
    v2.erase(v2.begin()+2,v2.begin()+6);
    for (int it : v2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>vec = {1,4,5,9,6,4,8,4,9,6,4,5};
    replace(vec.begin(),vec.end(),4,40);
    for (int it : vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    auto it = find(vec.begin(),vec.end(),6);
    if(it != vec.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}