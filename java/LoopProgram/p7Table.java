import java.util.*;
public class p7Table {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any Number");
        int n=ob.nextInt();
        for(int i=2;i<=20;i++)
        {
            for(int j=1; j<=10;j++)
            {
                System.out.println(+i+" X "+j+ "="+i*j);
            }
        }
    }
}
