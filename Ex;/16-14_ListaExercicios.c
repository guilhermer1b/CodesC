#include <stdio.h>

/*

    Faça um programa que leia se um caractere é vogal ou consoante

*/

int main(){
    char vogal;
    printf("Digite um caractere para descobrir se e vogal ou consoante:\n ");
    scanf("%c", &vogal);

// Primeira forma que guizin fez sem ajuda dos universitarios!!!!!!!!!!!
    switch(vogal){
        case 'a':
            printf("\n\tVOGAL\n");
            break;
        case 'e':
            printf("\n\tVOGAL\n");
            break;
        case 'i':
        printf("\n\tVOGAL\n");
            break;
        case 'o':
        printf("\n\tVOGAL\n");
            break;
        case 'u':
        printf("\n\tVOGAL\n");
            break;
        default:
            printf("\n\tCONSOANTE\n");
    }


// Segunda forma que guizin fez sozinho taok nenenenenenenennene
    if(vogal == 'a')
        printf("\n\tVOGAL\n");
    else if(vogal == 'e')
        printf("\n\tVOGAL\n");
    else if(vogal == 'i')
        printf("\n\tVOGAL\n");
    else if(vogal == 'o')
        printf("\n\tVOGAL\n");
    else if(vogal == 'u')
        printf("\n\tVOGAL\n");
    else
        printf("\n\tCONSOANTE\n");


// Terceira forma EEEE NAO USEI OS UNIVERSITARIOS DAS FACULDADES DO SIGMA DA BAHIA
    if(vogal == 'a' || vogal == 'A' || vogal == 'e' || vogal == 'E' || vogal == 'i' || vogal == 'I' || vogal == 'o' || vogal == 'O' || vogal == 'u' || vogal == 'U')
        printf("\n\tVOGAL\n");
    else
        printf("\n\tCONSOANTE\n");
return 0;
}