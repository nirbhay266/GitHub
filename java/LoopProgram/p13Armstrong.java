import java.util.*;
public class p13Armstrong {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=ob.nextInt();
        int x=n;
        int r=0;
        while(n!=0)
        {
            int a=n%10;
            // r += Math.pow(a, 3);
            r=r+(a*a*a);
            n/=10;//n=n/10;
        }
        if(x==r)
        {
            System.out.println("The number is an Armstrong number");
        }
        else
        {
            System.out.println("The number is not an Armstrong number");
        }
        ob.close();
    }
}
