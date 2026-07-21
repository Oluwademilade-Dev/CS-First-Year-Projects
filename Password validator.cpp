#include <iostream>
#include <string>
using namespace std;

bool validLength(string password) {
        if (password.length() >= 8) {
            return true;
        }
    return false;
}


bool hasUppercase(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (password [i] >= 'A' && password [i] <= 'Z') {
            return true;
        }
    }
    return false;
}

bool hasDigit (string password) {
    for (int i = 0; i < password.length(); i++) {
        if (password [i] >= '0' && password [i] <= '9') {
            return true;
        }
    }
    return false;
}

int main() {
    cout << "Create username: ";
    string username;
    cin >> username;

    while (true)
    {
        cout << "Create Password: ";
        string password;
        cin >> password;

        if (validLength(password)) {
            cout << "Password has 8 characters" << endl;
        }
        else {
            cout << "Password has to be at least 8 characters"<< endl;
        }


        if ( hasUppercase(password)) {
            cout << "Password has at least one uppercase letter" << endl;
        }
        else {
            cout << "Password has to contain at least one uppercase letter." << endl;
        }

        if ( hasDigit(password)) {
            cout << "Password contains at least one digit." << endl;
        }
        else {
            cout << "Password has to contain at least one digit." << endl;
        }

        if ( hasDigit (password) && validLength(password) && hasUppercase(password)) {
            cout << "Password created" << endl;
            break;
        }
    }

    return 0;
}
