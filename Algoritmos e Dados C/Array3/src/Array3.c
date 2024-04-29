/*
 ============================================================================
 Name        : Array3.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int matriz[2][2][2] = {{1,2},{3,4},{5,6},{7,8}};
	int soma = 0;
	int contador = 0;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				soma = matriz[2][2][2] + soma;
				contador++;
			}
		}
	}
		double media =(double)soma/ contador++;
		printf("a media e %.2lf",media);



	return 0;
}
