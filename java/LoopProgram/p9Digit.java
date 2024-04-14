import java.util.*;
public class p9Digit {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=ob.nextInt();
        int c=0;
        while(n!=0)
        {
            
            n=n/10;
           c++;
           
        }
        System.out.println(c);
        ob.close();
    }
}
