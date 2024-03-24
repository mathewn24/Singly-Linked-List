#include<iostream>

class Node {
    public:
    int Value;
    Node* Next;
};

void printList(Node* n){
    while(n!= nullptr){
        std::cout << n->Value << std::endl;
        n = n->Next;
    }
}

void insertAtHead(Node** head, int newValue) {
    // Prepare new node.
    Node* newHead = new Node();
    newHead -> Value = newValue;

    // Place node in front of existing head.
    newHead->Next = *head;

    // Move head to the new node.
    *head = newHead;
}

void insertAtTail(Node** head, int newVal) {
    // Prepare the node.
    Node* newTail = new Node();
    newTail->Value = newVal;
    newTail->Next = nullptr;
    
    // If linked list is empty, new node will become the head.
    if (*head == nullptr) {
        *head = newTail;
    }
    // Find the last node.
    Node* end = *head;
    while (end->Next) {
        end = end->Next;
    }
    // Place node after the end node.
    end->Next = newTail;
}

void insertAtNode(Node* givenNode, int newVal) {
    // Check if node exists.
    if (givenNode == nullptr) {
        std::cout << "The node cannot be null.";
    }

    // Prepare node to be inserted.
    Node* newNode = new Node();
    newNode->Value = newVal;

    // Insert new node after given.
    newNode->Next = givenNode->Next;
    givenNode->Next = newNode;

}

int main(){

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = nullptr;
    printList(head);

    return 0;
}