#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

int modulusOperation(int a, int b) {
    return a % b;
}

double power(double a, double b) {
    return pow(a, b);
}

double squareRoot(double a) {
    return sqrt(a);
}

double getNumber(string message) {
    string input;
    double number;

    while (true) {
        cout << message;
        getline(cin >> ws, input);

        stringstream ss(input);
        char extra;

        if (ss >> number && !(ss >> extra)) {
            return number;
        }

        cout << "Invalid input! Please enter a valid number."
             << endl;
    }
}

int getInteger(string message) {
    string input;
    int number;

    while (true) {
        cout << message;
        getline(cin >> ws, input);

        stringstream ss(input);
        char extra;

        if (ss >> number && !(ss >> extra)) {
            return number;
        }

        cout << "Invalid input! Please enter a valid integer."
             << endl;
    }
}

void showMenu() {
    cout << "==============================" << endl;
    cout << "       C++ CALCULATOR         " << endl;
    cout << "==============================" << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Power" << endl;
    cout << "7. Square Root" << endl;
    cout << "8. Exit" << endl;

    cout << "==============================" << endl;
}

char getAgain() {
    string answer;

    while (true) {
        cout << "Do you want to perform another calculation? (y/n): ";
        getline(cin >> ws, answer);

        if (answer == "y" || answer == "Y") {
            return 'y';
        }

        if (answer == "n" || answer == "N") {
            return 'n';
        }

        cout << "Invalid input! Please enter only y or n."
             << endl;
    }
}

int main() {

    cout << setprecision(12);

    char again= 'n';
    bool exitProgram = false;

      do {

         showMenu();
      
int choice;
string input;

while (true) {

     cout << "Enter your choice: ";
    getline(cin >> ws, input);

    stringstream ss(input);
    char extra;

    if (ss >> choice && !(ss >> extra)) {

        if (choice >= 1 && choice <= 8) {
            break;
        }

        cout << "Invalid choice! Please enter a number from 1 to 8."
             << endl;

    } else {
        cout << "Invalid input! Please enter a whole number."
             << endl;
    }
}
    
    switch (choice) {
        // Addition
        case 1: {
            double num1 = getNumber("Enter first number: ");
            double num2 = getNumber("Enter second number: ");

            cout << "Result: " << addition(num1, num2) << endl;

            break;
        }
         
        // Subtraction
        case 2: {
            double num1 = getNumber("Enter first number: ");
            double num2 = getNumber("Enter second number: ");

            cout << "Result: " << subtraction(num1, num2) << endl;

         break;
        
         //Multiplication
        }
        case 3: {
            double num1 = getNumber("Enter first number: ");
            double num2 = getNumber("Enter second number: ");

            cout << "Result: " << multiplication(num1, num2) << endl;

            break;
        }

        // Division
        case 4: {
            double num1 = getNumber("Enter first number: ");
            double num2 = getNumber("Enter second number: ");

            if (num2 == 0) {
                cout << "Error: Cannot divide by zero." << endl;
            } else {
                cout << "Result: " << division(num1, num2) << endl;
            }

            break;
        }

        // Modulus
        case 5: {

            int num1 = getInteger("Enter first integer: ");
            int num2 = getInteger("Enter second integer: ");

            if (num2 == 0) {
                cout << "Error: Cannot calculate modulus by zero." << endl;
            } else {
                cout << "Result: " << modulusOperation(num1, num2) << endl;
            }

            break;
        }

        // Power
        case 6: {
            double base = getNumber("Enter base: ");
            double exponent = getNumber("Enter exponent: ");

            if (base == 0 && exponent < 0) {
            cout << "Error: Zero cannot have a negative exponent."
             << endl;
             }
            else if (base < 0 && floor(exponent) != exponent) {
            cout << "Error: A negative base requires an integer exponent "
             << "for a real-number result." << endl;
            }
            else {
            double result = power(base, exponent);

            if (!isfinite(result)) {
            cout << "Error: The result is undefined or too large."
                 << endl;
            }
            else {
            cout << "Result: " << result << endl;
             }
            }

         break;
        }

        // Square Root
        case 7: {
            double num = getNumber("Enter number: ");

            if (num < 0) {
                cout << "Error: Square root of a negative number is not a real number." << endl;
            } else {
                cout << "Result: " << squareRoot(num) << endl;
            }

            break;
        }

        // Exit
        case 8:
           exitProgram = true;
            break;
        //invalid choice
        default:
            cout << "This operation is not available yet." << endl;
    }

     if (!exitProgram) {
         cout << endl;
         again = getAgain();
        }

 } while ((again == 'y' || again == 'Y') && !exitProgram);

    cout << "Thank you for using C++ Calculator!" << endl;

    return 0;
}