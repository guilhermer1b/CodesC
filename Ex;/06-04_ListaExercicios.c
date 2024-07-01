#include <stdio.h>

/*

    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o numero de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta sera dividida igualmente

*/

int main(){

    int numPessoas;
    float ValorDespesa, PorcentGorjeta, valorTotal, valorPessoa;

    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &ValorDespesa, &PorcentGorjeta, &numPessoas);

    valorTotal = ValorDespesa * PorcentGorjeta/100 + ValorDespesa;
    valorPessoa = valorTotal / numPessoas;

    printf("Cada pessoa vai pagar R$%.2f\n", valorPessoa);
    return 0;
}
