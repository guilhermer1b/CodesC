#include <stdio.h>

/*

    Estrutura de selecao switch case
    Opcoes: - A = cadastrar produto
            - B = vender produto
            - C = buscar produto
            - D = imprimir relatorio
            - Z = sair

*/

int main(){
    char opcao;
    printf("A - Cadastrar produto\nB - Vender produto\nC - Bsucar produto\nD - Imprimir\nZ - Sair\n");
    scanf("%c", &opcao);

    switch (opcao){
    case 'A':
        printf("\nCadastrando novo produto.\n");
        break;
    case 'B':
        printf("\nVendendo um novo produto.\n");
        break;
    case 'C':
        printf("\nBuscando novo produto.\n");
        break;
    case 'D':
        printf("\nImprimindo relatorio.\n");
        break;
    case 'Z':
        printf("\nSaindo...\n");
        break;
    default:
        printf("\nOpcao invalida!\n");
    }


    return 0;
}