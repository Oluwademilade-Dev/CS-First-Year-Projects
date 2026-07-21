#include <iostream>
#include <string>
using namespace std;


struct People {
    string name;
    int age;
    string city;
    People* next;

     void display () const {
        cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
         cout << "City of Residence: " << city << endl;
    }
};

int main () {
      People data1 {"John",18,"krakow", nullptr};
      People data2 {"Maria",18,"Dabrowa", nullptr};
      People data3 {"Nassim",18,"Katowice", nullptr};

    data1.next = &data2;
    data2.next = &data3;
    data3.next = nullptr;

    People* current = &data1;
    cout << "People Information" << endl;
    while (current != nullptr) {
        current -> display();
        cout << endl;
        current = current->next;
    }
}
