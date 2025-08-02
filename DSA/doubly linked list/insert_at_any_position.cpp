#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void insert_at_any_position(Node *&head, Node *&tail, int val, int idx)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp;
    newnode->prev = temp->prev;
    temp->prev->next = newnode;
    temp->prev = newnode;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);
    head->next = second;
    second->prev = head;
    second->next = tail;
    tail->prev = second;
    display(head);
    cout << endl;
    insert_at_any_position(head, tail, 50, 1);
    insert_at_any_position(head, tail, 60, 1);
    display(head);
    return 0;
}