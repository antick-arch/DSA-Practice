#include <bits/stdc++.h>
using namespace std;
class Stack{
    public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main(){
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
}