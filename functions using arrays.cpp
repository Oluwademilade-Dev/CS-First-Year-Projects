#include <iostream>
using namespace std;

void inputArray (int arr[], int size) {
    int value;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;

        arr[i] = value;
    }
}

void printArray (int arr[], int size) {
    cout << "Values in the array: ";
    for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
    }
}

int calculateSum (int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum: ";
    return sum;
}

int findLargest (int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest: ";
    return largest;
}
int main() {
    int array [5];
    inputArray(array, 5);
    cout << endl;
    printArray(array, 5);
    cout << endl;
    cout << calculateSum(array, 5) << endl;
    cout << findLargest(array, 5) << endl;
    return 0;
}
