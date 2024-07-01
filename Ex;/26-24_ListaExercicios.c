/*

    Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar um menu ao usuario da seguinte forma:
    1 - Somar
    2 - Subtrair 
    3 - Multiplicar 
    4 - Dividir 
    0 - Sair
    Uma estrutura do tipo switch deve ser utilizada para realizar cada operacao em um case. Apos a escolha da operacao, dois valores devem ser pedidos ao usuario para realizar a operacao escolhida. Se a operacao escolhida for a 4 o dividendo nao pode ser zero, um novo valor deve ser solicitado. O programa deve funcionar ate que o usuario escolha a opcao 0 (opcao de saida).

*/


// Eu tava indo pro caminho certo mas é mei complicado de terminar e vai ficar bemm chatinho, dps eu tento fazer tudo do zero e mais bonitinho kkkkkkkkkkkkkkkkkk



int main() {
    int opcao, num1, num2;

    do{
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
        scanf("%d", &opcao);

        if (opcao > 0 && opcao < 5) {
            printf("Digite dois valores: ");
            scanf("%d%d", &num1, &num2);
        }

        switch(opcao) {
            case 0:
                if (num1 >= 0 && num2 >= 0) {
                    printf("Saindo...\n");
                break;
                }
            case 1:
                printf("Soma: %d\n", num1 + num2);
                break;
            case 2:
                printf("Subtracao: %d\n", num1 - num2);
                break;
            case 3:
                printf("Multiplicacao: %d\n", num1 * num2);
                break;
            case 4:
                while (num2 == 0) {
                    printf("Nao existe divisao por zero!\nDigite outro numero: ");
                    scanf("%d", &num2);
                }
                printf("Divisao: %d\n", num1 / num2);
                break;
            default:
                printf("Opcao Invalida.\nDigite outra opcao: ");
                scanf("%d", &opcao);
        }
    }while(opcao != 0);
}