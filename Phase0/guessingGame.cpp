#include <iostream>
using namespace std;

int main() {

    int secret = 7;
    int guess = 0;

    while (guess != secret) {

        // 1) ask for guess
        cout << "Enter a guess" << endl;
        cin >> guess;
        // 2) read guess
        // 3) compare and print hints
        if (guess > secret) {
            cout << "Too high\n";
        } else if (guess < secret) {
            cout << "Too low\n";
        } else {
            cout << "Correct!\n";
        }

    }

    // print success message

    return 0;
}
