#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int mark;
    string name;
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if(l.mark > r.mark) return true;
        else if(r.mark> l.mark) return false;
        else{
            return l.roll>r.roll;
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> q;
    int t;
    cin >> t;
    while (t--)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        Student obj(name, roll, mark);
        q.push(obj);
    }
    while (!q.empty())
    {
        cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().mark<<"\n";
        q.pop();
    }
    
    return 0;
}