#include <iostream>
using namespace std;

struct Numbers {
    int digit;
    Numbers* previous;
    Numbers* next;

};

int main() {
int arraySize = 5;
    Numbers n0, n1, n2, n3, n4;
    n0.digit = 1;
    n1.digit = 2;
    n2.digit = 3;
    n3.digit = 4;
    n4.digit = 5;

    n0.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;

    n0.previous = nullptr;
    n1.previous = &n0;
    n2.previous = &n1;
    n3.previous = &n2;
    n4.previous = &n3;

    cout << "Numbers in ascending order" << endl;
    Numbers* current = &n0;
    while (current != nullptr) {
        cout << current->digit << endl;
        current = current->next;
    }

    cout << "Numbers in descending order" << endl;
    Numbers* current2 = &n4;
    while (current2 != nullptr) {
        cout << current2 ->digit << endl;
        current2 = current2 ->previous;
    }


    return 0;
}
