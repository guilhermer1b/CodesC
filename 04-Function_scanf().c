/*

	Lendo Caracteres
	Usando a Função scanf()

*/

// char -> Tipo que é usado para guardar um letra, caracter

#include <stdio.h>

int main() {

	char sexo = 'a'; // Usar ***ENTRE ASPAS SIMPLES*** para mostrar ao computador que é uma letra, se não o computador vai procurar por uma variavel e vai dar erro;
	

	printf("Valor da variavel sexo: %c\n", sexo); // Para fazer a impressão de um tipo caracter, %c (porcento c)

	printf("Digite seu sexo: (f, F, m ou M)");
	scanf("%c", &sexo);

	printf("Valor da variavel sexo: %c\n", sexo);



	return 0;
}