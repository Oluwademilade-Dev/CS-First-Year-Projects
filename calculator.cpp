#include <iostream>
using namespace std;

int my_add (int a, int b) {
    return a + b;
}

int my_sub (int a, int  b) {
    return a - b;
}

int my_mult (int a, int b) {
    return a * b;
}

int my_div (int a, int b) {
    return a / b;
}


int main () {
    int a, b;
    char option;
    cout << "My Calculator" << endl;
    cout << "Enter two Integers: ";
    cin >> a >> b;

    cout << endl;
    cout << "Select an arithmetic Operation: " << endl;
    cout << "A. Addition " << endl <<
            "B. Subtraction " << endl <<
            "C. Multiplication " << endl <<
            "D. Division " << endl <<
            "E. To stop the program " << endl;
    cout << endl;
    cout << "Make selection: ";
    cin >> option;

    switch (option) {
        case 'A':
        case 'a':
            cout << my_add(a, b) << endl;
            break;

        case 'B':
        case 'b':
            cout << my_sub(a, b) << endl;
            break;

        case 'C':
        case 'c':
            cout << my_mult(a, b) << endl;
            break;

        case 'D':
        case 'd':
            if (b != 0) {
                cout << my_div(a, b) << endl;
            }
            else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;

        case 'E':
        case 'e':
            cout << "Program stopped." << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
            break;
    }

    return 0;
}
