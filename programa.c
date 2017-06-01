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
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinha��o!\n");
	printf("    |" "  |  |_|  |"  " |                        \n");
	printf("    |_____| ' _ ' |_____|                        \n");
	printf("          \__|_|__/                              \n");
	printf("\n\n");
	
	// declara��es 
	int segundos = time(0);
	srand(segundos);
	
	int numeroGrandeQualquer = rand();
	int numeroSecreto = numeroGrandeQualquer % 100;	
	double pontos = 1000;
	int chute;
	
	int tentativas = 1;
	// While to repeat this three times ;
	while(1){
		
		printf("Qual � seu chute?\n");			
		scanf("%d", &chute);			
	
			
		if (numeroSecreto == chute){
			printf("Voc� acertou :D\n");
			break;
		}
		// Estrutura condicional para verificar o n�mero inserido pelo usu�rio
		
		if(chute < 0){  // se o n�mero for menor que 0, o loop quebra 
			printf("Erro, Voc� n�o pode digitar um n�mero menor que zero\n");
			continue;
		}
		if(numeroSecreto == chute){
			printf("Acertou ! Parab�ns !\n");
		}
		else{
			printf("\n\nErrou !------\n");
			if(chute < numeroSecreto){
				printf("O seu chute foi menor que o n�mero secreto...\n\n");	
			}else if(chute > numeroSecreto){
				
				printf("O seu chute foi maior que o n�mero secreto...\n\n");
			}
		}

		tentativas++;
		
		double pontosperdidos = abs((chute - numeroSecreto) / (double)2);
		pontos = pontos - pontosperdidos;
	}			
	
	printf("Fim de jogo\n");
	printf("Total tentativas: %d", tentativas);
	printf("\nSeu total de pontos foi: %.1f\n", pontos);
	
	return 0;
}
