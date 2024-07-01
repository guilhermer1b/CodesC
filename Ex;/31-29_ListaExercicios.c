#include <stdio.h>

/*

    Faça um programa que veja se algum número é primo

*/

int main(){
    int primo, i, divisores = 0;

    do{
        printf("Digite um numero maior que 1: ");
        scanf("%d", &primo);
    }while(primo < 2);

    for(i = 1; i <= primo; i++){
        if(primo % i == 0);
            divisores++;
    }

    if(divisores > 2)
        printf("%d nao e primo\n", primo);
    else
        printf("%d e primo", primo);
}