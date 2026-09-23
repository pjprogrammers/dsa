// Linked List , Insertion At The End
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// a function that easily creates nodes with integer value as parameter.
Node* create(int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr; // here, initially the node is not pointing to any other node.

    return newNode;
}

int main(){
    Node* head = create(10);
    Node* second = create(20); 
    Node* third = create(30);

    head->next = second;
    second->next = third;

    //traversing the linked list before insertion to see the difference
    Node* temp = head; // A temporary Pointer Which starts with our first node.
    cout << "Our Linked List Before Insertion : ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // we are doing insertion from this point onwards
    Node* fourth = create(5); // this is the node we want to insert , lets say at the end.
    // so currently it is head -> 10 -> 20 -> 30 -> null
    temp = head;
    // this is where we are finding our last node ,so we can insert newnode next to it.
    while ( temp->next != nullptr ) {
        temp = temp->next;
    }
    temp->next = fourth; // we inserted the newnode next to the last node , basicaly the last node now contains are address of our newnode in its next node field.

    // now traversing to see if insertion worked.
    temp = head; // a temporary pointer variable which starts with our first node. , reseted it to head as its value became zero because of previous while loop
    cout << "Our Linked List After Insertion : ";
    while (temp->next != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data ;
    
    cout << endl << "This Was An Example Of Insertion In Linked List At The End." << endl ;
}


// The names we have while creating nodes are pointer variables 
// these pointers point towards nodes 
// they themselves dont contain anything other than the addresses of those nodes , 
// the data and next node addresses are only physically contained in the nodes themselves 
// and nodes themselves are independent of their names aka pointer variables.