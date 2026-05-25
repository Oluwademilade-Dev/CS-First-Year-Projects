#include <iostream>
#include <cmath>
using namespace std;

 double linearEquation (double a, double b) {
    const double x = -b/a;
    return x;
 }

int main() {
    double a;
    double b;
    cout << "This program solves linear equations of format 'ax + b = 0'" << endl;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << endl;

 if ( a == 0 && b == 0) {
     cout << "Infinite solution" << endl;
 }
 else if  ( a == 0 && b != 0) {
     cout << "No solution" << endl;
 }
 else {
    cout << "x = " << linearEquation (a, b) << endl;
 }
    return 0;
}