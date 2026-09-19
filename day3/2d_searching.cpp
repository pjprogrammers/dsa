#include <iostream>
using namespace std ;

int main(){
    // arr is our 2D array.
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    int key;
    cout << "Enter Element that you want to search : ";
    cin >> key; // taking input of the value that we want to search.

    bool found = false; // declaring default value for found , if value gets found it would become true , otherwise remain false.

    for (int i=0 ; i<3 ; i++ ) {
        for (int j=0 ; j<3 ; j++ ) {
            if (arr[i][j] == key){ // if an element is equal to the key which is the element we wanted to search it prints the location of that element
                cout << "Element Found at row " << i << " and column " << j << endl;
                found = true;
            }
        } 
    }
    
    if ( found == false ) {
        cout << "Element not found." << endl;
    }

    return 0;

}