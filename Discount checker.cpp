#include <iostream>

using namespace std;

int main() {
   cout << "Input price of item to check for discounts: ";
    double price;
    cin >> price;

    if ( price >= 200 ) {
        const double discount = (price * 20) / 100;
        const double discountedPrice = price - discount;

        cout << "20% discount available!!!" << endl;
        cout << " Discounted price: " << "$" << discountedPrice << endl;
    }
    else if ( price >= 100 ) {
        const double discount = (price * 10) / 100;
        const double discountedPrice = price - discount;


        cout << "10% discount available!!!" << endl;
        cout << " Discounted price: " << "$" << discountedPrice << endl;
    }
    else {
        cout << " This item does not have any discount ";
    }
        return 0;
    }
