import java.util.Scanner;

public class itemDiscount {
    public static void main(String[] args) throws Exception {
        Scanner ob = new Scanner(System.in);
        System.out.println("Enter item Name: ");
        String item = ob.nextLine();
        System.out.println("Enter item Rate: ");
        int rate = ob.nextInt();
        System.out.println("Enter item Quantity: ");
        int qua = ob.nextInt();
        int t = rate * qua;
        int f = (int) (t - (t * 0.1)); // Corrected the discount calculation
        System.out.println("Item Name: " + item);
        System.out.println("Item Final Price: " + f); // Display the discounted price
    }
}
