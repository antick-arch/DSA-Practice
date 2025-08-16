#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    Stack s;
    int S;
    cin>>S;
    for (int i = 0; i < S; i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
    return 0;
}