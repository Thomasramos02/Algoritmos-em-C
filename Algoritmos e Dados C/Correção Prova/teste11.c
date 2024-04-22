#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
srand(time(NULL));


int portaVazia;
int portaEscolhida;
int portaPremiada = rand() % 3 + 1;

printf("Bem vindo ao jogo monte hall!!!\n");
printf("Escolha uma porta de 1 a 3:",&portaEscolhida);
scanf("%d",&portaEscolhida);

if(portaEscolhida > 3){
    printf("Opção Inválida !");
}else{
    srand(time(NULL));

    int portaPremiada = rand()% 3 + 1;
    int portaVazia = -1;

    do{
        portaVazia = rand()% 3 + 1;
    }while(
        portaVazia == portaPremiada || portaVazia == portaEscolhida);
        printf("\nO apresentador vai abrir a porta %d, que esta vazia! ");

        char opcao;
        printf("Vc deseja mudar de opcao: s/n ?");
        scanf("%c",&opcao);

        int trocarPorta = (opcao == 's' || opcao == 'S');


		int portaEscolhidaOriginal = portaEscolhida;
		if (trocarPorta) {
			do {
				portaEscolhida = rand() % 3 + 1;
			} while (portaEscolhida == portaVazia
					|| portaEscolhida == portaEscolhidaOriginal);
			printf("\nVocê trocou para a porta %d.", portaEscolhida);
		}


		if (portaEscolhida == portaPremiada) {
			printf("\nVocê ganhou! Parabéns!");
		} else {
			printf("\nVocê perdeu. A porta premiada era a %d.", portaPremiada);
		}


		printf("\n\nPorta premiada: %d", portaPremiada);
		printf("\nPorta vazia: %d", portaVazia);
		printf("\nPorta escolhida: %d", portaEscolhida);
		printf("\nPorta escolhida Originalmente: %d", portaEscolhidaOriginal);
	}

	return EXIT_SUCCESS;


}








