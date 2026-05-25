#include <iostream>
using namespace std;

char getGrade(int score) {
    if (score >= 70) {
        return 'A';
    }
    else if (score >= 60) {
        return 'B';
    }
    else if (score >= 50) {
        return 'C';
    }
    else if (score >= 45) {
        return 'D';
    }
    else if (score >= 40) {
        return 'E';
    }
    else {
        return 'F';
    }
}

int getGradePoint(char grade) {
    if (grade == 'A') {
        return 5;
    }
    else if (grade == 'B') {
        return 4;
    }
    else if (grade == 'C') {
        return 3;
    }
    else if (grade == 'D') {
        return 2;
    }
    else if (grade == 'E') {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int scores[5];
    double totalPoints = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter score for course " << i + 1 << ": ";
        cin >> scores[i];

        if (scores[i] < 0 || scores[i] > 100) {
            cout << "Invalid input. Try again." << endl;
            i--;
            continue;
        }
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        char grade = getGrade(scores[i]);
        int gradePoint = getGradePoint(grade);

        cout << "Course " << i + 1
             << " | Score: " << scores[i]
             << " | Grade: " << grade
             << " | Grade Point: " << gradePoint << endl;

        totalPoints += gradePoint;
    }

    double gpa = totalPoints / 5;

    cout << endl;
    cout << "GPA = " << gpa << endl;

    if (gpa >= 4.5) {
        cout << "Final Remark: Excellent" << endl;
    }
    else if (gpa >= 3.5) {
        cout << "Final Remark: Very Good" << endl;
    }
    else if (gpa >= 2.5) {
        cout << "Final Remark: Good" << endl;
    }
    else if (gpa >= 1.5) {
        cout << "Final Remark: Fair" << endl;
    }
    else {
        cout << "Final Remark: Poor" << endl;
    }

    return 0;
}

