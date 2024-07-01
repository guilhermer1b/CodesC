#include <stdio.h>
#include <locale.h>

/*

    Operador Unsigned
    Trocar o %d por %u
    Limite para o tipo int: 2.147.483.647
    short int -> $d ou hi
    unsigned short int -> %d ou %hu
    unsigned long int -> %lu

*/

int main(){

    unsigned int x = 2147483647;

    unsigned short int y = 55000;

    printf("\n\t %d \n\n", y);

    /*
    
        Basicamente, esse operador é usado para tirar o limite dos numeros negativos e mosrando ao computador que so vai usar numeros positivos, com isso, o limite dos numeros positivos será aumentado, dobrando o tamanho ja que nao sera usado numeros negativos;
    
    */

}