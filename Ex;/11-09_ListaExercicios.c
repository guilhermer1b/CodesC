#include <stdio.h>

/*

    Escreva um programa que le 5 numeros inteiros, um por vez. Conte quantos destes valores sao negativos e quantos sao positivos. Ao final, imprima na tela a quantidade de numeros negativos e positivos

*/

int main(){
    int um, dois, tres, quatro, cinco, positivos = 0, negativos = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &um);
    printf("Digite o segundo valor: ");
    scanf("%d", &dois);
    printf("Digite o terceiro valor: ");
    scanf("%d", &tres);
    printf("Digite o quarto valor: ");
    scanf("%d", &quatro);
    printf("Digite o quinto valor: ");
    scanf("%d", &cinco);

    if(um < 0)
        negativos++; // Incrementação -> Quando o numero for negativo ( < 0) vai aumentar +1 na quantidade dos num negativos, se for positivo, vai aumentar +1 nos positivos, fazendo imprimir no final a quantidade de cada;
    else
        positivos++;
    if(dois < 0)
        negativos++;
    else
        positivos++;
    if(tres < 0)
        negativos++;
    else
        positivos++;
    if(quatro < 0)
        negativos++;
    else
        positivos++;
    if(cinco < 0)
        negativos++;
    else
        positivos++;
    
    printf("\nQuantidade de Positivos: %d\nQuantidade de Negativos: %d\n", positivos, negativos);
    



}