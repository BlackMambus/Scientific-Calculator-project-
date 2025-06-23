#include <iostream>
#include <cmath>    // For scientific functions
using namespace std;

void displayMenu() {
    cout << "\n=== Scientific Calculator ===\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Power (x^y)\n";
    cout << "6. Square root (√x)\n";
    cout << "7. Logarithm (log base 10)\n";
    cout << "8. Natural Log (ln)\n";
    cout << "9. Sine (sin)\n";
    cout << "10. Cosine (cos)\n";
    cout << "11. Tangent (tan)\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double a, b;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a + b << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a - b << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result: " << a * b << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Error: Division by zero!\n";
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> a >> b;
                cout << "Result: " << pow(a, b) << endl;
                break;
            case 6:
                cout << "Enter number: ";
                cin >> a;
                if (a >= 0)
                    cout << "Result: " << sqrt(a) << endl;
                else
                    cout << "Error: Negative input for square root!\n";
                break;
            case 7:
                cout << "Enter number: ";
                cin >> a;
                if (a > 0)
                    cout << "Result: " << log10(a) << endl;
                else
                    cout << "Error: Log undefined for non-positive numbers!\n";
                break;
            case 8:
                cout << "Enter number: ";
                cin >> a;
                if (a > 0)
                    cout << "Result: " << log(a) << endl;
                else
                    cout << "Error: ln undefined for non-positive numbers!\n";
                break;
            case 9:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << sin(a * M_PI / 180) << endl;
                break;
            case 10:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << cos(a * M_PI / 180) << endl;
                break;
            case 11:
                cout << "Enter angle in degrees: ";
                cin >> a;
                cout << "Result: " << tan(a * M_PI / 180) << endl;
                break;
            case 0:
                cout << "Exiting calculator. Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}

