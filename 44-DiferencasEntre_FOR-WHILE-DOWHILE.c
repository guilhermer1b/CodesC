#include <stdio.h>

// Diferenças entre FOR , WHILE , DO{}WHILE

int main(){
    int i = 0;

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d", &i);
    }while(i <= 0);
printf("\n\n\tValor lido: %d\n\n", i);

    printf("\nGerado com FOR: ");
    for(i = 0; i < 11; i++)
        printf("%d ", i);

   i = 0;

printf("\n\nGerado com WHILE: ");
while(i < 11){
    printf("%d ", i++);
}     
}

