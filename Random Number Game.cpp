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








































/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double X;
    int N;

    cout << "Enter value of X: ";
    cin >> X;

    cout << "Enter value of N: ";
    cin >> N;

    for (int i = 0; i <= N; i++) {
        cout << X << "^" << i << " = " << pow(X, i) << endl;
    }

    return 0;
}*/







































/*#include <iostream>
#include <cmath>
using namespace std;

int main(){
        long long X, result = 1;
        int N;

        cout << "Enter value of X: ";
        cin >> X;

        cout << "Enter value of N: ";
        cin >> N;

        for (int i = 0; i <= N; i++) {
            cout << X << "^" << i
                 << " = " << result << endl;

            result = result * X;
        }
    return 0;
}*/





























/*int main() {
    int x;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> x;

        if (x == 0) {
            break;
        }

        if (x % 2 == 0) {
            cout << x << " is an even number\n";
        }
        else {
            cout << x << " is an odd number\n";
        }

        if (x % 3 == 0) {
            cout << x << " is divisible by 3\n";
        }
        if (x % 4 == 0) {
            cout << x << " is divisible by 4\n";
        }

        cout << endl;
    }

    cout << "Size of integer is " << sizeof(int) << " bytes\n";
    cout << "Integer range: " << INT_MIN << " to " << INT_MAX << '\n';

    return 0;
}*/