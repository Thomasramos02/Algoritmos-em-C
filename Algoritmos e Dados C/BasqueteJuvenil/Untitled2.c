#include <stdio.h>
#include <stdlib.h>

int obterIdade() {
	int idade;
	printf("Informe sua idade:\n");
	scanf("%d", &idade);
	return idade;
}

int obterGenero() {
	int genero;
	printf("Informe seu gênero 1(Feminino) ou 2(Masculino): \n");
	scanf("%d", &genero);
	return genero;
}

int obterAltura() {
	int altura;
	printf("Informe sua altura em cm: \n");
	scanf("%d", &altura);
	return altura;
}

void validar( int idade, int genero, int altura) {
	if (altura >= 180 && idade > 16 && genero == 1) {
		printf("apto para jogar no time Feminino Juvenil de Basquete");
	} else if (altura >= 180 && idade > 16 && genero == 2) {
		printf("apto para jogar no time Masculino Juvenil de Basquete");
	} else {
		printf("Não apto");
	}
}

	int main(void) {
	    int idade = obterIdade();
	    int genero = obterGenero();
	    int altura = obterAltura();

		validar(idade, genero, altura);

		return 0;
	}
