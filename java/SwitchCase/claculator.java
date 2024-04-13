import java.util.*;
public class claculator {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any First Number");
        int a=ob.nextInt();
        System.out.println("Enter Any Second Number");
        int b=ob.nextInt();
        System.out.println("Enter Any Aithmetic Operator");
        char ch=ob.next().charAt(0);
        switch (ch) {
            case '+':
            System.out.println("Addittion of two numbers"+(a+b));
                break;
                case '-':
                System.out.println("Substraction of two numbers"+(a-b));
                break;
                case '*':
                System.out.println("Multiplication of two numbers"+(a*b));
                break;
                case '/':
                System.out.println("Division of two numbers"+(a/b));
                break;
                case '%':
                System.out.println("Modulus"+(float)a%b);
                break;

        
            default:
            System.out.println("Invalide Airthmetic Operators");
                break;
        }

    }
}
