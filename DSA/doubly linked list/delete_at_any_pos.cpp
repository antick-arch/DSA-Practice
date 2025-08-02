#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void delete_at_any_pos(Node* head,int idx){
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    delete_at_any_pos(head,1);
    display(head);
    return 0;
}