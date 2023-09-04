#include <stdio.h>

int main() {
	
	int quant, vetor[10];
	
	printf("Quantos numeros você vai digitar?: ");
	scanf("%d", &quant);
	
	for(int i=0; i<quant; i++) {
		printf("Digite um numero: \n");
		scanf("%d", &vetor[i]);
	}
	
	printf("\nNumeros Digitados:\n");
	for(int i=0; i<quant; i++) {
		printf("%d\n", vetor[i]);
	}
	
	return 0;
}
