import java.util.Scanner;

public class Factorial{

    public static void main(String args[]){
        int n;
        Scanner input = new Scanner(System.in);
        int result = 1;
        do{
            System.out.print("Digite um numero n>=0:");
            n = input.nextInt();
        }while(n<0);

        for(int i = n; i>0; i--){
            result *= i;
        }
        System.out.println("Fatorial:" + result);

    }

}