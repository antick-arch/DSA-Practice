#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int testcase;
    cin>>testcase;
    Node *temp1 = head;
    for (int i = 1; i <= testcase; i++)
    {
        string quar;
        cin >> quar;
        if (quar == "visit")
        {
            string address;
            cin >> address;
            Node *temp2 = head;
            bool flag = false;
            while (temp2 != NULL) {
                if (temp2->val == address) {
                    temp1 = temp2;
                    cout << temp1->val << endl;
                    flag = true;
                    break;
                }
                temp2 = temp2->next;
            }
            if (!flag) cout << "Not Available" << endl;
        }
        else if (quar == "prev")
        {
            if (temp1->prev != NULL) {
                temp1 = temp1->prev;
                cout << temp1->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        else if (quar == "next")
        {
             if (temp1->next != NULL) {
                temp1 = temp1->next;
                cout << temp1->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        else{
            cout<<"Not Available"<<endl;
        }
    }
    return 0;
}