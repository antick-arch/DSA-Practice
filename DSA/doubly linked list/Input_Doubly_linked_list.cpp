#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; 
    }
};
void display(Node* head) {
    Node* temp = head;
    while (temp!= NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void insert_at_tail(Node*& head,Node*& tail, int val) {
    Node* newnode =  new Node(val);
    if (head == NULL) { 
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode; 
    newnode->prev = tail; 
    tail = newnode;
}   
int main(){
    Node *tail = NULL;
    Node *head = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    
    display(head);
    return 0;
}