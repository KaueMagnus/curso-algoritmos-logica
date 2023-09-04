#include <stdio.h>

int main() {

    float nota1, nota2, media;

    printf("Enter the first note: ");
    scanf("%f", &nota1);
    printf("Enter the second note: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if (media >= 6) {
        printf("Sua média é: %.2f\n", media);
        printf("Aprovado!\n");
    }
    else {
        printf("Sua média é: %.2f\n", media);
        printf("Reprovado!\n");
    }

    return 0;
}