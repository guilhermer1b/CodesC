#include <stdio.h>

/*

    Crie um programa que permita fazer a conversao de Real para Dolar ou de Dolar para Real. Utilize como taxa de cambio $1 igual a R$5.30.

*/

int main(){
    float valor, valorConvertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);


    printf("\n1 - Converter de Real para Dolar\n2 - Covnerter de Dolar para Real\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1: // converter de real para dolar
        valorConvertido = valor / 5.3;
        printf("Valor convertido: $%.2f\n", valorConvertido);
        break;
    case 2: // converter de dolar para real
        valorConvertido = valor * 5.3;
        printf("Valor convertido: R$%.2f\n", valorConvertido);
        break;
    default:
        printf("\nOpcao Invalida!!!\n");
    }
}