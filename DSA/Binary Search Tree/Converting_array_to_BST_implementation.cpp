#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void levelOrderPrint(Node *root)
{
    if (root == NULL)
        return;
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
Node *convert_array(int a[], int s, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftSide = convert_array(a,s,l,mid-1);
    Node *rightSide = convert_array(a,s,mid+1,r);
    root->left = leftSide;
    root->right = rightSide;
    return root;
}
int main()
{
    int s;
    cin >> s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    Node *root = convert_array(a, s, 0, s - 1);
    levelOrderPrint(root);
    return 0;
}