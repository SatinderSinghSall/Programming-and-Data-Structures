// Recursion:

public class Recursion {
    public static int Factorial(int n) {
        if (n == 1) { // base case
            return 1;
        }

        return n * Factorial(n - 1); // recursive case
    }

    // Sum of natural nums:
    public static int SumOfNumbers(int n) {
        if (n == 0) {
            return 0;
        }

        return n + SumOfNumbers(n - 1);
    }

    public static int Factorial2(int n) {
        if (n == 1) { // base case
            return 1;
        }

        return n * Factorial2(n - 1); // recursive case
    }

    public static void main(String[] args) {
        System.out.println(Factorial(5)); // 120
        System.out.println(SumOfNumbers(5)); // 15
        System.out.println(Factorial2(5)); // 120
    }
}
