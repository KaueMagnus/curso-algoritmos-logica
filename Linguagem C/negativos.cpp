#include <stdio.h>

int main() {

	int quant;

	printf("Quantos numeros voce vai digitar?: ");
	scanf("%d", &quant);

	int vetor[quant];

	for(int i=0; i<quant; i++) {

		printf("Digite um número: ");
		scanf("%d", &vetor[i]);

	}

	printf("Numeros Negativos: \n");

	for(int i=0; i<quant; i++) {
		if(vetor[i] < 0) {
			printf("%d\n", vetor[i]);
		}
	}

	return 0;
}
