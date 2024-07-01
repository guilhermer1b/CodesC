/*

	Variaveis 
	E
	Lendo Números Inteiros

*/

#include <stdio.h>

int main() {

	// int -> criar uma variavel do tipo inteiro, guardar um valor inteiro / Serve apenas para guardar valores(numeros) inteiros
	int valor, valor2;
	// Atribuição -> Atribuir um valor a uma variavel
	valor = 333; // O valor aqui está como "indefinido" já não está sendo servido pra nada (depreeee"""""(#")("##)""")"))



printf("Digite um Valor Inteiro: ");
scanf("%d", &valor);

printf("Digite um segundo valor inteiro: ");
scanf("%d", &valor2);
// scanf -> Ler o que o usuario vai escrever
/*
-
	Esse scanf vai ter duas partes, então vai usar a virgula

	1Parte -> Como usou uma mascara para escrever o numero inteiro, precisa dizer à função que tipo de informação eu quero que ela leia ( no caso um numero inteiro %d )

	2Parte -> Preciso dizer aonde eu quero salvar(variavel) esse numero ( no caso, o nome da variavel é "valor" ) e para obter o endereço fisico de memoria, vai adicionar o caracter 
	&
-
*/



	// %d -> Indica que ali eu quero que apareça um número ( que seja de acordo com a variavel "int" que so pode ser usado para numeros inteiros -> Existem outras formas ( para numeros decimais ))
	printf("\n\n\nValor da minha Variavel: %d\nSegundo Valor: %d\n", valor, valor2); // %d ( Mostrar numero inteiro que guardei na variavel / ,(virgula) Após as aspas para mostrar qual variavel eu quero que seja mostrada, ali no caso, a variavel "valor" )

	return 0;
}