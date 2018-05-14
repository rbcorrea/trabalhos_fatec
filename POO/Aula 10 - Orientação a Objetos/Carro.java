public class Carro extends Veiculo{
   protected int numPortas;
   protected int anoModelo;
   
   public Carro(String modelo, String placa, int anoFabr, int anoModelo, int numPortas, double valor){
      super(modelo, placa, anoFabr, valor);
      setModelo(modelo);
      setPlaca(placa);
      setAnoFabr(anoFabr);
      setValor(anoFabr);
      setPortas(numPortas);
      setAnoModelo(anoModelo);
   }
   
   public void setPortas(int numPortas){
      this.numPortas = numPortas > 2 ? numPortas : 2;
   }
   public void setAnoModelo(int anoModelo){
      this.anoModelo = anoModelo;
   }
   public int getPortas(){
      return numPortas;
   }
   public int getAnoModelo(){
      return anoModelo;
   }
   public void imprime()
   {
   System.out.printf("\nVeiculo: %s\nPlaca: %7s", modelo, placa);
   System.out.printf("\nFabr:%4d\nModelo:%4d", anoFabr, anoModelo);
   System.out.printf("\n%02d Portas\n R$%.2f\n", numPortas, valor);
   }
}