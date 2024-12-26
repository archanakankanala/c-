#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) { // Check divisibility up to the square root of num
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }
    return true; // num is prime
}

int main() {
    int start, end;

    // Input the range from the user
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    // Print prime numbers in the given range
    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
