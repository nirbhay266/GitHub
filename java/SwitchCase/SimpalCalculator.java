import java.util.Scanner;

public class SimpalCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter an operator (+, -, *, /): ");
        char operator = scanner.next().charAt(0);

        System.out.print("Enter two operands: ");
        double operand1 = scanner.nextDouble();
        double operand2 = scanner.nextDouble();

        double result;

        switch (operator) {
            case '+':
                result = operand1 + operand2;
                System.out.printf("%.1f + %.1f = %.1f%n", operand1, operand2, result);
                break;
            case '-':
                result = operand1 - operand2;
                System.out.printf("%.1f - %.1f = %.1f%n", operand1, operand2, result);
                break;
            case '*':
                result = operand1 * operand2;
                System.out.printf("%.1f * %.1f = %.1f%n", operand1, operand2, result);
                break;
            case '/':
                if (operand2 != 0) {
                    result = operand1 / operand2;
                    System.out.printf("%.1f / %.1f = %.1f%n", operand1, operand2, result);
                } else {
                    System.out.println("Error! Division by zero is not allowed.");
                }
                break;
            default:
                System.out.println("Error! Invalid operator.");
        }

        scanner.close();
    }
}
