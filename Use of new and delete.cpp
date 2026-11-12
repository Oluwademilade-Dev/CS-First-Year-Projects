#include <iostream>
using namespace std;

int main () {
    cout << "How many integers do you want to store?" << endl;
    cout << "Enter number: ";
    int number;
    cin >> number;

    int *ptr = new int[number];

    for (int i = 0; i < number; i++) {
        cout << "Numbers: " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "How many more integers do you want to add: ";
    int newNumber;
    cin >> newNumber;

    int* ptr2 = new int[newNumber + number];

    for (int i = 0; i < number; i++) {
        *(ptr2 + i) = *(ptr + i);
    }

    for (int i = 0; i < newNumber; i++) {
        cout << "Numbers: " << number + (i + 1) << ": ";
        cin >> *(ptr2 + number + i );
    }
    delete[] ptr;

    cout << "Values in the array: ";
    for (int i = 0; i < number + newNumber; i++) {
        cout << *(ptr2 + i) << endl;
    }

    delete[] ptr2;
    
    return 0;
}
