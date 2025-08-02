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
int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    return 0;
}