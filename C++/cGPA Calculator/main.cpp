#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to convert letter grade to numeric value
float letterToNumericGrade(const string& letterGrade) {
    if (letterGrade == "A" || letterGrade == "a") {
        return 4.0;
    } else if (letterGrade == "A-" || letterGrade == "a-") {
        return 3.67;
    } else if (letterGrade == "B+" || letterGrade == "b+") {
        return 3.33;
    } else if (letterGrade == "B" || letterGrade == "b") {
        return 3.0;
    } else if (letterGrade == "B-" || letterGrade == "b-") {
        return 2.67;
    } else if (letterGrade == "C+" || letterGrade == "c+") {
        return 2.33;
    } else if (letterGrade == "C" || letterGrade == "c") {
        return 2.0;
    } else if (letterGrade == "D" || letterGrade == "d") {
        return 1.0;
    } else if (letterGrade == "F" || letterGrade == "f") {
        return 0.0;
    } else {
        return -1.0; // Invalid grade
    }
}

int main() {
    int n;
    cout << "Enter the number of classes to calculate GPA for: ";
    cin >> n;
    string* grades = new string[n]; // Use dynamic memory allocation for letter grades

    for (int i = 0; i < n; i++) {
        cout << "Enter Class Letter grade " << (i + 1) << ": ";
        cin >> grades[i];
    }

    float totalGPA = 0.0;
    for (int i = 0; i < n; i++) {
        float grade = letterToNumericGrade(grades[i]);
        if (grade == -1.0) {
            cout << "Invalid grade entered for class " << (i + 1) << ". Exiting program." << endl;
            delete[] grades; // Free the dynamically allocated memory before exiting
            return 1;
        }
        totalGPA += grade;
    }

    delete[] grades; // Free the dynamically allocated memory when done

    float cGPA = totalGPA / n;

    cout << fixed << setprecision(2);
    cout << "Your cumulative GPA (cGPA) is: " << cGPA << endl;

    return 0;
}
