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
        root == NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftNode, *rightNode;

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
// void levelOrderPrint(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *>q;
//     if(root)
//         q.push(root);
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         cout<<p->val<<" ";

//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
// }
bool searchBST(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (root->val > val) return searchBST(root->left, val);
    if (root->val < val) return searchBST(root->right, val);
}
int main()
{
    Node *root = input();
    // levelOrderPrint(root);
    int val;
    cin >> val;
    bool flag;
    flag = searchBST(root, val);
    if (flag)
        cout << "found";
    else
        cout << "not found";
    return 0;
}