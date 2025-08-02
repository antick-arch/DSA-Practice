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
void Display(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
void insert_at_any_pos(Node* &head,int val,int ind){
    Node* newnode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < ind-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    insert_at_any_pos(head,50,1);
    Display(head);
    return 0;
}