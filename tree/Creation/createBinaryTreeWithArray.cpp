#include <iostream>
#include <vector>
#include <queue>
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

Node *buildTree(vector<int> &v)
{
    int size = v.size();
    if (size == 0)
    {
        return NULL;
    }
    int i = 0;
    queue<Node *> q;
    Node *root = new Node(v[i++]);
    q.push(root);
    while (i < size && !q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (i < size)
        {
            if (v[i] != -1)
            {
                temp->left = new Node(v[i]);
                q.push(temp->left);
            }
            i++;
        }
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

void printLevel(Node *root)
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

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    vector<int> v = {1, 2, 3, 7, -1, 5, 6, 8};
    Node *root = buildTree(v);

    printLevel(root);
    cout << endl
         << " preorder " << endl;
    preorder(root);
    return 0;
}