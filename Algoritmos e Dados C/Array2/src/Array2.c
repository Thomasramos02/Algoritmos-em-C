/*
 ============================================================================
 Name        : Array2.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int soma = 0;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			soma = matriz + soma;
		}
	}

	printf("%d",soma);

	return 0;
}
