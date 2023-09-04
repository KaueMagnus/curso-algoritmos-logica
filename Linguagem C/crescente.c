#include <stdio.h>

int main() {

    int x, y;

    while (x != y) {
        printf("\nDigite dois numeros: \n");
        scanf("%d %d", &x, &y);
        if (x > y) {
            printf("DECRESCENTE!\n");
        }
        else if (x < y) {
            printf("CRESCENTE!\n");
        }
    }
    printf("Valores iguais!\n");
    return 0;
}
