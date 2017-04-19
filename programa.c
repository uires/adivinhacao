#include <stdio.h>
#include <locale.h>
#include <conio.h>



int main(){
	setlocale(LC_ALL, "Portuguese");

    printf("******************************************************************************\n");
	printf("Bem vindo ao meu jogo de adivinhação-------------------------------------------\n");
	printf("******************************************************************************\n");
	// declarações 
	
	int numeroSecreto = 6;	
	int chute;
	for(int i= 1; i <= 3; i++){
	
		printf("Qual o seu chute? (0 a 10) \n");	
		scanf("%d", &chute);	
		printf("Seu chute foi: %d\n",chute);
		
		// Estrutura condicional para verificar o número inserido pelo usuário
		if(numeroSecreto == chute){
			printf("Acertou ! Parabéns !\n");
		}
		else{
			printf("Errou !\n");
			if(chute < numeroSecreto){
				printf("O seu chute é menor que o número secreto...\n");
			}else if(chute > numeroSecreto){
				printf("O seu chute é maior que o número secreto...\n");
			}		
			printf("Tente de novo... ");
			printf("\nBoa sorte...");
		}
	}			
		
	
	system("PAUSE");
	return 0;
}
