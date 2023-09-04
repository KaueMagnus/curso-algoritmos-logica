#include <stdio.h>

int main() {
	
	int M, N, i, j;
	int matriz[5][5];
	
	printf("Quantas linhas vai ter a matriz? ");
	scanf("%d", &M);
	printf("Quantas colunas vai ter a matriz? ");
	scanf("%d", &N);
	
	for(i = 0; i < M; i++) {
		for(j = 0; j < N; j++) {
			printf("Elemento [%d,%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMATRIZ DIGITADA: \n");
	for(i = 0; i < M; i++) {
		for(j = 0; j < N; j++) {
			
			printf("%d\t", matriz[i][j]);
		}
	printf("\n");	
	}
}
