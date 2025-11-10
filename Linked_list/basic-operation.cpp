#include <iostream>
using namespace std;

// Singly Linked List Implementation
// creating a node ,  linked list is a chain/collection of nodes
class Node {
    public:
        int data;
        Node* next;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

// inderting at head , inserting before first node
void insertAtHead (Node* &head, int num){
    Node* temp = new Node(num);
    temp->next = head;
    head = temp ;
}

// inserting at tail , inserting after last node
void insertAtTail (Node* &tail, int num){
    Node* temp = new Node(num);
    tail->next = temp;
    tail = tail->next;
}

// printing the linked list
void print (Node* &head){
    Node* temp = head;
    while (temp!=NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


// inserting at any position
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {
    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }
}

    //Deleting a node at any position including first and last node 
    void deleteNode(int position, Node* &head) {
        //deleting first or start node
        if(position == 1) {
            Node* temp = head;
            head = head -> next;
            //memory free start node
            temp -> next = NULL;
            delete temp;
        }
        else {
            //deleting any middle or last node
            Node* curr = head;
            Node* prev = NULL;

            int cnt = 1;
            while(cnt < position) {
                prev = curr;
                curr = curr -> next;
                cnt++;
            }

            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }

    }

int main(){
    
    Node* node1 = new Node(89); // created a new node
    print (node1);       // printing the linked list with single node
    Node* tail=node1; 
    Node* head=node1;   // at start both head and tail are same
    insertAtTail(tail , 90);
    // print (node1);
    insertAtTail(tail , 91);
    insertAtTail(tail , 92);
    insertAtTail(tail , 93);
     print (node1);

     deleteNode(3, head);
    
    
    return 0;
}