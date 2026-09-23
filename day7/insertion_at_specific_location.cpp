#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* create(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    return newNode;
}

int main(){
    // these are static variables with no user input.
    //int position = 3;
    //int value = 25;

    // this approach is where we can get user input for position and value via console. both work perfectly fine.
    int position,value;
    cout << "Enter the Position where you want to insert a Value : " ;
    cin >> position;
    cout << "Enter the value that you want to insert at position " << position << " : ";
    cin >> value;

    // initial nodes
    Node* head = create(10);
    Node* a = create(20);
    Node* b = create(30);
    Node* c = create(40);
    Node* newNode = create(value); // the node we would be inserting

    // connections of the nodes that we have. otherwise i was getting a segmentation fault since i did null->next = null later-on
    head->next = a;
    a->next = b;
    b->next = c;

    // traversal before insertion.
    cout << "Linked List Before Insertion At Position " << position << " : " ;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // position == 1 condition because if someone wants to insert at 1 which is our start/head , then they want to insert at beginning for which the code is written in if block.
    if (position == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        temp = head;
        for (int i=1 ; i<position - 1 ; i++) { // this condition assigns temp to the node just before our position node.
            temp = temp->next;
        }
        newNode->next = temp->next; // now i know this might be confusing but here the newNode's next node address now contains the address of the node which is the next node of the temp node.
        temp->next = newNode; // and now we have made newnode the next node of our temp node.
        // let's say we wanted to insert at position 3 the temp->next is the position 3 so we put its location inside newnode 
        // and now we made newnode the position 3 so previous position 3 becomes position 4.
        // head/1 -> temp/2 -> position/newNode/3 -> newNode->next/4 -> 5 -> null

    }

    cout << "Linked List after Insertion At Position " << position << " : " ;
    temp = head;
    // traversal after insertion.
    while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << "This was an Example of insertion at a specific position in linked list." << endl;


}