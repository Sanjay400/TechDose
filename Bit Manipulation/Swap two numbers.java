public class Swap {

    public static void main(String[] args) {

        int a = 10, b = 20;

        System.out.println("Before swapping the numbers:");
        System.out.println("First number = " + a);
        System.out.println("Second number = " + b);
        
        int temp = a; 
        a = b;         
        b = temp;     
        System.out.println("After swapping the numbers: ");
        System.out.println("First number = " + a);
        System.out.println("Second number = " + b);
    }
}
