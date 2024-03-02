#include <iostream>
using namespace std;

class Node{
public:
int data;
Node *next;

//constructor

Node(int data){
    this -> data=data;
    next=NULL;
}
//destructor
~Node(){
 int val=this->data;
 if(this->next!=NULL){
    delete next;
    this->next=NULL;
 } 
 cout <<"the value of the deletd node is " << val <<endl;  
}
};


void insertAtHead(Node* &head, int d){
//new node create

Node* temp=new Node(d);
 temp -> next =head;
 head=temp;
}


void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
    

}

void print(Node *&head){
    if(head==NULL){
        cout << "Linked list is empty " <<endl;
    }

    Node *temp=head;
    while (temp!=NULL)
    {  cout << temp -> data<< " ";
    temp=temp -> next;
    }
    cout <<endl;
    

}


void insertAtPosition(Node* &tail,Node* &head,int position, int data){

if(position ==1){
    insertAtHead(head,data);
    return;
}

Node* temp=head;
int cnt=1;
while(cnt < position-1){
temp=temp->next;
cnt++;
}

//insert at end
if(temp->next==NULL){
insertAtTail(tail,data);
return;
}

////insert new node

Node* insertNode=new Node(data);
insertNode->next=temp->next;
temp->next=insertNode;


}


// void deleteNode(Node* &head,Node *&tail,int position){
// if(position == 1){
//     Node* temp =head;
//     head=head->next;
//     temp->next=NULL;
//     delete temp;
// }
// else{
//     Node* curr=head;
//     Node* prev=NULL;
//    int cnt=1;
//    while(cnt < position){
//     prev=curr;
//     curr=curr->next;
//     cnt++;
//    }
//    if(curr->next == NULL){
//     tail=prev;
//    }
//    prev->next=curr->next;
//    curr->next=NULL;
//    delete curr;
// }

// }
void deleteNode(Node* &head, Node *&tail, int position) {
    // Check for empty list
    if (head == NULL) {
        return;
    }

    // Deleting the first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        // If list becomes empty, update tail
        if (head == NULL) {
            tail = NULL;
        }
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        // Traverse the list to find the node to delete
        while (curr != NULL && cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // Check if position is beyond list length
        if (curr == NULL) {
            return;
        }

        // Updating tail if last node is deleted
        if (curr->next == NULL) {
            tail = prev;
        }
        prev->next = curr->next;
        delete curr;
    }
}

int main()
{

    //create new node

    Node *node1=new Node(10);

    //cout << "node1 " << node1 ->data <<endl;
   // cout <<"node1 next  " <<node1 -> next;

    // head and tail point where

    Node *head=node1;
    Node *tail=node1;
    /*
    // Insert at head
    print(head);
    insertAtHead(head,12);

    print(head);
 
  insertAtHead(head,20);
   print(head);

   */



// insert at tail
print(head);
insertAtTail(tail,12);

print(head);
 
insertAtTail(tail,20);
print(head);



//insert at position

insertAtPosition(tail,head,1,35);
print(head);
insertAtPosition(tail,head,5,36);
print(head);
insertAtPosition(tail,head,5,40);
print(head);


deleteNode(head,tail,1);

cout <<"head: " <<head->data <<"tail :" << tail->data;
return 0;
} 