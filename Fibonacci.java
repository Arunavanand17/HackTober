// BUGGY CODE: Fibonacci Series
// Issue: Generates incorrect sequence values after the second term. Fix the variable update logic!
// printing 0 1 2 3 5 8 11 instead of 0 1 1 2 3 5 8
public class Fibonacci {
    public static void printFibonacci(int n) {
        if (n <= 0) return;
        if (n == 1) {
            System.out.print(0);
            return;
        }

        int a = 0, b = 1;
        System.out.print(a + " " + b + " ");
        
        for (int i = 2; i < n; i++) {
            int next = a + b; // 1. Calculate the next term first
            System.out.print(next + " ");
            
            a = b;            // 2. Shift 'a' to the current 'b'
            b = next;         // 3. Shift 'b' to the new term
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int terms = 7;
        System.out.print("Fibonacci Series: ");
        printFibonacci(terms);
    }
}