#include <stdio.h>
#include <string.h>

void limparEntrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void lerTexto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{

    int quant, quantMenor;
    double alturaMedia, somaAltura, porcentagem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &quant);

    char nome[quant][50];
    int idade[quant];
    double altura[quant];

    for(int i=0; i < quant; i++){

        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limparEntrada();
        lerTexto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    quantMenor = 0;
    somaAltura = 0;

    for(int i = 0; i < quant; i++){

        somaAltura = somaAltura + altura[i];
    }

    alturaMedia = somaAltura / quant;

    printf("Altura média: %.2lf", alturaMedia);


    for (int i = 0; i < quant; i++){

        if(idade[i] < 16){
            quantMenor++;
        }
    }

    porcentagem = ((double) quantMenor / quant) * 100.0;

    printf("\nPessoas com menos de 16 anos: %.1lf %\n", porcentagem);

    for(int i = 0; i < quant; i++){

        if(idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
