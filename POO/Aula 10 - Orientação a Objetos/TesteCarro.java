public class TesteCarro
{

public static void main(String args[]){

Carro c;

c = new Carro("Fiesta", "ABC1234",2009, 2010, 3, 2000);

c.imprime();
c.deprecia(10);
System.out.println("Carro depreciado");
c.imprime();
}
}