/*
 ============================================================================
 Name        : exercicio2.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#include <stdio.h>
#include <stdlib.h>

	int main(void) {
		int contpar = 0, contimpar = 0, num;
		do {
			printf("Digite um numero: para encerrar ,digite 0: ");
			scanf("%d", &num);

			if (num != 0) {
				if (num % 2 == 0) {
					contpar = contpar + 1;
				} else {
					contimpar = contimpar + 1;
				}
			}
		} while (num!=0);

		printf("A quantidade de números pares é: %d\n", contpar);
		printf("A quantidade de números impares é: %d\n", contimpar);

		return 0;
	}
	return EXIT_SUCCESS;
}
