import java.util.*;
public class p14Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Any Number");
        int n = Integer.parseInt(scanner.nextLine());
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        System.out.println("Factorial of " + n + " is " + fact);
        scanner.close();
    }
}
