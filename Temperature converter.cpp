#include <iostream>
using namespace std;

void degreeCelsius (double celsius) {
    if (celsius < -273.15) {
        cout << "Invalid temperature";
    }
    else {
        const double fahrenheit = celsius * 1.8 + 32;
        const double kelvin = celsius + 273.15;
        cout << "Fahrenheit: " << fahrenheit << endl << "Kelvin: " << kelvin << endl;
    }
}

void degreeFahrenheit (double fahrenheit) {
    if (fahrenheit < -459.67) {
        cout << "Invalid temperature";
    }
    else {
        const double celsius = (fahrenheit - 32)* 5/9;
        const double kelvin = (fahrenheit + 459.67) * 5/9;
        cout << "Celsius: " << celsius << endl << "Kelvin: " << kelvin << endl;
    }
}

void kelvin (double kelvin) {
    if (kelvin < 0) {
        cout << "Invalid temperature";
    }
    else {
        const double celsius = kelvin - 273.15;
        const double fahrenheit = (kelvin - 273.15) * 1.8 + 32;
        cout << "Celsius: " << celsius << endl << "Fahrenheit: " << fahrenheit << endl;
    }
}


int main() {
    double temperature;
    char unit;
    cout << "Temperature Converter\n";
    cout << "Enter  temperature: ";
    cin >> temperature;
    cout << "Enter Unit:";
    cin >> unit;

if (unit == 'C' || unit == 'c' ) {
    degreeCelsius (temperature);
}
else if  (unit == 'F' || unit == 'f' ) {
    degreeFahrenheit (temperature);
}
else if  (unit == 'K' || unit == 'k' ) {
    kelvin (temperature);
}
else{
    cout << "Invalid Unit";
}
    return 0;
}