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
void delete_at_head(Node*& head){
    Node* deletenode;
    deletenode = head;
    head = head->next;
    delete deletenode;
}
void Display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
    
}
void insert_at_tail(int val,Node*& head,Node*& tail){
    Node* newnode = new Node(val);
    if(head == NULL){
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
        if(val == -1){
            break;
        }
        else{
            insert_at_tail(val,head,tail);
        }
    }
    delete_at_head(head);
    delete_at_head(head);
    Display(head);
    return 0;
}