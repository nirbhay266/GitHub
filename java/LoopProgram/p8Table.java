import java.util.*;
public class p8Table {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter a number");
        int n=ob.nextInt();
        for(int i=1;i<=10;i++)
        {
            System.out.println(n+" x "+i+" = "+(n*i));
        }
    }
}
