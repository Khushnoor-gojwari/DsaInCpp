#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int element) {
        data = element;
        next = NULL;
    }
};

// Function to insert at the front of the linked list
void insertAtFront(Node*& Head, int value) {
    Node* newNode = new Node(value);
    newNode->next = Head;
    Head = newNode;
}

// Function to print the linked list
void printll(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node*Head,int value){
    Node*Temp=new Node(value);
    Node*tail=Head;
    while(tail->next!=NULL){
        tail=tail->next;

    }
    tail->next=Temp;
    
}

// Main function
int main() {
    Node* Head = new Node(10); // Create the head node
    insertAtFront(Head, 12);
    insertAtFront(Head, 15);
    
    printll(Head);
    insertAtTail(Head,6);
    printll(Head);

     // Print the linked list
    return 0;
}
