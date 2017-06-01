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
	int numeroSecreto = 32;	
	int pontos = 1000;
	int chute;
	
	int tentativas = 1;
	// While to repeat this three times ;
	while(1){
		
		printf("Qual o seu chute?\n");			
		scanf("%d", &chute);			
	
			
		if (numeroSecreto == chute){
			printf("Você acertou :D\n");
			break;
		}
		// Estrutura condicional para verificar o número inserido pelo usuário
		
		if(chute < 0){  // se o número for menor que 0, o loop quebra 
			printf("Erro, Você não pode digitar um número menor que zero\n");
			continue;
		}
		if(numeroSecreto == chute){
			printf("Acertou ! Parabéns !\n");
		}
		else{
			printf("\n\nErrou !------\n");
			if(chute < numeroSecreto){
				printf("O seu chute foi menor que o número secreto...\n\n");	
			}else if(chute > numeroSecreto){
				
				printf("O seu chute foi maior que o número secreto...\n\n");
			}
		}

		tentativas++;
		int pontosperdidos = (chute - numeroSecreto) / 2;
		pontos = pontos - pontosperdidos;
	}			
	
	printf("Fim de jogo\n");
	printf("Total tentativas: %d", tentativas);
	printf("\nSeu total de pontos foi: %d\n", pontos);
	
	system("PAUSE");
	return 0;
}
