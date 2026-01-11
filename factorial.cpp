#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial not defined for negative numbers";
    } else {
        cout << "Factorial = " << factorial(n);
    }

    return 0;
}
