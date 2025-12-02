#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll,grade;
    Student(string name, int roll, int grade){
        this->name = name;
        this->roll = roll;
        this->grade = grade;
    }
};
class cmp
{
    public:
    bool operator()(Student l, Student r) 
    {
        return l.grade < r.grade;
    }
};
int main(){
    int num;
    cin>>num;
    priority_queue<Student,vector<Student>,cmp>p;
    while (num--)
    {
        string name;
        int roll,grade;
        cin>>name>>roll>>grade;
        Student obj(name,roll,grade);
        p.push(obj);
    }
    while (!p.empty())
    {
        cout<<p.top().name<<" "<<p.top().roll<<" "<<p.top().grade<<"\n";
        p.pop();
    }
    return 0;
}