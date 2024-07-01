#include <stdio.h>

/*

    Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12

*/

int main(){

    int segundos, horas, minutos, SEGUNDOS, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    // 3672 segundos
    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    SEGUNDOS = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, SEGUNDOS);
    return 0;
}