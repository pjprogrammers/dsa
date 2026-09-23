
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 elements:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Enter the (" << i << "," << j << ") Element : ";
            cin >> arr[i][j];
        }
    }

    return 0;
}