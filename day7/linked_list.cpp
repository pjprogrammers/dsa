#include <iostream>
using namespace std;
// Defined the structure of our nodes
struct Node {
    int data;
    Node* next;
};

/* but this is too much code which is not practical , this was a theoritical way to create nodes.
int main(){
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = nullptr;
} */

// A more practical way is to create a function.

Node* createNode(int value){
    Node* newNode = new Node; // this creates a new node.
    newNode->data = value; // this assigns the value/data to a node via parameter.
    newNode->next = nullptr; // default address for nodes is null as we will change next manually.

    return newNode; // fucntion returns the newNode node.
}


int main(){
    Node* head = createNode(10);
    Node* second = createNode(30);
    Node* third = createNode(50);

    head->next = second;
    second->next = third;

    // traversing linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " " ;
        temp = temp->next;
    }

    cout << endl;

}