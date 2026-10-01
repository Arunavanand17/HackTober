// BUGGY CODE: Prime Number Checker
// Issue: This program marks every number as "Not Prime". Find and fix the bug!

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    
    // BUG IS HERE: Check loop starting condition
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 7;
    if (isPrime(num)) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is NOT a Prime number." << endl;
    }
    return 0;
}
