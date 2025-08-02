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

void insert_at_tail(int val, Node*& head, Node*& tail) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } 
    else {
        tail->next = newnode;
        tail = newnode;
    }
}

void take_input(Node*& head, Node*& tail) {
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(val, head, tail);
    }
}

void compare(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            cout << "NO" << endl;
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    take_input(head1, tail1);
    take_input(head2, tail2);
    compare(head1, head2);

    return 0;
}
