// BUGGY CODE: Number Palindrome Checker
// Issue: Always outputs "NOT a Palindrome" for valid inputs. Fix the logic!

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    // BUG IS HERE: Which variable should be compared with reversedNum?
    return num == reversedNum;
}

int main() {
    int number = 121;
    if (isPalindrome(number)) {
        cout << number << " is a Palindrome." << endl;
    } else {
        cout << number << " is NOT a Palindrome." << endl;
    }
    return 0;
}
