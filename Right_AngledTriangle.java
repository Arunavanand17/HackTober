// BUGGY CODE: Half Pyramid Star Pattern
// Issue: Prints all stars on a single line instead of a triangular pattern. 

public class Right_AngledTriangle {
    public static void printPattern(int rows) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println(); // Move to the next line after completing a row
        }
    }

    public static void main(String[] args) {
        int rows = 5;
        printPattern(rows);
    }
}