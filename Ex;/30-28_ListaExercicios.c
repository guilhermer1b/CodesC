#include <stdio.h>

/*

    Para uma turma de 45 alunos, construa um algoritmo que determine:
    a) A idade media dos alunos com menos de 1,70m de altura;
    b) A altura media dos alunos com mais de 20 anos;

*/

int main() {
    int i, idade, idadeBaixos = 0, quantIdadeBaix = 0, quantAlturaMaior20 = 0;
    float idadeMedia, alturaMedia, altura, alturaMais20 = 0;

    for(i = 1; i <= 45; i++){
        printf("Digite sua idade e sua altura em metros: ");
        scanf("%d%f", &idade, &altura);

        // SOLUÇÃO DA LETRA A
        if(altura < 1.7){
            idadeBaixos += idade;
            quantIdadeBaix++;
        }
    
        // SOLUÇÃO DA LETRA B
        if(idade > 20){
            alturaMais20 += altura;
            quantAlturaMaior20++;
        }

    }
    idadeMedia = (float)idadeBaixos / quantIdadeBaix;
    alturaMedia = alturaMais20 / quantAlturaMaior20;

    printf("Idade media dos alunos com menos de 1.70m de altura: %.2f\n", idadeMedia);
    printf("Altura media dos alunos com mais de 20 anos: %.2f\n", alturaMedia);
}