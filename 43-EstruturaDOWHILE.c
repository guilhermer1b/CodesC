#include <stdio.h>

// Estrutura de repetição do{}while (faça enquanto)

int main(){
    int valor, valor2;

    printf("Digite um valor maior que zero: ");
        scanf("%d", &valor);
    
    while(valor <= 0){
        printf("Valor Invalido! Digite um valor maior que zero: ");
        scanf("%d", &valor);

    }
    printf("Valor lido: %d\n\n", valor);



    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d", &valor2);
    }while(valor2 <= 0);

    printf("Valor lido: %d\n\n", valor2);
}

/*

    Diferença de "white" para "do while"

    while -> Ele começa testando, então você tem que fazer a leitura do valor pelo menos uma vez antes, para testar
    do while -> Primeiro faz alguma coisa, para depois testar

    O que tiver dentro do "while" talvez não seja executado || o que tiver dentro do "do while" vai ser executado pelo menos uma vez

*/