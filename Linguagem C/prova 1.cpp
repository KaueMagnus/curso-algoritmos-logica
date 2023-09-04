#include <stdio.h>

int main(void) {
	
	int vetor[20];
	int soma, maior, menor, quantNegativo;
	
	printf("Digite 5 numeros para guardar no vetor\n");
	for(int i = 0; i < 5; i++){
		printf("Numero %d: \n", i);
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor[0];
	menor = vetor[0];
	
	for(int i = 0; i < 5; i++){
		if(vetor[i] % 2 == 0 && vetor[i] > 0){
			soma = soma + vetor[i];
		}
		else if(vetor[i] < 0){
			quantNegativo++;
		}
		else if(vetor[i] > maior) {
			maior = vetor[i];
		}
		else if(vetor[i] < menor) {
			menor = vetor[i];
		}
		
	}
	
	printf("A soma dos numeros pares positivos e: %d\n", soma);
	printf("A quantidade de numeros negativos e: %d\n", quantNegativo);
	printf("O maior numero e %d\no menor e %d", maior, menor);
	
	return 0;
}
