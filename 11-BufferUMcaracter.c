/* 

	Aula passado aprendi a limpar o buffer quando se coloca dois caracteres no scanf()
	Nessa aula vamos aprender a limpar o buffer quando se digita apenas uma letra individualmente;

*/

#include <stdio.h>

int main(){

	char a, b;

	printf("Digite uma letra: ");
	scanf(" %c", &a);



	printf("Digite uma letra: ");
	scanf(" %c", &b);


	printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);





	return 0;
}