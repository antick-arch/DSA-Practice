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

void display(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        cout << endl; 
        return;
    }
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node* &head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &tail, Node* &head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_any_position(Node* &head, Node* &tail, int idx) {
    if (head == NULL) {
        return;
    }

    if (idx == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) {
            tail = NULL; 
        }
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            return; 
        }
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return; 
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    if (deleteNode == tail) {
        tail = temp;
    }

    delete deleteNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, val;
        cin >> x >> val;
        if (x == 0) {
            insert_at_head(head, val);
            if (tail == NULL) {
                tail = head; 
            }
        } else if (x == 1) {
            insert_at_tail(tail, head, val);
        } else if (x == 2) {
            delete_at_any_position(head, tail, val);
        }

        display(head);
    }

    return 0;
}
