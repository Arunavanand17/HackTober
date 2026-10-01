// BUGGY CODE: Half Pyramid Star Pattern
// Issue: Prints all stars on a single line instead of a triangular pattern. Fix line breaks!

public class BuggyPattern {
    public static void printPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            
        }
    }

    public static void main(String[] args) {
        int rows = 5;
        printPattern(rows);
    }
}
