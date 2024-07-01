#include <stdio.h>

/*

    Dado o numero do mes, diga quantos dias tem esse mes
    OBS: Eu vou fazer colocando o mes que a pessoa escolheu tambem

*/

int main(){
    int mes;

    printf("\n1 - Janeiro\n2 - Fevereiro\n3 - Marco\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");

    printf("Digite o numero do mes que quer saber a quantidade de dias: ");
    scanf("%d",&mes);

// Primeira forma (BEMMM MAIOR)
    switch(mes){
        case 1:
            printf("\nMes: Janeiro Quant.Dias: 31 Dias\n");
            break;
        case 2:
            printf("\nMes: Fevereiro Quant.Dias: 28 Dias\n");
            break;
        case 3:
            printf("\nMes: Marco Quant.Dias: 31 Dias\n");
            break;
        case 4:
            printf("\nMes: Abril Quant.Dias: 30 Dias\n");
            break;
        case 5:
            printf("\nMes: Maio Quant.Dias: 31 Dias\n");
            break;
        case 6:
            printf("\nMes: Junho Quant.Dias: 29 Dias\n");
            break;
        case 7:
            printf("\nMes: Julho Quant.Dias: 31 Dias\n");
            break;
        case 8:
            printf("\nMes: Agosto Quant.Dias: 31 Dias\n");
            break;
        case 9:
            printf("\nMes: Setembro Quant.Dias: 30 Dias\n");
            break;
        case 10:
            printf("\nMes: Outubro Quant.Dias: 31 Dias\n");
            break;
        case 11:
            printf("\nMes: Novembro Quant.Dias: 30 Dias\n");
            break;
        case 12:
            printf("\nMes: Dezembro Quant.Dias: 31 Dias\n");
            break;
        default:
            printf("\nMes Invalido!\n");
    }

// Segunda forma de se realizar essa belissima licao que guizin efetuou sozinho enquanto espera o evento classic do roblox (faltam 3 days) (bemm menor)

switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mes possui 31 dias\n");
        break;
    case 2:
        printf("\nO mes possui 28 dias\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO mes possui 30 dias\n");
        break;
    default:
        printf("\nMes Invalido!\n");
}

}