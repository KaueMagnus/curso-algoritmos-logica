#include <stdio.h>

int main(void){
	
	int M, N;
	int matrizA[10][10];
	int matrizB[10][10];
	int matrizC[10][10];
	
	printf("Quantas linhas vai ter cada matriz? ");
	scanf("%d", &M);
	printf("Quantas colunas vai ter cada matriz? ");
	scanf("%d", &N);
	
	printf("\nDigite os valores da matriz A:\n");
	
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%d", &matrizA[i][j]);
		}
		
	}
	printf("\nDigite os valores da matriz B:\n");
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	printf("\nMATRIZ SOMA:\n");
	
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}	
	}
	
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			
			printf(" %d", matrizC[i][j]);
		}
	printf("\n");	
	}
}
