#include <stdio.h>

/*

    Operador Logico e (&)
    TABELA VERDADE a    b   a & b
                   v    v     V
                   v    f     f
                   f    v     f
                   f    f     f

*/

int main(){

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade:");
    scanf("%c%d", &sexo, &idade);
/*
    if(sexo == 'm'){
        if(idade == 18) // Esse if so vai ser usado se o "if" acima for verdadeiro, tudo que estiver dentro das chaves so vao ser usados se for verdadeiro o primeiro "if"
            printf("Alistamente Obrigatorio!\n");
        else
            printf("Dispensado!\n");
    }
    else
        printf("Dispensado!\n");
*/
// Forma mais "resumida" Usando o E "&"

if(sexo == 'm' && idade == 18) // Ambos aqui tem que serem verdadeiros, se não a resposta vai ser o "else"
    printf("Alistamento Obrigatorio!\n");
else 
    printf("Dispensado!\n");

return 0;
}