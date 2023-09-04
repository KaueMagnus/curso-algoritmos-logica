#include <stdio.h>

main() {

    int idade;
    float salario;
    char nome[10] = "Kaue";

    idade = 32;
    salario = 4560.9;
    
    

    printf("O funcionário %s ganha %.2f reais por mês e tem %d anos", nome, salario, idade);


    return 0;
}