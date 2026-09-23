// Linked List , Insertion At Beginning
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

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
    Node* fourth = create(5); // this is the node we want to insert , lets say at beginning.
    // so current it is head -> 10 -> 20 -> 30 -> null
    fourth->next = head; // this makes it so the fourth node's next node is head making it basically start from fourth.
    head = fourth; // this makes head = fourth meaning now the node that fourth was pointing to is our head node now
                   // and the node fourth was poiting to contains the next node address which is the node containing data(10) which was our old head

    // now traversing to see if insertion worked.
    temp = head; // a temporary pointer variable which starts with our first node. , reseted it to head as its value became zero because of previous while loop
    cout << "Our Linked List After Insertion : ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << "This Was An Example Of Insertion In Linked List At Beginning." << endl ;
}


// The names we have while creating nodes are pointer variables 
// these pointers point towards nodes 
// they themselves dont contain anything other than the addresses of those nodes , 
// the data and next node addresses are only physically contained in the nodes themselves 
// and nodes themselves are independent of their names aka pointer variables.