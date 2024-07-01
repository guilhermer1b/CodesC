#include <stdio.h>

/*

    Estrutura de selecao switch case
    Opcoes: - 1 = cadastrar produto
            - 2 = vender produto
            - 3 = buscar produto
            - 4 = imprimir relatorio
            - 5 = sair

*/

int main(){
    int opcao;
    printf("1 - Cadastrar produto\n2 - Vender produto\n3 - Bsucar produto\n4 - Imprimir\n5 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nCadastrando novo produto.\n");
        break; // Break -> Quebrar, parar --> Serve para "parar" o codigo até essa parte, evita que o computador saia mandando qualquer print pela frente, o codigo vai executar até o break;
    case 2:
        printf("\nVendendo um novo produto.\n");
        break;
    case 3:
        printf("\nBuscando novo produto.\n");
        break;
    case 4:
        printf("\nImprimindo relatorio.\n");
        break;
    case 5:
        printf("\nSaindo...\n");
        break;
    default: // Default vai ser executado quando o usuario nao escolher nenhum numero do case (1-5);
        printf("\nOpcao invalida!\n");
    }




    // Forma simplificada (case)
        int mes;

    printf("\n1 - Janeiro\n2 - Fevereiro\n3 - Marco\n4 - Abril\n5 - Maio\n6 - Junho\n7 - Julho\n8 - Agosto\n9 - Setembro\n10 - Outubro\n11 - Novembro\n12 - Dezembro\n");

    printf("Digite o numero do mes que quer saber a quantidade de dias: ");
    scanf("%d",&mes);
    switch(mes){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mes possui 31 dias\n");
        break;
    case 2:
        printf("\nO mes possui 28 dias\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nO mes possui 30 dias\n");
        break;
    default:
        printf("\nMes Invalido!\n");
}

    return 0;
}