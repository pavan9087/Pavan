#include <iostream>
#include <cmath>     // for pow()
using namespace std;

// Function declarations
void showMenu();
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);
double power(double base, int exp);

int main() {
    int choice;
    float num1, num2;

    do {
        showMenu();
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice >= 1 && choice <= 6) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch(choice) {
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
                cout << "Result: " << modulus((int)num1, (int)num2) << endl;
                break;
            case 6:
                cout << "Result: " << power(num1, (int)num2) << endl;
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
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a % b;
}

double power(double base, int exp) {
    return pow(base, exp);
}

