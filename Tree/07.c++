// Maximum in a Binary Tree

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int getMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(getMax(root->left), getMax(root->right)));
}

int iterativeGetMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    int res = root->key;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        res = max(res, curr->key);
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return res;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    cout << getMax(root) << endl;
    cout << iterativeGetMax(root) << endl;
    return 0;
}