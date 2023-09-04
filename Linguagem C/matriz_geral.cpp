#include <stdio.h>
#include <math.h>

int main(void){
	
	int N;
	float matriz[10][10];
	int linha, coluna;
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	float soma = 0;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(matriz[i][j] > 0) {
				soma = soma + matriz[i][j];
			}
		}
	}
	printf("\nSOMA DOS POSITIVOS: %.1f\n", soma);
	
	printf("\nEscolha uma linha: ");
	scanf("%d", &linha);
	
	printf("LINHA ESCOLHIDA:");
	for(int j = 0; j < N; j++){
		printf(" %.1f", matriz[linha][j]);
	}
		
	printf("\n\nEscolha uma coluna: ");
	scanf("%d", &coluna);
	
	printf("COLUNA ESCOLHIDA:");
	for(int i = 0; i < N; i++){
		printf(" %.1f", matriz[i][coluna]);
	}	
	
	printf("\n\nDIAGONAL PRINCIPAL: ");	
	for(int i = 0; i < N; i++){
		printf(" %.1f", matriz[i][i]);
			
	}	
		
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(matriz[i][j] < 0) {
				matriz[i][j] = pow(matriz[i][j], 2);
			}
		}
	}
	printf("\n\nMATRIZ ALTERADA:\n");
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			printf("%.1f ", matriz[i][j]);
		}
		printf("\n");	
	}
}
