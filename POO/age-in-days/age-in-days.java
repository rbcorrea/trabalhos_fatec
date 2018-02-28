import java.util.Scanner;

public class Age{
    Scanner readInput = new Scanner(System.in);
    int age;
    int days;

    public int getDays(int requestedAge){
        if(requestedAge >= 0){
            days = 365*requestedAge;
            return days;
        }else{
            days = 0;
            return 0;
        }
    }

    public static void main(String args[]){
        Age idade = new Age();
        System.out.println("Insira a sua idade:\n");
        idade.age = idade.readInput.nextInt();
        System.out.println(idade.getDays(idade.age) != 0 ? "Sua idade é: " + idade.getDays(idade.age) + " dias." : "Idade inválida!");
      }
}