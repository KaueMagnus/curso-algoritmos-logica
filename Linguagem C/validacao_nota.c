#include <stdio.h>

main () {

    float nota1, nota2, media;

    printf("Digite sua nota1: ");
    scanf("%f", &nota1);

    while (nota1 < 0 || nota1 > 10) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%f", &nota1);
    }

    printf("Digite sua nota2: ");
    scanf("%f", &nota2);

    while (nota2 < 0 || nota2 > 10) {
        printf("Valor inválido! Tente novamente: ");
        scanf("%f", &nota2);
    }

    media = (nota1 + nota2) / 2;

    printf("Média = %.2f", media);

    return 0;

}