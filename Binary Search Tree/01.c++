// Search in BST

#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (root->key == x)
        return true;
    else if (root->key > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}

bool iterativeSearch(Node *root, int x)
{
    while (root != NULL)
    {
        if (root->key == x)
            return true;
        else if (root->key > x)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    int x = 16;
    if (search(root, x))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    if (iterativeSearch(root, x))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}