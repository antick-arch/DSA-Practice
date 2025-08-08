#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
// void insert(Node *&head, Node *&tail, int val)
// {
//     Node *newnode = new Node(val);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     else
//     {
//         Node *tmp = head;
//         while (tmp->next != NULL)
//         {
//             tmp = tmp->next;
//         }
//         tmp->next = newnode;
//     }
// }
void reverse(Node *&head,Node *tmp, Node *&tail)
{
    if(tmp->next == NULL){
        head = tmp;
        return;
    }
    reverse(head,tmp->next,tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}
void insert(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
void display(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insert(head, tail, val);
        }
    }
    reverse(head,head,tail);
    display(head);
    return 0;
}