import java.util.Scanner;

public class MiddlePocketNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter any number: ");
        int number = scanner.nextInt();

        if (number % 2 == 0) {
            System.out.println("Invalid Number");
        } else {
            String numberString = Integer.toString(number);
            int length = numberString.length();
            int middleIndex = length / 2;
            char middleDigit = numberString.charAt(middleIndex);
            System.out.println("Middle Pocket of that Number: " + middleDigit);
        }

        scanner.close();
    }
}
