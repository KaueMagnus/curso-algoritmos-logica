#include <stdio.h>

main () {

    int senha_fixa = 2004, senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senha_fixa) {

        printf("Acesso negado! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!");

    return 0;
}