#include<stdio.h>

/*

    Escreva um programa que gere a saida abaixo (10 linhas, 20 * por linha).
    Restrições:
    A instrução "printf" pode ser utlizada no maximo 2 vezes;
    O \n saltar linha pode ser utilizado no maximo 1 vez;

    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************
    ********************

*/


int main(){
    int i, j;

    for(j = 1; j <= 10; j++){
        for(i = 1; i <= 20; i++)
            printf("*");
        printf("\n");
    }
}