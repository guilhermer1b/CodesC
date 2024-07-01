#include <stdio.h>

/*

´a´ -> aritmetica
`p´ -> ponderada (pesos: 3, 3, 4)

*/

int main(){
    float nota1, nota2, nota3;
    char escolha;
    printf("Qual a media deseja?\na - aritmetica\np - ponderada\n");
    scanf("%c", &escolha);

    if(escolha == 'a' || escolha == 'p'){
        printf("Digite as tres notas: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
    }
    if(escolha == 'a')
        printf("Media aritmetica: %.2f\n", (nota1 + nota2 + nota3) / 3);
    else
        if(escolha == 'p')
            printf("Media ponderada: %2.f\n", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
    else
        printf("\nOpcao Invalida!\n");

return 0;
}