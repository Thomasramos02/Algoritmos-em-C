/*
 ============================================================================
 Name        : Array1.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numeros[5];
	int soma = 0;
	int contador = 0;


	printf("Digite 5 numeros inteiros: \n");

	for(int i = 0; i < 5; i++){
		printf("Numero %d:",i + 1);
		scanf("%d",&numeros[i]);
		contador++;
		soma = soma + numeros[i];

	}

	double media = (double) soma/contador;

	printf("Soma: %d\n",soma);
	printf("Media: %.2lf\n",media);



	return 0;
}
