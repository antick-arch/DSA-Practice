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
void insert_at_tail(Node* &head, Node* &tail, int val){
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
int search(Node* head, int x) {
    Node* temp = head;
    for (int index = 0; temp != NULL; index++) {
        if (temp->val == x) {
            return index;
        }
        temp = temp->next;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
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
        int x;
        cin >> x;
        cout << search(head, x) << endl;
    }
    return 0;
}