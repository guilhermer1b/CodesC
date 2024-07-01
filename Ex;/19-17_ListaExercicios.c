#include <stdio.h>

/*

    Dado três valores, verifique se é um triangulo e se é um triangulo
    equilatero: 3 lados iguais
    isosceles: 2 lados iguais
    escaleno: 3 lados diferentes

*/

int main(){
    int a, b, c;

    printf("Digite tres valores: ");
    scanf("%d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else
        printf("Os 3 lados NAO formam um triangulo!\n");
}