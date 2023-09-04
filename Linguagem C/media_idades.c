#include <stdio.h>

main () {

    int idade, soma, cont;
    float media;

    soma = 0;
    cont = 0;

    printf("Digite as idades: ");
    scanf("%d", &idade);
    
    while (idade >= 0) {

        soma = soma + idade;
        cont = cont + 1;

        scanf("%d", &idade);
    }    

    if (cont == 0) {
        printf("Impossivel calcular\n");
    } else {
        media = soma / cont;
        printf("MÉDIA IGUAL: %.2f", media);
    }

    return 0;
}