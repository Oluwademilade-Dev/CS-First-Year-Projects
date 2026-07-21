#include <iostream>
using namespace std;


int main() {
    int array [10][10];
    int value = 2;

    for (int rows = 0; rows < 10; rows++) {
        for (int column = 0; column < 10; column++) {
            array[column][rows] = value;
            value += 2;
        }
    }

    for (int rows = 0; rows < 10; rows++) {
        for (int column = 0; column < 10; column++) {
            cout << array[rows][column] << ' ';
        }
        cout << endl;
    }

    return 0;
}
