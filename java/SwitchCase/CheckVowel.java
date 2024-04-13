import java.util.*;
public class CheckVowel {
    public static void main(String[] args) {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter Any Character");
        char ch=ob.next().charAt(0);
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='u'||ch=='U')
        {
            System.out.println("Vowel");
        }
        else if(ch=='b'||ch=='B'||ch=='c'||ch=='d'||ch=='C'||ch=='f'||ch=='F'||ch=='g'||ch=='D'||ch=='G'||ch=='h')
        {
            System.out.println("Consonant");
        }


    }   
}
