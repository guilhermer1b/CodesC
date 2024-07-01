#include <stdio.h>

// Faça um programa que some os numeros impares entre 1 e 1000 e imprima a resposta

int main(){
    int i, soma = 0;

    for(i = 1; i <= 1000; i++)
        if(i % 2 == 1)
            soma += 1; // soma = soma + 1
    printf("Soma dos impares de 1 a 1000: %d\n\n", soma);
}