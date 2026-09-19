#include <iostream>
using namespace std ;

int main(){
    // arr is our 2D array.
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    
    // we are using "i" for rows , i<3 because we have 3 rows 0,1,2
    for (int i=0 ; i<3 ; i++) {
        // we are using "j" for columns , j<3 becase we have 3 columns 0,1,2
        for (int j=0 ; j<3 ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; // this ends the line after each row is printed.
    }

    return 0;
}
