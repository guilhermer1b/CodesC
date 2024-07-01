#include<stdio.h>

int main(){
    int x, y, i;

    printf("Digite X e Y: ");
    scanf("%d%d", &x, &y);

    for(i = 1; i <= y; i++){
        printf("%3d ", i);
        if(i % x == 0)
            printf("\n");
    }
}