#include <stdio.h>
#include <locale.h> // cabeçalho da biblioteca

/*

    tabela ascii e acentuação
    1 byte (8 bites) -> -128 até 127
    unsigned 1 byte -> 0 até 255

    9 é o caractere de tabulação \t.
    10 é o caractere de nova linha \n (enter).
    65 é a letra A maiúscula
    66 é a letra B maiúscula
    90 é a letra Z maiúscula

    1 = setlocate(LC_ALL, NULL);// padrão da linguagem C
    2 = setlocate(LC_ALL, "");// padrão do sistema operacional
    3 = setlocate(LC_ALL, "Portuguese");// português brasileiro

*/


int main(){
    printf("%s\n", setlocale(LC_ALL, "Portuguese"));
    printf("coração\n");






}