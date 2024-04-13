import java.util.*;
import java.util.Scanner;

public class PositiveN {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any Number");
        int n=ob.nextInt();
        if(n>=0)
        {
            System.out.println("Positive Number "+ n+" "+ob.nextInt());
        }
        else
        {
            System.out.println("Not a Positive Number This is a Negative Number "+n);
        }
    }

}
