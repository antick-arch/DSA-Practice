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
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);
    head->next = second;
    second->prev = head;
    second->next = tail;
    tail->prev = second;
    display(head);
    cout << endl;
    insert_at_tail(head,tail, 50);
    insert_at_tail(head,tail, 60);
    display(head);
    return 0;
}