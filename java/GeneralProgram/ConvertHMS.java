
import java.util.*;

public class ConvertHMS {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any Number in second");
        int  n=ob.nextInt();
        int h=n/3600;
        int m=n%3600/60;
        int s=n/3600/60;
        System.out.println("Hourses: " + h + " Minutes: " + m + " Seconds: " + s);

    }
}
