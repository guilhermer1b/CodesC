#include <stdio.h>


/* 
			Pequeno Programa
	-> Ler sexo, idade, peso e altura;
*/


int main(){


	char sexo;
	int idade;
	float peso;
	float altura;

	printf("Qual seu sexo? (M ou F)\n");
	sexo = getchar();

	printf("Qual sua idade?\n");
	scanf(" %d", &idade);

	printf("Qual seu peso?\n");
	scanf(" %f", &peso);

	printf("Qual sua altura? (exemplo: 1.75\n");
	scanf(" %f", &altura);





	printf("Oi, voce eh do sexo %c\n.Tem %d anos\n.Pesa %.0f\n.E tem %.2f metros.", sexo, idade, peso, altura);



	return 0;
}