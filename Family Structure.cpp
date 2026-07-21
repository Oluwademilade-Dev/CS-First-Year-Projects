#include <iostream>
using namespace std;

struct Family {
    string firstName;
    string lastName;
    Family *father;
    Family *mother;
    Family *grandFather;
    Family *grandMother;
};

int main()
{
    Family grandFather {"Mike", "Adesida", nullptr, nullptr};

    Family father {"Deji", "Adesida", nullptr, nullptr};

    Family mother {"Kemi", "Adesida", nullptr, nullptr};

    Family child {"Oluwademilade", "Adesida", &father, &mother, &grandFather};

    cout << "Child: " << child.firstName << " " << child.lastName << endl;
    cout << "Child's father: " << child.father->firstName << " " << child.father->lastName << endl;
    cout << "Child's mother: " << child.mother->firstName << " " << child.mother->lastName << endl;
    cout << "Child's grandfather: " << child.grandFather->firstName << " " << child.grandFather->lastName << endl;
    return 0;
}
