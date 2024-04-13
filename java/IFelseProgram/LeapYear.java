import java.util.*;
public class LeapYear {
    public static void main(String[] args) {
       Scanner ob= new Scanner(System.in); 
       System.out.println("Enter year");
       int y=ob.nextInt();
       if(y%4==0&&y%100!=0||y%400==0)
       {
        System.out.println("Leap Year"+y);
       } 
       else
       {
        System.out.println("Not Leap Year"+y);

       }
    }
}
