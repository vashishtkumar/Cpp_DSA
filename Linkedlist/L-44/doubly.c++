#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    Node *prev;
    int data;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        cout << "the deleted value is " << this->data << endl;
    }
};

class DoublyLinkedlist
{
public:
    Node *head = NULL;

    void insertAtHead(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        newNode->prev = temp;
        temp->next = newNode;
    }

    void insertAtPosition(int position, int data)
    {
        if (position == 1)
        {
            insertAtHead(data);
            return;
        }
        // if position is grater than size of list

        Node *tempone = head;
        int size = 0;
        while (tempone != NULL)
        {
            size++;
            tempone = tempone->next;
        }

        if (position > size + 1)
            position = size + 1;

        int cnt = 1;
        Node *temp = head;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (temp->next == NULL)
        {
            insertAtTail(data);
            return;
        }
        Node *newNode = new Node(data);
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    void deleteNode(int position)
    {
        if (head == NULL)
        {
            cout << "node is empty";
            return;
        }

        Node *tempone = head;
        int size = 0;
        while (tempone != NULL)
        {
            size++;
            tempone = tempone->next;
        }

        if (position > size)
        {
            cout << "Out of bound " << endl;
            return;
        }
        if (position == 1)
        {
            Node *to_delete = head;
            head = head->next;
            delete (to_delete);
            return;
        }
        int cnt = 1;
        Node *temp = head;
        while (cnt < position)
        {
            temp = temp->next;
            cnt++;
        }
        // deleting the last node
        Node *to_delete = temp;
        if (temp->next == NULL)
        {
            temp->prev->next = NULL;
            delete (to_delete);
            return;
        }
        // deleting any middle node
        temp->prev->next = temp->next;
        temp->next->prev = temp;

        delete (to_delete);
    }

    void printNode()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{

    DoublyLinkedlist N;

    N.insertAtHead(10);
    N.insertAtHead(20);
    N.insertAtHead(40);
    N.insertAtTail(45);
    N.insertAtPosition(5, 89);
    N.insertAtTail(56);
    N.printNode();
    N.insertAtPosition(10, 245);
    // N.printNode();
    N.insertAtPosition(5, 300);
    N.printNode();
    N.insertAtPosition(14, 500);
    N.printNode();
    // N.deleteNode(1);
    // N.printNode();
    return 0;
}