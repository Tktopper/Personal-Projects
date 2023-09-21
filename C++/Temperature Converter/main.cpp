#include <iostream> // Imports the iostream library
#include <string> // Imports the string library
#include <iomanip> // Imports the iomanip library

using namespace std; // Uses the std namespace

int main(){
    double temp; // Creates a variable called temp
    string temp_type; // Creates a variable called temp_type
    float converted_temp; // Creates a variable called converted_temp
    float converted_temp2; // Creates a variable called converted_temp_type
    cout << "Enter a Temperature: " << endl; // Prints Enter a Temperature:
        cin >> temp; // Gets the user's temperature
        if (cin.fail()) { //checks to see if temp is a number, if it isnt, it will return an error
            cout << "Invalid Temperature!" << endl; // Prints Invalid Temperature!
            return 0; // Returns 0
        }
    cout << "Enter the Temperature Type (C, F or K): " << endl; // Prints Enter the Temperature Type:
        cin >> temp_type; // Gets the user's temperature type
    if (temp_type == "C" || temp_type == "c"){ // Checks if the temperature type is Celsius
            converted_temp = temp * 9 / 5 + 32; // Converts the temperature to Fahrenheit
            converted_temp2 = temp + 273.15; // Converts the temperature to Kelvin
                cout << "The Temperature in Fahrenheit is: " << setw(2) << converted_temp << "°F" << endl; // Prints The Temperature in Fahrenheit is: <converted_temp>
                cout << "The Temperature in Kelvin is: " << setw(2) << converted_temp2 << "K" << endl; // Prints The Temperature in Kelvin is: <converted_temp2>
    }
    else if (temp_type == "F" || temp_type == "f"){ // Checks if the temperature type is Fahrenheit
            converted_temp = temp - 32 * 5 / 9; // Converts the temperature to Celsius
            converted_temp2 = (temp - 32) * 5 / 9 + 273.15; // Converts the temperature to Kelvin
                cout << "The Temperature in Celsius is: " << setw(2) << converted_temp << "°C" << endl; // Prints The Temperature in Celsius is: <converted_temp>
                cout << "The Temperature in Kelvin is: " << setw(2) << converted_temp2 << "K" << endl; // Prints The Temperature in Kelvin is: <converted_temp2>

    }

    else if (temp_type == "K" || temp_type == "k"){ // Checks if the temperature type is Kelvin
            converted_temp = temp - 273.15; // Converts the temperature to Celsius
            converted_temp2 = temp * 9 / 5 - 459.67; // Converts the temperature to Fahrenheit
                cout << "The Temperature in Celsius is: " << setw(2) << converted_temp<< "°C" << endl; // Prints The Temperature in Celsius is: <converted_temp>
                cout << "The Temperature in Fahrenheit is: " << setw(2) << converted_temp2 << "°F" << endl; // Prints The Temperature in Fahrenheit is: <converted_temp2>
    }
    else{ // Checks if the temperature type is invalid
        cout << "Invalid Temperature Type!" << endl; // Prints Invalid Temperature Type!
        return 0; // Returns 0
    }

}