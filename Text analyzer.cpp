#include <iostream>
#include <string>
using namespace std;

int main() {
   cout << "==== Text Analyzer ====" << endl;
    cout << "Enter a sentence: ";
    string sentence; getline (cin, sentence);

    cout << "Characters: "<< sentence.length() << endl;
    cout << "First character: "<< sentence[0] << endl;
    cout << "Last character: "<< sentence[sentence.length() - 1] << endl;
    int counter = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'a') {
            counter++;
        }
    }
    cout << "Number of 'a': " << counter << endl;
    cout << "Contains Cyber: ";
    if (sentence.find("Cyber") != string::npos ) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }


    return 0;
}
