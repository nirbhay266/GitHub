
import java.util.Scanner;

public class grade {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the student name");
        String name=ob.nextLine();
        System.out.println("Enter the first marks");
        int m1=ob.nextInt();
        System.out.println("Enter the second marks");
        int m2=ob.nextInt();
        System.out.println("Enter the third marks");
        int m3=ob.nextInt();
        int t,a;
        t=m1+m2+m3;
        a=t/3;
        System.out.println("Student name "+name+" Total Average marks "+a);
       
        ob.close();
    }
}
