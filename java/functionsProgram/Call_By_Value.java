package java.functionsProgram;

public class Call_By_Value {
    public static void CallByValue(int a,int b)
    {
        a=a-b;
        b=a+b;
        a=b-a;
        System.out.println(a);
        System.out.println(b);
    }
    public static void main(String[] args) {
        CallByValue(5, 10);
    }
}
