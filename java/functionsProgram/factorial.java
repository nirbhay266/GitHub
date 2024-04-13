
import java.util.*;
public class factorial {
    public static int fact(int n)
    {
        int f=1;
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=ob.nextInt();
        //int n = fact(5);
        System.out.println(fact(n));
    }
}
