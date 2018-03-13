import java.util.Scanner;

public class Even_number{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("Digite um numero n>=0");
        int n = input.nextInt();
        for(int i=0; i<=n; i+=2){
            String arrow = i+2>n ? "" : " -> ";
            System.out.print(i + arrow);
        }
    }
}