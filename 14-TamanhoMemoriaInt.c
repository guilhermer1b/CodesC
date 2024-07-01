#include <stdio.h>

/*

    Tamanho de um Int na memória
    Intervalo: -2.147.483.648 até 2.147.483.647
    %hi ou %d

*/

int main(){

    int x = 2147483647;

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %d\n", x); //-2.147.483.643 -> Esse foi o resultado, pois, como o valor maximo sendo positivo é 2.147.483.647, ao somar esse numero + 1, vai dar um numero negativo;


    return 0;
}