#include <stdio.h>
#include <locale.h>

void limparEntrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main() {

    setlocale(LC_ALL, "Portuguese");
    char nome[50], nome2[50];
    int idade, idade2;
    double mediaIdade;

    printf("Dados da primeira pessoa\n");

    printf("Nome: ");
    ler_texto(nome, 50);

    printf("Idade: ");
    scanf("%d", &idade);

    printf("\nDados da segunda pessoa:\n");

    printf("Nome: ");
    limparEntrada();
    ler_texto(nome2, 50);

    printf("Idade: ");
    scanf("%d", &idade2);

    mediaIdade = (double)(idade + idade2) / 2;
    printf("A idade media de %s e %s é de %.1lf", nome, nome2, mediaIdade);

return 0;
}
