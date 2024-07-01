/* 

	OUTRA FORMA PARA 
	LER CARACTERES

	função getchar()

*/


#include <stdio.h>

int main(){

		char letra; 

		printf("Digite uma letra: ");
		letra = getchar(); // getchar é usado para ler APENAS caracteres, se for ler palavras ou frases, é mais comum que use o scanf()

		printf("Caracter lido: %c\n", letra);




		return 0;
}