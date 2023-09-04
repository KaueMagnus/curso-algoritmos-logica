#include <stdio.h>

int main() {
	
	int quant;
	float numeros[10], soma, media;
	
	printf("Quantos numeros você vai digitar? ");
	scanf("%d", &quant);
	
	for(int i = 0; i<quant; i++) {
		
		printf("Digite um numero: ");
		scanf("%f", &numeros[i]);
		
	}
	
	printf("VALORES = ");
	for(int i = 0; i < quant; i++) {
		
		printf(" %.1f  ", numeros[i]);
	}
	
	soma = 0;
	
	for(int i = 0; i < quant; i++) {
		
		soma = soma + numeros[i];
	}
	
	printf("\nSOMA = %.2f", soma);
	
	media = soma / quant;

	printf("\nMEDIA = %.2f", media);
	
	return 0;
}
