#include <stdio.h>
#include <conio.h>

int main() {

    int quantidade, codigoProduto;;
    float preco;

    printf("Escolha o código do produto comprado: \n");
    printf("[1] - [2] - [3] - [4] - [5]\n");
    printf(" ");
    scanf("%d", &codigoProduto);
    printf("\nQuantidade comprada: ");
    scanf("%d", &quantidade);


    switch (codigoProduto)
    {
    case 1: preco = 5.0;
            printf("Valor a pagar: R$ %.2f", (quantidade * preco));
        break;
    case 2: preco = 3.5;
            printf("Valor a pagar: R$ %.2f", (quantidade * preco));
        break;
    case 3: preco = 4.8;
             printf("Valor a pagar: R$ %.2f", (quantidade * preco));
        break;
    case 4:  preco = 8.9;
             printf("Valor a pagar: R$ %.2f", (quantidade * preco));
        break;
    case 5:  preco = 7.32;
            printf("Valor a pagar: R$ %.2f", (quantidade * preco));
        break;   

    default: printf("Código inválido!\n");
        break;
    }

    return 0;
}