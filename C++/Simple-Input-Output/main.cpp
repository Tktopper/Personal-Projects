#include <iostream> // Imports the iostream library
#include <string> // Imports the string library
#include <iomanip> // Imports the iomanip library

using namespace std; // Uses the std namespace

int main()
{
    string name; // Creates a variable called name
    cout << "What is your name? " << endl; // Prints What is your name?
        cin >> name; // Gets the user's name
    cout << "Hello " << name << "!" << " Nice to meet you!" << endl; // Prints Hello <name>! Nice to meet you!

}

// Compile Command: g++ main.cpp -o main && ./main