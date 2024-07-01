#include <stdio.h>

//          Fazendo tabuada

int main(){
    int tab, i;

    do{
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &tab);
    }while(tab < 1 || tab > 10);

    for(i = 1; i < 11; i++)
        printf("%d * %d = %d\n", tab, i, tab * i);
}