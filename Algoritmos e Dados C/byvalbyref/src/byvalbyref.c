/*
 ============================================================================
 Name        : byvalbyref.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void IncrementarPorValor(int x){
	x++;
	// O escopa desta variável vale somente dentro da função.
	// Voce pode inclusive chamar esta variável de y ou de x.
}

void IncrementarPorReferencia(int *x){
	(*x)++;
}

int main(void) {
	int numero = 5;
	IncrementarPorValor(numero);
	printf("Valor original: %d\n", numero); // Saída Valor original: 5


	IncrementarPorReferencia(&numero);
	printf("Valor modificado: %d\n", numero); // Saída Valor modificado: 6

	return 0;
}
