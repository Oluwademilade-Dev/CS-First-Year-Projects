#include <iostream>
#include <cmath>
using namespace std;

double perimeter (double a, double b, double c) {
    return a + b + c;
}

double triangleArea (double a, double b, double c) {
   const double s = (a + b + c) / 2;
    double value = s * (s - a) * (s - b) * (s - c);
    if (value < 0 && value > -1e-10) value = 0;
    return sqrt(value);
}

int main() {
double a, b, c;
    cout << "Input segments of Triangle" << endl << "Segment a: ";
    cin >> a;
    cout << "Segment b: ";
    cin >> b;
    cout << "Segment c: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Sides must be positive numbers.";
        return 0;
    }
    if (a + b > c && (a + c > b && b + c > a)) {
        cout << "Perimeter = " << perimeter(a, b, c) << endl;
        cout << "Area of Triangle = " << triangleArea(a,b,c) << endl;
    }
    else {
        cout << " Parameters provided cannot form a triangle";
    }
    return 0;
}