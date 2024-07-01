#include <stdio.h>
/*

    Escreva um programa que leia um numero e informe se ele é divisivel por 2, por 3 ou por 5, ou se não é divisivel por nenhum deles

*/

int main(){
    int num;

    printf("Digite um valor qualquer: ");
    scanf("%d", &num);

    // 10 & 2/3/5
    if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0) // Se o numero dividir por 2 e restar 0, OU, numero dividir por 3 e restar 0, OU, numero dividir por 5 e restar 0, é divisivel, se algum desses restar 1+ não é divisivel.
        printf("Eh divisivel por 2,3 ou 5.\n");
    else 
        printf("Nao eh divisivel por 2,3 e 5.\n");

    return 0;
}