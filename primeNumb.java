import java.util.Scanner;

public class primeNumb{
    public static boolean isPrime(int n){
        if(n==2){
            return true;
        }
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static void primenumber(int n)
    {
        for(int i=2;i<=n;i++)
        {
            if(isPrime(i))
            {
                System.out.print(i+" ");
            }
        }
        System.out.println();
    }
    public static void main(String[] args) {
        //System.out.println(isPrime(5));
        
        primenumber(100);

}
}