import java.util.*;
public class coverrtYMD {
    public static void main(String[] args) {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter Any Number in Day");
        int n=ob.nextInt();
        int y=n/356;
        int m=n%356/30;
        int d=n/356/30;
        System.out.println("Year "+y+" "+m+" "+d);

    }
}
