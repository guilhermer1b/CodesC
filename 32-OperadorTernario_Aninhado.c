#include <stdio.h>

int main(){

    int a = 10;
    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    printf("Operador Ternario:\n");
    a < 0 ? printf("\n\tValor Negativo!\n\n") : 
        a > 0 ? printf("\n\tValor Positivo!\n\n") : printf("\n\tValor igual a zero!\n\n");
        // Mesma ideia usando if/else, so que usando a operacao ternario
        return 0;
}