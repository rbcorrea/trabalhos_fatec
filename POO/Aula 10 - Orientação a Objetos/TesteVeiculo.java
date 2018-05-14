public class TesteVeiculo{
   public static void main(String args[])
   {
   Veiculo v;
   v = new Veiculo("Fiesta","ABC1234", 2007, 1200);
   v.imprime();
   
   v.deprecia(10);
   System.out.println("Veiculo depreciado");
   v.imprime();
   }

}