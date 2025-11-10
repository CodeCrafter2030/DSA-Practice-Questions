//  Reverse List In K Groups
#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 class Node {
 public:
     int data;
     Node *next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node *next) : data(x), next(next) {}
 };


Node* kReverse(Node* head, int k) {
    // base case 
    if (head == NULL) {
        return NULL;
    }

    // Step 1: check if at least k nodes are available
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    // If nodes < k, don't reverse
    if (count < k) return head;

    // step1: reverse first k nodes (iterative)
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // reverse remaining nodes recursively
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // step3: return new head of reversed list
    return prev;
}

int main() {
    // Creating a simple linked list: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2; // Group size for reversal

    cout << "Original List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Reversing the linked list in k groups
    head = kReverse(head, k);

    cout << "Reversed List in groups of " << k << ": ";
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
