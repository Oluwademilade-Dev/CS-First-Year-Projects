#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> numbers;
    int number;
    cout << "Input 5 integers" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Input number " << i + 1 << ": ";
        cin >> number;

        numbers.push_back(number);
    }
    cout << endl;

    cout << "Numbers in vector: " << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << i + 1 << "." << " "<< numbers[i] << endl;
    }
    cout << endl;

    cout << "Input a number to insert: ";
    int insertNumber;
    cin >> insertNumber;
    cout << "Input position to insert number: ";
    int position;
    cin >> position;
    numbers.insert(numbers.begin() + (position) , insertNumber); cout << endl;

    cout << "Updated vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Position to erase: ";
    int eraseNumber;
    cin >> eraseNumber;
    numbers.erase(numbers.begin() + eraseNumber);
    cout << endl;

    cout << "Updated vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

return 0;
}
