import java.util.Scanner;

public class NewX{

    public static void main(String args[]){
        int n;
        Scanner input = new Scanner(System.in);
        int result = 1;
        int i;
        do{
            System.out.print("Digite um numero n>=0:");
            n = input.nextInt();
        }while(n<0);
        i = n;
        while(i>2){
            i =(i % 2 == 0 ? i/2 : 3*i+1);
            System.out.print(i + " -> ");
        }
        System.out.print(i/2);
    }
}