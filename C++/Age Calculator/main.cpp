#include <iostream> // Imports the iostream library
#include <string> // Imports the string library
#include <iomanip> // Imports the iomanip library

using namespace std; // Uses the std namespace

int main()
{
    int year; // Creates a variable called year
    int current_year; // Creates a variable called current_year
    int age; // Creates a variable called age
    string name; // Creates a variable called name

    cout << "What is your name? " << endl; // Prints What is your name?
            cin >> name; // Gets the user's name
        cout << "What year were you born? " << endl; // Prints What year were you born?
            cin >> year; // Gets the user's birth year
        cout << "What is the current year? " << endl; // Prints What is the current year?
            cin >> current_year; // Gets the current year
        age = current_year - year; //calcuates the user's age
    cout << "Hello " << name << "!" << " You are " << age << " years old!" << endl; // Prints Hello <name>! You are <age> years old!

}