#include <stdio.h>

/*

    Operador de Incremento 
    ++

*/

int main(){

    int contador,resultado = 10;

    printf("Valor: %d\n", contador);

    // Sinônimas
    // contador++;
    // contador += 1;
    // contador = contador + 1;

    resultado = ++contador;
    printf("Valor: %d\n", resultado);

 /* Basicamente, ao ser colocado à direita, vai somar +1 do proximo numero, se colocar à esquerda, vai somar a si;

    incremento = 10;
    printf("Exemplo: %d", incremento++); -> Vai continuar com o núm que foi colocado (10);
    printf("Exemplo: %d", incremento); -> Vai resultar em 11, já que no print atrás foi pedido um incremento;

    printf("Exemplo: %d", ++incremento); -> Vai resultado em 11, já que foi colocado a incrementação à esquerda;
 
 */

    return 0;
}