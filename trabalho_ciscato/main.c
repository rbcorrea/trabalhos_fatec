#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define o tipo arquivo para a montagem do arquivo.
struct Arquivo {
        char nome[30];
        char conteudo[1000];
        char extensao[4];
        char operacao;
        char chave[15];

        //float tamanho;
    };


int main(int argc,char *argv[]){

    char a[50],b[50],c[50],d[50],e[50],entrada[200],saida[200],ch,crp[4],drp[4];
    int i,j=0,k;
    FILE *entra,*sai;

    //struct Arquivo arq;


    char le_params(int indice_args, char *argumentos[]){

        struct Arquivo entrada;

        if (indice_args < 2){
            printf("Faltam argumentos: Abortando!");
            return 0;
            break;
        }else{
            if( //Verifica se os argumentos do programa estao corretos
                (strcmp(argumentos[2], 'i') == 0) ||
                (strcmp(argumentos[2], 'c') == 0) ||
                (strcmp(argumentos[2], 'd') == 0) ||
                (strcmp(argumentos[2], 'u') == 0) ||
                (indice_args) <= 3)
               {

                   entrada.nome = strsep(argumentos[1], ".")[0]; //nome do arquivo
                   entrada.extensao = ("." + strsep(argumentos[1], ".")[1]); //extensao
                   entrada.conteudo = fopen(argumentos[1], "r+b");//conteudo binário do arquivo
                   strcpy(argumentos[2], entrada.operacao); //operacao a ser feita
                   strcpy(argumentos[3], entrada.chave);

                   return entrada;


               }else{
                printf("Argumento inválido ou excesso de argumentos!");
               }
        }
    }

    char forma_arquivo(struct Arquivo arq){

        if(strcmp(operacao, 'i') == 0){ //Faz a operação de Invert

        }else if(strcmp(operacao, 'c') == 0){//Faz a operação de Cript

        }else if(strcmp(operacao, 'd') == 0){//Unix -> Dos

        }else{//Operação Dos -> Unix

        }

    }

    struct Arquivo saida_final = le_params(argc,argv);


    //return 0;
}
