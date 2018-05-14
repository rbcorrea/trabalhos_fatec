public class Caminhao extends Veiculo{
    protected int numEixos;
    protected double cap;
    public Caminhao(String modelo, String placa, int anoFabr, int eixos, double capac , double valor){
        super(modelo, placa, anoFabr, valor);
        setModelo(modelo);
        setPlaca(placa);
        setAnoFabr(anoFabr);
        setValor(valor);
        setCap(capac);
        setEixos(eixos);
    }

    public int getEixos(){
        return this.numEixos;
    }
    public void setEixos(int eixos){
        this.numEixos = eixos;
    }
    public double getCap(){
        return this.cap;
    }
    public void setCap(double capacidade){
        this.cap = capacidade;
    }
    public void imprime(){
        System.out.printf("\nVeiculo: %s\nPlaca: %7s", modelo, placa);
        System.out.printf("\nEixos:%4d\nCapacidade:%.5f", numEixos, cap);
        System.out.printf("\nFabricão:%4d\nR$%.2f\n", anoFabr, valor);
    }
}