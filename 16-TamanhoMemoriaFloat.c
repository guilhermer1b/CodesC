#include <stdio.h>

/*

    Tamanho de um float na memória
    %f

*/

int main(){

    float x = 3.1415;

    printf("Um float precisa de %d bytes de memoria.\n", sizeof x);


    return 0;
}