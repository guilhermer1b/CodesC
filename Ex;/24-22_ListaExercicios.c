#include <stdio.h>

// Faça um programa que imprima na tela todos os multiplos de 7 entre 1 e 9999.

int main(){
    int i;

    for(i = 7; i <= 9999; i+=7)
        printf("%d ", i);

    return 0;
}