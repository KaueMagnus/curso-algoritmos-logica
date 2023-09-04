#include <stdio.h>

int main () {

    int codigo;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);

    while (codigo != 4) {
     
    if (codigo == 1) {
        alcool++;
    } else if (codigo == 2) {
        gasolina++;
    } else if (codigo == 3) {
        diesel++;
    } 

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
    
    }

    printf("\nMUITO OBRIGADO!\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);
        
    return 0;
}  