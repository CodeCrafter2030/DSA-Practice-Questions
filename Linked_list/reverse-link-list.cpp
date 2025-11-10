#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

Node* reverseLinkedList(Node* head) {
    // Base case: if list is empty or has one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive call to reverse the smaller list
    Node* newHead = reverseLinkedList(head->next);

    // Now, fix the current node's next pointer
    head->next->next = head;  // reverse the link
    head->next = NULL;        // make current node the new tail

    return newHead;  // return the head of the reversed list
}

int main() {
    // Creating a simple linked list: 1 -> 2 -> 3 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reversing the linked list
    head = reverseLinkedList(head);

    cout << "Reversed List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Freeing allocated memory
    while (head != NULL) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }

    return 0;
}
