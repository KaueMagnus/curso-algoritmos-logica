#include <stdio.h>

int main(void){
	
	int N;
	float matriz[10][10];
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			
			printf("Elemento [%d, %d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	printf("MAIOR ELEMENTO DE CADA LINHA:\n");
	
	for(int i = 0; i < N; i++) {
		
		float maior = matriz[i][0];
		
		for(int j = 1; j < N; j++) {
			
			if(matriz[i][j] > maior) {
				
				maior = matriz[i][j];
			}
		}
		printf("%.1f\n", maior);
	}
	
	return 0;
}
