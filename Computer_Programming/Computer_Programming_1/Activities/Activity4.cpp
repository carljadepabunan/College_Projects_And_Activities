#include <iostream>

using namespace std;

void failedStudent(int gradeList[], int numberOfStudent, int passingGrade) {
    cout << "Failed" << endl;
    for (int i = 0; i < numberOfStudent; i++) {
        if (gradeList[i] < passingGrade) {
            cout << "Student Number " << i + 1 << endl;
        }
    }
}

void passedStudent(int gradeList[], int numberOfStudent, int passingGrade) {
    cout << "Passed" << endl;
    for (int i = 0; i < numberOfStudent; i++) {
        if (gradeList[i] > passingGrade || gradeList[i] == passingGrade) {
            cout << "Student Number " << i + 1 << endl;
        }
    }
}

int main() {
    int passingGrade;
    int numberOfStudent;
    cout << "Input Passing Grade : ";
        cin >> passingGrade;
    cout << "Input Number Of Student : ";
        cin >> numberOfStudent;
    int gradeList[numberOfStudent];
    for (int i = 0; i < numberOfStudent; i++) {
        cout << "Enter Grade Of Student " << i + 1 << " : ";
        cin >> gradeList[i];
    }
    failedStudent(gradeList, numberOfStudent, passingGrade);
    passedStudent(gradeList, numberOfStudent, passingGrade);
    return 0;
}