#include <bits/stdc++.h>
using namespace std;
void fun(int* &p){
    cout<<"function: "<<&p<<endl;
    // int y = 200;
    *p = 100;
    cout<<"function y: "<<p<<endl;
    // cout<<*p<<endl;
}
int main(){
    int x= 10;
    int* p = &x;
    cout<<"main: "<<&p<<endl;
    fun(p);
    cout<<"main x: "<<p<<endl;
    cout<<*p;
    return 0;
}