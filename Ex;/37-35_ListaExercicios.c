#include<stdio.h>

int main(){
    float n1, n2, media;
    int opcao;

    do{
        do{
            printf("Digite a primeira nota: ");
            scanf("%f", &n1);
        }while(n1 < 0 || n1 > 10);

        do{
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
        }while(n2 < 0 || n2 > 10);

        media = (n1 + n2) / 2;
        printf("Media: %.2f\n\n", media);

        printf("Novo calculo? (1-Sim 2-Nao)");
        scanf("%d", &opcao);
    }while(opcao != 2);
    
    printf("Finalizando programa...");
}