#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	 srand(time(NULL));//inicializa a semente para a fun��o rand() usando o tempo atual

	 int numEscolhido;
	 int numSorteado = rand() % 101; // numero aleatorio de 0 a 100

			printf("Loteria \n");
			printf("Escolha um n�mero entre 0 e 100: \n");
			scanf("%d",& numEscolhido);
			if (numEscolhido == numSorteado){
				printf("Voc� Ganhou!");
			}else{
				printf("Voc� Perdeu, o n�mero sorteado era %d", numSorteado);
			}

	return EXIT_SUCCESS;
}
