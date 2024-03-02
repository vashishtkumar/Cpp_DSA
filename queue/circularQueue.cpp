#include <iostream>
using namespace std;
class circularQueue
{
    int size;
    int *arr;
    int front, rear;

public:
    circularQueue(int d)
    {
        size = d;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int data)
    {
        if (isfull())
        {
            cout << "queue is full ";
            return;
        }
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[rear] = data;
        } /*
         else if (rear == size - 1)
         {
             rear = 0;
             arr[rear] = data;
         }
         else
         {
             rear++;
             arr[rear] = data;
         }*/
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = data;
        }
    }

    int dequeue()
    {
        if (isempty())
        {
            return -1;
        }
        int data;
        /* if (front == size - 1)
         {
             data = arr[front];
             front = 0;
         }
         else if (rear == front)
         {
             data = arr[front];
             front = -1;
             rear = -1;
         }
         else
         {
             data = arr[front];
             front++;
         }
         return data;
         */
        if (rear == front)
        {
            data = arr[front];
            front = -1;
            rear = -1;
        }
        else
        {
            data = arr[front];
            front = (front + 1) % size;
        }
        return data;
    }

    bool isfull()
    {
        /*if (front == 0 && rear == size - 1 || rear == front - 1)
        {
            return true;
        }
        return false;
        */
        return (rear + 1) % size == front;
    }

    bool isempty()
    {
        if (rear == -1 && front == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    circularQueue cq(10);

    //     cq.enqueue(100);
    //     cq.enqueue(234);
    //     cq.enqueue(27);
    //     cout << cq.dequeue() << endl;
    //     cout << cq.dequeue() << endl;
    //     cout << cq.dequeue() << endl;
    //    cout << cq.dequeue() << endl;

    /* // cout << cq.dequeue() << endl;
     // cout << cq.dequeue() << endl;
     // cout << cq.dequeue() << endl;
     cq.enqueue(100);
     cq.enqueue(234);
     cq.enqueue(27);
     cq.enqueue(100);
     cq.enqueue(234);
     cq.enqueue(27);
     cout << cq.dequeue() << endl;
     cq.enqueue(100);
     */
    // cout << cq.dequeue() << endl;

    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6);
    cq.enqueue(7);
    cq.enqueue(8);
    cq.enqueue(9);
    cq.enqueue(100);
    cq.enqueue(234);
    cq.enqueue(27);
    return 0;
}