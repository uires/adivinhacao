#include <stdio.h>



int main(){

    printf("************************************\n");
	printf("Bem vindo ao meu jogo de adivinhacao\n");
	printf("************************************\n");
	// declara��es 
	int numeroSecreto = 10;	
	int chute;
	
	
	printf("Qual o seu chute: (0 a 10) \n");
	
	scanf("%d", &chute);
	
	printf("Seu chute foi: %d\n",chute);
	// Estrutura condicional para verificar o n�mero inserido pelo usu�rio
	if(numeroSecreto == chute){
		printf("Acertou !");
	}else{
		printf("Errou !");
	}
	
	
	
	
	
}
