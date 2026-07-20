#include <iostream>
using namespace std;

struct Owner{
string firstName;
string LastName;
int PESEL;
};

struct Car{
string brand;
string model;
int yearOfProduction;
Owner owner;
};

void display (){
    cout << "Information" << endl;
    cout << "Car Brand: ";
    cout << "Car Model: ";
    cout << "Year it was produced: ";
    cout << "First Name: ";
    cout << "Last Name: ";
    cout << "PESEL: ";
}

int main() {
Car data;
cout << "Provide the following details" << endl;

cout << "Car details" << endl;
cout << "Brand: "; cin >> data.brand; cout << endl;
cout << "Model: "; cin >> data.model; cout << endl;
cout << "Year it was produced: "; cin >> data.yearOfProduction; cout << endl;


cout << "Owner details" << endl;
cout << "First name: "; cin >> data.owner.firstName; cout << endl;
cout << "Last name: "; cin >> data.owner.LastName; cout << endl;
cout << "Input PESEL: "; cin >> data.owner.PESEL; cout << endl;

return 0;
}