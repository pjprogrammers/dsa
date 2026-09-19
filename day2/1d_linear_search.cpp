// this code is for linear search in C++

#include <iostream>
using namespace std;

int main() {
      int n,key,found = 0;
      int arr[100];
      cout << "Enter the Size Of Array : " ;
      cin >> n;
      
      cout << "Enter " << n << " Elements : " << endl ;
      for ( int i = 0 ; i < n ; i++ ) { 
              cin >> arr[i] ;
      }
      
      cout << "Enter Elements to search : " ;
      cin >> key ;
      
      // Linear Search
      for (int i = 0; i < n ; i++ ) { 
              if ( arr[i] == key ) {
                  found = 1;
                  cout << "Elements " << key << " Found at position " << i + 1 << " At Index " << i << endl;
                  break;
              }
      }
      
      if (found == 0) {
          cout << "Element not found.";
      }
      return 0;
      
}

