#include <stdio.h>

/*

    Operador Logico ou (||)
    TABELA VERDADE a    b   a || b
                   v    v     v
                   v    f     v
                   f    v     v
                   f    f     f

*/

int main(){

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);
// Menor ou igual a 5 ou, maior ou igual a 60, tem direito a gratuidade
/*
    if(idade <= 5)
        printf("Tem direito a gratuidade!\n");
    else{
        if(idade >= 60)
            printf("Tem direito a gratuidade!\n");
        else
            printf("Nao tem direito a gratuidade!\n");
    }
*/

if(idade <= 5 || idade >= 60)
    printf("Tem direito a gratuidade!\n");
else
    printf("Nao tem direito a gratuidade!\n");

}