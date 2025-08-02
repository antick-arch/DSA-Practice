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
void Insert_at_tail(int val,Node* head){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void DisplayList(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Insert_at_tail(20,head);
    DisplayList(head);
    return 0;
}