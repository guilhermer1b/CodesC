#include <stdio.h>

/*

    Operador de Decremento 
    --

*/


int main(){

    int contador, resultado;
    contador = 10;
    resultado = 10;

    printf("Valor: %d\n", contador);

    // Sinônimas
    // contador--;
    // contador -= 1;
    // contador = contador - 1;

    resultado = --contador;
    printf("Valor: %d\n", resultado);

 /* Basicamente, ao ser colocado à direita, vai subtrair -1 do proximo numero, se colocar à esquerda, vai subtrair a si;

    decremento = 10;
    printf("Exemplo: %d", decremento--); -> Vai continuar com o núm que foi colocado (10);
    printf("Exemplo: %d", decremento); -> Vai resultar em 9, já que no print atrás foi pedido um decremento;

    printf("Exemplo: %d", --decremento); -> Vai resultado em 9, já que foi colocado a decrementação à esquerda;
 
 */

    return 0;
}