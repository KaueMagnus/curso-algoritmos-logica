#include <stdio.h>

int main(void){
	
	int N;
	int negativo = 0;
	
	printf("Qual a ordem da matriz? ");
	scanf("%d", &N);
	
	int vetor[N][N];

	
	for(int i=0; i < N; i++) {
		for(int j=0; j < N; j++) {
			
			printf("Elemento [%d,%d]: ", i, j);
			scanf("%d", &vetor[i][j]);
		}
	}
	
	for(int i=0; i < N; i++){
		for(int j=0; j < N; j++){
			
			if(vetor[i][j] < 0) {
				negativo++;
			}	
		}
	}
	
	printf("DIAGONAL PRINCIPAL:\n");
	for(int i=0; i < N; i++){
		printf("%d ", vetor[i][i]);
	}
	printf("\nQUANTIDADE DE NEGATIVOS: %d", negativo);
	
return 0;		
}
