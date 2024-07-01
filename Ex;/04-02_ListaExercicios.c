#include <stdio.h>

/*

    Elabore um programa que receba, por meio do teclado, dosi valores, um para a variavel "a" e um para a variavel "b". Em seguida, faça os passos que julgar necessario para que ao final, a variavel "a" possua o vlaor que incialmente estava em "b" e a variavel "b" possua o valor que incialmente estava em "a".

*/

int main(){

    int a, b, y;

    printf("Digite dois valores:");
    scanf("%d %d", &a, &b);

    // y

    y = a;
    a = b;
    b = y;

    printf("\n\nValores lidos (trocados)\n\tA: %d\n\tB: %d\n\n", a,b);

    return 0;
}