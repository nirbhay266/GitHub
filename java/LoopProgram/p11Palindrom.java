import java.util.*;
public class p11Palindrom {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any String");
        int n=ob.nextInt();
        int r=0;
        int x=n;
        while(n!=0)
        {
            int b=n%10;
            r=r*10+b;
            n=n/10;
        }
        if(r==x)
        {
            System.out.println("Palindrome "+x);
        }
        else
        {
            System.out.println("Not Palindrome "+x);
        }
    }
}
