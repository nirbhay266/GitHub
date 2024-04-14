import java.util.*;
public class evenOdd {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Any Number");
        int n=scanner.nextInt();
        if(n%2==0)
        {
            System.out.println("Even Number "+n);
        }
        else
        {
            System.out.println("Odd Number "+n);

        }
        scanner.close();
    }
}
