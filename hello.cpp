//Contributed by Varun
#include <iostream>
#include <cmath>        // For pow()
#include <iomanip>      // For setprecision
#include <limits>       // For numeric_limits

using namespace std;

// Function declarations
void showMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);
double power(double base, double exp);

int main() {
    int choice;
    float num1, num2;

    cout << fixed << setprecision(2);  // Format output to 2 decimal places

    do {
        showMenu();
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number from 1 to 7.\n";
            continue;
        }

        if (choice >= 1 && choice <= 6) {
            cout << "Enter first number: ";
            cin >> num1;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid number.\n";
                continue;
            }

            cout << "Enter second number: ";
            cin >> num2;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a valid number.\n";
                continue;
            }
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                if ((int)num2 == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    if (num1 != (int)num1 || num2 != (int)num2) {
                        cout << "Warning: Modulus is only valid for integers. Truncating decimals." << endl;
                    }
                    cout << "Result: " << modulus((int)num1, (int)num2) << endl;
                }
                break;
            case 6:
                cout << "Result: " << power(num1, num2) << endl;
                break;
            case 7:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again!" << endl;
        }

        cout << "----------------------------------\n";

    } while (choice != 7);

    return 0;
}

// Function definitions
void showMenu() {
    cout << "\n========= Calculator Menu =========\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Modulus (%)\n";
    cout << "6. Power (x^y)\n";
    cout << "7. Exit\n";
    cout << "===================================\n";
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

double power(double base, double exp) {
    return pow(base, exp);
}
