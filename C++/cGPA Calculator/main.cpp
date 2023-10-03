#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Function to convert letter grade to numeric value
float letterToNumericGrade(char letterGrade) {
    switch (letterGrade) {
        case 'A':
        case 'a':
            return 4.0;
        case 'A-':
        case 'a-':
            return 3.67;
        case 'B+':
        case 'b+':
            return 3.33;        
        case 'B':
        case 'b':
            return 3.0;
        case 'B-':
        case 'b-':
            return 2.67;
        case 'C+':
        case 'c+':
            return 3.33;
        case 'C':
        case 'c':
            return 2.0;
        case 'D':
        case 'd':
            return 1.0;
        case 'F':
        case 'f':
            return 0.0;
        default:
            return -1.0; // Invalid grade
    }
}

int main()
{
    int n;
    float gpa, result;
    int grade;
    cout << "Enter the number of classes to calculate GPA for: " << endl;
    cin >> n;
    string array[n];
    
    for(int i=0; i < n ; i++)
    {
        cout << "Enter Class Letter grade: " << (i+1) << ": " << endl;
        cin >> array[i];
    }

        float totalGPA = 0.0;
    for(int i = 0; i < n; i++)
    {
        float grade = letterToNumericGrade(array[i][0]);
        if (grade == -1.0) {
            cout << "Invalid grade entered for class " << (i + 1) << ". Exiting program." << endl;
            return 1;
        }
        totalGPA += grade;
    }

    float cGPA = totalGPA / n;

    cout << fixed << setprecision(2);
    cout << "Your cumulative GPA (cGPA) is: " << cGPA << endl;

    return 0;






}