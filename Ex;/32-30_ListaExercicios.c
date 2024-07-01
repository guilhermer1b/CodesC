#include <stdio.h>

/*

    Calcule a media de salarios de uma empresa, pedindo ao usuario a quantidade de funcionarios e o salario de cada funcionario.
    Ao final, deve imprimir a media dos salarios informados, o salario mais alto e o salario mais baixo

*/

int main(){
    int quant, i;
    float salario, totalsalario = 0, salariomaior = 0, salariomenor = 99999;

    do{
    printf("Quantos funcionarios ha na empresa? ");
    scanf("%d", &quant);
    }while(quant < 0);

    for(i = 1; i <= quant; i++){
        printf("%d salario: ", i);
        scanf("%f", &salario);

        totalsalario += salario;
        if(salariomenor > salario)
            salariomenor = salario;
        if(salariomaior < salario)
            salario = salario;
    }
    printf("Salario medio R$%.2f\n", totalsalario/quant);
    printf("Maior salario R$%.2f\n", salariomaior);
    printf("Menor salario R$%.2f\n", salariomenor);
}