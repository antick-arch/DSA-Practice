#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void display(Node* head) {
    for (Node* temp = head; temp != NULL; temp = temp->next) {
        cout << temp->val;
        if (temp->next != NULL) {
            cout << " ";
        }
    }
    cout << endl;
}

void remove_duplicates(Node* &head) {
    Node* deleteNode;
    for (Node* i = head; i != NULL; i = i->next) {
        for (Node* j = i; j->next != NULL;) {
            if (j->next->val == i->val) {
                deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            } else {
                j = j->next;
            }
        }
    }
}

int main() {
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
            insert_at_tail(head, tail, val);
        }
    }
    remove_duplicates(head);
    display(head);
    return 0;
}
