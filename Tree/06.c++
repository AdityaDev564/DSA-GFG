// Size of a Binary Tree

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

int getSize(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return 1 + getSize(root->left) + getSize(root->right);
}

int iterativeGetSize(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int count = 0;
    while (q.empty() == false)
    {
        Node *curr = q.front();
        q.pop();
        count++;
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return count;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(70);
    cout << getSize(root) << endl;
    cout << iterativeGetSize(root) << endl;
    return 0;
}