// includes
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>



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
	int segundos = time(0);
	srand(segundos);
	
	int numeroGrandeQualquer = rand();
	int numeroSecreto = numeroGrandeQualquer % 100;	
	
	double pontos = 1000;
	int chute;
	int tentativas = 1;	
	int dificuldade;
	
	printf("\n Qual a dificuldade desejada?\n");
	printf("Fácil(1) ou Médio(2) ou Difícil(3) \nEscolha: ");
	
	scanf("%d", &dificuldade);

	if(dificuldade <= 0 || dificuldade > 3){
		printf("Erro, valor de dificuldade incorreto!");
		printf("\nEscolhemos como padrão o nível, Difícil\n");
		dificuldade = 3;		
	}
	int numerotentativas;
	
	
	switch(dificuldade){
		case 1:
			numerotentativas = 20;
			break;
		case 2:
			numerotentativas = 10;
			break;
		case 3:
			numerotentativas = 5;
			break;
		default:
			numerotentativas = 3;
			break;
	}
	
	printf("\nO nível de dificuldade escolhido foi: %d\n\nBoa sorte --------------", dificuldade);
	
	// for para 5 tentativas;
	for(int i = 1; i <= numerotentativas; i++){
		
		printf("\nQual é seu chute?\n");			
		scanf("%d", &chute);			
			
		// Estrutura condicional para verificar o número inserido pelo usuário
		if(chute < 0){  // se o número for menor que 0, o loop quebra 
			printf("Erro, Você não pode digitar um número menor que zero\n");
			continue;
		}
				
		if(numeroSecreto == chute){
			printf("Acertou ! Parabéns !\n");
			break;
		}
		else{
			printf("\nErrou !------\n");
			if(chute < numeroSecreto){
				printf("O seu chute foi menor que o número secreto...\n");	
			}else if(chute > numeroSecreto){
				printf("O seu chute foi maior que o número secreto...\n");
			}
		}

		tentativas++;
		
		double pontosperdidos = abs((chute - numeroSecreto) / (double)2);
		pontos = pontos - pontosperdidos;
	}			
	printf("\n------Fim de jogo------\n");
	
	if(numeroSecreto == chute){

		printf("Total tentativas: %d", tentativas);
		printf("\nSeu total de pontos foi: %.1f\n", pontos);		
	}else{
		
		printf("\nVocê tentou, mas falhou miseravelmente. Tente novamente!\7\n\n");
		
	    printf("             OOOOOOOOOOO               \n");
	    printf("         OOOOOOOOOOOOOOOOOOO           \n");
	    printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
	    printf("    OOOOOO      OOOOO      OOOOOO      \n");
	    printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
	    printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
	    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
	    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
	    printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
	    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
	    printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
	    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
	    printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
	    printf("         OOOOOO         OOOOOO         \n");
	    printf("             OOOOOOOOOOOO              \n");
		
	}
	
	
	
	return 0;
}
