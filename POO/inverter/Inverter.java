import java.util.Scanner;

public class Inverter{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n;
        do{
            System.out.println("Digite um número n>=0");
            n = input.nextInt();
        }while(n<0);

        do{
            System.out.print(n%10);
            n /= 10;
        }while(n>0);
    }
}