import java.util.Scanner;

public class Fibonacci{
    Scanner input = new Scanner(System.in);
    int n;
    public static void main(String args[]){
        Fibonacci fib = new Fibonacci();
        System.out.println("Insira um número n>=0");
        fib.n = fib.input.nextInt();
			long n1, n2, counter = 2;
			for(n1=0,n2=1;counter<=fib.n;n2+=n1,n1=n2-n1)
			{  
             counter++;
			    System.out.print(n1+",");
		    }  
			System.out.println(n1);	
    }
}