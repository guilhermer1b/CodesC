#include <stdio.h>

// ver se a senha esta correta, (senha correta é 123456) se o usuario nao colocar a certa, vai dar erro

int main(){
    int senha;
    
    printf("Digite a senha valida: ");
    scanf("%d", &senha);

    do{
        printf("Senha Invalida! Digite novamente: ");
        scanf("%d", &senha);
    }while(senha != 123456);
    printf("Acesso Permitido!");
} // fessor nao falo se to certo ou nao, bag é que eu acho que to certo pq deu na mesma, o lixo do gpt fala que precisa de um if (no caso ele so mete um if e tanto fazklkkkkkkkkkkk)