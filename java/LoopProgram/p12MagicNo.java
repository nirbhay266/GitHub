import java.util.*;
public class p12MagicNo {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the any number");
        int n=ob.nextInt();
       
        int r=0;
        while(n!=0)
        {
            int b=n%10;
            r=r+b;
            n=n/10;
        }
        if(r==10)
        {
            System.out.println("Magic number"+r);
        }
        else
        {
            System.out.println("Not a valid magic number");
        }
        ob.close();
    }
}
