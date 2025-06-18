#include <iostream>
using namespace std;

int main() {
    int numCourses;
    float grade, credits, totalGradePoints = 0, totalCredits = 0;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << ":" << endl;
        cout << "Enter grade (0-10): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credits;

        totalGradePoints += grade * credits;
        totalCredits += credits;
    }

    if (totalCredits == 0) {
        cout << "No valid credits entered." << endl;
    } else {
        float cgpa = totalGradePoints / totalCredits;
        cout << "\nYour CGPA is: " << cgpa << endl;
    }

    return 0;
}
