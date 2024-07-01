#include <stdio.h>

/*

    Faça um programa em C para trocar o valor de duas variaveis inteiras sem utilizar nenhuma variavel auxiliar.

*/

int main(){
    int a, b;

    printf("Digite dois valores:");
    scanf("%d %d", &a, &b);

    printf("\n\nValores antes de serem trocados\n\tA: %d\n\tB: %d", a,b);

    /*
    
    x = 10
    y = 5

    x = x + y -> 15
    y = x - y -> 10
    x = x - y -> 5
    
    */
   a = a + b;
   b = a - b;
   a = a - b;

    printf("\n\nValores lidos (trocados)\n\tA: %d\n\tB: %d\n\n", a,b);

}