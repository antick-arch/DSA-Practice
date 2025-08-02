#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
void Difference(Node* head){
    Node* temp = head;
    int min = INT_MAX;
    int max = INT_MIN;
    while (temp != NULL)
    {
        if(min>temp->val){
            min = temp->val;
        }
        if(max<temp->val){
            max = temp->val;
        }
        temp = temp->next;
    }
    int diff = max - min;
    cout<<diff;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val == -1){
            break;
        }
        else{
            insert_at_tail(head,tail,val);
        }
    }
    Difference(head);
    return 0;
}