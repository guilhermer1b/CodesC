#include<stdio.h>

/*

    Chico tem 1,50 e cresce 2cm/ano, enquanto ze tem 1,10 e cresce 3cm/ano.
    faça um programa e imprima quantos anos serao necessarios para que ze seja maior que chico

*/

int main(){
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze){
        chico += 0.02; // chico = 1.50 -> 1.52 -> 1.54
        ze += 0.03; // ze = 1.10 -> 1.13 -> 1.15
        ano++; // inicia = 0 -> 1 -> 2
    }
    printf("Serao necessarios %d anos!\n", ano);
}