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
Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1)
            leftNode = NULL;
        else
            leftNode = new Node(l);
        if (r == -1)
            rightNode = NULL;
        else
            rightNode = new Node(r);
        p->left = leftNode;
        p->right = rightNode;

        if (p->left)
            q.push(leftNode);
        if (p->right)
            q.push(rightNode);
    }
    return root;
}
int countLeafNode(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = countLeafNode(root->left);
    int r = countLeafNode(root->right);
    return l + r;
}
int main()
{
    Node *root = input();
    cout << countLeafNode(root) << endl;
    return 0;
}