#include <iostream>
using namespace std;

double yards ( double centimetres) {
     return centimetres / 91.44;
}

double feet (double centimetres ) {
    return centimetres / 30.48;
}

double inches (double centimetres ) {
    return centimetres / 2.54;
}

int main() {
    double centimetres;
    cout << "How many centimetres do you want to convert? " ;
    cin >> centimetres;
    cout << "This is "<< yards (centimetres) << "yards,"<< feet (centimetres)<< "feet," << inches (centimetres) << "inches" << endl;

    return 0;
}





























/*int main() {
    double array[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i+1 << ":";
        cin >> array[i];
    }

    double largest = array [0];
    int index = 0;
    for (int i = 1; i < 5; i++) {
        if (array [i] >= largest) {
            largest = array [i];
            index = i;
        }
    }
    cout << "Index of last largest value: " << index << endl;

    return 0;
}
// Because each element is visited exactly once in a single loop.
*/



















/*int main () {
    double array [5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i+1 << ":";
        cin >> array [i];
    }

    double largest = array [0];
    double smallest  = array [0];

    for (int i = 1; i < 5; i++) {
        if (array [i] > largest) {
            largest = array [i];
        }
        if (array [i] < smallest) {
            smallest = array [i];
        }
    }
    cout << "The largest value is: " <<  largest << endl;
    cout << "The smallest value is: " << smallest << endl;
    return 0;
}
// Time Complexity: O(n) Because each element is visited exactly once in a single loop.
*/














/*int main () {
    double array[5];
    int i;
    for (i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> array[i];
    }

        double smallestValue = array[0];
        for (i = 1; i < 5; i++) {
            if (array[i] < smallestValue) {
                smallestValue = array[i];
            }
        }
        cout << "The smallest value in the array is: " << smallestValue << endl;
        return 0;
    }

// Time Complexity: O(n) because the array is scanned once
*/




















/*int main () {
    int array[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << endl;
    cout << "The values in the array are: \n ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (array[j] < array[i]) {
                temp = array [j];
                array [j] = array [i];
                array [i] = temp;
            }
        }
    }
cout << endl;
cout << " Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
return 0;
    }*/
