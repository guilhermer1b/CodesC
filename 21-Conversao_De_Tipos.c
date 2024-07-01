#include <stdio.h>

/*

    Conversão de Tipos

*/


int main(){

    int a = 10, b = 20; 
    float pi = 3.1415;

    a = (int)pi; // Converteu um tipo float para um tipo int;
    printf("Valor de a: %d\n", a); // Já que está como um núm tipo int, vai resultar em 3(três);


    printf("\nSoma: %d\n", a + b);

    printf("\nSubtracao: %d\n", a - b);

    printf("\nMultiplicacao: %d\n", a * b);

    printf("\nDivisao: %f\n\n", a / (float)b); // como os valores a,b são inteiros, ao efetuar a divisão vai resultar em 0, já que são inteiros e não do tipo float, precisa fazer a conversão



    return 0;
}