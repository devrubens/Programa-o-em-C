#include <stdio.h>

int main (){

    int N1, N2, N3, N4, media;

    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    if (media >= 7){
        printf("Media: %d\n", media);
        printf("Aluno aprovado.\n");
    } else if (media < 5){
        printf("Media: %d\n", media);
        printf("Aluno reprovado.\n");
    } else {
        printf("Media: %d\n", media);
        printf("Aluno em exame.\n");
        scanf("%d", &N1);
        printf("Nota do exame: %d\n", N1);
        media = (media + N1) / 2;
        if (media >= 5){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %d\n", media);
    }

    return 0;

}