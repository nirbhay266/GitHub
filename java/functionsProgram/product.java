import java.util.Scanner;

public class product {
    public static int getProduct(int a,int b) 
    {
        return a*b;
    }
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.print("\nEnter First Number");
       int  a=ob.nextInt();
       System.out.print("\nEnter Second Number");

       int  b=ob.nextInt();
      int  pro=getProduct(a, b);
        System.out.println(pro);
        
    }
}
