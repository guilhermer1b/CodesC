#include <stdio.h>

/*

    Operador short para o tipo int
    Intervalo: -32.768 até 32.767
    %hi ou d

*/

int main(){
    int y = 0; // Valor de qualquer tipo int equivale a 4
    short int x = 32767; // Ao usar o short, o valor passa a ficar 2

  //  printf("Tamanho de um int na memoria: %d bytes\n", sizeof y);
  //  printf("Tamanho em memoria de um short int: %d bytes\n", sizeof x);

    printf("Valor de x: %d\n", x);
    x++;
    printf("Valor de x: %hi\n", x); //-32,768 -> Esse foi o resultado, pois, como o valor maximo sendo positivo é 32.767, ao somar esse numero + 1, vai dar um numero negativo

    return 0;
}