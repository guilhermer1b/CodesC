#include <stdio.h>
/* 

	Como aumentar o espaço de memória para um Int com o operador long
	%li / %ld

*/

int main(){

	long long int x = 2147483647;

	printf("Tamanho de x em bytes: %d\n", sizeof x);

	printf("Valor de x: %lld\n", x); // long long int (com dois "l" são dois "long");
	x++;
	printf("Valor de x: %lli\n", x); // mesma coisa, long long int 



	return 0;
}