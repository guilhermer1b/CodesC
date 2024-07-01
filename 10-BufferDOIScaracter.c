
#include <stdio.h>


/* 

	Ler dois caracteres

*/


int main(){

	char a, b;

	printf("Digite duas letras: ");
	scanf("%c %c", &a, &b);
	// Espaço entre os %c -> Comando para o computador desconsiderar o ENTER, TAB e o ESPAÇO
	// buffer -> &c \n %c -> O \n é considerado um caracter, então, ele fica guardado também no buffer fazendo com que fique um espaço ao digitar o outro caracter
	/* 
		Ficando assim:
			Primeira letra: g
			Segunda letra: 		-> Vai ficar um espaço porque no buffer o caracter seria o enter (\n) e ao colocar o espaço no scanf vai ele desconsiderar esse comando \n

	*/


	printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);


	return 0;
}