/*
 ============================================================================
 Name        : projeto_bynew.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void incrementarporvalor(int x) {
	x++;
	// o escopo desta variavel vale somente dentro da função.
	// voce pode inclusive chamar esta variavel de y ou z.
}

void incrementarporreferencia(int *x) {
	(*x)++;
}
int main(void) {
	int numero = 5;
	incrementarporvalor(numero);
	printf("valor original: %d\n", numero);	//saida:valor original:5

	incrementarporreferencia(&numero);
	printf("valor modificado %d\n", numero); //saida valor modificado: 6

	return 0;
}
