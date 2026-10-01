// BUGGY CODE: Fibonacci Series
// Issue: Generates incorrect sequence values after the second term. Fix the variable update logic!
// printing 0 1 2 3 5 8 11 instead of 0 1 1 2 3 5 8
public class BuggyFibonacci {
    public static void printFibonacci(int n) {
        int a = 0, b = 1;
        System.out.print(a + " " + b + " ");
        
        for (int i = 2; i < n; i++) {
            
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
