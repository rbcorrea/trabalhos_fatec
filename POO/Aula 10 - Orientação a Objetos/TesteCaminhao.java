public class TesteCaminhao{
    public static void main(String args[]){
        Caminhao c = new Caminhao("Mercedes", "XYZ2345", 2000, 10, 3, 50000);
        c.imprime();

        c.deprecia(10);

        System.out.print("Caminhão depreciado");
        c.imprime();
    }
}