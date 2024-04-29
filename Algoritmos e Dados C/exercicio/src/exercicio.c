/*
 ============================================================================
 Name        : exercicio.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int contpar = 0, contimpar = 0, num = 500;
	while (num != -1) {
		printf("Digite um numero, para encerrar ,digite -1: ");
		scanf("%d", &num);

		if (num != -1) {
			if (num % 2 == 0) {
				contpar = contpar + 1;
			} else {
				contimpar = contimpar + 1;
			}
		}
	}
	printf("A quantidade de números pares é: %d\n", contpar);
	printf("A quantidade de números impares é: %d\n", contimpar);

	return 0;
}
