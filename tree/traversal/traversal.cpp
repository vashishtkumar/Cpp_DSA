#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->data = value;
        left = right = NULL;
    }
};

class Tree
{
    Node *root;

public:
    Tree()
    {
        root = NULL;
    }

    Node *buildTree(vector<int> &v);
    void preorder(Node *root);
    void inorder(Node *root);
    void postorder(Node *root);
    void levelorder(Node *root);
};

Node *Tree ::buildTree(vector<int> &v)
{
    if (v.size() == 0)
    {
        return NULL;
    }
    int size = v.size();
    queue<Node *> q;
    int i = 0;
    root = new Node(v[i++]);
    q.push(root);
    while (i < size && !q.empty())
    {
        Node *temp = q.front();
        q.pop();

        // creaating left node
        if (i < size)
        {
            if (v[i] != -1)
            {
                temp->left = new Node(v[i]);
                q.push(temp->left);
            }
            i++;
        }

        // creating right node
        if (i < size)
        {
            if (v[i] != -1)
            {
                temp->right = new Node(v[i]);
                q.push(temp->right);
            }
            i++;
        }
    }
    return root;
}

void Tree::preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void Tree::inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void Tree ::postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void Tree ::levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, -1, 5, 6};
    Tree t;
    Node *root = t.buildTree(v);
    cout << endl
         << "  preorder " << endl;
    t.preorder(root);
    cout << endl
         << " inorder " << endl;
    t.inorder(root);
    cout << endl
         << "post order " << endl;
    t.postorder(root);
    cout << endl
         << " level order " << endl;
    t.levelorder(root);
    return 0;
}