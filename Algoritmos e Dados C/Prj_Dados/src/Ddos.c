/*
 ============================================================================
 Name        : Ddos.c
 Author      : Thomas ramos
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rolarDado() {

	return rand() % 6 + 1;
}

int calcularSoma(int dado1, int dado2){
	return dado1 + dado2;
}

int main(void) {
	int jogador1[2], jogador2[2];
	int somaJogador1, somaJogador2;

	srand(time(NULL));

	printf("Jogador 1, pressione ENTER para rolar os dados.\n");
	getchar();
	jogador1[0] = rolarDado();
	jogador1[1] = rolarDado();
	printf("Jogador 1: %d + %d\n",somaJogador1[0], somaJogador1[1]);
	somaJogador1 = calcularSoma(jogador1[0], jogador2[1]);
	printf("Soma do jogador 1: %d\n", somaJogador1);


	printf("Jogador 2, pressione ENTER para rolar os dados.\n");
	getchar();
	jogador2[0] = rolarDado();
	jogador2[1] = rolarDado();
	printf("Jogador 2: %d + %d\n",somaJogador2[0], somaJogador2[1]);
	somaJogador2 = calcularSoma(jogador2[0], jogador2[1]);
	printf("Soma do jogador 2: %d\n", somaJogador2);

	if(somaJogador1 > somaJogador2){
		printf("Jogador 1 venceu!!!");
	}else if(somaJogador2 > somaJogador1){
		printf("Jogador 2 venceu!!!");
	}else{
		printf("EMPATE!!!");
	}

	return 0;
}
