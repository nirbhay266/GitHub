import java.util.*;
public class greater100 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Any number of");
        int n= scanner.nextInt();
        if(n==10)
        {
            System.out.println("Inputter Number is greater than 100");
        }
        else
        {
            System.out.println("Inputted Number is Less than 100");
        }
        scanner.close();
    }
}
