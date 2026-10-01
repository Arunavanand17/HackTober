// BUGGY CODE: Number Palindrome Checker
// Issue: Always outputs "NOT a Palindrome" for valid inputs. Fix the logic!

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) {
        return false;
    }

    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    // Compare the reversed number with the original, not the modified num
    return originalNum == reversedNum;
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