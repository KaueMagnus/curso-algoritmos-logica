#include <stdio.h>
#include <conio.h>

int main() {

    int x, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    soma = 0;

    while (x != 0) {
        soma = soma + x;   
        printf("Digite outro numero: ");
        scanf("%d", &x);
    }

    printf("SOMA: %d", soma);
return 0;
}