#include <iostream>
using namespace std;

int main() {

    double num1, num2;
    char op;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter operation (+ - * /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Result: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}

