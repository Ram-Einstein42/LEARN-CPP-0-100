#include <iostream>
 

// define functions here
int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

using namespace std;
int main() {

    int a, b;

    // input a and b
    cout << "Enter number 1: " << endl;
    cin >> a;
    cout << "Enter number 2: " << endl;
    cin >> b;
    // call functions and print results
    int addition = add(a, b);
    cout << addition << endl;
    int sub = subtract(a, b);
    cout << sub << endl;
    int mult = multiply(a, b);
    cout << mult << endl;
    return 0;
}
