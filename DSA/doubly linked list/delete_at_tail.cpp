#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* prev;
    Node* next;
    int val;
    Node(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void disPlay(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void delete_at_tail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    delete_at_tail(head,tail);
    disPlay(head);
    return 0;
}