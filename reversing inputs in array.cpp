#include <iostream>
using namespace std;

int main() {
    int arr1[10];
    int arr2[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << "The values for array 1 are: \n ";
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout  << endl;

    cout << "The values for array 2 are: \n ";
    for (int i = 0; i < 10; i++) {
        arr2[i] = arr1[9 - i];
        cout << arr2[i] << " ";
    }
}
