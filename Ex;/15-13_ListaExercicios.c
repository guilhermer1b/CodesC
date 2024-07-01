#include <stdio.h>

/*

    Faça um programa para ler um numero inteiro e verificar se corresponde a um mes valido no calendario. Caso corresponda, escrever o nome do mes, caso contrario, escrever a mensagem 'Mes invalido'

*/

int main(){
    int mes;

    printf("Digite um número para verificar se está dentro do calendario (mes): ");
    scanf("%d", &mes);

    switch(mes){
        case 1:
            printf("\nJaneiro\n");
            break;
        case 2:
            printf("\nFevereiro\n");
            break;
        case 3:
            printf("\nMarco\n");
            break;
        case 4:
            printf("\nAbril\n");
            break;
        case 5:
            printf("\nMaio\n");
            break;
        case 6:
            printf("\nJunho\n");
            break;
        case 7:
            printf("\nJulho\n");
            break;
        case 8:
            printf("\nAgosto\n");
            break;
        case 9:
            printf("\nSetembro\n");
            break;
        case 10:
            printf("\nOutubro\n");
            break;
        case 11:
            printf("\nNovembro\n");
            break;
        case 12:
            printf("\nDezembroo\n");
            break;
        default:
            printf("\nMes Invalido!\n");
    }


}