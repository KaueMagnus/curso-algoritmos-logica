#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char repetir = 's';
    int codigo;

while (repetir == 's') {

    printf("Feliz aniversario meu amor!\n\n");
    printf("Hora de sortear o seu vale!\n");
    printf("Escolhe um numero de 1 a 4:   ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1: printf("\nParabens mor, ganhou um vale VANS!\n");
        break;
        case 2: printf("\nParabens mor, ganhou um vale SHEIN\n");
        break;
        case 3: printf("\nParabens mor, ganhou um vale CABELO\n");
        break;
        case 4: printf("\nParabens mor, ganhou um vale TU QUE ESCOLHE! (sem exagerar)\n");
        break;

        default: printf("\nn tem vale pra essa opçao");
        break;
    }
    
    printf("\nTe amo meu amor, voce e meu solzinho!\n\n");

    printf("Se quer trocar de vale, digita (s): ");
    scanf(" %s", &repetir);

}

   return 0; 
}

