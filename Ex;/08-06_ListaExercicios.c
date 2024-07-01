#include <stdio.h>

/*

    Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de cambio US$1,0 = 5,30. Leia um valor em Reais e mostre correspondente em Dólares;

*/

int main(){

    float Reais, Dolar;

    printf("Digite o valor em Reais para ser convertido: ");
    scanf("%f", &Reais);

    Dolar = Reais / 5.3;

    printf("Valor em Dolares: R$%.2f\n", Dolar);
    return 0;
}