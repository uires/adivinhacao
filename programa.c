#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>



int main(void){
	setlocale(LC_ALL, "Portuguese");

	printf("\n\n");
	printf("          P  /_\  P                              \n");
	printf("         /_\_|_|_/_\                             \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao    \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!\n");
	printf("    |" "  |  |_|  |"  " |                        \n");
	printf("    |_____| ' _ ' |_____|                        \n");
	printf("          \__|_|__/                              \n");
	printf("\n\n");
	
	// declarações 
	#define NUMERO_DE_TENTATIVAS 3;
	int numeroSecreto = 6;	
	int chute;
	// For para dar 3 chances ao jogador
	for(int i= 1; i <= NUMERO_DE_TENTATIVAS; i++){
		
		printf("Tentativa: %d\n", i);
		printf("Qual o seu chute? (0 a 10) \n");			
		scanf("%d", &chute);			
		printf("\n\nSeu chute foi: %d\n",chute);
		
		// Estrutura condicional para verificar o número inserido pelo usuário
		if(numeroSecreto == chute){
			printf("Acertou ! Parabéns !\n");
			break;
		}
		else{
			printf("Errou !\n");
			if(chute < numeroSecreto){
				printf("O seu chute é menor que o número secreto...\n");
			}else if(chute > numeroSecreto){
				printf("O seu chute é maior que o número secreto...\n\n");
			}if(i <= 3){
				printf("Tente de novo...");
				printf("\nBoa sorte...\n");		
			}	
		}
	}			
		
	
	system("PAUSE");
	return 0;
}
