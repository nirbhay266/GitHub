import java.util.*;
public class MetroCity {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Metro City Name");
        String m=scanner.nextLine();
        System.out.println("Enter Fahreheit Temperature");
        float ft=scanner.nextFloat();
        float ct;
        ct=(ft+32)*5/9;
        if(ct<5)
        {
            System.out.println("Metro City Name "+m);
            System.out.println("Cool Day "+ct);
        }
        if(ct>5&&ct<15)
        {
            System.out.println("Metro City Name "+m);
            System.out.println("Normal Day");
        }
        else if(ct>15)
        {
            System.out.println("Metro City Name "+m);
            System.out.println("Hot Day");
        }
    }
}
