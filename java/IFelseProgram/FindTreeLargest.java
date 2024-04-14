import java.util.*;


public class FindTreeLargest {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter First Number");
        int n1=ob.nextInt();
        System.out.println("Enter Second Number");
        int n2=ob.nextInt();
        System.out.println("Enter Third Number");
        int n3=ob.nextInt();
        if(n1>n2&&n1>n3)
        {
            System.out.println("N1 is Largest Number "+n1);
        }
        else if(n2>n1&&n2>n3)
        {
            System.out.println("N2 is Largest Number "+n2);
        }
        else if(n3>n1&&n3>n1)
        {
            System.out.println("N3 is Largest Number "+n3);
        }
        else if(n1==n2&&n1>n3||n2==n1&&n2>n3||n3==n1&&n3>n2)
        {
            System.out.println("Sorry Can Not Find Larsent Number ");
        }
        else
        {
            System.out.println("All Are Same Number");
        }
        ob.close();
        
    }
}
