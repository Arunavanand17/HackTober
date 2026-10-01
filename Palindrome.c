// BUGGY CODE: Number Palindrome Checker
// Issue: Always outputs "NOT a Palindrome" for valid inputs. Fix the logic!
//  Always printing "is NOT a Palindrome."
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    /
    return num == reversedNum;
}

int main() {
    int number = 121;
    if (isPalindrome(number)) {
        printf("%d is a Palindrome.\n", number);
    } else {
        printf("%d is NOT a Palindrome.\n", number);
    }
    return 0;
}
