// tree is made with completely completing the left part and gradually movin towards the right one

#include <iostream>
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

Node *buildTree()
{
    int data;
    cout << "enter the data " << endl;
    cin >> data;
    if (data == -1)
        return NULL;

    Node *root = new Node(data);
    cout << "enter the left child of " << data << endl;
    root->left = buildTree();
    cout << "enter the right child of " << data << endl;
    root->right = buildTree();

    return root;
}
int main()
{
    Node *root = buildTree();

    cout << "tree made succesfully";

    return 0;
}


/*
  // time and space complexity
  time complexity o(n);

  space complexity o(h);

*/