#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time (nullptr));
    int number = rand()%20 + 1;
    int n;

    cout << "Guess the random number\n";
    cout << "Numbers are between 1 and 20\n";

    while (true) {
        cout << "Make your guess: ";
        cin >> n;

    if (n == number) {
        cout << "You got the correct number!\n";
        break;
    }
        if (n > number) {
            cout << "Your guess is greater than the number\n";
        }
        else {
            cout << "Your guess is less than the number\n";
        }
    }
    cout << endl;
    cout << "The number is " << number <<'\n';
    return 0;
}
