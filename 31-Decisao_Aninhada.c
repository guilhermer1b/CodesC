#include <stdio.h>


/*

    Decisão Aninhadas

*/

int main(){

    int a = 10;
    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    if (a < 0)
        printf("\nValor Negativo!\n");
    else{
        if (a > 0)
            printf("\n\tValor Positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");

    }

    /*
        Estrutura feita..:
        Se a for menor que 0, imprimir isso
        Senão, se a for maior que 0, imprimir isso
        Senão for nenhum dos dois, imprimir isso
    
    */
}