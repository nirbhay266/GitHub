import java.util.*;
public class CheckBetween {
    public static void main(String[] args) {
        Scanner obScanner = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int n= obScanner.nextInt();
        if(n>=10&&n<=20)
        {
            System.out.println("Number is in Betweeb 10 to 20"+n);

        }
        else
        {
            System.out.println("Number is in not Betweeb 10 to 20");

        }
    }

}
