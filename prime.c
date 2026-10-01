// BUGGY CODE: Prime Number Checker
// Issue: This program marks every number as "Not Prime". Find and fix the bug!

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    
    // Start checking divisors from 2 instead of 1
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 7;
    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is NOT a Prime number.\n", num);
    }
    return 0;
}
