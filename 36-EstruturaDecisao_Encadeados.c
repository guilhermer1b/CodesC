#include <stdio.h>

int main(){
    int a = 10;
    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    // Primeira versão
    if(a < 0)
        printf("\n\tValor Negativo!\n");
    else{
        if(a > 0)
            printf("\n\tValor Positivo!\n");
        else
            printf("\n\tValor igual a zero!\n");
    }

    // Segunda versão
    if(a < 0)
        printf("\n\tValor Negativo!\n");
    else if(a > 0)
        printf("\n\tValor Positivo!\n");
    else
        printf("\n\tValor igual a zero!\n");
}