#include <iostream>
using namespace std;

int main() {
    int numbers[10];

    // Input 10 integers
    cout << "Enter 10 integers:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Sorting using Bubble Sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "Sorted array: ";

    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
