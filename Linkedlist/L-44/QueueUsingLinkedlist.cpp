#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    LinkedList()
    {
        head = NULL;
        tail == NULL;
    }
    void InserAttail(int data)
    {
        Node *node = new Node(data);
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }
};

class Stack : public LinkedList
{
public:
    void queue(int data)
    {
        InserAttail(data);
    }

    int dequeue()
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
    s.queue(100);
    s.queue(78);
    cout << s.dequeue() << endl;
    cout << s.dequeue() << endl;
    cout << s.dequeue()<<endl;
    s.queue(1001);
    cout << s.dequeue();
    return 0;
}