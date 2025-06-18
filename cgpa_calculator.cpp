# cgpa_calculator.cpp
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    vector<string> grades(numCourses);
    vector<int> creditHours(numCourses);
    float totalCredits = 0, totalGradePoints = 0;

    cout << "\nGrade mapping: A=10, B=9, C=8, D=7, E=6, F=0\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << "\nCourse " << i + 1 << ":\n";
        cout << "Enter grade (A/B/C/D/E/F): ";
        cin >> grades[i];
        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        int gradePoint = 0;
        if (grades[i] == "A") gradePoint = 10;
        else if (grades[i] == "B") gradePoint = 9;
        else if (grades[i] == "C") gradePoint = 8;
        else if (grades[i] == "D") gradePoint = 7;
        else if (grades[i] == "E") gradePoint = 6;
        else if (grades[i] == "F") gradePoint = 0;
        else {
            cout << "Invalid grade input. Exiting.\n";
            return 1;
        }

        totalCredits += creditHours[i];
        totalGradePoints += (gradePoint * creditHours[i]);
    }

    float cgpa = totalGradePoints / totalCredits;
    cout << fixed << setprecision(2);
    cout << "\n--- CGPA REPORT ---\n";
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course " << i + 1 << ": Grade = " << grades[i]
             << ", Credits = " << creditHours[i] << endl;
    }
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
