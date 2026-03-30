#include <iostream>
using namespace std;

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)   // Base case
        return 1;
    else
        return n * factorial(n - 1);   // Recursive call
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);

    return 0;
}