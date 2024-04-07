#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        this->data = value;
        left = right = NULL;
    }
};

Node *insertion(Node *root, int target)
{
    if (!root)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if (root->data > target)
    {
        root->left = insertion(root->left, target);
    }
    else
        root->right = insertion(root->right, target);
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

int search(Node *root, int target)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->data == target)
    {
        return 1;
    }
    if (target > root->data)
    {

        return search(root->right, target);
    }
    else
        return search(root->left, target);
}
int main()
{
    vector<int> v = {6, 3, 17, 18, 2, 1, 20, 14};
    Node *root = NULL;
    for (int i = 0; i < v.size(); i++)
    {
        root = insertion(root, v[i]);
    }
    int target = 0;
    inorder(root);
    cout << endl
         << "if 1 then data is present and if 0 data is not present " << endl;
    cout << search(root, target);
    return 0;
}