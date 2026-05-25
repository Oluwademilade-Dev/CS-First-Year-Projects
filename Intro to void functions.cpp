#include <iostream>
using namespace std;

void greetUser (string name ) {
    cout << "Hello " << name << "!\n";

}
void length (string name) {
    if (name.empty()) {
        cout << "Input your name again\n";
        return;
    }
        cout << "Your name has " << name.length() << " letters.\n";
}

int main() {
    string name;
    cout << "What is your name?\n";
    getline (cin, name);
    greetUser (name);
    length (name);
    return 0;
}