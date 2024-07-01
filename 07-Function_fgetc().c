// QUARTA FORMA DE LER CARACTERES (scanf, getchar, getc, fgetc)

#include <stdio.h>


int main(){


	char letra;

	printf("Digite um caracter: ");
	letra = fgetc(stdin);	// fgetc -> Quando usamos arquivos de textos normalmente é usados funções que comecem com f (f -> file);

	printf("Caracter lido: %c\n", letra);


	return 0;
}
