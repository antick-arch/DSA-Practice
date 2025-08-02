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
void insert_at_head(Node*& head, int val) {
    Node * newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    display(head);
    cout << endl;
    insert_at_head(head, 50);
    display(head);
    return 0;
}