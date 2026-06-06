#include <iostream>
using namespace std;

// Renamed functions to avoid conflicts with std::plus and std::minus
double addNumbers(double a, double b) {
    return a + b;
}

double subtractNumbers(double a, double b) {
    return a - b;
}

int main () {
    int choice;
    cout << "Enter your choice (1 for addition, 2 for subtraction): ";
    cin >> choice;

    switch(choice) {
        case 1: { // <-- Added opening brace
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << addNumbers(a, b) << endl;
            break;
        } // <-- Added closing brace
        case 2: { // <-- Added opening brace
            double a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtractNumbers(a, b) << endl;
            break;
        } // <-- Added closing brace
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}