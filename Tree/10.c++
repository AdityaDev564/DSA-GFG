// Iterative Preorder Traversal (Space Optimized)

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

void iterativePreorder(Node *root)
{
    if (root == NULL)
        return;
    stack<Node *> st;
    Node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            cout << curr->key << " ";
            if (curr->right != NULL)
                st.push(curr->right);
            curr = curr->left;
        }
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    iterativePreorder(root);
    return 0;
}