#include <stdio.h>

/*

    Tipo double
    %lf -> long float

*/

int main(){

    float x = 3.1415;

    double y = 3.1415161717878; // Consegue uma precisão maior do que o float;


    printf("Um double precisa de %d bytes de memoria.\n", sizeof x);


    return 0;
}