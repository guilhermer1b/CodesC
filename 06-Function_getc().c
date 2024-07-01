// TERCEIRA FORMA DE LER CARACTERES (scanf, getchar, getc)

#include <stdio.h>

int main(){

	char letra;
	printf("Digite um caracter: ");



	letra = getc(stdin); // função getc -> Também pode ser usado para ler outras fontes, ler de um arquivo texto, então tem que passar um parâmetro para a função dentro dos parenteses;
					// stdin -> Mostra a função que eu vou usar o meu teclado/computador, para responder á pergunta;




	printf("Caracter lido: %c\n", letra);


	return 0;
}