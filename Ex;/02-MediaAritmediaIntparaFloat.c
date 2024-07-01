// Deixar o usuario escolher 3 valores (inteiros) e fazer a media deles, e dar o resultado como decimal (float);

#include <stdio.h>

int main(){

    int num1, num2, num3;
    float media;

    printf("Para fazer a Média, escreva três números (inteiros) dê sua preferência: ");
    scanf(" %d %d %d", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A Média dos números %d %d %d é:\nMédia: %.1f\n", num1, num2, num3, media);

    return 0;
}