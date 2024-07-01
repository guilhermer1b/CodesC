#include <stdio.h>

/*

    Uma empresa contrata um encanador a R$ 45/dia. Faça um programa que solicite o numero de dias trabalhados pelo encanador e imprima a quantia liquida que devera ser paga, sabendo que sao descontados 8% para imposto de renda.

*/


int main(){

    float WorkDay, QuantiaPaga, ValorPago, Imposto;

    printf("Qual foi a quantidade de dias que o encanador trabalhou na empresa?");
    scanf("%f", &WorkDay);

    QuantiaPaga = WorkDay * 45; // 10 * 45 -> 450
    Imposto = QuantiaPaga * 0.08; // 450 * 0.08 -> 36
    ValorPago = Imposto - QuantiaPaga; // 36 - 450 -> 414

    printf("A empresa devera pagar ao encanador R$%.2f reais\n", ValorPago);

    return 0;
}