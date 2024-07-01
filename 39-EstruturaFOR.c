#include <stdio.h>

/*

    Estrutura de repetição FOR (PARA)

*/

// for -> (condição de inicio; condição de parada; incremento)
//for             i = 0             i <= 10            i++

int main(){
    int i = 0;

    for(i = 0; i <= 10; i++) // Uso das chaves {} obrigatorio se for necesessario 2+ instruções
        printf("%d ", i); // 0 1 2 3 4 5 6 7 8 9 10

    return 0;
}