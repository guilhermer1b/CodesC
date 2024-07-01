#include <stdio.h>

/*

    Endentacao e uso das chaves


        --> O uso das chaves serve para quando quer colocar dois prints e um IF ou ELSE, serve para mostrar ao computador que ambos prints vão ser utilizados, e não que um está fora...:

        Sem Chaves..:
    if (a < 0)
        printf("\n\tValor Negativo!\n");
        printf("\n\tValor Negativo!\n");
    else
        printf("\n\tValor Positivo ou igual a zero!\n");
        printf("\n\tValor Positivo ou igual a zero!\n");
    
    --> Quando o usuario escolher um numero qualquer e for positivo, vai ser printado tanto um como o outro, ja que nao mostram se estao dentro do if ou else, e sim que estao la, como se estivessem fora e dentro ao mesmo tempo. Basicamente, se a for menor que 0, vai printar "Valor Negativo!" mas como não tem as chaves, também vai printar "Valor Positivo ou igual a zero!" já que é como se estivesse fora, igual o "Continuacao do programa..." Que independente de qual for escolhido, esse print sempre sera imprimido......

    Com as chaves, mostra que o if por exemplo, tem "prioridade" SOMENTE as prints que estiverem dentro das chaves, evitando imprimir o que está no else
*/

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer:");
    scanf("%d", &a);

    if (a < 0){
        printf("\n\tValor Negativo!\n");
        printf("\n\tValor Negativo!\n");
    }
    else{
        printf("\n\tValor Positivo ou igual a zero!\n");
        printf("\n\tValor Positivo ou igual a zero!\n");
    }
    printf("\nContinuacao do programa...\n");
    return 0;
}