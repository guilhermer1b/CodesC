#include <stdio.h>

int main(){
    int i;

    for(i = 1; i <= 100; i+=2) // i = i + 2
        //if(i % 2 != 0) -> Achar numero impares usando if, resto da divisao de 2, for diferente de 0, vai imprimir taligado?
            printf("%d ", i);
}