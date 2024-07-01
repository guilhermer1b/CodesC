#include <stdio.h>

/*
    Operador Logico de negacao !

    TABELA VERDADE x    !x
                   v    f
                   f    v

*/

int main(){

    int a = 10;
    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    printf("Operador Ternario:\n");
    !(a < 0) ? printf("\n\tValor Negativo!\n\n") : printf("\n\tValor Positivo ou igual a zero!\n\n");
        // Usando o Operador "!" muda as ordens que seram feitas as "perguntas" por exemplo:
        // a é menor que 0? sim, então a resposta vai ser não, porque usando o operador ele "muda" as respostas
        return 0;
}