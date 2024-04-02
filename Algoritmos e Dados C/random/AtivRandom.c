#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	 srand(time(NULL));//inicializa a semente para a função rand() usando o tempo atual

	 int numEscolhido;
	 int numSorteado = rand() % 101; // numero aleatorio de 0 a 100

			printf("Loteria \n");
			printf("Escolha um número entre 0 e 100: \n");
			scanf("%d",& numEscolhido);
			if (numEscolhido == numSorteado){
				printf("Você Ganhou!");
			}else{
				printf("Você Perdeu, o número sorteado era %d", numSorteado);
			}

	return EXIT_SUCCESS;
}
