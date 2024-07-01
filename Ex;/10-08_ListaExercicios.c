#include <stdio.h>
/*

    Escreva um programa que leia três valores e apresente qual é o maior e qual é o menor

*/

int main(){
    int a, b, c, menor, maior;

    printf("Digite tres valores:"); 
    scanf("%d%d%d", &a, &b, &c);

    // Primeira solução
    if(a < b){
        if(a < c)
            menor = a;
        else
            menor = c;
    }
    else{
        if(b < c)
            menor = b;
        else
            menor = c;
    }
    if(a > b){
        if(a > c)
            maior = a;
        else
            maior = c;
    }
    else{
        if(b > c)
            maior = b;
        else 
            maior = c;
    }
    printf("\n\t\tPrimeira versao:\n\tMenor: %d\n\tMaior: %d\n", menor, maior);

    // Segunda solução
    menor = a;
    maior = a;
    
    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if(maior < b)
        maior = b;
    if(maior < c)
        maior = c;
    printf("\n\t\tSegunda versao:\n\tMenor: %d\n\tMaior: %d\n", menor, maior);











    return 0;
}