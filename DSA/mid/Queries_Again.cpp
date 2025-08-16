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

void forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void riv(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << "\n";
}

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    Node *newnode = new Node(val);

    if (idx == 0)
    {
        newnode->next = head;
        if (head != NULL)
        {
            head->prev = newnode;
        }
        head = newnode;
        if (tail == NULL)
        {
            tail = newnode;
        }
        forward(head);
        riv(tail);
        return;
    }

    Node *temp = head;
    int i = 0;
    while (i < idx - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        cout << "Invalid\n";
        return;
    }

    if (temp->next == NULL)
    {
        temp->next = newnode;
        newnode->prev = temp;
        tail = newnode;
    }
    else
    {
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    forward(head);
    riv(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, val;
        cin >> x >> val;
        insert_at_any_position(head, tail, x, val);
    }
    return 0;
}
