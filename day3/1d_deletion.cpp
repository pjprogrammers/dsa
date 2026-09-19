#include <iostream>
using namespace std;

int main(){
    int arr[10] = {10,20,30,40,50};
    int n = 5; // number of elements or the size of array
    int position = 2; // the index of the value we want to delete

    // traversing the array before deletion
    cout << "Array Before Deletion of number " << position + 1 << " element in the array :  ";
    for (int j=0 ; j < n ; j++ ) {
        cout << arr[j] << " " ;
    }
    cout << endl;

    // deleting the 3rd element in arr which is at index 2.
    for (int i=position ; i < n ; i++ ) {
        arr[i] = arr[i + 1];
    }
    n--;
    
    // traversing the array after deletion
    cout << "Array after Deletion of number " << position + 1 << " element in the array :  ";
    for (int i=0 ; i < n ; i++ ) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;

}


// NOTE : one new thing i learned here is that any variable we declare inside "for loop" are local and not global
// doesnt matter whether it is inside parameter of the loop or inside the statements we run.
// so if "i" is declared inside "for loop" it's actually not declared for the entire code which i guess was obvious.