#include <stdio.h>


/*

    Operador long para o tipo double
    double -> %lf
    long double -> %Lf

    __mingw_printf();

*/

int main(){

    float x = 3.1415;

    // Long double funciona, porém suporta apenas no Mac/Linux, e é usando %Lf, já no Windows é feito usando o operador __mingw_printf(); ;
    long double y = 3.14151617178787432; // Consegue uma precisão maior do que o float;

    printf("Valor de y: %Lf\n", sizeof y);
    __mingw_printf("Valor de y: %Lf\n", y);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y); // Depndendo do editor que esteja usando, os numeros podem variar (No meu ficou 12 bytes, no video 16);

    // 8 * 8 = 64 bytes


    return 0;
}