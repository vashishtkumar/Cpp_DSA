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
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    queue<Node *> q;
    int data, first, second;
    cout << "Enter the root data" << endl;
    cin >> first;

    Node *root = new Node(first);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << " enter the left node data" << endl;
        cin >> first;

        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << " enter the right node data" << endl;

        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    cout << " tree is made completely ";
    return 0;
}