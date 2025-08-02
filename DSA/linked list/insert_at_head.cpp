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
void DisplayList(Node* head){
    Node* temp;
    temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
void insertHead(int val, Node* &head){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    insertHead(40,head);
    DisplayList(head);
    return 0;
}