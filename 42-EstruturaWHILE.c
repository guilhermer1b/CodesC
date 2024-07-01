#include <stdio.h>

// ESTRUTURA DE REPETIÇÃO while (enquanto)

int main(){
    int valor;

    printf("Digite um valor maior que zero: ");
        scanf("%d", &valor);
    
    // Enquanto o valor(numero que o usuario digitar) for menor ou igual a zero, vai imprimir que é invalido e precisa digitar novamente um maior, e pode ficar nessa para sempre até que o usuario digite um valor maior que zero; Basicamente, serve para "dar ordem" ao usuario, aonde, se ele errar mostrar que ele errou e que precisa refazer
    while(valor <= 0){
        printf("Valor Invalido! Digite um valor maior que zero: ");
        scanf("%d", &valor);

    }
    printf("Valor lido: %d\n\n", valor);
}