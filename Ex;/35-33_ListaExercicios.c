#include<stdio.h>

/*

    Triangulo com *

*/

int main(){
    int a, b;

    for(a = 1; a <= 8; a++){
        for(b = 1; b <= a; b++)
            printf("*");
        printf("\n");
    }

}