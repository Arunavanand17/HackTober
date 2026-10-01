// BUGGY CODE: Fibonacci Series
// Issue: Generates incorrect sequence values after the second term. Fix the variable update logic!

public class BuggyFibonacci {
    public static void printFibonacci(int n) {
        int a = 0, b = 1;
        System.out.print(a + " " + b + " ");
        
        for (int i = 2; i < n; i++) {
            // BUG IS HERE: Value of 'a' is overwritten too early
            a = b;
            b = a + b;
            System.out.print(b + " ");
        }
    }

    public static void main(String[] args) {
        int terms = 7;
        System.out.print("Fibonacci Series: ");
        printFibonacci(terms);
    }
}
