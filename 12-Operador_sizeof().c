#include <stdio.h>

/*

		Operador sizeof

		sizeof x ou sizeof (int)

	-> Usado para mostrar o tamanho de tal tipo, bom para projetos e para averiguar se é algo pesado (sei la o que eu estou digitando kkkkkk so estou tentando explicar, mas na minha cabeça está certo, mas deve estar erradao essa explicacao top de linha, qualquer coisa chama o chatgpt, DKADKSAKDKDSKD);

		-> sizeof x -> Mostrar tamanho de um tipo (int, float, char);
		-> sizeof(int) -> Mostrar tamanho de um tipo int;

*/


int main(){

	float x = 1.0;
	printf("Tamanho em memoria de float: %d bytes\n", sizeof x);

	printf("Tamanho em memoria de int: %d bytes\n", sizeof(int));






	return 0;
}