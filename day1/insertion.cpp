#include <iostream>
using namespace std;

int main() { 
      int arr[10] = { 10,20,30,40,50 }; // created an array of max 10 elements
      int n = 5; // number of elements in arr
      int position = 2; // the position where i want to insert the value
      int value = 25; // the value which i want to insert
      /* A for loop which would make the position index free in arr array
      by moving all values after position index to the right by 1*/
      for ( int i = n ; i > position ; i-- ) {
              arr[i] = arr[ i - 1 ]; // moving the value of a index to its next index
      }
      arr[position] = value; // inserting the value at the desired position
      n++; // increasing number of elements
      
      int m = sizeof(arr)/sizeof(arr[0]); // contains the entire size of arr
      // traversing arr array to show that the insertion worked
      for (int j=0 ; j < n ; j++) {
          cout << arr[j] << endl;
      }
}
