/*

	Variaveis 
	E
	Lendo Números Decimais

*/
#include <stdio.h>
int main() {

	// Float -> Ler Números Decimais ( numeros com virgula )
	float numero = 3.1415;
	float numero_decimal = 0;

	printf("Valor da minha Variavel: %.f\n\n\n\n", numero); // %f -> Usado para Números Decimais
	// Quando imprimir, vai aparecer o valor ( 3.141500 ) Os dois zeros (0) por padrão aparece pois, em caso de números decimais sempre vai aparecer 6 digitos após a virgula, e para evitar que apareça os dois zeros, formatar o resto usando um .(ponto) após o (%)porcento, colocar a quantidade de casas após a virgula; Exemplo: %.2f -> 3.14 ; %.4f -> 3.1415
	
	printf("Digite um número decimal fodastico: ");
	scanf("%f",&numero_decimal);
	printf("Número decimal fodastico que eu escrevi: %.3f\n", numero_decimal);
	
	return 0;
}