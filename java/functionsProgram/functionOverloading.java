import java.util.*;

public class functionOverloading {
    public static void sum(int a,int b)
    {
        System.out.println("Sum Of Two Number "+(a+b));
    }
    public static void sum(int a,int b,int c)
    {
        System.out.println("Sum of three Number "+(a+b+c));
    }
    public static void sum(int a,int b,int c,int d)
    {
        System.out.println("Sum of four Number "+(a+b+c+d));
    }
    public static float sum(float a,float b)
    {
        return a+b;
    }
    public static int sub(int a,int b)
    {
        return a-b;
    }
    public static int sub(int a,int b,int c)
    {
        return a-b-c;
    }
    public static int mult(int a,int b)
    {
        return a*b;
    }
    public static int mult(int a,int b,int c)
    {
        return a*b*c;
    }

    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
        System.out.println("Enter First Number: ");
         int a = sc.nextInt();
         System.out.println("Enter Second Number: ");
         int b = sc.nextInt();
        System.out.println("Enter Third Number: ");
         int c = sc.nextInt();
    //     System.out.println("Enter Fourth Number: ");
    //     int d = sc.nextInt();
    //     sum(a,b);
    //     sum(a, b, c);
    //     sum(a, b, c, d);
    //   float n= sum(20.5f,500.4f);
    //   System.out.println("Your Float Number"+n);
        // System.out.println("Your two number of  Subtraction is "+sub(a, b));
        // System.out.println("Your three number of Subtraction is "+sub(a,b,c));
        System.out.println("Your two number of multiplication  is "+mult(a, b));
        System.out.println("Your three number of multiplication is "+mult(a,b,c));
        
    }
}
