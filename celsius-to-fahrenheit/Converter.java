import java.util.Scanner;

public class Converter{
    double celsius;
    double fahrenheit;
    /* Vale salientar que a Classe Scanner considera o Locale do SO
     * portanto, deve-se respeita o formato vigente no SO em questão
     * Logo uma variável Double, no meu SO que está em PT-BR
     * deverá ser escrita com "," ao invés do convencional "."
     * como separador de decimal.
     */
    Scanner readInput = new Scanner(System.in);
        public double getFahrenheit(){
            this.fahrenheit = celsius * 1.8 + 32;
            return this.fahrenheit;
        }
    
    public static void main(String[] args) {
        System.out.println("Insira a temperatura em celsius:\n");
        Converter temp = new Converter();
        temp.celsius = temp.readInput.nextDouble();
        System.out.println("A temperatura em Fahrenheit é: " + temp.getFahrenheit());
    }
}