#include <stdio.h>

/*

    Decisão Simples
    Verificando se um numero é negativo

    Brasilia é a capital do Brasil? sim = 1 ou não = 0

*/

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("\nResultado Logico: %d \n", a < 0);

    if (a < 0)
        printf("\n\tValor Negativo!\n");
    else
        printf("\n\tValor Positivo ou igual a Zero");


}