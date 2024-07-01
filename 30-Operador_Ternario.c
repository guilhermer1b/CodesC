#include <stdio.h>

/*

    Operador Ternário
    Condição ? verdadeiro : falso

*/

int main(){

    int a = 10;
    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    printf("Operador Ternário:\n");
    a < 0 ? printf("\n\tValor Negativo!\n") : printf("\n\tValorPositivo!\n\n");
    // ponto de interrogação para "separar/perguntar" a condição do verdadeiro ":"e falso
}


    /*
        Operador Ternário é LITERALMENTE ISSO (mas sem o if/else);

            Se (if) a <(menor) 0
            printar "numero negativo"
            Senão (else)
            printar "numero positivo"

    */

/*
a = 10

if a < 0
    printf("\n\tValor Negativo!\n");
else
    printf("\n\tValorPositivo!\n\n");

*/