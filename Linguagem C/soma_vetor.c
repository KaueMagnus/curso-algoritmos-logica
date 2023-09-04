#include <stdio.h>

int main() {

    double media, soma;
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for(int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    printf("Valores: ");

    for(int i = 0; i < n; i++) {
        printf("%.2lf  ", vetor[i]);
    }

    soma = 0;

    for(int i = 0; i < n; i++) {
        soma = soma + vetor[i];
    }

    printf("\nSoma: %.2lf", soma);

    media = (double)soma / n;
    printf("\nMedia: %.2lf", media);

    return 0;
}
