#include <iostream>
using namespace std;

//doubly Linked List Implementation
// creating a node ,  linked list is a chain/collection of nodes
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            cout<<"memory is free for node with data "<<value<<endl;
        }
    }
};

//  inderting at head , inserting before first node
void insertAtHead (Node* &head, int num){
    Node* temp = new Node(num);
    temp->next = head;
    head->prev = temp;
    head = temp ;
}

// inserting at tail , inserting after last node
void insertAtTail (Node* &tail, int num){
    Node* temp = new Node(num);
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}

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

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

//Deleting a node at any position including first and last node
void deleteNode(int position, Node* &head) {
    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        if(head != NULL) {
            head -> prev = NULL;
        }
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
        if(curr -> next != NULL) {
            curr -> next -> prev = prev;
        }
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
    }
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

int main(){
    
    Node* node1 = new Node(89); // created a new node
    cout << node1 -> data << endl;       // printing the linked list with single node
    cout << node1 -> next << endl;
    cout << node1 -> prev << endl;

    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 45);
    insertAtHead(head, 50);
    insertAtHead(head, 55);
    insertAtHead(head, 60);
    print(head);

    insertAtPosition(tail, head, 3, 100);
    insertAtPosition(tail, head, 2, 100);
    insertAtPosition(tail, head, 4, 100);
    print(head);

    deleteNode(1, head);
    deleteNode(3, head);
    deleteNode(4, head);
    print(head);

    return 0;
}