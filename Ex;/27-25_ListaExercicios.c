#include <stdio.h>

/*
    Faça um programa que calcule o valor de A, dado por:
    A = 1 + 2 + 3 + 4 + ... + n,
    onde n é um numero inteiro, maior que zero informado pelo usuario.
*/

int main() {
    int i, n, A = 0;

    do {
        printf("Digite o valor de n: ");
        scanf("%d", &n);
    }while(n < 1);

    for(i = 1; i <= n; i++)
    A = A + i;

    printf("Soma de 1 ate %d: %d\n\n", n, A);
}