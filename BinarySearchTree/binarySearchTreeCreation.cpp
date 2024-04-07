#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right, *left;
    Node(int value)
    {
        this->data = value;
        right = left = NULL;
    }
};

Node *insert(Node *root, int target)
{

    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }

    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    else
        root->right = insert(root->right, target);
        return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    vector<int> v = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};

    int size = v.size();

    Node *root = NULL;
    for (int i = 0; i < size; i++)
    {
        root = insert(root, v[i]);
    }
    inorder(root);
    return 0;
}