#include <iostream>
using namespace std;

// Function to add two numbers by Vimal
double add(double a, double b) {
    return a + b;
}
double modulus(double a, double b){
return a%b ;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Result: " << add(num1, num2) << endl;
    cout << "Result: " << modulus(num1, num2) << endl;
    

    return 0;
}
