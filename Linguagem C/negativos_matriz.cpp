#include <stdio.h>

int main(void) {
	
	int M, N;
	int matriz[10][10];
	
	printf("Qual a quantidade de linhas da matriz? ");
	scanf("%d", &M);
	printf("Qual a quantidade de colunas da matriz? ");
	scanf("%d", &N);
	
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			
			printf("Elemento [%d,%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nVALORES NEGATIVOS:\n");
	
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			
			if(matriz[i][j] < 0) {
				printf("%d\n", matriz[i][j]);
			}
		}
	}
}
