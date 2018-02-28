import java.util.Scanner;

public class Grades{
    double test1;
    double test2;
    double assignment;
    double average;
    Scanner readInput = new Scanner(System.in);

    private double getAverage() {
        return this.test1*0.4 + this.test2*0.4 + this.assignment*0.2;
    }

    public static void main(String[] args) {
        Grades notas = new Grades();
        System.out.println("Insira a primeira nota:\n");
        notas.test1 = notas.readInput.nextDouble();
        System.out.println("Insira a segunda nota:\n");
        notas.test2 = notas.readInput.nextDouble();
        System.out.println("Insira a nota final de trabalhos:\n");
        notas.assignment = notas.readInput.nextDouble();
        System.out.println("A nota final foi: " + notas.getAverage());
    }

}