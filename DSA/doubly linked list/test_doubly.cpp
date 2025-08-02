#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void display(Node *head, Node *tail)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << endl;
    tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->prev;
    }
}

// void insert_at_head(int val,Node* &head,Node* &tail){
//     Node* newnode = new Node(val);
//     if(head == NULL){
//         newnode = head;
//         newnode = tail;
//     }
//     else{
//         newnode->next = head;
//         head->prev = newnode;
//         head = newnode;
//     }
// }

// void insert_at_tail(int val, Node *&head, Node *&tail)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         newnode = head;
//         newnode = tail;
//         return;
//     }
//     else
//     {
//         tail->next = newnode;
//         newnode->prev = tail;
//         tail = newnode;
//     }
// }

void insert_at_any_pos(int val,int idx, Node *&head, Node *&tail)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        newnode = head;
        newnode = tail;
        return;
    }
    else
    {
        Node* tmp = head;
        for (int i = 0; i < idx; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        newnode->prev = tmp;
        tmp->next = newnode;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    // insert_at_head(100,head,tail);
    // insert_at_tail(100, head, tail);
    insert_at_any_pos(100,2,head, tail);
    display(head, tail);
    return 0;
}