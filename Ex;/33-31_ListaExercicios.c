#include <stdio.h>

/*

    Peça numeros ao usuario, diga quantos são positivos e quantos são negativos, e quando o usuario digitar 0, parar o programa;

*/


int main(){
    int num, positivos = 0, negativos = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);

        if(num > 0)
            positivos++; // -> guarda os numeros de acordo com a regra(if) exemplo -> 1, 9, 2, 4 = 4 numeros
        if(num < 0)
        negativos++;

    }while(num != 0);
    printf("Positivos: %d\nNegativos: %d\n\n", positivos, negativos);
}