#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        next = NULL;
        this->data = data;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtHead(int data)
    {
        Node *node = new Node(data);
        if (head == NULL)
            head = node;
        else
        {
            node->next = head;
            head = node;
        }
    }
};

class Stack : public LinkedList
{
public:
    void Push(int data)
    {
        insertAtHead(data);
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }
        Node *temp = head;
        int data = head->data;
        head = head->next;
        delete temp;
        return data;
    }
};
int main()
{

    Stack s;
    s.Push(10);
    s.Push(20);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.Push(300);
    cout << s.pop() << endl;

    return 0;
}