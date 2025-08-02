#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
void print_reverse(Node* temp){
    if(temp == NULL){
        return;
    }
    print_reverse(temp->next);
    cout<<temp->val<<endl;
}
void insert_at_tail(int val,Node* &head,Node* &tail){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
int main(){
    Node* head = NULL;  
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        else{
            insert_at_tail(val,head,tail);
        }
    }
    print_reverse(head);
    return 0;
}