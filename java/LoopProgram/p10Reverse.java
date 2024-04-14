import java.util.*;
public class p10Reverse {
    public static void main(String[] args) {
        Scanner ob =new Scanner(System.in);
        System.out.println("Enter the number");
        int n=ob.nextInt();
   
        for(;n!=0;)
        {
            System.out.print(n%10);
            // int b=n%10;
            // r=r*10+b;
            n=n/10;
        }
        ob.close();
        //System.out.println(r);
        
    }
}
