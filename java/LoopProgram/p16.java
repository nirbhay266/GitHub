/*/*Write a program enter  any number then print 
Middle Pocket of that Number, if Number is eventhen then print Invalid Number 
Hint: n42858 md=8*/
import java.util.*;
public class p16
{
public static void main(String[] args) {
    Scanner obs = new Scanner(System.in);
    System.out.println("Enter Any Number"); 
    int n = obs.nextInt();
    int l=0;
    int x=n;
    for(int i = 0; i < n; i++)
    {
        n=n/10;
        l++;
    }
   if(x%2==0) {
    System.out.println("Invalid Number");
   }
   else {
    int md = x/10;
    int md1 = md%10;
    System.out.println("Middle Pocket of that Number is "+md1);
   }

    obs.close();
}
}