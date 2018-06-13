#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char randomChar(int operacao){
	
	srand(time(NULL));
	
	if(operacao == 1){
		char randomLetras[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
		return randomLetras[(rand() % 10)];
		
	}else if(operacao == 2){
		char randomLetras[36] = {'A', 'B', 'C', 'D', 'E', 'F' , 'G' , 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	
		return randomLetras[(rand() % 35)];
		
	}else{
		printf("Operacao invalida. Saindo da execucao");
		exit(EXIT_FAILURE);
	}
	
}

int main(int argc, char *argv[]) {
	char ch, operacao;
	FILE *fp;
	char linha[7];
	
	printf("---------------------------------\n");
	printf("Imprimindo um caracter aleatorio\n");
	printf("%c\n", randomChar(3));
	printf("---------------------------------\n");
	
	//printf("Qual operacao voce deseja efetuar? 1 - Senha Numerica | 2 - Senha Alfanumerica");
	//do(scanf(&operacao)){
	//	if(operacao != 1 || operacao !=2 ){
	//		printf("Operacao nao permitida");
	//	}else{
	//		printf("Processando arquivo RA.TXT...");
	//	}
	//}while(operacao != 1 || operacao !=2);
	
	//fp = fopen("RA.TXT", "r");
	
	//if(fp == NULL){
	//	printf("Arquivo sem conteudo");
	//	exit(EXIT_FAILURE);
	//}else{
	//	for(int a=0; (a < 7 ))
	//}
	
	system("pause");
	
}
