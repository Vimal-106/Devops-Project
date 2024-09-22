#include <iostream>
using namespace std;

// Function to add two numbers by Vimal
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers by Satyam
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers by Abhishek Kumar
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers by Utkarsh Singh
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return NAN;
    }
}

double modulus(double a, double b) {
    return a % b;
}

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nChoose an operation: " << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiate" << endl;
    cout << "7. Square Root (on first number)" << endl;
    cout << "8. Maximum" << endl;
    cout << "9. Minimum" << endl;

    cout << "Enter your choice (1-9): ";
    cin >> operation;

    double result;

    switch (operation) {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = subtract(num1, num2);
            break;
        case 3:
            result = multiply(num1, num2);
            break;
        case 4:
            result = divide(num1, num2);
            break;
        case 5:
            result = modulus(num1, num2);
            break;
        case 6:
            result = exponentiation(num1, num2);
            break;
        case 7:
            // Only the first number is used for square root
            result = square_root(num1);
            break;
        case 8:
            result = maximum(num1, num2);
            break;
        case 9:
            result = minimum(num1, num2);
            break;
        default:
            cout << "Invalid operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    
    return 0;
}
